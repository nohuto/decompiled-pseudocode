/*
 * XREFs of ?Free@?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0062100
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C003FD60 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C0062410 (-Free@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C00624D0 (-ContainsAllocation@-$CSectionBitmapAllocator@$0KAAA@$0KA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<40960,160>::Free(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rdi
  __int64 v6; // r14

  if ( a2 )
  {
    v2 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
    {
      v6 = i[4];
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<40960,160>::ContainsAllocation(v6, a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<40960,160>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
