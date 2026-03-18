/*
 * XREFs of GetPointerInfoSize @ 0x1C01296AC
 * Callers:
 *     ?BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B284 (-BuildManipulationInputInfo@CTouchProcessor@@QEAAXPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z @ 0x1C011B488 (-BuildPostInputInfoFrame@CTouchProcessor@@QEAAHPEAXIPEBUCPointerInputFrame@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C0120E90 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01211B4 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01212B0 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C012157C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerInfoSize(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 96LL;
  v2 = v1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return 120LL;
    if ( v3 != 2 )
      return 0LL;
  }
  return 144LL;
}
