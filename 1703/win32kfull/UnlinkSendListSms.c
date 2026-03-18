/*
 * XREFs of UnlinkSendListSms @ 0x1C0049380
 * Callers:
 *     xxxReceiveMessage @ 0x1C004F020 (xxxReceiveMessage.c)
 *     xxxReceiverDied @ 0x1C00C675C (xxxReceiverDied.c)
 *     SuspendThreadQueue @ 0x1C00FAC40 (SuspendThreadQueue.c)
 *     ?SenderDied@@YAXPEAUtagSMS@@@Z @ 0x1C01198C8 (-SenderDied@@YAXPEAUtagSMS@@@Z.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 *     ?UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C7618 (-UnreferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     _FreeGestureInfo @ 0x1C01EF7C0 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  int v5; // edx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 v8; // rcx

  v4 = *((_DWORD *)a1 + 26);
  if ( v4 == 576 )
  {
    FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v4 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState(*((unsigned int *)a1 + 26), *((unsigned int *)a1 + 26), a3)
     || v5 == 528 && *((_WORD *)a1 + 44) == 582) )
  {
    UnreferenceMsgData(a1[12], 6LL, a1);
  }
  v6 = (__int64 *)*a1;
  v7 = (__int64 **)a1[1];
  if ( *(__int64 **)(*a1 + 8) != a1 || *v7 != a1 )
    __fastfail(3u);
  *v7 = v6;
  v6[1] = (__int64)v7;
  HMAssignmentUnlock(a1 + 14);
  v8 = a1[15];
  if ( v8 )
    Win32FreePool(v8);
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
