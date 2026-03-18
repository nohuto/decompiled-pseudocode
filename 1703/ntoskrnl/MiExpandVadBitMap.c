/*
 * XREFs of MiExpandVadBitMap @ 0x14049E24C
 * Callers:
 *     MiInitializeVadBitMap @ 0x14049E15C (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x140513B70 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x14049E38C (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x1406B7F10 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned int *a1, unsigned int a2)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // rcx
  unsigned __int64 v8; // r12
  __int64 v9; // r14
  unsigned int v10; // r8d
  unsigned int v11; // ebp
  int v12; // edx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v6 = v4 + 8 * (a1[2] - qword_14036C5C8);
  if ( a2 > *(_DWORD *)(v5 + 132) - v6 + 1 )
    return MiExpandVadBitMapDown(a2);
  v7 = *((_QWORD *)a1 + 1);
  v8 = v7 + ((unsigned __int64)(unsigned int)v4 >> 3);
  v9 = (v4 + 8 * (v7 - qword_14036C5C8)) << 16;
  if ( (int)MiMakeHyperRangeAccessible(v8, v7 + ((unsigned __int64)((unsigned int)v4 + a2 - 1) >> 3), &v14) < 0 )
    return 0LL;
  *(_DWORD *)(v5 + 128) += v14;
  v10 = ((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) >> 12) + (((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) & 0xFFF) != 0);
  *a1 += v10 << 15;
  v11 = (v10 << 15) + v6;
  v12 = *(_DWORD *)(v5 + 132);
  if ( v11 > v12 + 1 )
    *a1 = *a1 - v11 + v12 + 1;
  if ( v8 == qword_14036C5C8 )
  {
    **((_DWORD **)a1 + 1) |= 1u;
    if ( (_DWORD)v4 )
      a1[4] = 1;
  }
  MiUpdateVadBits(v9, v9 + ((unsigned __int64)v10 << 31));
  return 1LL;
}
