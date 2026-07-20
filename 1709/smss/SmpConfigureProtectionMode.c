/*
 * XREFs of SmpConfigureProtectionMode @ 0x14000A5E0
 * Callers:
 *     <none>
 * Callees:
 *     SmpCreateSecurityDescriptors @ 0x14000A610 (SmpCreateSecurityDescriptors.c)
 */

__int64 __fastcall SmpConfigureProtectionMode(__int64 a1, __int64 a2, int *a3, int a4)
{
  if ( a4 == 4 )
    SmpProtectionMode = *a3;
  else
    SmpProtectionMode = 1;
  SmpCreateSecurityDescriptors(0LL);
  return 0LL;
}
