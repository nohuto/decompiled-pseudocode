/*
 * XREFs of sub_18001E4DC @ 0x18001E4DC
 * Callers:
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001FA18 @ 0x18001FA18 (sub_18001FA18.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_180029FC0 @ 0x180029FC0 (sub_180029FC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001E4DC(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  char v4; // cl
  __int64 v5; // r9
  char *v6; // r10
  __int64 v7; // rdx
  char *v8; // r8
  __int64 v9; // rcx

  v3 = a1;
  v4 = *(_BYTE *)(a1 + 44);
  v5 = a2 >> v4;
  v6 = (char *)(v3 + *(unsigned __int16 *)(v3 + 46) + 2 * v5);
  _m_prefetchw(v6);
  LODWORD(v3) = a2 + a3 - 1;
  LODWORD(v7) = -1;
  v8 = &v6[2 * (((unsigned int)v3 >> v4) - (unsigned int)v5) + 2];
  if ( v6 < v8 )
  {
    v9 = 2 * v5;
    do
    {
      if ( _InterlockedExchangeAdd16((volatile signed __int16 *)v6, 0xFFFFu) == 1 && (_DWORD)v7 == -1 )
        v7 = v9 >> 1;
      v6 += 2;
      v9 += 2LL;
    }
    while ( v6 < v8 );
  }
  return (unsigned int)v7;
}
