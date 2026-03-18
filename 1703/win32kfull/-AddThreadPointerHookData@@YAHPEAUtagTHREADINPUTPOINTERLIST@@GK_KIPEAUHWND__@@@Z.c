/*
 * XREFs of ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01C5310
 * Callers:
 *     PrepareSentPointerMessageForClient @ 0x1C01BB47C (PrepareSentPointerMessageForClient.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C6E90 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     ?ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01C740C (-ReferenceMsgData@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

__int64 __fastcall AddThreadPointerHookData(
        struct tagTHREADINPUTPOINTERLIST *a1,
        __int16 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        HWND a6)
{
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rbx

  if ( *((_QWORD *)a1 + 3) )
    return 0LL;
  v11 = Win32AllocPoolZInit(56LL, 1953526613LL);
  v12 = v11;
  if ( !v11 )
    return 0LL;
  *(_DWORD *)(v11 + 48) &= ~1u;
  *(_WORD *)(v11 + 16) = a2;
  *(_DWORD *)(v11 + 20) = a3;
  *(_QWORD *)(v11 + 24) = a4;
  *(_DWORD *)(v11 + 32) = a5;
  *(_QWORD *)(v11 + 40) = a6;
  ReferenceMsgData(a4, 5LL, v11);
  result = 1LL;
  *((_QWORD *)a1 + 3) = v12;
  return result;
}
