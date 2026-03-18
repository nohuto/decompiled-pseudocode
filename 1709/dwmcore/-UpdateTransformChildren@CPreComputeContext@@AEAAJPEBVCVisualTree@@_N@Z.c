/*
 * XREFs of ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180055130
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180031A14 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x1800B0634 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 */

__int64 __fastcall CPreComputeContext::UpdateTransformChildren(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        bool a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  unsigned int v8; // ebp
  __int64 i; // rsi
  struct CComposition *v10; // r10
  struct CVisual *v11; // r11
  int v13; // eax

  v3 = 0;
  v4 = 0;
  v8 = *(_DWORD *)(*(_QWORD *)this + 1016LL);
  if ( v8 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      if ( CVisualTree::IsInTree(
             (const struct CVisual **)a2,
             *(const struct CVisual **)(i + *(_QWORD *)(*(_QWORD *)this + 992LL))) )
      {
        v13 = CPreComputeHelper::DirtyIfChanged((CPreComputeContext *)((char *)this + 936), v10, a2, v11, a3);
        v3 = v13;
        if ( v13 < 0 )
          break;
      }
      if ( ++v4 >= v8 )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x420u);
  }
  return v3;
}
