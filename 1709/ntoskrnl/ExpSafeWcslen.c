/*
 * XREFs of ExpSafeWcslen @ 0x140759ACC
 * Callers:
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x14075B720 (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x14075B87C (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x14075BC58 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x14075C268 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  do
  {
    if ( !*v2 )
      break;
    ++v2;
  }
  while ( (unsigned __int64)v2 < a2 );
  if ( (unsigned __int64)v2 >= a2 )
    return 0xFFFFFFFFLL;
  else
    return v2 - a1;
}
