/*
 * XREFs of ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1C01207B4
 * Callers:
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C01206C8 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1C0120720 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C0125D14 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

struct CInputDest *__fastcall CTouchProcessor::GetPointerCaptureInt(
        CTouchProcessor *this,
        struct CPointerCaptureInfo *a2,
        int *a3)
{
  CInputDest *v3; // r10
  CInputDest *v6; // r10
  CTouchProcessor *v7; // rcx

  v3 = (struct CPointerCaptureInfo *)((char *)a2 + 8);
  if ( *((_DWORD *)a2 + 2) && (CInputDest::TestWindowFlag(v3, 1152) || CInputDest::TestWindowFlag(v6, 896)) )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
      CTouchProcessor::ReleasePointerCaptureInt(v7, a2);
    if ( a3 )
      *a3 = 0;
    return 0LL;
  }
  else
  {
    if ( a3 )
      *a3 = *((_DWORD *)a2 + 52);
    return (struct CInputDest *)((unsigned __int64)v3 & -(__int64)(*(_DWORD *)v3 != 0));
  }
}
