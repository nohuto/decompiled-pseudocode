/*
 * XREFs of ?RuntimeClassInitialize@AppViewSwitchItemDataSource@@QEAAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@@Z @ 0x18015CCB8
 * Callers:
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9IPropertyValue@Foundation@Windows@@$BFI@AA @ 0x18004614C (--_9IPropertyValue@Foundation@Windows@@$BFI@AA.c)
 *     ?InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ @ 0x18015D2DC (-InitViewsFromCollection@AppViewSwitchItemDataSource@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AppViewSwitchItemDataSource::RuntimeClassInitialize(
        AppViewSwitchItemDataSource *this,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewIconLoader *a3,
        struct IThumbnailInteropDevice *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // r14
  int v12; // esi
  int v13; // eax
  __int64 v14; // rdx
  struct IApplicationViewCollection *v15; // rsi
  _QWORD *v16; // rcx
  int inited; // eax
  unsigned int v19; // ebx
  _QWORD v20[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((struct IApplicationViewCollection **)this + 16) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct IApplicationViewIconLoader **)this + 17) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IApplicationViewIconLoader *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct IThumbnailInteropDevice **)this + 18) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct IThumbnailInteropDevice *))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = (_QWORD *)((char *)this + 152);
  if ( *((_DWORD *)this + 66) )
  {
    v12 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)0x8007139FLL);
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x44,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v13 =  Windows::Foundation::IPropertyValue::`vcall'{88,{flat}}((__int64)a2);
  v12 = v13;
  if ( v13 >= 0 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 8LL))(a2);
    v15 = a2;
    v20[0] = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 8LL))(a2);
    v20[1] =  IApplicationViewCollection::`vcall'{96,{flat}};
    v16 = (_QWORD *)*((_QWORD *)this + 32);
    if ( v16 )
    {
      LOBYTE(v14) = v16 != v11;
      (*(void (__fastcall **)(_QWORD *, __int64))(*v16 + 24LL))(v16, v14);
      *((_QWORD *)this + 32) = 0LL;
    }
    *v11 = off_1801B97C8;
    *((_QWORD *)this + 20) = 0LL;
    if ( (_QWORD *)((char *)this + 160) != v20 )
    {
      *((_QWORD *)this + 20) = a2;
      v15 = 0LL;
    }
    *((_QWORD *)this + 21) =  IApplicationViewCollection::`vcall'{96,{flat}};
    *((_QWORD *)this + 32) = (char *)this + 152;
    if ( v15 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewCollection *))(*(_QWORD *)a2 + 16LL))(a2);
    v12 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x29,
      (__int64)"internal\\shell\\private\\inc\\smartcookie.h",
      (const char *)(unsigned int)v13);
  }
  if ( v12 < 0 )
    goto LABEL_34;
  inited = AppViewSwitchItemDataSource::InitViewsFromCollection(this);
  v19 = inited;
  if ( inited < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewdatasource.cpp",
      (const char *)(unsigned int)inited);
  return v19;
}
