/*
 * XREFs of MiExpandVadBitMapDown @ 0x1406E4B9C
 * Callers:
 *     MiExpandVadBitMap @ 0x14045E94C (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x14045EA90 (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(unsigned int a1)
{
  _DWORD *v1; // rbx
  unsigned int v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // ebp
  _DWORD *v6; // rsi
  int v7; // edi
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_DWORD **)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v2 = 8 * (v1[14] - qword_140388950);
  if ( a1 > v2 )
    return 0LL;
  v4 = 8 * ((a1 >> 6) + ((a1 & 0x3F) != 0));
  v5 = (v4 >> 12) + ((v4 & 0xFFF) != 0);
  v6 = (_DWORD *)(*((_QWORD *)v1 + 7) - (v5 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v6, *((_QWORD *)v1 + 7) - 1LL, &v8) < 0 )
    return 0LL;
  v1[32] += v8;
  v1[12] += v5 << 15;
  v7 = v2 - (v5 << 15);
  *((_QWORD *)v1 + 7) = v6;
  if ( v6 == (_DWORD *)qword_140388950 )
  {
    *v6 |= 1u;
    v7 = 1;
  }
  v1[17] = 0;
  v1[16] = v7;
  v1[18] = v7;
  MiUpdateVadBits(
    (*((_QWORD *)v1 + 7) - qword_140388950) << 19,
    ((*((_QWORD *)v1 + 7) - qword_140388950) << 19) + ((unsigned __int64)v5 << 31));
  return 1LL;
}
