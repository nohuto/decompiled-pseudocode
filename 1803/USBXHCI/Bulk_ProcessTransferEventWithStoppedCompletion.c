/*
 * XREFs of Bulk_ProcessTransferEventWithStoppedCompletion @ 0x1C002D6FC
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002CD8C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 */

__int64 __fastcall Bulk_ProcessTransferEventWithStoppedCompletion(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  _DWORD *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // r10d
  __int64 result; // rax

  if ( a2 )
  {
    v7 = *(_DWORD **)a2;
    v8 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v9 = a4 + *(_DWORD *)(*(_QWORD *)a2 + 108LL);
    *(_DWORD *)(*(_QWORD *)a2 + 108LL) = v9;
    if ( (*(_DWORD *)(v8 + 32) & 1) != 0 && v7[19] == 2 )
    {
      memmove(*(void **)(a2 + 64), *(const void **)(*(_QWORD *)(a2 + 72) + 16LL), a4);
      v9 = v7[27];
    }
    if ( v9 == v7[26] )
    {
      v7[17] = 1;
    }
    else if ( a3 == 28 )
    {
      v7[17] = 28;
    }
  }
  result = a5;
  *(_DWORD *)(a1 + 352) = a5;
  return result;
}
