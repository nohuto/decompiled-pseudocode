/*
 * XREFs of ?PeoplePaneViewReady@PeoplePaneViewManager@@UEAAJPEBGH@Z @ 0x1800E9140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9CC4 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800EA098 (-HandleViewReady@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::PeoplePaneViewReady(PeoplePaneViewManager *this, const unsigned __int16 *a2)
{
  PeoplePaneViewManager *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7 = 0LL;
  v2 = (PeoplePaneViewManager *)((char *)this - 64);
  if ( (int)PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 64, a2, &v7) < 0
    || (v3 = PeoplePaneViewManager::HandleViewReady(v2), v4 = v3, v3 >= 0) )
  {
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15E,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v7 + 1);
      (***((void (__fastcall ****)(_QWORD))&v7 + 1))(*((_QWORD *)&v7 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v7 + 1) + 8LL))(*((_QWORD *)&v7 + 1));
    }
  }
  return v4;
}
