/*
 * XREFs of ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C011817C
 * Callers:
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C0114380 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01149E0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C0114E74 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01153BC (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     ApiSetPointerInfoCopyOutHelperInternal @ 0x1C014102C (ApiSetPointerInfoCopyOutHelperInternal.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::PointerInfoCopyOutHelper(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        struct tagPOINTER_INFO *a6)
{
  int v7; // esi

  v7 = (int)a3;
  if ( *((_QWORD *)this + 13) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  return ApiSetPointerInfoCopyOutHelperInternal((int)a2 + 224, *(_QWORD *)((char *)a2 + 212), v7, a4, a5, (__int64)a6);
}
