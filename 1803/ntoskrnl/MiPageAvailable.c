/*
 * XREFs of MiPageAvailable @ 0x14026B798
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 * Callees:
 *     MiPageAvailableEx @ 0x1400E7708 (MiPageAvailableEx.c)
 */

__int64 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 7040);
  if ( v3 )
    --v3;
  return MiPageAvailableEx(a1, v3, a2);
}
