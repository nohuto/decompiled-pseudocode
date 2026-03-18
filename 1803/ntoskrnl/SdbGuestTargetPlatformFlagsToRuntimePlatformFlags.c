/*
 * XREFs of SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1407D786C
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1407D7C4C (SdbResolveDatabaseEx.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14061F1C4 (AslEnvGetProcessWowInfo.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x1407D77C0 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(int a1)
{
  unsigned int v1; // edi
  int ProcessWowInfo; // eax
  unsigned __int64 i; // rbx
  __int16 v4; // r8
  unsigned __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  v1 = 0;
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v8, 0LL);
  if ( ProcessWowInfo >= 0 )
  {
    for ( i = 0LL; i < 0x3C; i += 12LL )
    {
      if ( (*(_DWORD *)((_BYTE *)&unk_14031B268 + i) & 0x1F) != 0 )
      {
        v4 = *(_WORD *)((char *)&unk_14031B264 + i);
        v5 = 0LL;
        while ( *(_WORD *)((char *)&unk_1403992F0 + v5) != (_WORD)v8 || *(_WORD *)((char *)&unk_1403992F2 + v5) != v4 )
        {
          v5 += 16LL;
          if ( v5 >= 0x70 )
            goto LABEL_11;
        }
        v1 |= SdbGuestHostArchsToRuntimePlatformFlag(v4, (__int16 *)&v8);
      }
LABEL_11:
      ;
    }
  }
  else
  {
    v7 = ProcessWowInfo;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbGuestTargetPlatformFlagsToRuntimePlatformFlags",
      324,
      (unsigned int)"AslEnvGetProcessWowInfo failed to determine processor info [%x]",
      v7);
  }
  return v1;
}
