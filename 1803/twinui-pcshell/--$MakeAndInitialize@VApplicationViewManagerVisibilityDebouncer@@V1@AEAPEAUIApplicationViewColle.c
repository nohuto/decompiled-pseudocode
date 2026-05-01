/*
 * XREFs of ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x18013D640
 * Callers:
 *     ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x18013DBC4 (-ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ @ 0x18013D7D8 (--0ApplicationViewManagerVisibilityDebouncer@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x18013DE88 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewCollection@@@Z @ 0x18013E088 (-RuntimeClassInitialize@ApplicationViewManagerVisibilityDebouncer@@QEAAJPEAUIApplicationViewColl.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802DBD08 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802DBD08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagerVisibilityDebouncer,ApplicationViewManagerVisibilityDebouncer,IApplicationViewCollection * &>(
        ApplicationViewManagerVisibilityDebouncer **a1,
        struct IApplicationViewCollection **a2)
{
  ApplicationViewManagerVisibilityDebouncer *v4; // rax
  int v5; // ebx
  ApplicationViewManagerVisibilityDebouncer *v6; // rdi
  ApplicationViewManagerVisibilityDebouncer *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (ApplicationViewManagerVisibilityDebouncer *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ApplicationViewManagerVisibilityDebouncer::ApplicationViewManagerVisibilityDebouncer(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = ApplicationViewManagerVisibilityDebouncer::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>::InternalAddRef(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
