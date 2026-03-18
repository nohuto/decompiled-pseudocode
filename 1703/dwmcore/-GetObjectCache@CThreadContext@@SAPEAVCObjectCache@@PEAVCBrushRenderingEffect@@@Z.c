/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x1800151A8
 * Callers:
 *     ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x180016330 (--_ECBrushRenderingEffect@@UEAAPEAXI@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CBrushRenderingEffect *a1)
{
  int Current; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
  {
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    JUMPOUT(0x180116944LL);
  }
  return (struct CThreadContext *)((char *)v4 + 104);
}
