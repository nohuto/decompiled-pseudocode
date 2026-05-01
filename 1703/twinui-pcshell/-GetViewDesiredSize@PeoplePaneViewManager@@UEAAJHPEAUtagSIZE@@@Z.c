/*
 * XREFs of ?GetViewDesiredSize@PeoplePaneViewManager@@UEAAJHPEAUtagSIZE@@@Z @ 0x1800E9710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9E00 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetViewDesiredSize(
        PeoplePaneViewManager *this,
        __int64 a2,
        struct tagSIZE *a3)
{
  int ViewInfoByApplicationViewId; // eax
  unsigned int v5; // edi
  __int64 v6; // rbx
  int v8[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  *(_OWORD *)v8 = 0LL;
  ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId((char *)this - 64, a2, v8);
  v5 = ViewInfoByApplicationViewId;
  if ( ViewInfoByApplicationViewId >= 0 )
  {
    v5 = 0;
    *a3 = *(struct tagSIZE *)(*(_QWORD *)v8 + 64LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x198,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ViewInfoByApplicationViewId);
  }
  if ( *(_QWORD *)&v8[2] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)&v8[2] + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *(_QWORD *)&v8[2];
      (***(void (__fastcall ****)(_QWORD))&v8[2])(*(_QWORD *)&v8[2]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v8[2] + 8LL))(*(_QWORD *)&v8[2]);
    }
  }
  return v5;
}
