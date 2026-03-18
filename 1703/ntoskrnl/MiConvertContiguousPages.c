/*
 * XREFs of MiConvertContiguousPages @ 0x14007A79C
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 * Callees:
 *     MiPageAttributeBatchChangeNeeded @ 0x14007ADB0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiChangePageAttributeBatch @ 0x14010346C (MiChangePageAttributeBatch.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14017D278 (MiSetOriginalPtePfnFromFreeList.c)
 */

__int64 __fastcall MiConvertContiguousPages(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r9
  _QWORD *v8; // rsi
  int v9; // ebp
  _QWORD *v10; // rdx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v4 = a3;
  result = MiSetOriginalPtePfnFromFreeList(&v11, a2, a3);
  v6 = 0LL;
  v8 = &a1[6 * v7];
  if ( a1 != v8 )
  {
    do
    {
      v9 = MiPfnZeroingNeeded(a1, v4);
      result = MiPageAttributeBatchChangeNeeded(a1);
      if ( (_DWORD)result )
      {
        a1[2] = v6;
        v6 = a1;
        *a1 = v9 != 0;
      }
      else
      {
        result = v11 & -(__int64)(v9 != 0);
        a1[2] = result;
      }
      a1 += 6;
    }
    while ( a1 != v8 );
    if ( v6 )
    {
      MiChangePageAttributeBatch(v6, v4, -1LL);
      do
      {
        v10 = (_QWORD *)v6[2];
        result = -*v6;
        v6[2] = v11 & -(__int64)(*v6 != 0LL);
        v6 = v10;
      }
      while ( v10 );
    }
  }
  return result;
}
