/*
 * XREFs of ?Initialize@CDrawingContext@@EEAAJXZ @ 0x18006E500
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CLegacyMilBrushRealizer@@IEAA@XZ @ 0x18001D964 (--0CLegacyMilBrushRealizer@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C44D4 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?AddRef@CManipulationFrame@@UEAAKXZ @ 0x1800CA1F0 (-AddRef@CManipulationFrame@@UEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CDrawingContext::Initialize(CDrawingContext *this)
{
  CLegacyMilBrushRealizer *v2; // rax
  CManipulationFrame *v3; // rdi
  __int64 *v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CLegacyMilBrushRealizer *)HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
  v3 = v2;
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  CLegacyMilBrushRealizer::CLegacyMilBrushRealizer(v2);
  *(_QWORD *)v3 = &CImmediateBrushRealizer::`vftable';
  CManipulationFrame::AddRef(v3);
  *((_QWORD *)this + 391) = v3;
  v4 = (__int64 *)((char *)this + 4016);
  v5 = CContentBounder::Create(*((struct CComposition **)this + 2), (struct CContentBounder **)this + 502);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xA2u);
  }
  else
  {
    v7 = *v4;
    *((_QWORD *)this + 467) = *v4;
    *((_QWORD *)this + 497) = v7;
  }
  return v6;
}
