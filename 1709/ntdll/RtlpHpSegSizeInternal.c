/*
 * XREFs of RtlpHpSegSizeInternal @ 0x18004662C
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180047E80 (RtlpHpReAllocateHeap.c)
 *     RtlpHpExtrasGet @ 0x180049278 (RtlpHpExtrasGet.c)
 *     RtlpHpSegReportPageRange @ 0x180108A2C (RtlpHpSegReportPageRange.c)
 *     RtlpHpSegSize @ 0x180108A9C (RtlpHpSegSize.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x180061F54 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegSizeInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  __int64 v6; // rax
  char v8; // cl
  unsigned __int64 v9; // r9
  unsigned int v10; // esi
  int v11; // ebx
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // r10
  int v15; // edx
  __int64 v16; // r10
  unsigned int v17; // edx
  unsigned __int16 v18; // r9
  int v19; // eax
  unsigned __int64 result; // rax
  char v21; // cl

  v6 = a2 & *(_QWORD *)a1;
  v8 = *(_BYTE *)(a1 + 8);
  v9 = v6 + ((a2 - v6) >> 5 << v8);
  if ( a3 <= v9 )
  {
    result = ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << v8) - *(unsigned int *)(a2 + 4);
    if ( a5 )
      *a5 = *(_WORD *)(a2 + 8) & 1;
  }
  else if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
  {
    v10 = (unsigned int)v9 >> 12;
    v11 = (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v9 + 40) ^ ((unsigned int)v9 >> 12));
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 80)
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v11 + 15) >> 4]
                    + 208);
    v13 = a3 - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v9 + 40) ^ ((unsigned int)v9 >> 12)) >> 16) - v9;
    if ( *(_DWORD *)(v12 + 72) )
    {
      v14 = (v13 * (unsigned __int64)*(unsigned int *)(v12 + 72)) >> *(_BYTE *)(v12 + 76);
      v15 = v13 - v14 * v11;
    }
    else
    {
      v21 = *(_BYTE *)(v12 + 76);
      LODWORD(v14) = v13 >> v21;
      v15 = ((1 << v21) - 1) & v13;
    }
    if ( v15 )
      return (unsigned int)-1;
    v16 = *(_QWORD *)(v9 + 8 * ((unsigned __int64)(unsigned int)(2 * v14) >> 6) + 48) >> ((2 * v14) & 0x3F);
    if ( (v16 & 1) == 0 )
    {
      return (unsigned int)-1;
    }
    else
    {
      v17 = (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v10 ^ *(unsigned __int16 *)(v9 + 40);
      if ( (v16 & 2) != 0 )
      {
        v18 = *(_WORD *)(((unsigned __int16)RtlpLFHKey ^ (unsigned __int16)v10 ^ (unsigned __int64)*(unsigned __int16 *)(v9 + 40))
                       + a3
                       - 2);
        if ( (v18 & 0x8000u) != 0 )
          --v17;
        else
          v17 -= v18 & 0x3FFF;
        v19 = (v18 >> 14) & 1;
      }
      else
      {
        v19 = 0;
      }
      if ( a5 )
        *a5 = v19;
    }
    return v17;
  }
  else
  {
    return (unsigned int)RtlpHpVsChunkSize(a3, a2, a5);
  }
  return result;
}
