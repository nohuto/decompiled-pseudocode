/*
 * XREFs of sub_18005FB9C @ 0x18005FB9C
 * Callers:
 *     sub_18005F8D0 @ 0x18005F8D0 (sub_18005F8D0.c)
 * Callees:
 *     sub_180002BE0 @ 0x180002BE0 (sub_180002BE0.c)
 */

__int64 __fastcall sub_18005FB9C(__int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // r15

  v2 = (__int64 *)(a1 + 224);
  v3 = 129LL;
  do
  {
    if ( (*v2 & 1) == 0 )
    {
      v5 = *v2;
      if ( *(_BYTE *)(*v2 + 2) )
      {
        v6 = 0LL;
        v7 = *(unsigned __int8 *)(*v2 + 2);
        do
        {
          sub_180002BE0(a1, *(_QWORD *)(v6 + *(_QWORD *)(v5 + 96)));
          v6 += 8LL;
          --v7;
        }
        while ( v7 );
      }
      sub_180002BE0(a1, v5);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return sub_1800605B4(a1 + 112, a1, 1LL);
}
