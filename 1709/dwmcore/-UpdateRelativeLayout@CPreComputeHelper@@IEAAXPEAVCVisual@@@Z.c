/*
 * XREFs of ?UpdateRelativeLayout@CPreComputeHelper@@IEAAXPEAVCVisual@@@Z @ 0x18011DE94
 * Callers:
 *     ?ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1801D0370 (-ProcessTransformParentStack@CLightPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 * Callees:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004F460 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 */

void __fastcall CPreComputeHelper::UpdateRelativeLayout(CPreComputeHelper *this, struct CVisual *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a2 + 10);
  if ( !v2 || (*(_BYTE *)(v2 + 88) & 1) != 0 )
  {
    if ( CVisual::ComputeLayoutSize(a2) )
      *((_DWORD *)a2 + 22) |= 1u;
  }
}
