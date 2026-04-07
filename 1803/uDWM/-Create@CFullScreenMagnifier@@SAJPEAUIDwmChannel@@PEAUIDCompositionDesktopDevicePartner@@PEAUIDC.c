/*
 * XREFs of ?Create@CFullScreenMagnifier@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18003DECC
 * Callers:
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18003DE40 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18003DF80 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ??0CFullScreenMagnifier@@AEAA@PEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@@Z @ 0x18003E030 (--0CFullScreenMagnifier@@AEAA@PEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDComp.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::Create(
        struct IDwmChannel *a1,
        struct IDCompositionDesktopDevicePartner *a2,
        struct IDCompositionDesktopTargetPartner *a3,
        struct CVisual *a4,
        struct CFullScreenMagnifier **a5)
{
  CFullScreenMagnifier *v9; // rax
  unsigned int v10; // edi
  volatile signed __int32 *v11; // rbx

  v9 = (CFullScreenMagnifier *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 16LL))(
                                 WPF::g_pProcessHeap,
                                 272LL);
  v10 = 0;
  if ( v9 )
    v11 = (volatile signed __int32 *)CFullScreenMagnifier::CFullScreenMagnifier(v9, a1, a2, a3, a4);
  else
    v11 = 0LL;
  if ( v11 )
  {
    CFullScreenMagnifier::UpdateSettings((CFullScreenMagnifier *)v11, 1.0, 0.0, 0.0);
    *a5 = (struct CFullScreenMagnifier *)v11;
    _InterlockedIncrement(v11 + 2);
    CBaseObject::Release((CBaseObject *)v11);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Du);
  }
  return v10;
}
