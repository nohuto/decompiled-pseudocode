/*
 * XREFs of ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1801AFED0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x180020F20 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AA320 (--$As@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@@-$ComPtr@UIViewHostItem.c)
 *     ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1801AF41C (-IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B1AA8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::ResizeView(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  LONG cx; // ebx
  const unsigned __int16 *v7; // rdx
  int IsViewManaged; // edi
  __int64 v9; // rdx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  HolographicApps *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+68h] [rbp+28h] BYREF
  struct tagSIZE v19; // [rsp+70h] [rbp+30h]

  v19 = a3;
  v16[1] = (HolographicApps *)-2LL;
  cx = a3.cx;
  IsViewManaged = (*(__int64 (__fastcall **)(struct IApplicationView *, HolographicApps **, struct tagSIZE, struct tagSIZE))(*(_QWORD *)a2 + 136LL))(
                    a2,
                    v16,
                    a3,
                    a4);
  if ( IsViewManaged < 0 )
  {
    v9 = 539LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return (unsigned int)IsViewManaged;
  }
  if ( HolographicApps::IsAppAllowedToBeResized(v16[0], v7) )
  {
    IsViewManaged = HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this + 16), a2, (int *)&v18);
    if ( IsViewManaged < 0 )
    {
      v9 = 543LL;
      goto LABEL_3;
    }
    if ( !(_DWORD)v18 )
    {
      v11 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x220,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x80070057LL);
      return v11;
    }
    HolographicPositioner::_FindViewHostItem((char *)this - 120, &v18, a2);
    if ( !v18 )
    {
      v11 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x223,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x80070490LL);
LABEL_19:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      return v11;
    }
    *(float *)&v15 = (float)cx;
    *((float *)&v15 + 1) = (float)v19.cy;
    v14 = 0LL;
    v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>::As<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal>(
            &v18,
            &v14);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 72LL))(v14, v15);
      v11 = v12;
      if ( v12 >= 0 )
      {
        v11 = 0;
        goto LABEL_18;
      }
      v13 = 554LL;
    }
    else
    {
      v13 = 553LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v12);
LABEL_18:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    goto LABEL_19;
  }
  return 2147500033LL;
}
