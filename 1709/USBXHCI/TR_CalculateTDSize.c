/*
 * XREFs of TR_CalculateTDSize @ 0x1C00227F0
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C0025B3C (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002AEC0 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C00309E0 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_CalculateTDSize(__int64 a1, int a2, unsigned int a3, char a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 256LL) )
  {
    if ( !a4 )
    {
      v4 = a2 - a3 / (*(_WORD *)(*(_QWORD *)(a1 + 56) + 100LL) & 0x7FFu);
      if ( v4 > 0x1F )
        return 31;
    }
  }
  return v4;
}
