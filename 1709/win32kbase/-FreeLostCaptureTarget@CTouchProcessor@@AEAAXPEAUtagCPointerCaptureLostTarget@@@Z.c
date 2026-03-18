/*
 * XREFs of ?FreeLostCaptureTarget@CTouchProcessor@@AEAAXPEAUtagCPointerCaptureLostTarget@@@Z @ 0x1C011D77C
 * Callers:
 *     ?PopLostCaptureTarget@CTouchProcessor@@AEAA?AVCInputDest@@G@Z @ 0x1C0122B98 (-PopLostCaptureTarget@CTouchProcessor@@AEAA-AVCInputDest@@G@Z.c)
 *     ?RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x1C0125314 (-RemoveLostCaptureTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreeLostCaptureTarget(
        CTouchProcessor *this,
        struct tagCPointerCaptureLostTarget ***a2)
{
  struct tagCPointerCaptureLostTarget **v2; // rcx
  struct tagCPointerCaptureLostTarget **v4; // rax

  v2 = *a2;
  if ( (*a2)[1] != (struct tagCPointerCaptureLostTarget *)a2
    || (v4 = a2[1], *v4 != (struct tagCPointerCaptureLostTarget *)a2) )
  {
    __fastfail(3u);
  }
  *v4 = (struct tagCPointerCaptureLostTarget *)v2;
  v2[1] = (struct tagCPointerCaptureLostTarget *)v4;
  CInputDest::SetEmpty((CInputDest *)(a2 + 2));
  Win32FreePool((__int64)a2);
}
