/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1801CB860
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1801CBB90 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??1?$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ @ 0x180197C94 (--1-$CAutoHandle@PEAUHBITMAP__@@@@QEAA@XZ.c)
 *     ?SHCreateStringBindCtx@@YAJPEAUIBindCtx@@PEBG1PEAPEAU1@@Z @ 0x1801C99A4 (-SHCreateStringBindCtx@@YAJPEAUIBindCtx@@PEBG1PEAPEAU1@@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C9A64 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1801C9B08 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x1801C9D54 (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801CCB3C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CA.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ImmersiveIcons::CreateIconBitmap(
        ImmersiveIcons *this,
        struct tagSIZE a2,
        struct tagSIZE a3,
        struct tagSIZE a4,
        __int64 a5,
        const struct ImmersiveIcons::IconData2 *a6,
        struct tagSIZE *a7)
{
  struct tagSIZE *v7; // r15
  unsigned int cx; // ebx
  LONG v9; // edi
  __int64 v10; // r14
  const unsigned __int16 *v11; // rdx
  unsigned __int16 *v12; // r8
  struct IBindCtx *v13; // rcx
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rdx
  IBindCtx *v17; // rsi
  __int64 *v18; // rax
  const struct _GUID *v19; // rcx
  int ThreadThumbnailCache; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  HBITMAP v25; // rdx
  HANDLE v26; // rax
  HGDIOBJ v27; // rcx
  void *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r9
  DWORD SysColor; // eax
  int v32; // eax
  __int64 v33; // rcx
  void *v34; // rcx
  IBindCtx *v35; // rcx
  __int64 v36; // rcx
  int v38; // [rsp+40h] [rbp-38h] BYREF
  __int16 v39; // [rsp+44h] [rbp-34h]
  HGDIOBJ ho; // [rsp+48h] [rbp-30h] BYREF
  IBindCtx *pbc; // [rsp+50h] [rbp-28h] BYREF
  int v42[2]; // [rsp+58h] [rbp-20h] BYREF
  void *v43; // [rsp+60h] [rbp-18h] BYREF
  __int64 v44; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  ImmersiveIcons *v46; // [rsp+C0h] [rbp+48h] BYREF
  struct tagSIZE v47; // [rsp+C8h] [rbp+50h] BYREF
  struct tagSIZE v48; // [rsp+D0h] [rbp+58h] BYREF
  struct HBITMAP__ v49; // [rsp+D8h] [rbp+60h] BYREF

  LOBYTE(v49.unused) = a4.cx;
  v48 = a3;
  v47 = a2;
  v46 = this;
  v7 = a7;
  cx = a3.cx;
  v44 = 0LL;
  v9 = a2.cx;
  pbc = 0LL;
  *a7 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetCachedFeatureEnabledState();
  BYTE4(a7) = 3;
  v38 = 0;
  v39 = WORD2(a7);
  LODWORD(a7) = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::GetFeaturePropertyCache'::`2'::data,
    0x5F7DF1u,
    (const struct FEATURE_LOGGED_TRAITS *)&v38,
    1,
    3);
  v10 = a5;
  if ( !*PathFindExtensionW((LPCWSTR)(a5 + 8)) )
  {
    v13 = pbc;
    if ( pbc )
    {
      pbc = 0LL;
      ((void (__fastcall *)(struct IBindCtx *))v13->lpVtbl->Release)(v13);
    }
    v14 = SHCreateStringBindCtx(v13, v11, v12, &pbc);
    v15 = v14;
    if ( v14 < 0 )
    {
      v16 = 253LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v16,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_40;
    }
  }
  v17 = pbc;
  v18 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v44);
  v14 = SHCreateItemFromParsingName((PCWSTR)(v10 + 8), v17, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)v18);
  v15 = v14;
  if ( v14 < 0 )
  {
    v16 = 256LL;
    goto LABEL_10;
  }
  v43 = 0LL;
  ThreadThumbnailCache = GetThreadThumbnailCache(v19, &v43);
  v15 = ThreadThumbnailCache;
  if ( ThreadThumbnailCache >= 0 )
  {
    v21 = *(_BYTE *)v10 == 0;
    *(_QWORD *)v42 = 0LL;
    if ( !v21 )
      cx = v9;
    v22 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD, __int64, int *, _QWORD, _QWORD))(*(_QWORD *)v43 + 24LL))(
            v43,
            v44,
            cx,
            64LL,
            v42,
            0LL,
            0LL);
    v15 = v22;
    if ( v22 < 0 )
    {
      v23 = 264LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v23,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_36;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, const struct ImmersiveIcons::IconData2 **))(**(_QWORD **)v42 + 40LL))(
            *(_QWORD *)v42,
            &a6);
    v15 = v22;
    if ( v22 < 0 )
    {
      v23 = 267LL;
      goto LABEL_19;
    }
    ho = 0LL;
    v24 = (*(__int64 (__fastcall **)(_QWORD, HGDIOBJ *))(**(_QWORD **)v42 + 56LL))(*(_QWORD *)v42, &ho);
    v15 = v24;
    if ( v24 >= 0 )
    {
      if ( *(_BYTE *)v10 )
      {
        v15 = 0;
        *v7 = (struct tagSIZE)ho;
        ho = 0LL;
      }
      else
      {
        if ( (_DWORD)a6 != 2 )
          goto LABEL_47;
        v26 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v25);
        v27 = ho;
        v28 = v26;
        ho = 0LL;
        if ( v27 )
          DeleteObject(v27);
        ho = v28;
        if ( v28 )
        {
LABEL_47:
          if ( *(_BYTE *)(v10 + 1) )
            SysColor = GetSysColor(5);
          else
            SysColor = *(_DWORD *)(v10 + 4);
          v49.unused = SysColor;
          v32 = GDIHelpers::AddBackgroundForIcon(ho, &v49, (LONG *)&v46, &v47, &v48, v7);
          v15 = v32;
          if ( v32 >= 0 )
            goto LABEL_35;
          v30 = (unsigned int)v32;
          v29 = 304LL;
        }
        else
        {
          v15 = -2147024882;
          v29 = 290LL;
          v30 = 2147942414LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
          (const char *)v30);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x10E,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v24);
    }
LABEL_35:
    CAutoHandle<HBITMAP__ *>::~CAutoHandle<HBITMAP__ *>(&ho);
LABEL_36:
    v33 = *(_QWORD *)v42;
    if ( *(_QWORD *)v42 )
    {
      *(_QWORD *)v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    goto LABEL_38;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x103,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_38:
  v34 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
  }
LABEL_40:
  v35 = pbc;
  if ( pbc )
  {
    pbc = 0LL;
    ((void (__fastcall *)(IBindCtx *))v35->lpVtbl->Release)(v35);
  }
  v36 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  return v15;
}
