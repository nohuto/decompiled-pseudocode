/*
 * XREFs of ?CopyRawDataList@@YAPEAUtagPOINTERRAWDATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0198F30
 * Callers:
 *     CopyTPPointerInputFrame @ 0x1C019A718 (CopyTPPointerInputFrame.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     FreePointerRawDataList @ 0x1C019ABBC (FreePointerRawDataList.c)
 */

struct tagPOINTERRAWDATA *__fastcall CopyRawDataList(const struct tagPOINTERINPUTFRAME *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rax

  v1 = *((_QWORD *)a1 + 10);
  v2 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    if ( !v1 )
      return (struct tagPOINTERRAWDATA *)v3;
    v4 = Win32AllocPool(32LL, 1685222229LL);
    v5 = v4;
    if ( !v4 )
      break;
    *(_OWORD *)v4 = *(_OWORD *)v1;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(v1 + 16);
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
    v6 = (void *)Win32AllocPool(*(unsigned int *)(v1 + 8), 1685222229LL);
    *(_QWORD *)(v5 + 16) = v6;
    if ( !v6 )
      break;
    memmove(v6, *(const void **)(v1 + 16), *(unsigned int *)(v1 + 8));
    if ( v2 )
      *(_QWORD *)(v2 + 24) = v5;
    else
      v3 = v5;
    v1 = *(_QWORD *)(v1 + 24);
    v2 = v5;
  }
  if ( v3 )
    FreePointerRawDataList(v3);
  if ( v5 )
    Win32FreePool(v5);
  return 0LL;
}
