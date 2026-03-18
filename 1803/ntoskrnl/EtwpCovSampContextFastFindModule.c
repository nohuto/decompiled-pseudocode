/*
 * XREFs of EtwpCovSampContextFastFindModule @ 0x1407B463C
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1407B47B0 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampContextFastFindModule(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // edi
  __int64 v4; // rbx
  unsigned __int64 v5; // r10
  __int64 v7; // r9
  __int64 v8; // rdx

  v3 = *(_DWORD *)(a1 + 684) >> 5;
  v4 = -1LL << (*(_BYTE *)(a1 + 684) & 0x1F);
  v5 = v4 & *(_QWORD *)a2;
  v7 = 0LL;
  if ( !v3 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 688)
     + 8
     * ((HIBYTE(v5)
       + 37
       * (BYTE6(v5)
        + 37
        * (BYTE5(v5)
         + 37
         * (BYTE4(v5) + 37 * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))) & (unsigned int)(v3 - 1));
  while ( 1 )
  {
    v8 = *(_QWORD *)v8;
    if ( (v8 & 1) != 0 )
      break;
    if ( v5 == (v4 & *(_QWORD *)(v8 + 8)) )
      goto LABEL_7;
  }
  v8 = 0LL;
LABEL_7:
  if ( !v8 )
    return 0LL;
  if ( *(_DWORD *)(v8 + 32) == *(_DWORD *)(a2 + 16)
    && *(_DWORD *)(v8 + 36) == *(_DWORD *)(a2 + 20)
    && *(_QWORD *)(v8 + 40) == *(_QWORD *)(a2 + 8) )
  {
    *(_DWORD *)(v8 + 136) = MEMORY[0xFFFFF78000000320];
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64)) <= 1 )
      __fastfail(0xEu);
    v7 = v8;
  }
  *a3 = v7;
  return v8;
}
