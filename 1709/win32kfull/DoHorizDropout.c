/*
 * XREFs of DoHorizDropout @ 0x1C02C69C4
 * Callers:
 *     LookForDropouts @ 0x1C02C6F20 (LookForDropouts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     GetBitAbs @ 0x1C02C6DA0 (GetBitAbs.c)
 *     HorizCrossings @ 0x1C02C6E88 (HorizCrossings.c)
 *     SetBitAbs @ 0x1C02C70B0 (SetBitAbs.c)
 *     VertCrossings @ 0x1C02C711C (VertCrossings.c)
 */

__int64 __fastcall DoHorizDropout(__int16 *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v6; // esi
  unsigned int v10; // ebx
  int v11; // edi
  int v12; // edi
  int v14; // ebx
  int v15; // ebx
  int v16; // esi
  int v17; // esi

  v6 = *a1;
  if ( (a5 & 1) != 0 )
  {
    v10 = a3 + 1;
    v11 = VertCrossings(v6 - 1, a3 + 1);
    v12 = VertCrossings(v6, v10) + v11;
    if ( (int)(HorizCrossings(v6, v10) + v12) < 2 )
      return 0LL;
    v14 = HorizCrossings(v6, a3 - 1);
    v15 = VertCrossings(v6 - 1, a3) + v14;
    if ( (int)(VertCrossings(v6, a3) + v15) < 2 )
      return 0LL;
  }
  if ( (int)v6 > dword_1C0334248 && (unsigned int)GetBitAbs(a4, v6 - 1, a3)
    || (int)v6 < dword_1C033424C && (unsigned int)GetBitAbs(a4, v6, a3) )
  {
    return 0LL;
  }
  if ( (a5 & 4) != 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2 * (a1[1] & 3) + 54])(
            a3,
            qword_1C0334338 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2),
            qword_1C0334340 + 4 * ((unsigned __int64)(unsigned __int16)a1[1] >> 2))
        - 1;
    v17 = (int)((*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))&State[2
                                                                                            * (*(_WORD *)(a2 + 2) & 3)
                                                                                            + 54])(
                  a3,
                  qword_1C0334338 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2),
                  qword_1C0334340 + 4 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 2) >> 2))
              + v16) >> 7;
  }
  else
  {
    v17 = v6 - 1;
  }
  if ( v17 < dword_1C0334248 )
    v17 = dword_1C0334248;
  if ( v17 >= dword_1C033424C )
    v17 = dword_1C033424C - 1;
  return SetBitAbs(a4, (unsigned int)v17, a3);
}
