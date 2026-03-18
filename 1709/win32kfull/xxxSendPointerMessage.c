/*
 * XREFs of xxxSendPointerMessage @ 0x1C01BFFC8
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1C01EEF00 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxSendPointerMessageWorker @ 0x1C01C0044 (xxxSendPointerMessageWorker.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB58C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendPointerMessage(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v9; // rcx
  unsigned __int64 ThreadPointerData; // rax
  HWND *v12; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 1080) )
  {
    v9 = 5LL;
LABEL_3:
    UserSetLastError(v9, a2);
    return 0LL;
  }
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1056), a2, 0LL, 0LL, v12);
  if ( !ThreadPointerData )
  {
    v9 = 87LL;
    goto LABEL_3;
  }
  return xxxSendPointerMessageWorker(a3, a4, ThreadPointerData, a5, a6, a7);
}
