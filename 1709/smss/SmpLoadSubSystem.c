/*
 * XREFs of SmpLoadSubSystem @ 0x14001223C
 * Callers:
 *     SmpExecuteCommand @ 0x1400025D8 (SmpExecuteCommand.c)
 * Callees:
 *     SmpExecuteImage @ 0x140002C6C (SmpExecuteImage.c)
 *     SmpSbCreateSession @ 0x1400038CC (SmpSbCreateSession.c)
 *     SmpUnlockKnownSubSysList @ 0x140004668 (SmpUnlockKnownSubSysList.c)
 *     SmpWaitForSubSysStartup @ 0x140004940 (SmpWaitForSubSysStartup.c)
 *     SmpDereferenceKnownSubSys @ 0x140004A94 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140004B24 (SmpWaitForSingleSubSys.c)
 *     SmpAddKnownSubSys @ 0x140004D3C (SmpAddKnownSubSys.c)
 *     SmpCreateKnownSubSys @ 0x140004D78 (SmpCreateKnownSubSys.c)
 *     memset_0 @ 0x14000C86D (memset_0.c)
 *     SmpDeleteSubSys @ 0x140013180 (SmpDeleteSubSys.c)
 */

__int64 __fastcall SmpLoadSubSystem(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, __int16 a6)
{
  _DWORD *KnownSubSys; // rax
  __int64 v12; // rdi
  int v13; // r9d
  NTSTATUS v14; // ebx
  __int64 v15; // r9
  _BYTE v16[16]; // [rsp+48h] [rbp-49h] BYREF
  __int128 ProcessParameters; // [rsp+58h] [rbp-39h] BYREF
  HANDLE ThreadHandle; // [rsp+68h] [rbp-29h]
  __int128 v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+A0h] [rbp+Fh]

  LODWORD(ProcessParameters) = 0;
  memset_0((char *)&ProcessParameters + 8, 0, 0x60uLL);
  if ( (a6 & 0x10) != 0 )
    return 3221225524LL;
  KnownSubSys = SmpCreateKnownSubSys(0);
  v12 = (__int64)KnownSubSys;
  if ( !KnownSubSys )
    return 3221225495LL;
  KnownSubSys[16] = a4;
  SmpWaitForSubSysStartup(a4, 0, 0LL, (__int64)v16);
  SmpAddKnownSubSys((__int64)v16, (_DWORD *)v12);
  SmpUnlockKnownSubSysList((__int64)v16);
  v14 = SmpExecuteImage(a1, a2, a3, v13, 0LL, a6 | 0x20u, (PRTL_USER_PROCESS_PARAMETERS)&ProcessParameters);
  if ( v14 >= 0 )
  {
    if ( (*(_QWORD *)(v12 + 32) = *((_QWORD *)&ProcessParameters + 1), *(_OWORD *)(v12 + 48) = v19, v20 != 1)
      && (v14 = SmpSbCreateSession(a4, (void *)0xFFFFFFFFFFFFFFFFLL, &ProcessParameters, v15, 0LL), v14 < 0)
      || (v14 = NtResumeThread(ThreadHandle, 0LL), v14 < 0)
      || (NtClose(ThreadHandle), v14 = SmpWaitForSingleSubSys(v12), v14 >= 0) )
    {
      NtTerminateProcess(*((HANDLE *)&ProcessParameters + 1), v14);
      NtClose(ThreadHandle);
    }
  }
  SmpDeleteSubSys((PVOID)v12);
  SmpDereferenceKnownSubSys((_BYTE *)v12);
  return (unsigned int)v14;
}
