/*
 * XREFs of ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x1801BC480
 * Callers:
 *     ??$MakeAndInitialize@VApplicationViewBackedViewHostItem@@V1@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewBackedViewHostItem@@AEAPEAUIApplicationView@@@Z @ 0x1801AB364 (--$MakeAndInitialize@VApplicationViewBackedViewHostItem@@V1@AEAPEAUIApplicationView@@@Details@WR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F7988 (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F8454 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$Set@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappers@WRL@Microsoft@@QEAAJAEBV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@UDummy@Details@23@@Z @ 0x1801B54EC (--$Set@V-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@HString@Wrappe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ApplicationViewBackedViewHostItem::RuntimeClassInitialize(
        ApplicationViewBackedViewHostItem *this,
        struct IApplicationView *a2)
{
  __int64 *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  const wchar_t *v13; // [rsp+28h] [rbp-18h] BYREF
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF

  v3 = (__int64 *)((char *)this + 104);
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((CWinRTApplicationView **)this + 13, a2);
  v18 = 0LL;
  v4 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(v3, &v18);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
    v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 112);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 41LL;
      goto LABEL_5;
    }
    v13 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v8 = *v3;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
    v14 = -1LL;
    v15 = -1LL;
    v9 = (*(__int64 (__fastcall **)(__int64, const wchar_t **))(*(_QWORD *)v8 + 136LL))(v8, &v13);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v9);
LABEL_15:
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v13);
      goto LABEL_16;
    }
    Microsoft::WRL::Wrappers::HString::Set<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>(
      (HSTRING *)this + 17,
      &v13);
    v17 = 0LL;
    v10 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>((_QWORD *)this + 14, &v17);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 32LL))(v17, (char *)this + 32);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v5 = 0;
        goto LABEL_14;
      }
      v11 = 50LL;
    }
    else
    {
      v11 = 49LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)v10);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_15;
  }
  v6 = 40LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)v4);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v5;
}
