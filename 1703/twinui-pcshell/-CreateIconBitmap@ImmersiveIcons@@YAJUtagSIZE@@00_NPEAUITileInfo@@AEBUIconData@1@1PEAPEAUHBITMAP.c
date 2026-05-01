/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NPEAUITileInfo@@AEBUIconData@1@1PEAPEAUHBITMAP__@@@Z @ 0x18017E5F0
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18017EA78 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ @ 0x180165CD4 (--1-$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x18017CC64 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18017CEA8 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x18017E54C (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     s_ParseColorFormat @ 0x180191754 (s_ParseColorFormat.c)
 *     ?GetVisualProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJIPEAPEAG@Z @ 0x1801931C4 (-GetVisualProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJIPEAPEAG@Z.c)
 *     ?ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ @ 0x180193260 (-ClearRetryPropertyTables@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveIcons::CreateIconBitmap(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        __int64 a5,
        struct ITileInfo *a6,
        const struct ImmersiveIcons::IconData *a7,
        GDIHelpers *ho)
{
  struct tagSIZE *v8; // r15
  struct ITileInfo *v9; // r14
  unsigned int cx; // ebx
  LONG v11; // edi
  HRESULT v12; // eax
  HRESULT ThreadFlags; // esi
  LPVOID v14; // rcx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  HBITMAP v19; // rdx
  GDIHelpers *v20; // rax
  GDIHelpers *v21; // rcx
  GDIHelpers *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rbx
  unsigned int v26; // edx
  int VisualProperty; // eax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  void *v33; // rcx
  LPVOID v35; // [rsp+48h] [rbp-89h] BYREF
  __int64 v36; // [rsp+50h] [rbp-81h] BYREF
  __int64 v37; // [rsp+58h] [rbp-79h] BYREF
  void *ppv; // [rsp+60h] [rbp-71h] BYREF
  LPCWCH lpString1; // [rsp+68h] [rbp-69h] BYREF
  __int64 v40; // [rsp+70h] [rbp-61h]
  __int64 v41; // [rsp+78h] [rbp-59h]
  __int64 v42; // [rsp+80h] [rbp-51h]
  int v43; // [rsp+88h] [rbp-49h] BYREF
  __int64 v44; // [rsp+8Ch] [rbp-45h]
  __int64 v45; // [rsp+98h] [rbp-39h]
  int v46; // [rsp+A0h] [rbp-31h]
  __int64 v47; // [rsp+A4h] [rbp-2Dh]
  __int64 v48; // [rsp+B0h] [rbp-21h]
  int v49; // [rsp+B8h] [rbp-19h]
  __int64 v50; // [rsp+BCh] [rbp-15h]
  __int64 v51; // [rsp+C8h] [rbp-9h]
  __int64 v52; // [rsp+D0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+3Fh]
  ImmersiveIcons *v54; // [rsp+118h] [rbp+47h] BYREF
  struct tagSIZE v55; // [rsp+120h] [rbp+4Fh] BYREF
  struct tagSIZE v56; // [rsp+128h] [rbp+57h] BYREF
  struct HBITMAP__ v57; // [rsp+130h] [rbp+5Fh] BYREF

  LOBYTE(v57.unused) = a4.cx;
  v56 = a3;
  v55 = a2;
  v54 = this;
  v8 = (struct tagSIZE *)ho;
  v9 = a6;
  cx = a3.cx;
  ppv = 0LL;
  v11 = a2.cx;
  v42 = 0LL;
  *(_QWORD *)ho = 0LL;
  v12 = SHCreateItemFromParsingName((PCWSTR)v9 + 1, 0LL, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
  ThreadFlags = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xEC,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_51;
  }
  v37 = 0LL;
  ThreadFlags = GetThreadFlags(1LL, &v57);
  if ( ThreadFlags >= 0 )
  {
    v35 = 0LL;
    ThreadFlags = CoCreateInstance(
                    &GUID_50ef4544_ac9f_4a8e_b21b_8a26180db13f,
                    0LL,
                    1u,
                    &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                    &v35);
    if ( ThreadFlags >= 0 )
      ThreadFlags = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))v35)(
                      v35,
                      &GUID_f676c15d_596a_4ce2_8234_33996f445db1,
                      &v37);
    v14 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( ThreadFlags >= 0 )
    {
      v15 = *(_BYTE *)v9 == 0;
      v36 = 0LL;
      if ( !v15 )
        cx = v11;
      v16 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD, __int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v37 + 24LL))(
              v37,
              ppv,
              cx,
              64LL,
              &v36,
              0LL,
              0LL);
      ThreadFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 244LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v17,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_40;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, const struct ImmersiveIcons::IconData **))(*(_QWORD *)v36 + 40LL))(
              v36,
              &a7);
      ThreadFlags = v16;
      if ( v16 < 0 )
      {
        v17 = 247LL;
        goto LABEL_15;
      }
      ho = 0LL;
      v18 = (*(__int64 (__fastcall **)(__int64, GDIHelpers **))(*(_QWORD *)v36 + 56LL))(v36, &ho);
      ThreadFlags = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xFA,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)v18);
