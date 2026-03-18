/*
 * XREFs of ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800A99D0
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B4E20 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18004A92C (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800B4DE0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z @ 0x1800C588C (--$ReleaseInterface@$$CBVCDisplay@@@@YAXAEAPEBVCDisplay@@@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C5A08 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CC240 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
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
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v2);
  *(_QWORD *)v3 = &CImmediateBrushRealizer::`vftable';
  CManipulationFrame::AddRef(v3);
  *((_QWORD *)this + 379) = v3;
  v4 = (CContentBounder **)((char *)this + 3952);
  v5 = CContentBounder::Create(*((struct CComposition **)this + 2), (struct CContentBounder **)this + 494);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x90u);
  }
  else
  {
    v7 = *v4;
    *((_QWORD *)this + 455) = *v4;
    *((_QWORD *)this + 487) = v7;
  }
  if ( v6 < 0 )
  {
    ReleaseInterface<CDisplay const>((char *)this + 3032);
    ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 44);
    ReleaseInterface<ID2D1Geometry>((__int64 *)this + 45);
    if ( *v4 )
      CContentBounder::`scalar deleting destructor'(*v4, v9);
    *v4 = 0LL;
    *((_QWORD *)this + 455) = 0LL;
    *((_QWORD *)this + 487) = 0LL;
  }
  return (unsigned int)v6;
}
