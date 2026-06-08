/*
 * XREFs of AcpiTranslateAccessSize @ 0x1C001D9FC
 * Callers:
 *     DecodeAcpiIdleState @ 0x1C00017F0 (DecodeAcpiIdleState.c)
 *     AcpiEval_CST @ 0x1C001C9A8 (AcpiEval_CST.c)
 *     AcpiEval_CPC @ 0x1C001D37C (AcpiEval_CPC.c)
 *     AcpiEval_PCT_PTC @ 0x1C001D890 (AcpiEval_PCT_PTC.c)
 *     AcpiParseLpiObject @ 0x1C00298DC (AcpiParseLpiObject.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiTranslateAccessSize(_BYTE *a1)
{
  unsigned __int8 v1; // r9
  _BYTE *v2; // rax
  unsigned int v3; // r8d
  unsigned __int8 v4; // al
  unsigned __int8 v5; // dl

  if ( *a1 != 10 )
  {
    v1 = a1[3];
    v2 = &unk_1C000FF4D;
    v3 = 1;
    while ( v1 != *v2 )
    {
      ++v3;
      ++v2;
      if ( v3 >= 5 )
      {
        v4 = a1[3];
        if ( v1 > 4u )
          v4 = 0;
        if ( !v4 )
        {
          v5 = a1[1] + a1[2];
          if ( v5 > 8u )
          {
            if ( v5 > 0x10u )
              v4 = (v5 > 0x20u) + 3;
            else
              v4 = 2;
          }
          else
          {
            v4 = 1;
          }
        }
        a1[3] = *((_BYTE *)&AcpiGenericAccessSizeTranslation + v4);
        return;
      }
    }
  }
}
