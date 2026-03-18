/*
 * XREFs of ?BuildTransformParentStack@CLightPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180212600
 * Callers:
 *     <none>
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800BFCFC (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x1801409E8 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CLightPreComputeHelper::BuildTransformParentStack(
        CLightPreComputeHelper *this,
        struct CComposition *a2,
        struct CVisual **a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  unsigned int v5; // esi
  struct CVisual *v6; // rdi
  bool v9; // bl
  unsigned __int64 v10; // r12
  struct _LIST_ENTRY *TreeData; // rax
  struct CVisual *v12; // rbp
  bool v13; // zf
  struct CVisual *v14; // rax
  unsigned int *v15; // r10
  int v16; // eax
  struct CVisual *v18; // [rsp+70h] [rbp+18h] BYREF
  struct CVisual *v19; // [rsp+78h] [rbp+20h] BYREF

  v5 = 0;
  v18 = a4;
  v6 = a4;
  v9 = a4 == a3[3];
  if ( a4 != a3[3] )
  {
    v10 = a5;
    do
    {
      TreeData = CVisual::FindTreeData(v6, (const struct CVisualTree *)a3);
      if ( TreeData )
      {
        if ( TreeData[7].Blink >= (struct _LIST_ENTRY *)v10 )
          break;
      }
      v12 = (struct CVisual *)*((_QWORD *)v6 + 10);
      CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 2, &v18);
      if ( !v12 )
      {
        v9 = 1;
        break;
      }
      v13 = v12 == a3[3];
      v6 = v12;
      v18 = v12;
      v9 = v13;
    }
    while ( !v13 );
  }
  v14 = 0LL;
  v15 = (unsigned int *)((char *)this + 8);
  v19 = 0LL;
  if ( *((_DWORD *)this + 2) )
  {
    v16 = CWatermarkStack<CVisual *,64,2,10>::Top((int *)this + 2, &v19);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x259u);
      return v5;
    }
    v14 = v19;
  }
  if ( v9 && v14 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(v15, &v18);
  return v5;
}
