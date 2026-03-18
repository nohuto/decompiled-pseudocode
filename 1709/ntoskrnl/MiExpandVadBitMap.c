/*
 * XREFs of MiExpandVadBitMap @ 0x14045E94C
 * Callers:
 *     MiInitializeVadBitMap @ 0x14045E85C (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x1404D06B0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x14045EA90 (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x1406E4B9C (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  int v6; // r12d
  __int64 v7; // rcx
  unsigned __int64 v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // r8d
  unsigned int v11; // r12d
  int v12; // edx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v6 = v4 + 8 * (a1[2] - qword_140388950);
  if ( a2 > *(_DWORD *)(v5 + 132) - v6 + 1 )
    return MiExpandVadBitMapDown(a2);
  v7 = *((_QWORD *)a1 + 1);
  v8 = v7 + ((unsigned __int64)(unsigned int)v4 >> 3);
  v9 = (v4 + 8 * (v7 - qword_140388950)) << 16;
  if ( (int)MiMakeHyperRangeAccessible(v8, v7 + ((unsigned __int64)((unsigned int)v4 + a2 - 1) >> 3), &v14) < 0 )
    return 0LL;
  *(_DWORD *)(v5 + 128) += v14;
  v10 = ((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) >> 12) + (((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) & 0xFFF) != 0);
  *a1 += v10 << 15;
  v11 = (v10 << 15) + v6;
  v12 = *(_DWORD *)(v5 + 132);
  if ( v11 > v12 + 1 )
    *a1 = *a1 - v11 + v12 + 1;
  if ( v8 == qword_140388950 )
  {
    **((_DWORD **)a1 + 1) |= 1u;
    if ( (_DWORD)v4 )
      a1[4] = 1;
  }
  MiUpdateVadBits(v9, v9 + ((unsigned __int64)v10 << 31));
  return 1LL;
}
