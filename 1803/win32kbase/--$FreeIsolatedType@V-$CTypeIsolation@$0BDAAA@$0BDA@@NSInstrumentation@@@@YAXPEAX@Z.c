/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0BDAAA@$0BDA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00663BC
 * Callers:
 *     ?HMFreeUserOrIsolatedType@@YAXGEPEAX@Z @ 0x1C001CBF4 (-HMFreeUserOrIsolatedType@@YAXGEPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005EFC4 (-Free@-$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005F084 (-ContainsAllocation@-$CSectionBitmapAllocator@$0BDAAA@$0BDA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<77824,304>>(void *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx
  _QWORD *i; // rsi
  __int64 *v5; // r14

  v2 = (_QWORD *)*((_QWORD *)gpUserTypeIsolation + 2);
  if ( v2 && a1 )
  {
    v3 = v2[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    {
      v5 = (__int64 *)i[4];
      if ( NSInstrumentation::CSectionBitmapAllocator<77824,304>::ContainsAllocation(v5, (unsigned __int64)a1) )
      {
        NSInstrumentation::CSectionBitmapAllocator<77824,304>::Free(v5, a1);
        break;
      }
    }
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
  }
}
