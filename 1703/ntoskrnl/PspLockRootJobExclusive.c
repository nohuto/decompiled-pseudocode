/*
 * XREFs of PspLockRootJobExclusive @ 0x140560DC4
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x14041EBBC (PspSetJobIoRateControl.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetNetRateControl @ 0x1406E1F2C (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall PspLockRootJobExclusive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // rax
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h]

  if ( a2 )
    --*(_WORD *)(a2 + 486);
  for ( i = *(_QWORD *)(a1 + 1080); ; i = *(_QWORD *)(a1 + 1080) )
  {
    v7 = i;
    ExAcquireResourceExclusiveLite((PERESOURCE)(i + 56), 1u);
    if ( v7 == *(_QWORD *)(a1 + 1080) )
      break;
    ExReleaseResourceLite((PERESOURCE)(v7 + 56));
  }
  result = v7;
  *a3 = v7;
  return result;
}
