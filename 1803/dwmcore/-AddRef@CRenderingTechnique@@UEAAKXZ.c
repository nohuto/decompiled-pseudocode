/*
 * XREFs of ?AddRef@CRenderingTechnique@@UEAAKXZ @ 0x180070C70
 * Callers:
 *     ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x180073C98 (--0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V-$span@PEBVCDrawListBrush@@$0-0@gsl@@V-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderingTechnique::AddRef(CRenderingTechnique *this)
{
  return (***((__int64 (__fastcall ****)(_QWORD))this + 1))(*((_QWORD *)this + 1));
}
