/*
 * XREFs of FsRtlpOplockUpperLowerCompatible @ 0x140492158
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E7C48 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckUpperOplock @ 0x1405EDDB0 (FsRtlCheckUpperOplock.c)
 *     FsRtlUpperOplockFsctrl @ 0x1406B09E0 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlpOplockUpperLowerCompatible(int a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 1;
  v3 = a1 & 0x1701E;
  if ( !v3 || v3 == 0x10000 )
    return result;
  switch ( a2 )
  {
    case 0:
      return 0;
    case 4096:
      goto LABEL_14;
    case 12288:
      if ( v3 == 12288 )
        return result;
LABEL_14:
      if ( v3 != 4096 && v3 != 16 )
        return 0;
      return result;
  }
  if ( a2 == 20480 && (v3 == 28672 || v3 == 12288 || v3 == 4) )
    return 0;
  return result;
}
