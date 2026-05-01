/*
 * XREFs of ?_Change_array@?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@_K1@Z @ 0x1800EBDBC
 * Callers:
 *     ??$emplace_back@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAXAEBV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x1800EBC30 (--$emplace_back@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneV.c)
 *     ??$emplace_back@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@@Z @ 0x180117074 (--$emplace_back@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeoplePaneView.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>::_Change_array(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v9; // r12
  volatile signed __int32 *v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      v10 = *(volatile signed __int32 **)(v4 + 8);
      if ( v10 )
      {
        if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
          if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
        }
      }
      v4 += 16LL;
    }
    v11 = *a1;
    v12 = (__int64)(a1[2] - *a1) >> 4;
    if ( v12 <= 0xFFFFFFFFFFFFFFFLL )
    {
      if ( 16 * v12 < 0x1000 )
      {
LABEL_15:
        operator delete((void *)v11);
        goto LABEL_16;
      }
      if ( (v11 & 0x1F) == 0 )
      {
        v13 = *(_QWORD *)(v11 - 8);
        if ( v13 < v11 )
        {
          v11 = v11 - v13 - 8;
          if ( v11 <= 0x1F )
          {
            v11 = v13;
            goto LABEL_15;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v11);
    JUMPOUT(0x1800EBECCLL);
  }
LABEL_16:
  *a1 = a2;
  a1[1] = a2 + 16 * a3;
  a1[2] = a2 + 16 * a4;
}
