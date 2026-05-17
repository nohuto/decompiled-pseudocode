/*
 * XREFs of sub_18005B7B4 @ 0x18005B7B4
 * Callers:
 *     sub_18005A9B0 @ 0x18005A9B0 (sub_18005A9B0.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_18005C190 @ 0x18005C190 (sub_18005C190.c)
 *     sub_18005C30C @ 0x18005C30C (sub_18005C30C.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 */

__int64 __fastcall sub_18005B7B4(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 *v7; // r15
  int v8; // r14d
  int v9; // eax
  unsigned __int64 v10; // r8
  int v11; // edx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *a2 )
  {
    v14 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    if ( *((_DWORD *)a2 + 3) )
      v14 *= 2;
    *(_QWORD *)(a2[6] + 8LL * v14) = 0LL;
    v15 = *((_DWORD *)a2 + 2) - *((_DWORD *)a2 + 6) - 1;
    v16 = (unsigned __int64)v15 >> 5;
    result = (unsigned int)~(1 << (v15 & 0x1F));
    *(_DWORD *)(a2[5] + 4 * v16) &= result;
  }
  v5 = a1 + 336;
  for ( i = *(_QWORD *)(a1 + 344); v5 != i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v11 = *(_DWORD *)(i - 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(i - 8) = v11;
      if ( HIBYTE(v11) != ((unsigned __int8)v11 ^ (unsigned __int8)(BYTE1(v11) ^ BYTE2(v11))) )
        sub_1800FC010(a1, i - 16);
    }
    v12 = *(unsigned __int16 *)(i - 8);
    v7 = a2;
    v10 = *((unsigned int *)a2 + 2);
    if ( v12 < v10 )
    {
LABEL_4:
      v8 = *(unsigned __int16 *)(i - 8);
    }
    else
    {
      while ( 1 )
      {
        v13 = (__int64 *)*v7;
        if ( !*v7 )
          break;
        v7 = (__int64 *)*v7;
        if ( v12 < *((unsigned int *)v13 + 2) )
          goto LABEL_4;
      }
      v8 = *((_DWORD *)v7 + 2) - 1;
    }
    if ( *a2 )
    {
      v9 = v10 - 1;
      if ( (unsigned int)v12 < (unsigned int)v10 )
        v9 = *(unsigned __int16 *)(i - 8);
      LOBYTE(v10) = 1;
      sub_18005C30C(a1, (_DWORD)a2, v10, i, v9, *(unsigned __int16 *)(i - 8));
    }
    LOBYTE(v10) = 1;
    result = sub_18005C190(a1, (_DWORD)v7, v10, i, v8, *(unsigned __int16 *)(i - 8));
    if ( dword_18015D450 >= 1 )
    {
      result = *(unsigned int *)(v7[5] + 4 * ((unsigned __int64)(unsigned int)(v8 - *((_DWORD *)v7 + 6)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v8 - *((_BYTE *)v7 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = sub_1800FC3E4(1LL);
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
