/*
 * XREFs of ?MonitorCleanupAdditionalTiming@@YAXXZ @ 0x1C0234544
 * Callers:
 *     MonitorCleanupGlobal @ 0x1C004707C (MonitorCleanupGlobal.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 */

void MonitorCleanupAdditionalTiming(void)
{
  void *v0; // rcx

  while ( 1 )
  {
    v0 = qword_1C007BE38;
    if ( !qword_1C007BE38 )
      break;
    qword_1C007BE38 = *(void **)qword_1C007BE38;
    operator delete[](v0);
  }
}
