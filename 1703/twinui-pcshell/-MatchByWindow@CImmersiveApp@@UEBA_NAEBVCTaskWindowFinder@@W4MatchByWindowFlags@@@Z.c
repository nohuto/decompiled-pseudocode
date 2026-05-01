/*
 * XREFs of ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180055B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18003BDF4 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x1800599FC (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::MatchByWindow(__int64 a1, const struct CTaskWindowFinder *a2, char a3)
{
  __int64 v6; // r8
  char v7; // bl
  unsigned __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  if ( (int)CImmersiveApp::CImmersiveWindowCollection::_FindTaskWindow(
              (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 136),
              a2,
              &v9) >= 0 )
    return 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = 0LL;
    if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                (_QWORD *)(a1 + 376),
                a2,
                v6,
                &v10) >= 0 )
      return 1;
  }
  if ( (a3 & 2) != 0
    && *(_QWORD *)a2
    && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 272) + 160LL))(
         *(_QWORD *)(a1 + 272),
         *(_QWORD *)a2) )
  {
    return 1;
  }
  return v7;
}
