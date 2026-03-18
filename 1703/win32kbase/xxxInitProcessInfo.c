/*
 * XREFs of xxxInitProcessInfo @ 0x1C005038C
 * Callers:
 *     xxxUserProcessCallout @ 0x1C0050600 (xxxUserProcessCallout.c)
 * Callees:
 *     CitProcessCallout @ 0x1C0050E98 (CitProcessCallout.c)
 *     GetProcessLuid @ 0x1C0051060 (GetProcessLuid.c)
 *     SetAppStarting @ 0x1C0051110 (SetAppStarting.c)
 *     xxxSetProcessInitState @ 0x1C0051180 (xxxSetProcessInitState.c)
 *     ?MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z @ 0x1C005126C (-MarkImmersiveProcess@@YAXPEAUtagPROCESSINFO@@PEAXW4_PROCESS_IMMERSIVE_TYPE@@@Z.c)
 *     ?CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x1C0051368 (-CheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall xxxInitProcessInfo(struct tagPROCESSINFO *a1, PACCESS_TOKEN Token, unsigned int a3, int a4, int a5)
{
  bool v6; // zf
  __int64 result; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // edi
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-20h] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  PVOID v19; // [rsp+60h] [rbp+20h] BYREF

  LODWORD(v19) = 0;
  P = 0LL;
  v6 = (*((_DWORD *)a1 + 3) & 0x8000) == 0;
  TokenInformation = 0LL;
  if ( !v6 )
    return 1073741851LL;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    TemplateEventDescriptor(a1, &InitiateGuiProcessExecution, &W32kControlGuid);
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
      *((_DWORD *)a1 + 206) = (_DWORD)TokenInformation;
      *((_DWORD *)a1 + 207) = v13;
    }
    if ( v11 >= 0 )
      v12 = SeQueryInformationToken(Token, TokenUIAccess, &v19);
    MarkImmersiveProcess(a1, Token, a3);
    *((_DWORD *)a1 + 192) ^= (*((_DWORD *)a1 + 192) ^ (a5 << 7)) & 0x80;
    if ( v12 < 0 )
      return (unsigned int)v12;
    v12 = SeQueryInformationToken(Token, TokenAppContainerSid, &P);
    if ( v12 < 0 )
    {
      return (unsigned int)v12;
    }
    else
    {
      if ( *(_QWORD *)P && (int)RtlGetAppContainerSidType(*(_QWORD *)P, &v16) >= 0 )
        *((_DWORD *)a1 + 208) = v16;
      else
        *((_DWORD *)a1 + 208) = 0;
      ExFreePoolWithTag(P, 0);
      P = 0LL;
      if ( (_DWORD)v19 )
      {
        *((_DWORD *)a1 + 3) |= 0x80080000;
        *((_DWORD *)a1 + 192) |= 2u;
      }
      if ( PsGetProcessWow64Process(*(_QWORD *)a1) )
        *((_DWORD *)a1 + 3) |= 0x80u;
      v14 = *(_QWORD *)a1;
      *((_QWORD *)a1 + 106) = -1LL;
      *((_QWORD *)a1 + 107) = -1LL;
      xxxSetProcessInitState(v14, 128LL);
      SetAppStarting(a1);
      *((_QWORD *)a1 + 43) = gppiList;
      gppiList = (__int64)a1;
      if ( (*((_DWORD *)a1 + 192) & 0x30) != 0x10
        && (gdwPUDFlags & 0x8000000) != 0
        && (int)IsCheckAllowForegroundSupported() >= 0 )
      {
        if ( (unsigned int)CheckAllowForeground(*(_QWORD *)a1) )
          *((_DWORD *)a1 + 3) |= 0x100u;
      }
      GetProcessLuid(0LL, (PLUID)((char *)a1 + 732));
      v15 = gcSysExpunge;
      *((_DWORD *)a1 + 178) = 0;
      *((_DWORD *)a1 + 92) = v15;
      CitProcessCallout(a1);
      *((_DWORD *)a1 + 192) &= 0xFF9C7FFF;
      result = 0LL;
      *((_DWORD *)a1 + 70) = 16;
    }
  }
  return result;
}
