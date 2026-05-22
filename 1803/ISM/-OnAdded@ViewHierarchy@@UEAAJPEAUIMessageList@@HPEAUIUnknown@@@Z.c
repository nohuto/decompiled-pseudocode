/*
 * XREFs of ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18002BF40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Z @ 0x18002CA5C (--$emplace_back@AEBV-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@.c)
 *     ??A?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAAAEAUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18002CD54 (--A-$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U-$hash@I@std@@U-$equal_to@I@4@V-$allocat.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnAdded(
        ViewHierarchy *this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IUnknownVtbl *v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[8]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v24; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v22[0] = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v22[0] + 56LL))(v22[0], (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xA6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  std::vector<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal> const &>(
    (char *)this + 160,
    v22);
  v9 = a4->lpVtbl;
  v21 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v9->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v21);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAA,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v21 + 120LL))(v21, v20);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 144LL))(v21, &v24);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xB0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18002C148LL);
  }
  v13 = v21;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v14 = v24;
  v15 = std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::operator[]((char *)this + 88, v20);
  v16 = *(_QWORD *)v15;
  *(_QWORD *)v15 = v13;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *(_DWORD *)(v15 + 8) = v14;
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v22[0];
  if ( v22[0] )
  {
    v22[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
