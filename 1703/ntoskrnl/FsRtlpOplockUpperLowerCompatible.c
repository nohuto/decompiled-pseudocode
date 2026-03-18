/*
 * XREFs of FsRtlpOplockUpperLowerCompatible @ 0x14048C890
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401E3940 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlCheckUpperOplock @ 0x140585C60 (FsRtlCheckUpperOplock.c)
 *     FsRtlUpperOplockFsctrl @ 0x1406855F0 (FsRtlUpperOplockFsctrl.c)
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
