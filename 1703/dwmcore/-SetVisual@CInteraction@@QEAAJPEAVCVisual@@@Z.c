/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18004B67C
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x18005B6C4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800C1D18 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  struct CWeakReferenceBase **v3; // rdi
  __int64 v4; // rax
  unsigned int v7; // esi
  struct CVisual *v8; // rax
  int WeakReferenceBase; // eax

  v2 = 0LL;
  v3 = (struct CWeakReferenceBase **)((char *)this + 120);
  v4 = *((_QWORD *)this + 15);
  v7 = 0;
  if ( v4 )
    v8 = *(struct CVisual **)(v4 + 8);
  else
    v8 = 0LL;
  if ( a2 != v8
    && (ReleaseInterface<CWeakReference<CVisual>>(v3), a2)
    && (WeakReferenceBase = CComposition::GetWeakReferenceBase(*((CComposition **)this + 3), a2, v3),
        v7 = WeakReferenceBase,
        WeakReferenceBase < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WeakReferenceBase, 0xB7u);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( *v3 )
      v2 = *((_QWORD *)*v3 + 1);
    Template_xx(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
  }
  return v7;
}
