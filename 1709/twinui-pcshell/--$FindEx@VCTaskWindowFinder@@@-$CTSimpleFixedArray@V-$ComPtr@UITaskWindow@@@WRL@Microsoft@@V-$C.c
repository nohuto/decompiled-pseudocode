/*
 * XREFs of ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18003D018
 * Callers:
 *     ?HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x18003C7E0 (-HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x18003C850 (-HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x1800575B0 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180057FD0 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     ?_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z @ 0x18005C408 (-_FindTaskWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJAEBVCTaskWindowFinder@@PEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rax

  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v8 = *(__int64 **)(*a1 + 8 * v4);
    v9 = *v8;
    if ( !(*a2
         ? -(*a2 != (*(__int64 (**)(void))(v9 + 32))())
         : ((*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v9 + 48))(v8, a2[1]) != 0) - 1) )
      break;
    if ( (unsigned __int64)++v4 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
