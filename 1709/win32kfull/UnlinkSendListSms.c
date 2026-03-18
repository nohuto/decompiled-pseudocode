/*
 * XREFs of UnlinkSendListSms @ 0x1C00A17B0
 * Callers:
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C0046548 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 *     xxxReceiverDied @ 0x1C004911C (xxxReceiverDied.c)
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     SuspendThreadQueue @ 0x1C0105060 (SuspendThreadQueue.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 *     _FreeTouchInputInfo @ 0x1C01BD5C0 (_FreeTouchInputInfo.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01CC234 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rax
  __int64 **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 26);
  if ( v2 == 576 )
  {
    FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v2 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0
    && (IsPointerInputMessage(*((_DWORD *)a1 + 26)) && v3 != 595 || v3 == 528 && *((_WORD *)a1 + 44) == 582) )
  {
    UnreferenceMsgData(a1[12], 6LL, a1);
  }
  v4 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  HMAssignmentUnlock(a1 + 14);
  v8 = a1[15];
  if ( v8 )
    Win32FreePool(v8, v6, v7);
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
