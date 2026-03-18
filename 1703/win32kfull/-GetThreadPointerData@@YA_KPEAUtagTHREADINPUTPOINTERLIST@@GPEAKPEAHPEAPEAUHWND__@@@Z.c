/*
 * XREFs of ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880
 * Callers:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     GetPointerCursorIdInternal @ 0x1C01BAEAC (GetPointerCursorIdInternal.c)
 *     GetPointerFrameArrivalTimesInternal @ 0x1C01BAF48 (GetPointerFrameArrivalTimesInternal.c)
 *     GetPointerFrameInfoInternal @ 0x1C01BAFD8 (GetPointerFrameInfoInternal.c)
 *     GetPointerInfoHistoryInternal @ 0x1C01BB0EC (GetPointerInfoHistoryInternal.c)
 *     GetPointerInfoInternal @ 0x1C01BB1AC (GetPointerInfoInternal.c)
 *     GetPointerRawDataInternal @ 0x1C01BB260 (GetPointerRawDataInternal.c)
 *     GetPointerTransformInternal @ 0x1C01BB330 (GetPointerTransformInternal.c)
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01BB9C4 (xxxDiscardPointerFrameMessagesInternal.c)
 *     xxxPromotePointerToMouse @ 0x1C01BBA34 (xxxPromotePointerToMouse.c)
 *     xxxSendPointerMessage @ 0x1C01BC2D4 (xxxSendPointerMessage.c)
 *     IsPointerPrimary @ 0x1C01CA140 (IsPointerPrimary.c)
 *     NtUserGetPointerType @ 0x1C01DA2F0 (NtUserGetPointerType.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0209D58 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 */

struct _LIST_ENTRY *__fastcall GetThreadPointerData(
        struct _LIST_ENTRY *a1,
        __int16 a2,
        unsigned int *a3,
        int *a4,
        HWND *a5)
{
  struct _LIST_ENTRY *Blink; // r10
  unsigned int *v6; // r11

  Blink = a1[1].Blink;
  v6 = a3;
  if ( Blink )
  {
    if ( LOWORD(Blink[1].Flink) != a2 )
      return 0LL;
  }
  else
  {
    Blink = FindThreadPointerData(a1, a2);
  }
  if ( !Blink || ((__int64)Blink[3].Flink & 8) != 0 )
    return 0LL;
  if ( v6 )
    *v6 = HIDWORD(Blink[1].Flink);
  if ( a4 )
    *a4 = -((__int64)Blink[3].Flink & 1);
  if ( a5 )
    *a5 = (HWND)Blink[2].Blink;
  return Blink[1].Blink;
}
