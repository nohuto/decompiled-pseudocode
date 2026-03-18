/*
 * XREFs of sub_14016A3D0 @ 0x14016A3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall @ 0x1401898B0 (_guard_check_icall.c)
 */

__int64 __fastcall sub_14016A3D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int16 v9; // r9
  char v10; // r8
  unsigned __int64 v11; // rdi

  v4 = *(_QWORD *)(a1 + 32);
  v7 = (unsigned __int64)&qword_140359D00 ^ ((v4 ^ (v4 >> 4)) >> 4);
  v8 = v7;
  v9 = v7;
  v10 = v7 & 0xF;
  if ( (v7 & 0xF) == 0 )
    v10 = 1;
  for ( ; v10; --v10 )
  {
    v4 = *(_QWORD *)((v7 & 0xF) + v4);
    v7 ^= (v4 ^ (v4 >> 4)) >> 4;
  }
  v11 = v4 ^ v8;
  if ( (v9 & 0x1000) == 0 )
    v11 = v4;
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v11 + 24))(
           v11,
           *(_QWORD *)(v11 + 32),
           a3,
           a4);
}
