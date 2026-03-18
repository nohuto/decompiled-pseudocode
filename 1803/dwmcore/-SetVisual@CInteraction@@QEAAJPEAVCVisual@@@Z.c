/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180028438
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004D868 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x180034994 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0pp @ 0x18014AD40 (McTemplateU0pp.c)
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
  v3 = (struct CWeakReferenceBase **)((char *)this + 104);
  v4 = *((_QWORD *)this + 13);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WeakReferenceBase, 0xC6u);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( *v3 )
      v2 = *((_QWORD *)*v3 + 1);
    McTemplateU0pp(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
  }
  return v7;
}
