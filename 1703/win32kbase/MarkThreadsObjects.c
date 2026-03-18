/*
 * XREFs of MarkThreadsObjects @ 0x1C0040960
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThread @ 0x1C0095C80 (HMChangeOwnerThread.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1)
{
  char *v1; // rbx
  _QWORD *v3; // rdi
  char *v4; // rsi
  unsigned __int8 v5; // dl
  __int64 result; // rax
  struct tagTHREADINFO *v7; // rdx

  v1 = (char *)qword_1C0189E38;
  v3 = gpKernelHandleTable;
  v4 = (char *)qword_1C0189E38 + 32 * (unsigned int)giheLast;
  if ( qword_1C0189E38 <= v4 )
  {
    do
    {
      v5 = v1[24];
      if ( v5 )
      {
        result = v5;
        if ( (*((_BYTE *)&unk_1C015ED5C + 24 * v5) & 2) == 0 && v3[1] == a1 )
        {
          if ( v5 == 23 )
            v7 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
          else
            v7 = gptiRit;
          result = HMChangeOwnerThread(*v3, v7);
        }
      }
      v1 += 32;
      v3 += 2;
    }
    while ( v1 <= v4 );
  }
  return result;
}
