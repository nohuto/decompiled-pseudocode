/*
 * XREFs of ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x18007D534
 * Callers:
 *     ?GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@_NPEAPEAVCResource@@4PEAUMilPoint3F@@@Z @ 0x180005718 (-GetSurfaceFromThumbnail@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000B810 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z @ 0x1800752E0 (-MakeStatic@CSecondaryWindowRepresentation@@QEAAX_NPEBUMilPointAndSizeL@@PEAPEAVCResource@@@Z.c)
 * Callees:
 *     ?HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z @ 0x18007D594 (-HasCVIOfCompatibleSize@CWindowSnapshot@@QEAA_NPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowSnapshot::GetCVI(
        CWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CResource **a3,
        float *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax

  v7 = -2147023434;
  if ( CWindowSnapshot::HasCVIOfCompatibleSize(this, a2) )
  {
    *a3 = (struct CResource *)*((_QWORD *)this + 6);
    v8 = *((_QWORD *)this + 6);
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v7 = 0;
    *a4 = *((float *)this + 18);
  }
  return v7;
}
