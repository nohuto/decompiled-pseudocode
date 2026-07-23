/*
 * XREFs of RtlpHpStackTraceConfig @ 0x180100518
 * Callers:
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 * Callees:
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F06C8 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpHpStackTraceDisable @ 0x18010057C (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceEnable @ 0x1801005CC (RtlpHpStackTraceEnable.c)
 */

__int64 __fastcall RtlpHpStackTraceConfig(__int64 a1)
{
  void *v2; // rcx
  HANDLE Buffer[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( *(_QWORD *)(a1 + 8) == -1LL )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlpHpStackTraceEnable();
    else
      RtlpHpStackTraceDisable();
    return 0LL;
  }
  else
  {
    memset(Buffer, 0, 0x58uLL);
    v2 = *(void **)(a1 + 8);
    Buffer[10] = (HANDLE)*(unsigned __int16 *)(a1 + 2);
    LODWORD(Buffer[3]) = 0x10000000;
    return RtlpHeapPerformCrossProcessQuery(v2, Buffer);
  }
}
