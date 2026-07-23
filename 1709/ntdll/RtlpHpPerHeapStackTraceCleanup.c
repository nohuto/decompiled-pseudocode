/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x1800613E8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x1801007C0 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x180046EC0 (RtlRunOnceBeginInitialize.c)
 *     RtlpHpMetadataFree @ 0x18006F570 (RtlpHpMetadataFree.c)
 *     RtlStackDbStackRemove @ 0x18010D838 (RtlStackDbStackRemove.c)
 */

int __fastcall RtlpHpPerHeapStackTraceCleanup(_RTL_RUN_ONCE *a1, int a2, int a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdi
  _BYTE *v7; // rbp
  _QWORD *v8; // rbx
  _BYTE *i; // rdx
  unsigned __int64 v10; // rsi
  _QWORD *j; // rcx
  PVOID v12; // rbx
  unsigned __int64 v13; // rcx
  PVOID Context; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v5) = RtlRunOnceBeginInitialize(a1, 1u, &Context);
  if ( (int)v5 >= 0 )
  {
    v6 = Context;
    v7 = (_BYTE *)*((_QWORD *)Context + 3);
    v8 = v7;
    while ( 1 )
    {
      if ( !v8 || (v5 = (_QWORD *)*v8, (*v8 & 1) != 0) )
      {
        for ( i = v7 + 8; ; i += 8 )
        {
          if ( (unsigned __int64)i >= v6[3] + 8 * ((unsigned __int64)*((unsigned int *)v6 + 5) >> 5) )
          {
            v5 = 0LL;
            goto LABEL_11;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v8 = *(_QWORD **)i;
        v7 = i;
        v5 = *(_QWORD **)i;
      }
      else
      {
        v8 = (_QWORD *)*v8;
      }
LABEL_11:
      if ( !v5 )
        break;
      v10 = (unsigned __int64)v8;
      for ( j = v7; (*j & 1) == 0; j = (_QWORD *)*j )
      {
        if ( (_QWORD *)*j == v8 )
        {
          *j = *v8;
          --*((_DWORD *)v6 + 4);
          *v8 |= 0x8000000000000002uLL;
          v8 = j;
          goto LABEL_19;
        }
      }
      v10 = 0LL;
LABEL_19:
      RtlStackDbStackRemove(&qword_180160380, *(_QWORD *)(v10 + 16));
      RtlpHpMetadataFree(v10);
    }
    v12 = Context;
    v13 = *((_QWORD *)Context + 3);
    if ( v13 )
      LODWORD(v5) = RtlpHpMetadataFree(v13);
    if ( a2 )
    {
      v6[2] = 0LL;
      v6[3] = 0LL;
    }
    else
    {
      LODWORD(v5) = RtlpHpMetadataFree((unsigned __int64)v12);
      if ( a3 )
        a1->Value = 0LL;
    }
  }
  return (int)v5;
}
