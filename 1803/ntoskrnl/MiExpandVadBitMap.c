/*
 * XREFs of MiExpandVadBitMap @ 0x1404ED338
 * Callers:
 *     MiInitializeVadBitMap @ 0x1404ED24C (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x140594FE0 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x1404ED47C (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x14074EFB8 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(int *a1, unsigned int a2)
{
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // r15d
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // r8d
  int v11; // edx
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned int)*a1;
  v5 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v6 = v4 + 8 * (a1[2] - qword_1403CBB68);
  if ( a2 > a1[7] - v6 + 1 )
    return MiExpandVadBitMapDown(a1, a2);
  v7 = *((_QWORD *)a1 + 1);
  v8 = v7 + ((unsigned __int64)(unsigned int)v4 >> 3);
  v9 = (v4 + 8 * (v7 - qword_1403CBB68)) << 16;
  if ( (int)MiMakeHyperRangeAccessible(v8, v7 + ((unsigned __int64)((unsigned int)v4 + a2 - 1) >> 3), &v15) < 0 )
    return 0LL;
  *(_DWORD *)(v5 + 220) += v15;
  v10 = ((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) >> 12) + (((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) & 0xFFF) != 0);
  v11 = (v10 << 15) + *a1;
  v12 = (v10 << 15) + v6;
  *a1 = v11;
  v13 = a1[7];
  if ( v12 > v13 + 1 )
    *a1 = v13 - v12 + v11 + 1;
  if ( v8 == qword_1403CBB68 )
  {
    **((_DWORD **)a1 + 1) |= 1u;
    if ( (_DWORD)v4 )
      a1[4] = 1;
  }
  MiUpdateVadBits(v9, v9 + ((unsigned __int64)v10 << 31));
  return 1LL;
}
