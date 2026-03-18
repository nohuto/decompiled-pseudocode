/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C624C
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18009AFC4 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x18009EE88 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18009F5F0 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct COcclusionContext **a2)
{
  COcclusionContext *v4; // rax
  struct ICoverageSet **v5; // rax
  COcclusionContext *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // edx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (COcclusionContext *)HeapAlloc(WPF::g_processHeap, 0, 0x448uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5 = (struct ICoverageSet **)COcclusionContext::COcclusionContext(v4, a1);
  v6 = (COcclusionContext *)v5;
  if ( v5 )
  {
    v7 = COcclusionContext::Initialize(v5);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x46u);
      COcclusionContext::`scalar deleting destructor'(v6, v10);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x44u);
  }
  return v8;
}
