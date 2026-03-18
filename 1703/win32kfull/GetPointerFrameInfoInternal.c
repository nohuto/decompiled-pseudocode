/*
 * XREFs of GetPointerFrameInfoInternal @ 0x1C01BAFD8
 * Callers:
 *     NtUserGetPointerInfoList @ 0x1C0005710 (NtUserGetPointerInfoList.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01C61F4 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6880 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall GetPointerFrameInfoInternal(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned __int64 ThreadPointerData; // r10
  __int64 v11; // rcx
  unsigned int v14[6]; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, v14, &v15, 0LL);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !v15 )
  {
    v11 = 5LL;
    goto LABEL_3;
  }
  if ( a3 != 1 && a3 != v14[0] )
  {
    v11 = 1629LL;
    goto LABEL_3;
  }
  if ( !((gdwMitConfig & 4) != 0
       ? CTouchProcessor::GetPointerFrameDataWithHistory(gpTouchProcessor, ThreadPointerData, a3, a4, a5, a6, a7, a8)
       : GetPointerFrameDataWithHistory(ThreadPointerData, a3, a4, a5, a6, a7, a8)) )
  {
LABEL_2:
    v11 = 87LL;
LABEL_3:
    UserSetLastError(v11);
    return 0LL;
  }
  return 1LL;
}
