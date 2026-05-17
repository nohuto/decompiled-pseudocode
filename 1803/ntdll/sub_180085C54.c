/*
 * XREFs of sub_180085C54 @ 0x180085C54
 * Callers:
 *     sub_1800299E8 @ 0x1800299E8 (sub_1800299E8.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 *     sub_18007299C @ 0x18007299C (sub_18007299C.c)
 * Callees:
 *     sub_180085CF0 @ 0x180085CF0 (sub_180085CF0.c)
 *     sub_180106D70 @ 0x180106D70 (sub_180106D70.c)
 */

__int64 __fastcall sub_180085C54(unsigned __int16 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+40h] [rbp+18h]

  v2 = qword_18015A420;
  v4 = a1 & 0x7FFF;
  v9 = v4;
  if ( !qword_18015A420 )
    return 4201;
  if ( v4 < 0x40 )
  {
LABEL_3:
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 16LL * v4 + 8));
    v5 = *(_QWORD *)(qword_18015A420 + 16LL * v4);
    if ( (*(_BYTE *)(qword_18015A420 + 16LL * v4) & 1) == 0 )
    {
      v6 = 0;
      goto LABEL_5;
    }
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v4 + 8));
    return 4201;
  }
  v6 = sub_180106D70(a1, &v9);
  if ( !v6 )
  {
    v4 = v9;
    v2 = qword_18015A420;
    goto LABEL_3;
  }
  v5 = v10;
LABEL_5:
  if ( !v6 )
  {
    v7 = *(_DWORD *)(v5 + 324);
    if ( (v7 & 0x800) != 0 && (v7 & 0x10000) == 0 )
      v6 = sub_180085CF0(v5, a2);
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *(unsigned int *)(v5 + 20) + 8));
  }
  return v6;
}
