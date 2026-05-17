/*
 * XREFs of RtlpPopulateListIndex @ 0x180008AC0
 * Callers:
 *     RtlpExtendListLookup @ 0x180007DA4 (RtlpExtendListLookup.c)
 *     RtlCreateHeap @ 0x180007E70 (RtlCreateHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x1800094B4 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x18004650C (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800FF59C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800FF958 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 *v7; // r15
  int v8; // r14d
  int v9; // eax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 *v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *a2 )
  {
    v13 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    if ( *((_DWORD *)a2 + 3) )
      v13 *= 2;
    *(_QWORD *)(a2[6] + 8LL * v13) = 0LL;
    v14 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    v15 = (unsigned __int64)v14 >> 5;
    result = (unsigned int)~(1 << (v14 & 0x1F));
    *(_DWORD *)(a2[5] + 4 * v15) &= result;
  }
  v5 = a1 + 336;
  for ( i = *(_QWORD *)(a1 + 344); v5 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 16);
    }
    v11 = *(unsigned __int16 *)(i - 8);
    v7 = a2;
    v10 = *((unsigned int *)a2 + 2);
    if ( v11 < v10 )
    {
LABEL_4:
      v8 = *(unsigned __int16 *)(i - 8);
    }
    else
    {
      while ( 1 )
      {
        v12 = (__int64 *)*v7;
        if ( !*v7 )
          break;
        v7 = (__int64 *)*v7;
        if ( v11 < *((unsigned int *)v12 + 2) )
          goto LABEL_4;
      }
      v8 = *((_DWORD *)v7 + 2) - 1;
    }
    if ( *a2 )
    {
      v9 = v10 - 1;
      if ( (unsigned int)v11 < (unsigned int)v10 )
        v9 = *(unsigned __int16 *)(i - 8);
      LOBYTE(v10) = 1;
      RtlpHeapRemoveListEntry(a1, (_DWORD)a2, v10, i, v9, *(unsigned __int16 *)(i - 8));
    }
    LOBYTE(v10) = 1;
    result = RtlpHeapAddListEntry(a1, (_DWORD)v7, v10, i, v8, *(unsigned __int16 *)(i - 8));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(v7[5] + 4 * ((unsigned __int64)(unsigned int)(v8 - *((_DWORD *)v7 + 6)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v8 - *((_BYTE *)v7 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError(1LL);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
      result = *(unsigned int *)(a1 + 136);
      *(_DWORD *)(i - 8) ^= result;
    }
  }
  return result;
}
