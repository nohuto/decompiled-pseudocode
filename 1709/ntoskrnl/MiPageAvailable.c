/*
 * XREFs of MiPageAvailable @ 0x140230484
 * Callers:
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 * Callees:
 *     MiPageAvailableEx @ 0x1400C729C (MiPageAvailableEx.c)
 */

__int64 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 5952);
  if ( v3 )
    --v3;
  return MiPageAvailableEx(a1, v3, a2);
}
