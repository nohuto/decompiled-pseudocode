/*
 * XREFs of ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C01A50EC
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C01A3DBC (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01CB530 (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F5F6C (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagQ *__fastcall GetNodeQueue(const struct tagPOINTERINFONODE *a1, int *a2)
{
  __int64 v4; // rax
  int *v6; // [rsp+20h] [rbp-F8h]
  int v7[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v8[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+90h] [rbp-88h]
  int v10; // [rsp+9Ch] [rbp-7Ch]

  *a2 = 0;
  v4 = ValidateHwnd(*((_QWORD *)a1 + 10));
  *(_QWORD *)v7 = v4;
  if ( v4 )
    return *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 408LL);
  if ( gbValidateHandleForIL
    && (gbValidateHandleForIL = 0,
        *(_QWORD *)v7 = ValidateHwnd(*((_QWORD *)a1 + 10)),
        gbValidateHandleForIL = 1,
        *(_QWORD *)v7) )
  {
    *a2 = 1;
  }
  else if ( (*(_DWORD *)a1 & 0x400) == 0 )
  {
    PointerList::GetPointerCapture(*((PointerList **)a1 + 2), 0LL, (int)v7, 0LL, v6);
    v4 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 )
      return *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 408LL);
    xxxPointerSpeedHitTest(0, (struct tagINPUTDEST *)v8);
    v4 = 0LL;
    if ( v10 == 2 )
      v4 = v9;
    if ( v4 )
      return *(struct tagQ **)(*(_QWORD *)(v4 + 16) + 408LL);
  }
  return 0LL;
}
