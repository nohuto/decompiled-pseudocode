/*
 * XREFs of sub_140194520 @ 0x140194520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall @ 0x1401B3510 (_guard_check_icall.c)
 */

__int64 __fastcall sub_140194520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  char v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rdi
  __int16 v9; // ax
  unsigned __int64 v10; // rdi

  v4 = *(_QWORD *)(a1 + 32);
  v6 = 1;
  v7 = (unsigned __int64)&qword_14039D340 ^ ((v4 ^ (v4 >> 4)) >> 4);
  v8 = v7;
  if ( (v7 & 0xF) != 0 )
    v6 = v7 & 0xF;
  do
  {
    v4 = *(_QWORD *)((v7 & 0xF) + v4);
    v7 ^= (v4 ^ (v4 >> 4)) >> 4;
    --v6;
  }
  while ( v6 );
  v9 = v8;
  v10 = v4 ^ v8;
  if ( (v9 & 0x1000) == 0 )
    v10 = v4;
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v10 + 24))(
           v10,
           *(_QWORD *)(v10 + 32),
           a3,
           a4);
}
