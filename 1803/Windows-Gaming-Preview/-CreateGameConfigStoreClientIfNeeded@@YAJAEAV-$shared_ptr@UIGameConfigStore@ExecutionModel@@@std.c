/*
 * XREFs of ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014944
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000933C (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_::operator() @ 0x18001B284 (_lambda_e4ce70b0594d3a18a2ebf7eaa96cf2f8_--operator().c)
 *     _lambda_d3f0c5910d0e6f609c52600b0f132e68_::operator() @ 0x18001BC20 (_lambda_d3f0c5910d0e6f609c52600b0f132e68_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore_____ptr64__lambda_363be69ce98476e89105dd3a93d8d574___ @ 0x180018FE8 (std--shared_ptr_ExecutionModel--IGameConfigStore_--_Setpd_ExecutionModel--IGameConfigStore_____p.c)
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateGameConfigStoreClientIfNeeded(_QWORD *a1)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // ebx
  volatile signed __int32 *v6; // rbx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( !*a1 )
  {
    v9 = 0LL;
    v2 = CreateGameConfigStoreClient(&v9);
    v4 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v2);
      return v4;
    }
    LOBYTE(v3) = 0;
    v7 = 0LL;
    std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore_____ptr64__lambda_363be69ce98476e89105dd3a93d8d574___(
      &v7,
      v9,
      v3);
    *a1 = v7;
    v6 = (volatile signed __int32 *)a1[1];
    a1[1] = *((_QWORD *)&v7 + 1);
    if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return 0LL;
}
