/*
 * XREFs of ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1801124D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromViewChangeNotifications(PeoplePaneViewManager *this, int a2)
{
  unsigned int v3; // ecx
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = *((_QWORD *)this + 48);
  if ( !v4 )
    return 0LL;
  v5 = *((_QWORD *)this + 47);
  v6 = 0LL;
  while ( *(_DWORD *)(v5 + 16 * v6 + 8) != a2 )
  {
    v6 = ++v3;
    if ( v3 >= v4 )
      return 0LL;
  }
  v8 = v3;
  if ( v3 < v4 )
  {
    v9 = 16LL * v3;
    v10 = *(_QWORD *)(v9 + v5);
    if ( v10 )
    {
      *(_QWORD *)(v9 + v5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = *((_QWORD *)this + 48);
    if ( v8 != v11 - 1 )
      memmove(
        (void *)(v9 + *((_QWORD *)this + 47)),
        (const void *)(v9 + *((_QWORD *)this + 47) + 16),
        16 * (v11 - v8) - 16);
    --*((_QWORD *)this + 48);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1FC,
    (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
    (const char *)0x80028CA1LL);
  return 2147650721LL;
}
