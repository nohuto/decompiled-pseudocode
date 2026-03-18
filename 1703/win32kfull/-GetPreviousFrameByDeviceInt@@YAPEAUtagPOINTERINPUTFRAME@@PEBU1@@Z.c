/*
 * XREFs of ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C0198FFC (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01990A0 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0199608 (-GetPrevMTNodeTarget@@YAPEAUtagWND@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     xxxSetManipulationInputTarget @ 0x1C019B290 (xxxSetManipulationInputTarget.c)
 *     ?GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z @ 0x1C01C5D10 (-GetPointerDataArrivalTimes@@YAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z @ 0x1C01C5E10 (-GetPointerDataQPCTimeList@@YAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01C5EFC (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01C61F4 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01C669C (-GetPointerRawDataWithHistory@@YAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01C8DDC (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall GetPreviousFrameByDeviceInt(struct _LIST_ENTRY **a1)
{
  struct _LIST_ENTRY *v1; // rdx
  struct _LIST_ENTRY *result; // rax

  v1 = *a1;
  if ( *a1 == &gFrameListHead )
    return 0LL;
  do
  {
    result = v1;
    if ( v1[3].Blink == a1[7] )
      break;
    v1 = v1->Flink;
  }
  while ( v1 != &gFrameListHead );
  if ( v1 == &gFrameListHead )
    return 0LL;
  if ( HIDWORD(result[2].Blink) == LODWORD(result[2].Blink) )
    return 0LL;
  return result;
}