LABEL_39:
        CAutoHandle<HBITMAP__ *>::~CAutoHandle<HBITMAP__ *>((void **)&ho);
LABEL_40:
        v30 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        goto LABEL_49;
      }
      if ( *(_BYTE *)v9 )
      {
        ThreadFlags = 0;
        *v8 = (struct tagSIZE)ho;
        ho = 0LL;
        goto LABEL_39;
      }
      if ( (_DWORD)a7 == 2 )
      {
        v20 = (GDIHelpers *)GDIHelpers::PremultiplyAlphaChannel(ho, v19);
        v21 = ho;
        v22 = v20;
        ho = 0LL;
        if ( v21 )
          DeleteObject(v21);
        ho = v22;
        if ( !v22 )
        {
          ThreadFlags = -2147024882;
          v23 = 270LL;
          v24 = 2147942414LL;
          goto LABEL_38;
        }
      }
      v57.unused = 0;
      if ( *((_BYTE *)v9 + 1) )
      {
        v57.unused = GetSysColor(5);
LABEL_36:
        v29 = GDIHelpers::AddBackgroundForIcon(ho, &v57, (LONG *)&v54, &v55, &v56, v8);
        ThreadFlags = v29;
        if ( v29 >= 0 )
          goto LABEL_39;
        v24 = (unsigned int)v29;
        v23 = 298LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)v24);
        goto LABEL_39;
      }
      v43 = 0;
      v44 = 31LL;
      v45 = 0LL;
      v46 = 0;
      v47 = 31LL;
      v48 = 0LL;
      v49 = 0;
      v50 = 31LL;
      v51 = 0LL;
      v52 = a5;
      if ( a5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
      TileDataLayerItemWrappers::TDLTileInfoHelper::ClearRetryPropertyTables((TileDataLayerItemWrappers::TDLTileInfoHelper *)&v43);
      v25 = -1LL;
      lpString1 = 0LL;
      v40 = -1LL;
      v41 = -1LL;
      VisualProperty = TileDataLayerItemWrappers::TDLTileInfoHelper::GetVisualProperty(
                         (TileDataLayerItemWrappers::TDLTileInfoHelper *)&v43,
                         v26,
                         (unsigned __int16 **)&lpString1);
      ThreadFlags = VisualProperty;
      if ( VisualProperty < 0 )
      {
        v28 = 283LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v28,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)(unsigned int)VisualProperty);
        if ( lpString1 )
        {
          CoTaskMemFree((LPVOID)lpString1);
          lpString1 = 0LL;
        }
        v40 = 0LL;
        v41 = 0LL;
        TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)&v43);
        goto LABEL_39;
      }
      if ( CompareStringOrdinal(lpString1, -1, L"transparent", -1, 1) == 2 )
      {
        v35 = 0LL;
        GetUserColorPreference(&v35, 0LL);
        v57.unused = GetColorFromPreference(&v35, 4LL, 0LL);
      }
      else
      {
        do
          ++v25;
        while ( lpString1[v25] );
        VisualProperty = s_ParseColorFormat(lpString1);
        ThreadFlags = VisualProperty;
        if ( VisualProperty < 0 )
        {
          v28 = 293LL;
          goto LABEL_45;
        }
      }
      if ( lpString1 )
      {
        CoTaskMemFree((LPVOID)lpString1);
        lpString1 = 0LL;
      }
      v40 = 0LL;
      v41 = 0LL;
      TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)&v43);
      goto LABEL_36;
    }
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xEF,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)ThreadFlags);
LABEL_49:
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
LABEL_51:
  v32 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v33 + 16LL))(v33);
  }
  return (unsigned int)ThreadFlags;
}
