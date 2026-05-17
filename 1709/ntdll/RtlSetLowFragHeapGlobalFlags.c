/*
 * XREFs of RtlSetLowFragHeapGlobalFlags @ 0x1801024E0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D321C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlpHpStackTraceEnable @ 0x1801005CC (RtlpHpStackTraceEnable.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x1801025C0 (RtlpHpApplySegmentHeapConfigurations.c)
 */

char __fastcall RtlSetLowFragHeapGlobalFlags(int a1, int a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  char result; // al

  RtlpHpApplySegmentHeapConfigurations();
  v7 = (unsigned int)RtlpLowFragHeapGlobalFlags;
  if ( (a1 & 8) != 0 )
  {
    v7 = RtlpLowFragHeapGlobalFlags | 0x10u;
    RtlpLowFragHeapGlobalFlags |= 0x10u;
  }
  if ( (a1 & 4) != 0 )
  {
    v7 = (unsigned int)v7 | 8;
    RtlpLowFragHeapGlobalFlags = v7;
  }
  if ( (a2 & 0x100000) != 0 || (a1 & 2) != 0 )
  {
    v7 = (unsigned int)v7 | 2;
    RtlpLowFragHeapGlobalFlags = v7;
  }
  LOBYTE(v5) = (v7 & 2) == 0;
  if ( ((unsigned __int8)v5 & ((a1 & 1) == 0)) == 0 )
  {
    v7 = (unsigned int)v7 | 4;
    RtlpLowFragHeapGlobalFlags = v7;
  }
  if ( (a1 & 0xFF00) != 0 )
    RtlpHpLfhContentionLimit = BYTE1(a1);
  if ( (a1 & 0xFF0000) != 0 )
    RtlpHpLfhPerfFlags = BYTE2(a1);
  if ( (a1 & 0x10) != 0 )
    RtlpHpStackTraceEnable(v5, v4, (unsigned __int64 *)v7, v6);
  result = RtlpHpHeapFeatures;
  if ( (a1 & 0x20) != 0 )
  {
    result = RtlpHpHeapFeatures | 4;
    RtlpHpHeapFeatures |= 4u;
  }
  if ( (a1 & 0x40) != 0 )
    RtlpHpAppCompatFlags &= 0xFFFFFFFC;
  if ( (a1 & 0x80u) != 0 )
  {
    result |= 8u;
    RtlpHpHeapFeatures = result;
  }
  return result;
}
