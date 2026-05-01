/*
 * XREFs of ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x1802735C0
 * Callers:
 *     _lambda_637b889d7309fa55c34979987552fc96_::operator() @ 0x180273164 (_lambda_637b889d7309fa55c34979987552fc96_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

__int64 __fastcall CWinRTAppIconLoader::s_LoadIconSync(
        struct IWinRTApplicationView *a1,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3,
        const struct tagSIZE *a4,
        struct tagSIZE a5,
        HBITMAP *a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  int ImmersiveIcon; // eax
  __int64 v14; // rdx
  struct tagSIZE v16; // [rsp+20h] [rbp-40h]
  HBITMAP *v17; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v22; // [rsp+80h] [rbp+20h] BYREF

  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v10 = (*(__int64 (__fastcall **)(struct IWinRTApplicationView *, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, &v22);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v12 = v22;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v18);
    v19 = -1LL;
    v20 = -1LL;
    ImmersiveIcon = (*(__int64 (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v12 + 32LL))(v12, &v18);
    v11 = ImmersiveIcon;
    if ( ImmersiveIcon >= 0 )
    {
      LOBYTE(v16.cx) = 1;
      ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                        *(ImmersiveIcons **)a2,
                        *a3,
                        *a4,
                        (struct tagSIZE)(unsigned int)a5.cx,
                        v16,
                        v18,
                        (const unsigned __int16 *)a6,
                        v17);
      v11 = ImmersiveIcon;
      if ( ImmersiveIcon >= 0 )
      {
LABEL_8:
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v18);
        goto LABEL_9;
      }
      v14 = 85LL;
    }
    else
    {
      v14 = 84LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x52,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
    (const char *)(unsigned int)v10);
LABEL_9:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  return v11;
}
