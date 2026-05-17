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

__int64 __fastcall RtlpHpPerHeapStackTraceCleanup(volatile signed __int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  _BYTE *v7; // rbp
  __int64 *v8; // rbx
  _BYTE *i; // rdx
  unsigned __int64 v10; // rsi
  __int64 *j; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  unsigned __int64 v15; // [rsp+78h] [rbp+20h] BYREF

  result = RtlRunOnceBeginInitialize(a1, 1, &v15);
  if ( (int)result >= 0 )
  {
    v6 = v15;
    v7 = *(_BYTE **)(v15 + 24);
    v8 = (__int64 *)v7;
    while ( 1 )
    {
      if ( !v8 || (result = *v8, (*v8 & 1) != 0) )
      {
        for ( i = v7 + 8; ; i += 8 )
        {
          if ( (unsigned __int64)i >= *(_QWORD *)(v6 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(v6 + 20) >> 5) )
          {
            result = 0LL;
            goto LABEL_11;
          }
          if ( (*i & 1) == 0 )
            break;
        }
        v8 = *(__int64 **)i;
        v7 = i;
        result = *(_QWORD *)i;
      }
      else
      {
        v8 = (__int64 *)*v8;
      }
LABEL_11:
      if ( !result )
        break;
      v10 = (unsigned __int64)v8;
      for ( j = (__int64 *)v7; (*j & 1) == 0; j = (__int64 *)*j )
      {
        if ( (__int64 *)*j == v8 )
        {
          *j = *v8;
          --*(_DWORD *)(v6 + 16);
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
    v12 = v15;
    v13 = *(_QWORD *)(v15 + 24);
    if ( v13 )
      result = RtlpHpMetadataFree(v13);
    if ( a2 )
    {
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 24) = 0LL;
    }
    else
    {
      result = RtlpHpMetadataFree(v12);
      if ( a3 )
        *a1 = 0LL;
    }
  }
  return result;
}
