/*
 * XREFs of PnpFreeUnicodeStringList @ 0x140180528
 * Callers:
 *     PiInitReleaseCachedGroupInformation @ 0x140642E54 (PiInitReleaseCachedGroupInformation.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1408B5198 (PnpRegMultiSzToUnicodeStrings.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeUnicodeStringList(PVOID *P, unsigned int a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 1;
      v4 = a2;
      do
      {
        if ( *v3 )
          ExFreePoolWithTag(*v3, 0);
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
