/*
 * XREFs of ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01252E4
 * Callers:
 *     ?AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z @ 0x1C0119C20 (-AdjustCaptureOnRetrieval@CTouchProcessor@@QEAAXUtagINPUTDEST@@I_KHHHHUtagMSG@@@Z.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C011D7C4 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C011F634 (-GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0125E1C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CTouchProcessor::ReleasePointerCaptureInt(CTouchProcessor *this, struct CPointerCaptureInfo *a2)
{
  if ( *(_DWORD *)a2 )
  {
    CInputDest::SetEmpty((struct CPointerCaptureInfo *)((char *)a2 + 8));
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 52) = 0;
  }
}
