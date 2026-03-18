/*
 * XREFs of ?Free@?$CTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C005D540
 * Callers:
 *     _lambda_06b16099bfc1f7b9c33b9410b68cf5d0_::_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST_EX_____ptr64_ @ 0x1C00408E0 (_lambda_06b16099bfc1f7b9c33b9410b68cf5d0_--_lambda_invoker_cdecl__void_____ptr64__LOOKASIDE_LIST.c)
 * Callees:
 *     ?ContainsAllocation@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C005D6E8 (-ContainsAllocation@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?Free@?$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C005D984 (-Free@-$CSectionBitmapAllocator@$0CMAAA@$0CMA@@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall NSInstrumentation::CTypeIsolation<180224,704>::Free(_QWORD *a1, __int64 a2)
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
      if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<180224,704>::ContainsAllocation(v6, a2) )
      {
        NSInstrumentation::CSectionBitmapAllocator<180224,704>::Free(v6, a2);
        break;
      }
    }
    ExReleasePushLockSharedEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
