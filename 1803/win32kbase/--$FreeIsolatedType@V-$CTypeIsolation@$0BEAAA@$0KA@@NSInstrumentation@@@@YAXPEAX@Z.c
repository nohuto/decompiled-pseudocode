/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0066D00
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C001CBF4 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005FBEC (-Free@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005FCAC (-ContainsAllocation@-$CSectionBitmapAllocator@$0BEAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<81920,160>>(void *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  _QWORD *i; // rsi
  __int64 *v5; // r14

  v2 = (_QWORD *)*((_QWORD *)gpUserTypeIsolation + 3);
  if ( v2 && a1 )
  {
    v3 = v2[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    {
      v5 = (__int64 *)i[4];
      if ( NSInstrumentation::CSectionBitmapAllocator<81920,160>::ContainsAllocation(v5, (unsigned __int64)a1) )
      {
        NSInstrumentation::CSectionBitmapAllocator<81920,160>::Free(v5, a1);
        break;
      }
    }
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
