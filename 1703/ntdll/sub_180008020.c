/*
 * XREFs of sub_180008020 @ 0x180008020
 * Callers:
 *     sub_18000853C @ 0x18000853C (sub_18000853C.c)
 *     sub_180100DA8 @ 0x180100DA8 (sub_180100DA8.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180008020(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 *v11; // r8
  __int64 v12; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = *a2;
  v6 = *a2;
  a2[1] = a3;
  result = v6 & 0xFFFFFFFFFFF00000uLL;
  *((_BYTE *)a2 + 16) = a4;
  *(__int64 *)((char *)a2 + 36) = a4;
  *((_WORD *)a2 + 9) = 1;
  *((_BYTE *)a2 + 17) = (result + 32 * ((v5 - result) >> 12)) >> 5;
  if ( a5 )
  {
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    v9 = *a2 + a2[1];
    v10 = v9 + 16;
    if ( (*(_DWORD *)(a1 + 20) & 0x10000000) == 0 )
      v10 = v9;
    v11 = (unsigned __int16 *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v12 = *((_QWORD *)v11 + 1);
    *((_WORD *)a2 + 9) |= 0x10u;
    a2[3] = v12;
    *((_WORD *)a2 + 9) |= *((_BYTE *)v11 + 2) >> 4 << 8;
    result = *v11;
    *((_WORD *)a2 + 16) = result;
  }
  return result;
}
