/*
 * XREFs of EnableMouseIntercept @ 0x1C012DC78
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1C00E6530 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x1C013BE90 (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall EnableMouseIntercept(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  char v4; // di

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( !v2 )
    return 0;
  v3 = v2 + 2904;
  RIMLockExclusive(v2 + 2904);
  if ( !*(_BYTE *)(v3 + 16) )
  {
    *(_BYTE *)(v3 + 16) = 1;
    *(_DWORD *)(v3 + 20) = a1;
    *(_QWORD *)(v3 + 24) = ApiSetEdtionGetInputDesktopId();
    *(_DWORD *)(v3 + 32) = (unsigned int)PsGetCurrentThreadId();
  }
  v4 = *(_BYTE *)(v3 + 16);
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
