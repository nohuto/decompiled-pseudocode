/*
 * XREFs of ?Create@CMagnifierControl@@SAJPEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@3PEAPEAV1@@Z @ 0x18003DCE4
 * Callers:
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x18003E84C (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??0CMagnifierControl@@AEAA@PEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@3@Z @ 0x18003DD90 (--0CMagnifierControl@@AEAA@PEAUIDwmChannel@@PEAUIDCompositionDesktopDevicePartner@@PEAUIDComposi.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x18003DE40 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifierControl::Create(
        struct IDwmChannel *a1,
        struct IDCompositionDesktopDevicePartner *a2,
        struct IDCompositionDesktopTargetPartner *a3,
        struct CVisual *a4,
        struct CVisual *a5,
        struct CMagnifierControl **a6)
{
  CMagnifierControl *v10; // rax
  volatile signed __int32 *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi

  v10 = (CMagnifierControl *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               144LL);
  if ( v10 )
    v11 = (volatile signed __int32 *)CMagnifierControl::CMagnifierControl(v10, a1, a2, a3, a4, a5);
  else
    v11 = 0LL;
  if ( v11 )
  {
    v12 = CMagnifierControl::Initialize((CMagnifierControl *)v11);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x6Cu);
    }
    else
    {
      *a6 = (struct CMagnifierControl *)v11;
      _InterlockedIncrement(v11 + 2);
    }
    CBaseObject::Release((CBaseObject *)v11);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Au);
  }
  return v13;
}
