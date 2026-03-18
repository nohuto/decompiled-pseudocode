/*
 * XREFs of ?Free@?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C005E020
 * Callers:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C00651D0 (--$FreeIsolatedType@V-$CTypeIsolation@$0BEAAA@$0BEA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005E228 (-Free@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005E2F0 (-ContainsAllocation@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<81920,320>::Free(_QWORD *a1, __int64 a2)
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
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<81920,320>::ContainsAllocation(v6, a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<81920,320>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
