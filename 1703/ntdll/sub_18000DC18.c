/*
 * XREFs of sub_18000DC18 @ 0x18000DC18
 * Callers:
 *     sub_18000C480 @ 0x18000C480 (sub_18000C480.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 * Callees:
 *     sub_18000E614 @ 0x18000E614 (sub_18000E614.c)
 *     sub_18002F7E0 @ 0x18002F7E0 (sub_18002F7E0.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_1800FDDA8 @ 0x1800FDDA8 (sub_1800FDDA8.c)
 */

__int64 __fastcall sub_18000DC18(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 i; // rbp
  __int64 *v6; // r15
  int v7; // r14d
  int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 *v11; // rax
  unsigned int v12; // eax
  int v13; // ecx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *a2 )
  {
    v12 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    if ( *((_DWORD *)a2 + 3) )
      v12 *= 2;
    *(_QWORD *)(a2[6] + 8LL * v12) = 0LL;
    v13 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6);
    result = (unsigned int)~(1 << ((v13 - 1) & 0x1F));
    *(_DWORD *)(a2[5] + 4 * ((unsigned __int64)(unsigned int)(v13 - 1) >> 5)) &= result;
  }
  for ( i = *(_QWORD *)(a1 + 344); a1 + 336 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        sub_1800FDA30(a1, i - 16);
    }
    v9 = *(unsigned __int16 *)(i - 8);
    v6 = a2;
    v10 = *((unsigned int *)a2 + 2);
    if ( v9 < v10 )
    {
LABEL_4:
      v7 = *(unsigned __int16 *)(i - 8);
    }
    else
    {
      while ( 1 )
      {
        v11 = (__int64 *)*v6;
        if ( !*v6 )
          break;
        v6 = (__int64 *)*v6;
        if ( v9 < *((unsigned int *)v11 + 2) )
          goto LABEL_4;
      }
      v7 = *((_DWORD *)v6 + 2) - 1;
    }
    if ( *a2 )
    {
      v8 = *(unsigned __int16 *)(i - 8);
      if ( (unsigned int)v9 >= (unsigned int)v10 )
        v8 = v10 - 1;
      sub_18002F7E0(a1, (_DWORD)a2, 1, i, v8, *(unsigned __int16 *)(i - 8));
    }
    result = sub_18000E614(a1, (_DWORD)v6, 1, i, v7, *(unsigned __int16 *)(i - 8));
    if ( dword_18015BFD8 >= 1 )
    {
      result = *(unsigned int *)(v6[5] + 4 * ((unsigned __int64)(unsigned int)(v7 - *((_DWORD *)v6 + 6)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v7 - *((_BYTE *)v6 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = sub_1800FDDA8(1LL);
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
