/*
 * XREFs of RtlpHpSegContextInitialize @ 0x180004040
 * Callers:
 *     RtlpHpHeapCreate @ 0x180003E00 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // ecx
  __int64 result; // rax

  v6 = a2;
  memset(a1, 0, 0x68uLL);
  *(_WORD *)((char *)a1 + 11) = 1031;
  v10 = ~(v6 - 1);
  v11 = (unsigned int)v6 >> 8;
  *a1 = v10;
  _BitScanReverse((unsigned int *)&v10, v11);
  *((_BYTE *)a1 + 8) = v10;
  _BitScanForward(&v12, (unsigned int)v11 >> 12);
  *((_BYTE *)a1 + 9) = v12;
  *((_BYTE *)a1 + 10) = (v11 + 0x1FFF) / (unsigned __int64)(unsigned int)v11;
  *((_DWORD *)a1 + 4) = ((unsigned int)(-*(_DWORD *)a1 - 0x2000) >> 1) & 0x7FFFF000;
  a1[3] = 0LL;
  a1[5] = (__int64)(a1 + 4);
  a1[4] = (__int64)(a1 + 4);
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = a6;
  result = a5;
  a1[12] = a3;
  a1[11] = a5;
  a1[10] = a4;
  return result;
}
