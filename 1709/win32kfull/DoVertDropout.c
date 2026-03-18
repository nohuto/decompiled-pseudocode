/*
 * XREFs of DoVertDropout @ 0x1C02C6B58
 * Callers:
 *     LookForDropouts @ 0x1C02C6F20 (LookForDropouts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     GetBitAbs @ 0x1C02C6DA0 (GetBitAbs.c)
 *     HorizCrossings @ 0x1C02C6E88 (HorizCrossings.c)
 *     SetBitAbs @ 0x1C02C70B0 (SetBitAbs.c)
 *     VertCrossings @ 0x1C02C711C (VertCrossings.c)
 */

__int64 __fastcall DoVertDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // esi
  int v10; // ebx
  int v11; // ebx
  int v12; // edi
  int v13; // edi
  int v14; // esi
  int v15; // esi

  v5 = *a1;
  if ( (int)v5 < dword_1C0334268 )
    return 0LL;
  if ( (int)v5 > dword_1C0334264 )
    return 0LL;
  if ( (a5 & 1) != 0 )
  {
    v10 = VertCrossings(a3 - 1, v5);
    v11 = HorizCrossings(a3, v5 - 1) + v10;
    if ( (int)(HorizCrossings(a3, v5) + v11) < 2 )
      return 0LL;
    v12 = HorizCrossings(a3 + 1, v5 - 1);
    v13 = HorizCrossings(a3 + 1, v5) + v12;
    if ( (int)(VertCrossings(a3 + 1, v5) + v13) < 2 )
      return 0LL;
  }
  if ( (int)v5 > dword_1C0334254 && (unsigned int)GetBitAbs(a4, a3, v5 - 1)
    || (int)v5 < dword_1C0334250 && (unsigned int)GetBitAbs(a4, a3, v5) )
  {
    return 0LL;
  }
  if ( (a5 & 4) != 0 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2 * (a1[1] & 3) + 60])(
            a3,
            qword_1C0334338 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2),
            qword_1C0334340 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2))
        - 1;
    v15 = (int)((*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2
                                                                                            * (*(_WORD *)(a2 + 2) & 3)
                                                                                            + 60])(
                  a3,
                  qword_1C0334338 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2),
                  qword_1C0334340 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2))
              + v14) >> 7;
  }
  else
  {
    v15 = v5 - 1;
  }
  if ( v15 < dword_1C0334254 )
    v15 = dword_1C0334254;
  if ( v15 >= dword_1C0334250 )
    v15 = dword_1C0334250 - 1;
  if ( v15 < dword_1C0334268 || v15 >= dword_1C0334264 )
    return 0LL;
  else
    return SetBitAbs(a4, a3, (unsigned int)v15);
}
