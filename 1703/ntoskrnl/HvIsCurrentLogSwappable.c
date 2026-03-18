/*
 * XREFs of HvIsCurrentLogSwappable @ 0x14045BE38
 * Callers:
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1404D8714 (CmpGenerateFlushControlData.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1404D3C0C (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // r8

  v4 = *(unsigned int *)(a1 + 148);
  if ( (unsigned int)(v4 - 4) > 1 )
    return 0;
  v6 = 4LL;
  if ( (_DWORD)v4 == 4 )
    v6 = 5LL;
  v7 = HvpLogTypeToLogArrayIndex(v6, v4, a1, a4);
  return *(_BYTE *)(v7 + v8 + 172) == 0;
}
