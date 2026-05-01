/*
 * XREFs of ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1801C1CD0
 * Callers:
 *     ?AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1801C1208 (-AddedApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1801C1EA8 (-FocusApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FA420 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     std::_Find_if_unchecked_std::shared_ptr_PeoplePaneViewInfo__const_____ptr64_std::_Ref_fn__lambda_8b7f561eeecd700a6a36bc0a9fbde639_____ @ 0x1801BFB98 (std--_Find_if_unchecked_std--shared_ptr_PeoplePaneViewInfo__const_____ptr64_std--_Ref_fn__lambda.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x1801C59E0 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::FindViewInfoByApplicationView(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // rax
  bool v8; // bl
  unsigned int v9; // ebx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF

  std::shared_ptr<PeoplePaneViewInfo>::reset(a3);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 128));
  v11[0] = a2;
  v11[1] = a1;
  v6 = (__int64 *)CAutoHandle<void *>::CAutoHandle<void *>(&v12, v11);
  v7 = (_QWORD *)std::_Find_if_unchecked_std::shared_ptr_PeoplePaneViewInfo__const_____ptr64_std::_Ref_fn__lambda_8b7f561eeecd700a6a36bc0a9fbde639_____(
                   *(_QWORD *)(a1 + 136),
                   *(_QWORD *)(a1 + 144),
                   *v6);
  v8 = v7 != *(_QWORD **)(a1 + 144);
  if ( v7 != *(_QWORD **)(a1 + 144) )
    std::shared_ptr<PeoplePaneViewInfo>::operator=(a3, v7);
  v9 = !v8 ? 0x80070490 : 0;
  if ( a1 != -128 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 128));
  return v9;
}
