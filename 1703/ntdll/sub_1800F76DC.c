/*
 * XREFs of sub_1800F76DC @ 0x1800F76DC
 * Callers:
 *     sub_18006B394 @ 0x18006B394 (sub_18006B394.c)
 * Callees:
 *     sub_1800F770C @ 0x1800F770C (sub_1800F770C.c)
 */

__int64 __fastcall sub_1800F76DC(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d

  if ( (unsigned int)(a2 - 4520) <= 0x1A
    && (unsigned __int8)sub_1800F770C(a1, a2, (unsigned int)a1, (unsigned int)(a2 - 4519)) )
  {
    return (unsigned int)(v3 + v2);
  }
  else
  {
    return 0LL;
  }
}
