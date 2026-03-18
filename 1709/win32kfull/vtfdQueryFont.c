/*
 * XREFs of vtfdQueryFont @ 0x1C02399C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vtfdQueryFont(__int64 a1, __int64 a2, int a3)
{
  if ( a2 )
    return *(_QWORD *)(a2 + 48LL * (unsigned int)(a3 - 1) + 80);
  else
    return 0LL;
}
