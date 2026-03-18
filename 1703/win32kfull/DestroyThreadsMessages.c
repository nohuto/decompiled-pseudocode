/*
 * XREFs of DestroyThreadsMessages @ 0x1C00D8B00
 * Callers:
 *     <none>
 * Callees:
 *     FreeQEntry @ 0x1C00C9AFC (FreeQEntry.c)
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01B205C (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall DestroyThreadsMessages(struct tagMLIST *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // rsi

  v2 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v6 = *(_QWORD *)v2;
      if ( *(_QWORD *)(v2 + 104) == a2 )
      {
        if ( *((_QWORD *)a1 + 6) == v2 )
          *((_QWORD *)a1 + 6) = 0LL;
        CleanEventMessage((struct tagQMSG *)v2);
        result = DelQEntry((__int64)a1, v2, 1);
      }
      v2 = v6;
    }
    while ( v6 );
  }
  v5 = *((_QWORD *)a1 + 3);
  if ( v5 )
  {
    do
    {
      v8 = *(_QWORD *)(v5 + 8);
      if ( *(_QWORD *)(v5 + 104) == a2 )
      {
        RemoveQMsgFromDeferList(a1, (struct tagQMSG *)v5);
        CleanEventMessage((struct tagQMSG *)v5);
        result = FreeQEntry((unsigned int *)v5);
      }
      v5 = v8;
    }
    while ( v8 );
  }
  return result;
}
