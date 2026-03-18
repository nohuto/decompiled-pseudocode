/*
 * XREFs of MiExpandVadBitMapDown @ 0x14074EFB8
 * Callers:
 *     MiExpandVadBitMap @ 0x1404ED338 (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x1404ED47C (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  int v6; // eax
  unsigned int v7; // ebp
  _DWORD *v8; // rsi
  int v9; // ebx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = 8 * (a1[2] - qword_1403CBB68);
  v4 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( a2 > v3 )
    return 0LL;
  v6 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v7 = ((unsigned int)(8 * v6) >> 12) + (((8 * v6) & 0xFFF) != 0);
  v8 = (_DWORD *)(*((_QWORD *)a1 + 1) - (v7 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v8, *((_QWORD *)a1 + 1) - 1LL, &v10) < 0 )
    return 0LL;
  *(_DWORD *)(v4 + 220) += v10;
  *a1 += v7 << 15;
  v9 = v3 - (v7 << 15);
  *((_QWORD *)a1 + 1) = v8;
  if ( v8 == (_DWORD *)qword_1403CBB68 )
  {
    *v8 |= 1u;
    v9 = 1;
  }
  a1[5] = 0;
  a1[4] = v9;
  a1[6] = v9;
  MiUpdateVadBits(
    (*((_QWORD *)a1 + 1) - qword_1403CBB68) << 19,
    ((*((_QWORD *)a1 + 1) - qword_1403CBB68) << 19) + ((unsigned __int64)v7 << 31));
  return 1LL;
}
