/*
 * XREFs of ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002AB38
 * Callers:
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C002AA54 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C00F2FB4 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01C8178 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     OutputDuplGetDebugInfo @ 0x1C01C9FAC (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01CA08C (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplPresent @ 0x1C01CA16C (OutputDuplPresent.c)
 *     _lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_ @ 0x1C01CEE00 (_lambda_ed10ad305aea6a5ff601fc5b120cc334_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER_REFERENCE::Assign(DXGADAPTER **this, struct DXGADAPTER *a2)
{
  DXGADAPTER *v4; // rcx

  v4 = *this;
  if ( v4 )
    DXGADAPTER::ReleaseReferenceNoTracking(v4);
  *this = a2;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    this[1] = (DXGADAPTER *)-1LL;
  }
}
