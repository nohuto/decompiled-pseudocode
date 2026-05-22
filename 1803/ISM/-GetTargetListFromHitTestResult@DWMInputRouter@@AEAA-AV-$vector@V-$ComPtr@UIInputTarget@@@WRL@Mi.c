/*
 * XREFs of ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x18007EB20
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x18007E750 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     ??$emplace_back@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C4F8 (--$emplace_back@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIContextua.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18007EC14 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetListFromHitTestResult(
        DWMInputRouter *this,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 *TargetFromInputSite; // rax
  struct IInputTarget *v13; // rcx
  struct IInputTarget *v15[3]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+20h] BYREF

  v15[1] = (struct IInputTarget *)-2LL;
  v16 = 0LL;
  v8 = a4[4];
  if ( v8 )
    NtQueryCompositionInputSinkLuid(v8, &v16);
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v9 = a4[1];
  v10 = a4[2];
  if ( v9 != v10 )
  {
    v11 = a5;
    do
    {
      TargetFromInputSite = (__int64 *)DWMInputRouter::GetTargetFromInputSite(
                                         this,
                                         v15,
                                         (__int64)a4,
                                         (__int64)&v16,
                                         v11);
      std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::emplace_back<Microsoft::WRL::ComPtr<IContextualProcessor>>(
        (__int64 **)a2,
        TargetFromInputSite);
      v13 = v15[0];
      if ( v15[0] )
      {
        v15[0] = 0LL;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v9 += 8LL;
    }
    while ( v9 != v10 );
  }
  return a2;
}
