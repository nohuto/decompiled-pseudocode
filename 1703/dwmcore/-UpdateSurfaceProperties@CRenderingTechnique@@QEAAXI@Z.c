/*
 * XREFs of ?UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z @ 0x180016E98
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderingTechnique::UpdateSurfaceProperties(CRenderingTechnique *this, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax

  v2 = *((_DWORD *)this + 61);
  if ( _bittest(&v2, a2) )
  {
    v3 = a2;
    v4 = 32 * (a2 + 4LL);
    v5 = (unsigned __int64)*((unsigned int *)this + 8 * v3 + 29) << 6;
    v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    v7 = *(_QWORD *)((char *)this + v4) - *(_QWORD *)(v5 + v6 + 20);
    if ( !v7 )
      v7 = *(_QWORD *)((char *)this + v4 + 8) - *(_QWORD *)(v5 + v6 + 28);
    if ( v7 )
    {
      *(_OWORD *)((char *)this + v4) = *(_OWORD *)(v5 + v6 + 20);
      *((_BYTE *)this + 252) = 1;
    }
  }
}
