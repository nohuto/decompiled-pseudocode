/*
 * XREFs of ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@$$QEAPEAUIDeviceGraphObjectsStore@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18003085C
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x180029750 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@UIInspectable@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18000CD6C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISaDeviceProxy@@.c)
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x18000E310 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000E514 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@P.c)
 *     ??0CSaDeviceProxy@@QEAA@XZ @ 0x18000E784 (--0CSaDeviceProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,IDeviceGraphObjectsStore *,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
        _QWORD *a1,
        const struct SaDeviceParams **a2,
        struct CEndpointCharacteristics **a3,
        struct IDeviceGraphObjectsStore **a4,
        enum _AUDCLNT_SHAREMODE *a5,
        enum _AUDCLNT_SHAREMODE *a6,
        struct SaDeviceResourceParams **a7)
{
  CSaDeviceProxy *v11; // rax
  CSaDeviceProxy *v12; // rbx
  int v13; // edi

  *a1 = 0LL;
  v11 = (CSaDeviceProxy *)operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v12 = CSaDeviceProxy::CSaDeviceProxy(v11);
    v13 = CSaDeviceProxy::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6, *a7);
    if ( v13 >= 0 )
      v13 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ISaDeviceProxy,IInspectable>>(
              (__int64)v12,
              (__int64)&GUID_1b8f81be_457f_4a54_867b_8b6a4c29fdb0,
              a1);
    if ( v12 )
      CSaDeviceProxy::Release(v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v13;
}
