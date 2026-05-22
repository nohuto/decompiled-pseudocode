/*
 * XREFs of ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180083560
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x1800841F4 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     ??A?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAAAEAUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x180084358 (--A-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnPropertyChanged(ViewHierarchy *this, struct IMessageProxy *a2, unsigned __int16 a3)
{
  int (__fastcall **v6)(struct IMessageProxy *, GUID *, _QWORD *); // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r14
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v22; // [rsp+68h] [rbp+10h] BYREF
  char v23; // [rsp+78h] [rbp+20h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = *(int (__fastcall ***)(struct IMessageProxy *, GUID *, _QWORD *))a2;
  v20[0] = 0LL;
  if ( (*v6)(a2, &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa, v20) >= 0 && a3 == 15 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v20[0] + 120LL))(v20[0], &v23);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x7F,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v20[0] + 144LL))(v20[0], &v22);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x82,
        (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = v20[0];
    if ( v20[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 8LL))(v20[0]);
    v10 = v22;
    v11 = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::operator[]((char *)this + 96, &v23);
    v12 = *(_QWORD *)v11;
    *(_QWORD *)v11 = v9;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    *(_DWORD *)(v11 + 8) = v10;
  }
  if ( *((struct IMessageProxy **)this + 8) == a2 && (unsigned int)a3 - 1 <= 1 )
  {
    v13 = (_QWORD *)((char *)this + 80);
    if ( !*((_QWORD *)this + 10) )
    {
      ViewHierarchy::RemoveListListenerReference(this);
      v14 = *v13;
      v15 = *((_QWORD *)this + 9);
      if ( *v13 )
      {
        *v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 40LL))(v15, (char *)this + 80);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x93,
          (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v17 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v13 + 64LL))(*v13, (char *)this + 8);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x94,
          (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
          (const char *)(unsigned int)v17);
        JUMPOUT(0x18008376CLL);
      }
    }
  }
  v18 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  (*(void (__fastcall **)(struct IMessageProxy *))(*(_QWORD *)a2 + 16LL))(a2);
  return 0LL;
}
