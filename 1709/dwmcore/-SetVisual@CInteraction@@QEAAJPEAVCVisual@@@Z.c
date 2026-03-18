/*
 * XREFs of ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180091874
 * Callers:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z @ 0x1800AA9E4 (-GetWeakReferenceBase@CComposition@@AEAAJPEAVCResource@@PEAPEAVCWeakReferenceBase@@@Z.c)
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800BE68C (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     McTemplateU0pp @ 0x18016A584 (McTemplateU0pp.c)
 */

__int64 __fastcall CInteraction::SetVisual(CInteraction *this, struct CVisual *a2)
{
  __int64 v2; // rbx
  struct CWeakReferenceBase **v3; // rdi
  __int64 v4; // rax
  unsigned int v7; // esi
  struct CVisual *v8; // rax
  signed int WeakReferenceBase; // eax

  v2 = 0LL;
  v3 = (struct CWeakReferenceBase **)((char *)this + 136);
  v4 = *((_QWORD *)this + 17);
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WeakReferenceBase, 0xBDu);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    if ( *v3 )
      v2 = *((_QWORD *)*v3 + 1);
    McTemplateU0pp(this, &INTERACTION_VISUAL_UPDATE, (char *)this + 8, v2);
  }
  return v7;
}
