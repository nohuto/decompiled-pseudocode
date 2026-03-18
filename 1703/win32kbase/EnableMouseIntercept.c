/*
 * XREFs of EnableMouseIntercept @ 0x1C012E770
 * Callers:
 *     NtMITEnableMouseIntercept @ 0x1C00DF5B0 (NtMITEnableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x1C013CBD4 (ApiSetEdtionGetInputDesktopId.c)
 */

char __fastcall EnableMouseIntercept(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  char v4; // di

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( !v2 )
    return 0;
  v3 = v2 + 2752;
  RIMLockExclusive(v2 + 2752);
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
