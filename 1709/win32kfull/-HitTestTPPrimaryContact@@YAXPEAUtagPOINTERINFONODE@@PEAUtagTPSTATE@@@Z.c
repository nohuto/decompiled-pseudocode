/*
 * XREFs of ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01AEAC8
 * Callers:
 *     ?CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAX@Z @ 0x1C01AD764 (-CacheGestureState@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 */

void __fastcall HitTestTPPrimaryContact(struct tagPOINTERINFONODE *a1, struct tagTPSTATE *a2)
{
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v6[80]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v7; // [rsp+A0h] [rbp-60h]
  int v8; // [rsp+ACh] [rbp-54h]

  xxxPointerSpeedHitTest(0, (struct tagINPUTDEST *)v6);
  v4 = 0LL;
  if ( v8 == 2 )
    v4 = v7;
  if ( v4 )
  {
    v5[1] = v4;
    v5[0] = (char *)a2 + 1672;
    HMAssignmentLock(v5);
  }
  *((_QWORD *)a2 + 212) = *((_QWORD *)a1 + 17);
}
