/*
 * XREFs of ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C01253A4
 * Callers:
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0121C2C (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0122450 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01224BC (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::RevalidateFrameProcessing(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        int a3,
        const struct CPointerInfoNode *a4,
        int a5)
{
  CPointerInfoNode *v6; // rcx
  struct tagTHREADINFO *v7; // r11
  int IsTargetSetForRetrieval; // eax
  unsigned int v9; // r10d
  unsigned int v10; // edx
  unsigned int v11; // ecx

  if ( a3 && (*((_DWORD *)a2 + 296) & 0x2000) == 0 || !(unsigned int)CPointerInfoNode::IsValid(a4) )
    return 0LL;
  IsTargetSetForRetrieval = CPointerInfoNode::IsTargetSetForRetrieval(v6, v7);
  v10 = v9;
  v11 = v9;
  LOBYTE(v10) = IsTargetSetForRetrieval != 0;
  LOBYTE(v11) = a5 != v9;
  LOBYTE(v9) = v10 == v11;
  return v9;
}
