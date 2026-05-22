/*
 * XREFs of ?GetBamoDataSourceStub@AnimationDataProvider@@QEAA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18008F3F8
 * Callers:
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x180065378 (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall AnimationDataProvider::GetBamoDataSourceStub(__int64 a1, _QWORD *a2, __int64 *a3)
{
  char v5; // bl
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbp
  DWORD CurrentThreadId; // eax
  const char *v10; // r9
  int v11; // ecx
  const char *v12; // r9
  __int64 i; // rdx
  void (__fastcall ***v14)(_QWORD); // rbx
  void (__fastcall ***v15)(_QWORD); // rax
  void (__fastcall ***v16)(_QWORD); // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  v5 = 1;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL) + 16LL);
  v7 = *a3;
  v8 = *(_QWORD *)(*(_QWORD *)(*a3 + 32) + 24LL);
  CurrentThreadId = GetCurrentThreadId();
  if ( *(_DWORD *)(v8 + 136) == CurrentThreadId || *(_DWORD *)(v8 + 24) == CurrentThreadId )
    v5 = 0;
  if ( v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x538,
      (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoconnection.inl",
      v10);
    __debugbreak();
  }
  v11 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) + 36);
  for ( i = *(_QWORD *)(v7 + 48); i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != v11; i = *(_QWORD *)(i + 48) )
    ;
  if ( i )
    i &= -(__int64)(*(_BYTE *)(i + 32) != 0);
  v14 = (void (__fastcall ***)(_QWORD))((i - 16) & -(__int64)(i != 0));
  v15 = (void (__fastcall ***)(_QWORD))*a2;
  if ( (void (__fastcall ***)(_QWORD))*a2 != v14 )
  {
    v16 = (void (__fastcall ***)(_QWORD))*a2;
    if ( v14 )
    {
      (**v14)(v14);
      v16 = (void (__fastcall ***)(_QWORD))*a2;
    }
    v15 = v14;
    *a2 = v14;
    if ( v16 )
    {
      (*v16)[1](v16);
      v15 = (void (__fastcall ***)(_QWORD))*a2;
    }
  }
  if ( !v15 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x7E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v12);
    JUMPOUT(0x18008F548LL);
  }
  v17 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  }
  return a2;
}
