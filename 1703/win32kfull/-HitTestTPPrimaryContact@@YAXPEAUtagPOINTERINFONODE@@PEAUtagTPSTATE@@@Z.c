/*
 * XREFs of ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01AB708
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AA438 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 * Callees:
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 */

void __fastcall HitTestTPPrimaryContact(struct tagPOINTERINFONODE *a1, struct tagTPSTATE *a2)
{
  __int64 v4; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = xxxPointerSpeedHitTest(0);
  if ( v4 )
  {
    v5[1] = v4;
    v5[0] = (char *)a2 + 1672;
    HMAssignmentLock(v5);
  }
  *((_QWORD *)a2 + 212) = *((_QWORD *)a1 + 17);
}
