/*
 * XREFs of ?ClosePeoplePane@PeoplePaneViewManager@@UEAAJPEBG@Z @ 0x1800E8EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9CC4 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1800EA548 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::ClosePeoplePane(PeoplePaneViewManager *this, const unsigned __int16 *a2)
{
  int PaneViewInfoByContactId; // eax
  PeoplePaneViewManager *v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v10 = 0LL;
  PaneViewInfoByContactId = PeoplePaneViewManager::FindPaneViewInfoByContactId((char *)this - 64, a2, &v10);
  v4 = PaneViewInfoByContactId;
  if ( PaneViewInfoByContactId >= 0 )
  {
    if ( *(_DWORD *)(v10 + 60) )
    {
      v4 = -2147024809;
      v5 = 2147942487LL;
      v6 = 316LL;
    }
    else
    {
      v7 = PeoplePaneViewManager::CloseView(v3, *(struct IApplicationView **)(v10 + 32));
      v4 = v7;
      if ( v7 >= 0 )
        goto LABEL_8;
      v5 = (unsigned int)v7;
      v6 = 318LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)v5);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x13B,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)(unsigned int)PaneViewInfoByContactId);
LABEL_8:
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v8 = *((_QWORD *)&v10 + 1);
      (***((void (__fastcall ****)(_QWORD))&v10 + 1))(*((_QWORD *)&v10 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v10 + 1) + 8LL))(*((_QWORD *)&v10 + 1));
    }
  }
  return v4;
}
