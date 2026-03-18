/*
 * XREFs of RtlpHpSegContextInitialize @ 0x140297B68
 * Callers:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall RtlpHpSegContextInitialize(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  __int64 v11; // r10
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // r10
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 result; // rax

  v7 = a2;
  memset(a1, 0, 0x78uLL);
  v11 = v7 - 1;
  *(_WORD *)((char *)a1 + 11) = 1031;
  v12 = (unsigned int)v7 >> 8;
  _BitScanReverse(&v13, v12);
  v14 = ~v11;
  *((_BYTE *)a1 + 8) = v13;
  _BitScanForward(&v15, (unsigned int)v12 >> 12);
  *a1 = v14;
  *((_BYTE *)a1 + 9) = v15;
  *((_BYTE *)a1 + 10) = (v12 + 0x1FFF) / (unsigned __int64)(unsigned int)v12;
  v16 = *a7 >> 8;
  *((_DWORD *)a1 + 4) = ((unsigned int)(-(int)v14 - 0x2000) >> 1) & 0x7FFFF000;
  if ( (unsigned __int8)v16 >= 2u )
    *((_BYTE *)a1 + 13) |= 2u;
  a1[3] = 0LL;
  v17 = *(_OWORD *)a7;
  a1[5] = (__int64)(a1 + 4);
  a1[4] = (__int64)(a1 + 4);
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = a6;
  result = a5;
  a1[10] = a4;
  a1[14] = a3;
  a1[11] = a5;
  *((_OWORD *)a1 + 6) = v17;
  return result;
}
