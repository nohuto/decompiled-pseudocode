/*
 * XREFs of ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800F8F08
 * Callers:
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByHwnd@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHwnd@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180070500 (--$FindEx@VCImmersiveAppFinderByHwnd@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationInte.c)
 *     ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1800F8E48 (--$GetAppPosition@VCTaskWindowFinder@@@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x1800F91F0 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x18012E850 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 i; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rax

  *a4 = 0LL;
  for ( i = 0LL; i < a1[1]; ++i )
  {
    v8 = *(__int64 **)(*a1 + 8 * i);
    v9 = *v8;
    if ( *a2 )
    {
      if ( (*(__int64 (**)(void))(v9 + 32))() == *a2 )
        goto LABEL_4;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v9 + 48))(v8, a2[1]) )
    {
LABEL_4:
      *a4 = i;
      return 0LL;
    }
  }
  return 2147647531LL;
}
