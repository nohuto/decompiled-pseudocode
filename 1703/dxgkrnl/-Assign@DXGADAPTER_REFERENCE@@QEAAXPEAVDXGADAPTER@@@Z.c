/*
 * XREFs of ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C
 * Callers:
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C003A580 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z @ 0x1C016B760 (-UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01AE5E4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C01B01F0 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01B02D0 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C01B03B0 (OutputDuplPresent.c)
 *     _lambda_2c9284ca1958a319979d23566d67cec5_::_lambda_invoker_cdecl_ @ 0x1C01B6D80 (_lambda_2c9284ca1958a319979d23566d67cec5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DXGADAPTER_REFERENCE::Assign(DXGADAPTER **this, struct DXGADAPTER *a2)
{
  DXGADAPTER *v4; // rcx

  v4 = *this;
  if ( v4 )
    DXGADAPTER::ReleaseReference(v4);
  *this = a2;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    this[1] = (DXGADAPTER *)-1LL;
  }
}
