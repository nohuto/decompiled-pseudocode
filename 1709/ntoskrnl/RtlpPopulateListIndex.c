/*
 * XREFs of RtlpPopulateListIndex @ 0x14014EF48
 * Callers:
 *     RtlCreateHeap @ 0x1405D3930 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x14010DAC0 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14010E60C (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x14025B284 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x14025B59C (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v5; // r13
  __int64 *i; // rbp
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v12 = (unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1);
    if ( *(_DWORD *)(a2 + 12) )
      v12 = (unsigned int)(2 * v12);
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v12) = 0LL;
    v13 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1) >> 5;
    result = (unsigned int)~(1 << ((*(_BYTE *)(a2 + 8) - *(_BYTE *)(a2 + 24) - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * v13) &= result;
  }
  v5 = (__int64 *)(a1 + 336);
  for ( i = *(__int64 **)(a1 + 344); v5 != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v7 = *((unsigned __int16 *)i - 4);
    v8 = a2;
    v9 = *(unsigned int *)(a2 + 8);
    if ( v7 < v9 )
    {
LABEL_16:
      v11 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)v8;
        if ( !*(_QWORD *)v8 )
          break;
        v8 = *(_QWORD *)v8;
        if ( v7 < *(unsigned int *)(v10 + 8) )
          goto LABEL_16;
      }
      v11 = *(_DWORD *)(v8 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v14 = v9 - 1;
      if ( (unsigned int)v7 < (unsigned int)v9 )
        v14 = *((unsigned __int16 *)i - 4);
      RtlpHeapRemoveListEntry(a1, a2, v9, i, v14, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v8, v9, (__int64)i, v11, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v8 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v11 - *(_DWORD *)(v8 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v11 - *(_BYTE *)(v8 + 24)) & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError();
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      result = *(unsigned int *)(a1 + 136);
      *((_DWORD *)i - 2) ^= result;
    }
  }
  return result;
}
