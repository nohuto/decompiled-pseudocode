/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140770590
 * Callers:
 *     SdbResolveDatabaseEx @ 0x140770970 (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14054213C (AslEnvGetProcessWowInfo.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x1407704E4 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  unsigned __int64 i; // rbx
  __int16 v3; // r8
  unsigned __int64 v4; // rcx
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  v1 = 0;
  if ( (int)AslEnvGetProcessWowInfo(&v6, 0LL) >= 0 )
  {
    for ( i = 0LL; i < 15; i += 3LL )
    {
      if ( (dword_1402E02F8[i + 28] & 0x1F) != 0 )
      {
        v3 = dword_1402E02F8[i + 27];
        v4 = 0LL;
        while ( *(_WORD *)((char *)&unk_140355910 + v4) != (_WORD)v6 || *(_WORD *)((char *)&unk_140355912 + v4) != v3 )
        {
          v4 += 16LL;
          if ( v4 >= 0x70 )
            goto LABEL_11;
        }
        v1 |= SdbGuestHostArchsToRuntimePlatformFlag(v3, (__int16 *)&v6);
      }
LABEL_11:
      ;
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      324,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]");
  }
  return v1;
}
