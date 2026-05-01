/*
 * XREFs of ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1800E9550
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromViewChangeNotifications(PeoplePaneViewManager *this, int a2)
{
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  if ( !*((_QWORD *)this + 15) )
    return 0LL;
  v4 = *((_QWORD *)this + 14);
  v5 = 0LL;
  while ( *(_DWORD *)(v4 + 16 * v5 + 8) != a2 )
  {
    v5 = ++v3;
    if ( (unsigned __int64)v3 >= *((_QWORD *)this + 15) )
      return 0LL;
  }
  v7 = v3;
  if ( (unsigned __int64)v3 < *((_QWORD *)this + 15) )
  {
    v8 = 16LL * v3;
    v9 = *(_QWORD *)(v8 + v4);
    if ( v9 )
    {
      *(_QWORD *)(v8 + v4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = *((_QWORD *)this + 15);
    if ( v7 != v10 - 1 )
      memmove(
        (void *)(v8 + *((_QWORD *)this + 14)),
        (const void *)(v8 + *((_QWORD *)this + 14) + 16),
        16 * (v10 - v7) - 16);
    --*((_QWORD *)this + 15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x180,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)0x80028CA1LL);
  return 2147650721LL;
}
