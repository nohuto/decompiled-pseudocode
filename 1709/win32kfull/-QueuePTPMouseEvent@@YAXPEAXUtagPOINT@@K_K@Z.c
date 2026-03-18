/*
 * XREFs of ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01AEF48
 * Callers:
 *     ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01B000C (-xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE.c)
 *     ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01B0D34 (-xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z.c)
 *     ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800 (-xxxDoTPMouseProcessing@@YA-AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@.c)
 *     ?xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z @ 0x1C01B39A8 (-xxxSend2FingerTap@@YAXPEAUtagTPSTATE@@_K@Z.c)
 *     SendPTPAsMouse @ 0x1C01B4230 (SendPTPAsMouse.c)
 *     xxxSendMouseDownAtPoint @ 0x1C01B4B64 (xxxSendMouseDownAtPoint.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B4C2C (xxxSendMouseUpIfPending.c)
 * Callees:
 *     <none>
 */

void __fastcall QueuePTPMouseEvent(void *a1, struct tagPOINT a2, int a3, __int64 a4)
{
  __int64 v8; // rcx

  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( (unsigned int)gdwPTPMouseEvents < 0x40 )
  {
    ++gdwPTPMouseEvents;
    v8 = 32LL * (((_BYTE)gdwPTPQueueHead + 1) & 0x3F);
    gdwPTPQueueHead = ((_BYTE)gdwPTPQueueHead + 1) & 0x3F;
    *(_QWORD *)((char *)&gPTPMouseEventQueue + v8) = a1;
    *(_DWORD *)((char *)&gPTPMouseEventQueue + v8 + 16) = a3;
    *(struct tagPOINT *)((char *)&gPTPMouseEventQueue + v8 + 8) = a2;
    *(_QWORD *)((char *)&gPTPMouseEventQueue + v8 + 24) = a4;
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    KeSetEvent(gpevtPTPOperation, 1, 0);
  }
  else
  {
    ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
    ++*((_DWORD *)&gTPTelemState + 12);
  }
}
