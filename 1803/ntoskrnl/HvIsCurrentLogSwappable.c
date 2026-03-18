/*
 * XREFs of HvIsCurrentLogSwappable @ 0x140581BCC
 * Callers:
 *     CmpGenerateFlushControlData @ 0x14049A2D0 (CmpGenerateFlushControlData.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x140499C3C (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // r8

  v1 = *(_DWORD *)(a1 + 164);
  if ( (unsigned int)(v1 - 4) > 1 )
    return 0;
  v2 = HvpLogTypeToLogArrayIndex(5 - (unsigned int)(v1 != 4));
  return *(_BYTE *)(v2 + v3 + 188) == 0;
}
