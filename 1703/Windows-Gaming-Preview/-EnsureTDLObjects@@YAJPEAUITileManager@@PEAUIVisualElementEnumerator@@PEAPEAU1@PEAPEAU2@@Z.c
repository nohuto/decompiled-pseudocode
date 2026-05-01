/*
 * XREFs of ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180023F08
 * Callers:
 *     ?CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@_N2@Z @ 0x1800251A8 (-CommitInternal@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEAUITileManager@@PEAUIVisualE.c)
 *     _lambda_849682ba5faec79a8a918f75d9dbfadc_::operator() @ 0x1800252D8 (_lambda_849682ba5faec79a8a918f75d9dbfadc_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3deb4ce6cabefd1711534afb604daca8__&___ptr64_::Run @ 0x1800277A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3deb4ce6cabefd1711534afb604daca8__-___ptr64.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800291B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EnsureTDLObjects(
        struct ITileManager *a1,
        struct IVisualElementEnumerator *a2,
        struct ITileManager **a3,
        struct IVisualElementEnumerator **a4)
{
  __int64 v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  int v11; // r14d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  struct ITileManager *v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  __int64 v19; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  struct IVisualElementEnumerator *v21; // [rsp+80h] [rbp+50h] BYREF
  struct ITileManager *v22; // [rsp+88h] [rbp+58h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v9 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
    v9[3] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITileDataLayerProvider,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( !v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      v8 = v19;
    }
    *(_QWORD *)v9 = &OneCoreDataHelpers::TileDataLayerProvider::`vftable';
    *((_QWORD *)v9 + 2) = 0LL;
    *((_QWORD *)v9 + 3) = 0LL;
    *((_QWORD *)v9 + 4) = 0LL;
    *((_QWORD *)v9 + 5) = 0LL;
    v9[12] = 0;
    v11 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v9)(
            v9,
            &GUID_41a57ca9_2979_4ecd_8219_daa846c55fbb,
            &v18);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v11 >= 0 )
    {
      v8 = v18;
      v11 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v11 = -2147024882;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x147,
    (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\onecoredatahelpers.cpp",
    (const char *)(unsigned int)v11);
  v13 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
LABEL_13:
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5F,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_37;
  }
  v22 = a1;
  if ( a1 )
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)a1 + 8LL))(a1);
  if ( !a3
    || v22
    || (v14 = (*(__int64 (__fastcall **)(__int64, struct ITileManager **))(*(_QWORD *)v8 + 32LL))(v8, &v22),
        v11 = v14,
        v14 >= 0) )
  {
    v21 = a2;
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a2 + 8LL))(a2);
      a2 = v21;
    }
    if ( a4 && !a2 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, struct IVisualElementEnumerator **))(*(_QWORD *)v8 + 24LL))(v8, &v21);
      v11 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x6A,
          (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v15);
        a2 = v21;
LABEL_33:
        if ( a2 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)a2 + 16LL))(a2);
        }
        goto LABEL_35;
      }
      a2 = v21;
    }
    if ( a3 )
    {
      *a3 = v22;
      v22 = 0LL;
    }
    if ( a4 )
    {
      v21 = 0LL;
      *a4 = a2;
      a2 = 0LL;
    }
    v11 = 0;
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x64,
    (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v14);
LABEL_35:
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_37:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v11;
}
