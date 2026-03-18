/*
 * XREFs of ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1801D01E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800B100C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x18011DE70 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::BuildTransformParentStack(
        CLightPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  unsigned int v5; // edi
  struct CVisual *v6; // rbx
  unsigned __int64 v9; // r14
  struct _LIST_ENTRY *TreeData; // rax
  struct CVisual *v11; // rsi
  char v12; // r10
  struct CVisual *v13; // rax
  unsigned int *v14; // r11
  signed int v15; // eax
  struct CVisual *v17; // [rsp+70h] [rbp+18h] BYREF
  struct CVisual *v18; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a4;
  v17 = a4;
  if ( a4 == *((struct CVisual **)a3 + 3) )
  {
LABEL_7:
    v12 = 1;
  }
  else
  {
    v9 = a5;
    while ( 1 )
    {
      TreeData = CVisual::FindTreeData(v6, a3);
      if ( TreeData )
      {
        if ( TreeData[7].Blink >= (struct _LIST_ENTRY *)v9 )
          break;
      }
      v11 = (struct CVisual *)*((_QWORD *)v6 + 10);
      CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 2, &v17);
      if ( v11 )
      {
        v6 = v11;
        v17 = v11;
        if ( v11 != *((struct CVisual **)a3 + 3) )
          continue;
      }
      goto LABEL_7;
    }
    v12 = 0;
  }
  v13 = 0LL;
  v14 = (unsigned int *)((char *)this + 8);
  v18 = 0LL;
  if ( *((_DWORD *)this + 2) )
  {
    v15 = CWatermarkStack<CVisual *,64,2,10>::Top((int *)this + 2, &v18);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x26Cu);
      return v5;
    }
    v13 = v18;
  }
  if ( v12 && v13 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(v14, &v17);
  return v5;
}
