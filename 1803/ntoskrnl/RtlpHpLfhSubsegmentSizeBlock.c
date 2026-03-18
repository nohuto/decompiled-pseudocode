/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x14029D190
 * Callers:
 *     RtlpHpSegSizeInternal @ 0x140299294 (RtlpHpSegSizeInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x14029D260 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r10d
  unsigned int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  char v10; // cl
  unsigned __int64 v11; // r8
  int v12; // edx

  v5 = qword_1403A5F28 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v7 = a3 - HIWORD(v5) - a2;
  v8 = *(_QWORD *)(a1
                 + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v5 + 15) >> 4]
                 + 224);
  v9 = *(_DWORD *)(v8 + 72);
  v10 = *(_BYTE *)(v8 + 76);
  if ( v9 )
  {
    v11 = (v7 * (unsigned __int64)v9) >> v10;
    v12 = v7 - v11 * (unsigned __int16)v5;
  }
  else
  {
    v11 = v7 >> v10;
    v12 = ((1 << v10) - 1) & v7;
  }
  if ( v12
    || ((*(_QWORD *)(a2 + 8 * ((unsigned __int64)(unsigned int)(2 * v11) >> 6) + 48) >> ((2 * v11) & 0x3F)) & 1) == 0 )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return RtlpHpLfhSubsegmentSizeBlockInternal(a2, a3, v11, a4);
  }
}
