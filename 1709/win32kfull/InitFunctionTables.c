/*
 * XREFs of InitFunctionTables @ 0x1C03836D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *InitFunctionTables())(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, ULONG64 a5)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *result)(struct tagWND *, __int64, __int64, __int64, ULONG64); // rax

  v0 = 0LL;
  v1 = 304LL;
  *(_QWORD *)(gpsi + 272LL) = 4LL;
  *(_QWORD *)(gpsi + 280LL) = 0LL;
  *(_QWORD *)(gpsi + 288LL) = 3LL;
  *(_QWORD *)(gpsi + 296LL) = 1LL;
  do
  {
    *(_QWORD *)(v1 + gpsi) = 0LL;
    v1 += 8LL;
  }
  while ( v1 < 320 );
  *(_WORD *)(gpsi + 334LL) = 400;
  *(_WORD *)(gpsi + 340LL) = 416;
  *(_WORD *)(gpsi + 328LL) = 480;
  *(_WORD *)(gpsi + 332LL) = 424;
  *(_WORD *)(gpsi + 384LL) = 456;
  v2 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 400;
  do
  {
    v3 = v0++ & 0x1F;
    mpFnidPfn[v3] = (__int64)IsMulDestroyBrushInternalSupported;
    --v2;
  }
  while ( v2 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C03269F8 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0326A00 = (__int64)xxxWrapMenuWindowProc;
  qword_1C0326A08 = (__int64)xxxWrapDesktopWndProc;
  qword_1C0326AA8 = (__int64)xxxWrapSendMessage;
  qword_1C0326A78 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C0326A80 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0326AB0 = (__int64)xxxSendMessageFF;
  qword_1C0326AB8 = (__int64)xxxSendMessageEx;
  qword_1C0326AC0 = (__int64)xxxWrapCallWindowProc;
  qword_1C0326AC8 = (__int64)xxxWrapSendMessageBSM;
  qword_1C0326A20 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0326AD8 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0326AE0 = (__int64)xxxWrapSendMessageCallback;
  qword_1C0326A10 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0326A18 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}
