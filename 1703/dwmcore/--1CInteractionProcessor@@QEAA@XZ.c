/*
 * XREFs of ??1CInteractionProcessor@@QEAA@XZ @ 0x1800B2968
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x18004B464 (--1CInteraction@@MEAA@XZ.c)
 *     ??_GCInteractionRoot@@UEAAPEAXI@Z @ 0x1801925EC (--_GCInteractionRoot@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CInteractionProcessor::~CInteractionProcessor(CInteractionProcessor *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 46);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 42);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 31);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 20);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 11);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this);
}
