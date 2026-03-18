/*
 * XREFs of GetPointerInfoHistoryInternal @ 0x1C01BB0EC
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0005710 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z @ 0x1C01C5EFC (-GetPointerDataWithHistory@@YAH_KKKPEAIPEAE@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerInfoHistoryInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  unsigned __int64 ThreadPointerData; // r10
  __int64 v9; // rcx
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, &v12, 0LL, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( a3 != 1 && a3 != v12 )
  {
    v9 = 1629LL;
    goto LABEL_3;
  }
  if ( !((gdwMitConfig & 4) != 0
       ? CTouchProcessor::GetPointerDataWithHistory(gpTouchProcessor, ThreadPointerData, a3, a4, a5, a6)
       : GetPointerDataWithHistory(ThreadPointerData, a3, a4, a5, a6)) )
  {
LABEL_2:
    v9 = 87LL;
LABEL_3:
    UserSetLastError(v9);
    return 0LL;
  }
  return 1LL;
}
