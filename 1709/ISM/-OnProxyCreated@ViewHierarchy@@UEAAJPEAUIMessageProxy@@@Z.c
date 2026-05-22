/*
 * XREFs of ?OnProxyCreated@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083280
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ @ 0x180083364 (-AddViewsOnProxyConnection@ViewHierarchy@@AEAAXXZ.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x1800841F4 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnProxyCreated(ViewHierarchy *this, struct IMessageProxy *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ViewHierarchy::RemoveListListenerReference(this);
  if ( *((struct IMessageProxy **)this + 8) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 8))(
         *((_QWORD *)this + 8),
         &GUID_b2ef2dce_3e3b_4944_9447_e7f2772f3ad3,
         (char *)this + 72);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180083333LL);
  }
  ViewHierarchy::AddViewsOnProxyConnection(this);
  return 0LL;
}
