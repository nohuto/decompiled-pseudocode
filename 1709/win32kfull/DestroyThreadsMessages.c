/*
 * XREFs of DestroyThreadsMessages @ 0x1C00C4FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0009E8C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C009EC10 (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C00CD688 (FreeQEntry.c)
 */

_UNKNOWN **__fastcall DestroyThreadsMessages(_QWORD *a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  struct tagMLIST *v3; // r14
  __int64 v5; // rbx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (struct tagMLIST *)(a1 + 3);
  v5 = a1[3];
  if ( v5 )
  {
    do
    {
      v8 = *(_QWORD *)v5;
      if ( *(_QWORD *)(v5 + 104) == a2 )
      {
        if ( a1[10] == v5 )
          a1[10] = 0LL;
        CleanEventMessage((struct tagQMSG *)v5);
        result = (_UNKNOWN **)DelQEntry(v3, v5);
      }
      v5 = v8;
    }
    while ( v8 );
  }
  v7 = a1[6];
  if ( v7 )
  {
    do
    {
      v9 = *(_QWORD *)(v7 + 8);
      if ( *(_QWORD *)(v7 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(v3, (struct tagQMSG *)v7);
        CleanEventMessage((struct tagQMSG *)v7);
        result = (_UNKNOWN **)FreeQEntry(v7);
      }
      v7 = v9;
    }
    while ( v9 );
  }
  return result;
}
