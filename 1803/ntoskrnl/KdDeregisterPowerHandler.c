/*
 * XREFs of KdDeregisterPowerHandler @ 0x14023E420
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KdDeregisterPowerHandler(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  __int64 v3; // rax
  void *v4; // rbx
  char v5; // di
  __int64 *v6; // rcx
  __int64 **v8; // rdx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v3 = KdpPowerListHead;
  v4 = 0LL;
  v5 = 0;
  if ( (__int64 *)KdpPowerListHead != &KdpPowerListHead )
  {
    while ( 1 )
    {
      v6 = *(__int64 **)v3;
      v4 = (void *)v3;
      if ( a1 == v3 )
        break;
      v3 = *(_QWORD *)v3;
      if ( v6 == &KdpPowerListHead )
        goto LABEL_4;
    }
    if ( v6[1] != v3 || (v8 = *(__int64 ***)(v3 + 8), *v8 != (__int64 *)v3) )
      __fastfail(3u);
    *v8 = v6;
    v5 = 1;
    v6[1] = (__int64)v8;
  }
LABEL_4:
  KxReleaseSpinLock(&KdpPowerSpinLock);
  __writecr8(CurrentIrql);
  if ( !v5 )
    return 3221226021LL;
  ExFreePoolWithTag(v4, 0x6F49644Bu);
  return 0LL;
}
