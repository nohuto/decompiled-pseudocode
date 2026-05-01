/*
 * XREFs of ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAGI@Z @ 0x1800E9620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x1800E9E00 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     _o_wmemcpy_s_0 @ 0x180194E5C (_o_wmemcpy_s_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::GetViewContactId(
        PeoplePaneViewManager *this,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  rsize_t v4; // rsi
  int ViewInfoByApplicationViewId; // eax
  unsigned int v7; // edi
  const wchar_t *v8; // r8
  __int64 v9; // rbx
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a4;
  *a3 = 0;
  v11 = 0LL;
  ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId((char *)this - 64, a2, &v11);
  v7 = ViewInfoByApplicationViewId;
  if ( ViewInfoByApplicationViewId >= 0 )
  {
    v8 = (const wchar_t *)v11;
    if ( *(_QWORD *)(v11 + 24) >= 8uLL )
      v8 = *(const wchar_t **)v11;
    o_wmemcpy_s_0(a3, v4, v8, *(_QWORD *)(v11 + 16));
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x18D,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ViewInfoByApplicationViewId);
  }
  if ( *((_QWORD *)&v11 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v9 = *((_QWORD *)&v11 + 1);
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return v7;
}
