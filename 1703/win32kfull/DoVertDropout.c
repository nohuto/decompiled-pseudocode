/*
 * XREFs of DoVertDropout @ 0x1C02CCD38
 * Callers:
 *     LookForDropouts @ 0x1C02CD128 (LookForDropouts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     GetBitAbs @ 0x1C02CCFA8 (GetBitAbs.c)
 *     HorizCrossings @ 0x1C02CD090 (HorizCrossings.c)
 *     SetBitAbs @ 0x1C02CD2B8 (SetBitAbs.c)
 *     VertCrossings @ 0x1C02CD324 (VertCrossings.c)
 */

__int64 __fastcall DoVertDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // esi
  int v7; // r12d
  __int64 v9; // rdi
  int v11; // r15d
  int v12; // ebx
  int v13; // ebx
  int v14; // edi
  int v15; // edi
  int v16; // r11d
  int v17; // r10d
  int v18; // ebx
  int v19; // eax
  int v20; // esi

  v5 = *a1;
  v7 = dword_1C0338B48;
  v9 = a2;
  if ( (int)v5 < dword_1C0338B48 )
    return 0LL;
  v11 = dword_1C0338B44;
  if ( (int)v5 > dword_1C0338B44 )
    return 0LL;
  if ( (a5 & 1) != 0 )
  {
    v12 = VertCrossings(a3 - 1, v5);
    v13 = HorizCrossings(a3, v5 - 1) + v12;
    if ( (int)(HorizCrossings(a3, v5) + v13) < 2 )
      return 0LL;
    v14 = HorizCrossings(a3 + 1, v5 - 1);
    v15 = HorizCrossings(a3 + 1, v5) + v14;
    if ( (int)(VertCrossings(a3 + 1, v5) + v15) < 2 )
      return 0LL;
    v9 = a2;
  }
  v16 = dword_1C0338B34;
  if ( (int)v5 <= dword_1C0338B34 || !(unsigned int)GetBitAbs(a4, a3, v5 - 1) )
  {
    v17 = dword_1C0338B30;
    if ( (int)v5 >= dword_1C0338B30 || !(unsigned int)GetBitAbs(a4, a3, v5) )
    {
      if ( (a5 & 4) != 0 )
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2 * (a1[1] & 3) + 60])(
                a3,
                qword_1C0338C18 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2),
                qword_1C0338C20 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2));
        v19 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2 * (*(_WORD *)(v9 + 2) & 3)
                                                                                          + 60])(
                a3,
                qword_1C0338C18 + 4 * ((unsigned __int64)*(unsigned __int16 *)(v9 + 2) >> 2),
                qword_1C0338C20 + 4 * ((unsigned __int64)*(unsigned __int16 *)(v9 + 2) >> 2));
        v7 = dword_1C0338B48;
        v11 = dword_1C0338B44;
        v16 = dword_1C0338B34;
        v17 = dword_1C0338B30;
        v20 = (v19 + v18 - 1) >> 7;
      }
      else
      {
        v20 = v5 - 1;
      }
      if ( v20 < v16 )
        v20 = v16;
      if ( v20 >= v17 )
        v20 = v17 - 1;
      if ( v20 >= v7 && v20 < v11 )
        return SetBitAbs(a4, a3, (unsigned int)v20);
    }
  }
  return 0LL;
}
