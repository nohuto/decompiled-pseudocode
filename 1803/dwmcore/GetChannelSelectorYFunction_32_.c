/*
 * XREFs of GetChannelSelectorYFunction_32_ @ 0x1802176F4
 * Callers:
 *     ApplyTexcoordDisplacement @ 0x1802177E4 (ApplyTexcoordDisplacement.c)
 * Callees:
 *     <none>
 */

void __fastcall GetChannelSelectorYFunction_32_(char a1, char a2, _BYTE *a3)
{
  char v3; // al

  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        qmemcpy(a3, "DisplacementMapEffectGreen", 26);
        v3 = aDisplacementma_6[26];
        break;
      case 2:
        qmemcpy(a3, "DisplacementMapEffectBlueY", 26);
        a3[26] = a2 + 48;
        a3[27] = 0;
        return;
      case 3:
        qmemcpy(a3, "DisplacementMapEffectAlpha", 26);
        v3 = aDisplacementma_4[26];
        break;
      default:
        return;
    }
    a3[26] = v3;
    a3[27] = a2 + 48;
    a3[28] = 0;
  }
  else
  {
    qmemcpy(a3, "DisplacementMapEffectRedY", 25);
    a3[25] = a2 + 48;
    a3[26] = 0;
  }
}
