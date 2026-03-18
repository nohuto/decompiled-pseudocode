/*
 * XREFs of ExpSafeWcslen @ 0x1407C09E8
 * Callers:
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 *     ExpVerifyFilePath @ 0x1407C26DC (ExpVerifyFilePath.c)
 *     ExpVerifyWindowsOsOptions @ 0x1407C2864 (ExpVerifyWindowsOsOptions.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1407C3288 (NtEnumerateDriverEntries.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpSafeWcslen(_WORD *a1, unsigned __int64 a2)
{
  _WORD *v2; // rax
  __int16 v3; // r8
  _WORD *v4; // r9
  _WORD *v5; // rax

  v2 = a1;
  if ( (unsigned __int64)a1 >= a2 )
    return 0xFFFFFFFFLL;
  do
  {
    v3 = *v2;
    v4 = v2;
    if ( !*v2 )
      break;
    ++v2;
  }
  while ( (unsigned __int64)v2 < a2 );
  v5 = v4 + 1;
  if ( !v3 )
    v5 = v4;
  if ( (unsigned __int64)v5 >= a2 )
    return 0xFFFFFFFFLL;
  else
    return v5 - a1;
}
