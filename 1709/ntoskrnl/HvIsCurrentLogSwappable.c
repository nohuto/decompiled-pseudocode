/*
 * XREFs of HvIsCurrentLogSwappable @ 0x1404E6A78
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1404E5CC4 (CmpGenerateFlushControlData.c)
 * Callees:
 *     HvpLogTypeToLogArrayIndex @ 0x1404E5FD4 (HvpLogTypeToLogArrayIndex.c)
 */

bool __fastcall HvIsCurrentLogSwappable(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // rdx

  v1 = *(_DWORD *)(a1 + 148);
  v2 = 4;
  if ( v1 == 4 )
  {
    v2 = 5;
LABEL_3:
    v3 = HvpLogTypeToLogArrayIndex(v2);
    return *(_BYTE *)(v3 + v4 + 172) == 0;
  }
  if ( v1 == 5 )
    goto LABEL_3;
  return 0;
}
