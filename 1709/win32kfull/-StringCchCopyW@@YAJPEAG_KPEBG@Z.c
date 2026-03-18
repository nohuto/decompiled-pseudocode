/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C
 * Callers:
 *     cjIFIMetricsToOTMW @ 0x1C0039574 (cjIFIMetricsToOTMW.c)
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 *     bAddFlEntry @ 0x1C00B1C44 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00B1F70 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1C00C07C0 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     vProcessEntry @ 0x1C00C0A10 (vProcessEntry.c)
 *     DrvSetGraphicsDevices @ 0x1C00D69C4 (DrvSetGraphicsDevices.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0268990 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     FontAssocDefaultRoutine @ 0x1C0273B50 (FontAssocDefaultRoutine.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1C0273C4C (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     bDeleteFlEntry @ 0x1C0274498 (bDeleteFlEntry.c)
 *     InitializeDefaultFamilyFonts @ 0x1C038274C (InitializeDefaultFamilyFonts.c)
 *     DefaultFontQueryRoutine @ 0x1C03835C0 (DefaultFontQueryRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  int v3; // r9d
  __int64 v4; // r10
  signed __int64 v5; // r8
  unsigned __int16 v6; // ax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !a2 )
      return (unsigned int)v3;
  }
  else
  {
    v3 = 0;
    if ( !a2 )
      goto LABEL_14;
    v4 = 2147483646 - a2;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + a2) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    if ( !a2 )
    {
LABEL_14:
      a1 -= 2;
      v3 = -2147024774;
    }
  }
  *(_WORD *)a1 = 0;
  return (unsigned int)v3;
}
