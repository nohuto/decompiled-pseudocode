/*
 * XREFs of ?CreateIconBitmap@ImmersiveIcons@@YAJUtagSIZE@@00_NAEBUIconData2@1@1PEAPEAUHBITMAP__@@@Z @ 0x1803029CC
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x180302560 (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     ?AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z @ 0x18030273C (-AddBackgroundForIcon@GDIHelpers@@YAJPEAUHBITMAP__@@AEBKAEBUtagSIZE@@22PEAPEAU2@@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180303D78 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z @ 0x1803043E8 (-PremultiplyAlphaChannel@GDIHelpers@@YAPEAUHBITMAP__@@PEAU2@_N@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18030478C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskbarSuggestions@@@wil@@CAX_NW4Rep.c)
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
  char cx; // r13
  unsigned int v9; // ebx
  LONG v10; // edi
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // r8
  int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rdx
  const struct _GUID *v18; // rcx
  int ThreadThumbnailCache; // eax
  bool v20; // zf
  void *v21; // rdi
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  HBITMAP v25; // rdx
  bool v26; // r8
  __int64 v27; // rdx
  HBITMAP v28; // rax
  HGDIOBJ v29; // rcx
  HGDIOBJ v30; // rbx
  __int64 v31; // r9
  HBITMAP v32; // rax
  HGDIOBJ v33; // rcx
  HBITMAP v34; // rbx
  DWORD SysColor; // eax
  HGDIOBJ v36; // rcx
  HGDIOBJ ho; // [rsp+40h] [rbp-30h] BYREF
  int v39[2]; // [rsp+48h] [rbp-28h] BYREF
  void *v40; // [rsp+50h] [rbp-20h] BYREF
  IBindCtx *pbc; // [rsp+58h] [rbp-18h] BYREF
  void *ppv[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  ImmersiveIcons *v44; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v45; // [rsp+B8h] [rbp+48h] BYREF
  struct tagSIZE v46; // [rsp+C0h] [rbp+50h] BYREF

  v46 = a3;
  v45 = a2;
  v44 = this;
  v7 = a7;
  cx = a4.cx;
  ppv[0] = 0LL;
  v9 = a3.cx;
  pbc = 0LL;
  v10 = a2.cx;
  *a7 = 0LL;
  wil::Feature<__WilFeatureTraits_Feature_TaskbarSuggestions>::ReportUsageToService();
  v11 = a5;
  if ( *PathFindExtensionW((LPCWSTR)(a5 + 8))
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc),
        v15 = _CreatePropertyBagBindCtx<unsigned short const *>(v13, v12, v14, &pbc),
        v16 = v15,
        v15 >= 0) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
    v15 = SHCreateItemFromParsingName((PCWSTR)(v11 + 8), pbc, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, ppv);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 254LL;
      goto LABEL_6;
    }
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    ThreadThumbnailCache = GetThreadThumbnailCache(v18, &v40);
    v16 = ThreadThumbnailCache;
    if ( ThreadThumbnailCache < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x101,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)ThreadThumbnailCache);
LABEL_42:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      goto LABEL_43;
    }
    v20 = *(_BYTE *)v11 == 0;
    *(_QWORD *)v39 = 0LL;
    if ( !v20 )
      v9 = v10;
    v21 = v40;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
    v22 = (*(__int64 (__fastcall **)(void *, void *, _QWORD, __int64, int *, _QWORD, _QWORD))(*(_QWORD *)v21 + 24LL))(
            v21,
            ppv[0],
            v9,
            64LL,
            v39,
            0LL,
            0LL);
    v16 = v22;
    if ( v22 < 0 )
    {
      v23 = 262LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
        (const char *)(unsigned int)v22);
LABEL_41:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v39);
      goto LABEL_42;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, const struct ImmersiveIcons::IconData2 **))(**(_QWORD **)v39 + 40LL))(
            *(_QWORD *)v39,
            &a6);
    v16 = v22;
    if ( v22 < 0 )
    {
      v23 = 265LL;
      goto LABEL_15;
    }
    ho = 0LL;
    v24 = (*(__int64 (__fastcall **)(_QWORD, HGDIOBJ *))(**(_QWORD **)v39 + 56LL))(*(_QWORD *)v39, &ho);
    v16 = v24;
    if ( v24 < 0 )
    {
      v27 = 268LL;
LABEL_37:
      v31 = (unsigned int)v24;
      goto LABEL_38;
    }
    if ( *(_BYTE *)v11 )
    {
      if ( cx && (_DWORD)a6 == 2 )
      {
        v28 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v25, v26);
        v29 = ho;
        v30 = v28;
        ho = 0LL;
        if ( v29 )
          DeleteObject(v29);
        ho = v30;
        if ( !v30 )
        {
          v16 = -2147024882;
          v27 = 276LL;
          v31 = 2147942414LL;
          goto LABEL_38;
        }
      }
      else
      {
        v30 = ho;
      }
      ho = 0LL;
      v16 = 0;
      *v7 = (struct tagSIZE)v30;
      goto LABEL_39;
    }
    if ( (_DWORD)a6 != 2 )
      goto LABEL_46;
    v32 = GDIHelpers::PremultiplyAlphaChannel((GDIHelpers *)ho, v25, v26);
    v33 = ho;
    v34 = v32;
    ho = 0LL;
    if ( v33 )
      DeleteObject(v33);
    ho = v34;
    if ( v34 )
    {
LABEL_46:
      if ( *(_BYTE *)(v11 + 1) )
        SysColor = GetSysColor(5);
      else
        SysColor = *(_DWORD *)(v11 + 4);
      LODWORD(a7) = SysColor;
      v24 = GDIHelpers::AddBackgroundForIcon(ho, (int *)&a7, (LONG *)&v44, &v45, &v46, v7);
      v16 = v24;
      if ( v24 >= 0 )
        goto LABEL_39;
      v27 = 302LL;
      goto LABEL_37;
    }
    v16 = -2147024882;
    v27 = 288LL;
    v31 = 2147942414LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
      (const char *)v31);
LABEL_39:
    v36 = ho;
    ho = 0LL;
    if ( v36 )
      DeleteObject(v36);
    goto LABEL_41;
  }
  v17 = 251LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"shell\\lib\\immersiveapphelpers\\immersiveappiconhelpers.cpp",
    (const char *)(unsigned int)v15);
LABEL_43:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pbc);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return v16;
}
