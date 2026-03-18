/*
 * XREFs of xxxInitProcessInfo @ 0x1C0024008
 * Callers:
 *     xxxUserProcessCallout @ 0x1C003ADD0 (xxxUserProcessCallout.c)
 * Callees:
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0023B9C (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C0023D94 (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     xxxSetProcessInitState @ 0x1C0023E90 (xxxSetProcessInitState.c)
 *     SetAppStarting @ 0x1C0023F80 (SetAppStarting.c)
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 *     GetProcessLuid @ 0x1C0024E40 (GetProcessLuid.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct _W32PROCESS *a1, PACCESS_TOKEN Token, int a3, int a4, int a5)
{
  bool v5; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  void *v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // [rsp+20h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v20; // [rsp+60h] [rbp+20h] BYREF

  v5 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  LODWORD(v20) = 0;
  TokenInformation = 0LL;
  P = 0LL;
  if ( !v5 )
    return 1073741851LL;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
  result = CheckProcessAndSessionState(a1);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 3) |= 0x8000u;
    HIDWORD(TokenInformation) = a4;
    v11 = SeQueryInformationToken(Token, TokenIntegrityLevel, &TokenInformation);
    v12 = v11;
    if ( gbEnforceUIPI )
    {
      if ( v11 < 0 )
        return 3221225473LL;
      v13 = HIDWORD(TokenInformation);
      if ( HIDWORD(TokenInformation) )
      {
        if ( (_DWORD)TokenInformation != 4096 )
          return 3221225473LL;
      }
      *((_DWORD *)a1 + 208) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 209) = v13;
    }
    if ( v11 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v20);
    MarkImmersiveProcess((__int64)a1, (__int64)Token, a3);
    *((_DWORD *)a1 + 194) ^= (*((_DWORD *)a1 + 194) ^ (a5 << 7)) & 0x80;
    if ( v12 < 0 )
      return (unsigned int)v12;
    v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v12 < 0 )
    {
      return (unsigned int)v12;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v17) >= 0 )
        *((_DWORD *)a1 + 210) = v17;
      else
        *((_DWORD *)a1 + 210) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v20 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 194) |= 2u;
      }
      if ( PsGetProcessWow64Process(*(_QWORD *)a1) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v14 = *(void **)a1;
      *((_QWORD *)a1 + 107) = -1LL;
      *((_QWORD *)a1 + 108) = -1LL;
      xxxSetProcessInitState(v14, 128);
      SetAppStarting((__int64)a1);
      *((_QWORD *)a1 + 44) = gppiList;
      gppiList = (__int64)a1;
      if ( (*((_DWORD *)a1 + 194) & 0x30) != 0x10
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported() >= 0
        && (unsigned int)CheckAllowForeground(*(_QWORD *)a1) )
      {
        *((_DWORD *)a1 + 3) |= 0x100u;
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 740));
      LOBYTE(v15) = 1;
      *((_DWORD *)a1 + 94) = gcSysExpunge;
      *((_DWORD *)a1 + 180) = 0;
      CitProcessCallout(a1, v15);
      *((_DWORD *)a1 + 194) &= 0xFF9C7FFF;
      v16 = *((_DWORD *)a1 + 194);
      *((_WORD *)a1 + 142) = 96;
      *((_DWORD *)a1 + 70) = 24592;
      if ( (v16 & 0x30) == 0x20 )
        *((_DWORD *)a1 + 194) = v16 | 0x80000;
      if ( *((_WORD *)gpsi + 4987) )
      {
        if ( (int)IsInitProcessSystemDpiSupported() < 0 )
          *((_WORD *)a1 + 142) = *((_WORD *)gpsi + 4987);
        else
          InitProcessSystemDpi(a1);
      }
      return 0LL;
    }
  }
  return result;
}
