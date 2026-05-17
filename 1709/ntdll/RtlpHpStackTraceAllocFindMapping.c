/*
 * XREFs of RtlpHpStackTraceAllocFindMapping @ 0x180100308
 * Callers:
 *     RtlpHpStackTraceAllocRemove @ 0x1801003D0 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180100870 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpStackTraceAllocFindMapping(__int64 a1, __int64 a2)
{
  int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v7; // [rsp+8h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 20) >> 5;
  v3 = -1LL << (*(_BYTE *)(a1 + 20) & 0x1F);
  v4 = a2 & v3;
  if ( !v2 )
    return 0LL;
  v7 = a2 & v3;
  v5 = *(_QWORD *)(a1 + 24)
     + 8LL
     * ((37
       * (BYTE6(v7)
        + 37
        * (BYTE5(v7)
         + 37
         * (BYTE4(v7) + 37 * (BYTE3(v7) + 37 * (BYTE2(v7) + 37 * (BYTE1(v7) + 37 * ((unsigned __int8)v4 + 11623883)))))))
       + HIBYTE(v7)) & (unsigned int)(v2 - 1));
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( (v5 & 1) != 0 )
      break;
    if ( v4 == (v3 & *(_QWORD *)(v5 + 8)) )
      goto LABEL_7;
  }
  v5 = 0LL;
LABEL_7:
  if ( !v5 )
    return 0LL;
  return v5;
}
