/*
 * XREFs of ?xxxGetEventProc@@YAP6AXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@ZPEAUtagEVENTHOOK@@@Z @ 0x1C005C32C
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C0058528 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     xxxLoadHmodIndex @ 0x1C003ACEC (xxxLoadHmodIndex.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void (*__fastcall xxxGetEventProc(
        struct tagEVENTHOOK *a1))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  __int64 v1; // r9
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdi
  __int64 CurrentProcess; // rax
  int ProcessInformation; // [rsp+30h] [rbp-50h] BYREF
  char v10; // [rsp+34h] [rbp-4Ch]
  char v11; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-40h] BYREF
  char *v13; // [rsp+48h] [rbp-38h]
  _QWORD *v14; // [rsp+50h] [rbp-30h]
  _QWORD v15[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-18h] BYREF

  v1 = gSharedInfo[0];
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  v3 = *((_DWORD *)a1 + 18);
  if ( v3 != -1 )
  {
    v4 = *(unsigned int *)(*(_QWORD *)(gptiCurrent + 376LL) + 372LL);
    if ( !_bittest((const int *)&v4, v3) )
    {
      CurrentProcess = PsGetCurrentProcess(v4);
      if ( (unsigned int)PsIsProtectedProcess(CurrentProcess) || !xxxLoadHmodIndex(*((_DWORD *)a1 + 18)) )
        return 0LL;
      v1 = gSharedInfo[0];
    }
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v1 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + *(_QWORD *)(v1 + 8) + 25LL) & 1) != 0 )
    return 0LL;
  v5 = *((int *)a1 + 18);
  if ( (_DWORD)v5 == -1 )
    v6 = *((_QWORD *)a1 + 8);
  else
    v6 = *((_QWORD *)a1 + 8) + *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 8 * v5 + 376);
  if ( (_DWORD)v5 != -1 )
  {
    ProcessInformation = 7;
    if ( ZwQueryInformationProcess(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           ProcessCookie|ProcessUserModeIOPL,
           &ProcessInformation,
           8u,
           0LL) >= 0
      && (v10 & 2) != 0 )
    {
      v12[1] = 0;
      v15[1] = 4096LL;
      v15[0] = v6 & 0xFFFFFFFFFFFFF000uLL;
      v16[1] = 4LL;
      v12[0] = 1;
      v16[0] = v6 & 0xFFF;
      v13 = &v11;
      v14 = v16;
      ZwSetInformationVirtualMemory(-1LL, 2LL, 1LL, v15, v12, 24);
    }
  }
  return (void (*)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v6;
}
