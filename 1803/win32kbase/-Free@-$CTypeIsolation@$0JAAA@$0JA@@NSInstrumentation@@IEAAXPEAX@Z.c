/*
 * XREFs of ?Free@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C005E888
 * Callers:
 *     _lambda_4244bae6fa0a501e9e28a4e0afb3a818_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C0040900 (_lambda_4244bae6fa0a501e9e28a4e0afb3a818_--_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST.c)
 * Callees:
 *     ?Free@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005EAB4 (-Free@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005EB78 (-ContainsAllocation@-$CSectionBitmapAllocator@$0JAAA@$0JA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<36864,144>::Free(_QWORD *a1, __int64 a2)
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
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<36864,144>::ContainsAllocation(v6, a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<36864,144>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
