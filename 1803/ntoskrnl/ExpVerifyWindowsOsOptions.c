/*
 * XREFs of ExpVerifyWindowsOsOptions @ 0x1407C2864
 * Callers:
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 *     NtEnumerateBootEntries @ 0x1407C2C40 (NtEnumerateBootEntries.c)
 * Callees:
 *     ExpSafeWcslen @ 0x1407C09E8 (ExpSafeWcslen.c)
 *     ExpVerifyFilePath @ 0x1407C26DC (ExpVerifyFilePath.c)
 */

__int64 __fastcall ExpVerifyWindowsOsOptions(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  _DWORD *v4; // r10
  unsigned int v5; // r11d
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  v3 = (unsigned int)ExpSafeWcslen((_WORD *)(a1 + 20), a1 + a2);
  v6 = v4[3];
  if ( v6 < 0x14 )
    return 3221225485LL;
  if ( v6 > v5 )
    return 3221225485LL;
  if ( v4[2] != 1 )
    return 3221225485LL;
  v7 = (unsigned int)v4[4];
  if ( (v7 & 3) != 0 )
    return 3221225485LL;
  if ( (unsigned int)v7 >= v5 )
    return 3221225485LL;
  if ( (_DWORD)v3 == -1 )
    return 3221225485LL;
  v8 = (unsigned __int64)v4 + v7;
  if ( (unsigned __int64)v4 + 2 * v3 + 22 > v8 )
    return 3221225485LL;
  else
    return ExpVerifyFilePath(v8, v2);
}
