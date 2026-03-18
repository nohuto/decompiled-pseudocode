/*
 * XREFs of ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800408C0
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180045C5C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18007D8B8 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BD448 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800C1B10 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::Initialize(CDrawingContext *this)
{
  CLegacyMilBrushRealizer *v2; // rax
  CManipulationFrame *v3; // rdi
  CContentBounder **v4; // rsi
  int v5; // eax
  int v6; // edi
  CContentBounder *v7; // rcx
  unsigned int v9; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CLegacyMilBrushRealizer *)HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v2);
  *(_QWORD *)v3 = &CImmediateBrushRealizer::`vftable';
  CManipulationFrame::AddRef(v3);
  *((_QWORD *)this + 391) = v3;
  v4 = (CContentBounder **)((char *)this + 4016);
  v5 = CContentBounder::Create(*((struct CComposition **)this + 2), (struct CContentBounder **)this + 502);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x97u);
  }
  else
  {
    v7 = *v4;
    *((_QWORD *)this + 467) = *v4;
    *((_QWORD *)this + 497) = v7;
  }
  if ( v6 < 0 )
  {
    ReleaseInterface<CRemoteApplicationWindow>((char *)this + 3128);
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 344);
    ReleaseInterface<ID2D1Geometry>((char *)this + 352);
    if ( *v4 )
      CContentBounder::`scalar deleting destructor'(*v4, v9);
    *v4 = 0LL;
    *((_QWORD *)this + 467) = 0LL;
    *((_QWORD *)this + 497) = 0LL;
  }
  return (unsigned int)v6;
}
