/*
 * XREFs of KdDeregisterPowerHandler @ 0x140201340
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 *a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 *v3; // rax
  __int64 *v4; // rbx
  char v5; // di
  __int64 v7; // rcx
  __int64 **v8; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v3 = (__int64 *)KdpPowerListHead;
  v4 = 0LL;
  v5 = 0;
  while ( v3 != &KdpPowerListHead )
  {
    v4 = v3;
    if ( a1 == v3 )
    {
      v7 = *v3;
      if ( *(__int64 **)(*v3 + 8) != v3 || (v8 = (__int64 **)v3[1], *v8 != v3) )
        __fastfail(3u);
      *v8 = (__int64 *)v7;
      v5 = 1;
      *(_QWORD *)(v7 + 8) = v8;
      break;
    }
    v3 = (__int64 *)*v3;
  }
  KxReleaseSpinLock(&KdpPowerSpinLock);
  __writecr8(CurrentIrql);
  if ( !v5 )
    return 3221226021LL;
  ExFreePoolWithTag(v4, 0x6F49644Bu);
  return 0LL;
}
