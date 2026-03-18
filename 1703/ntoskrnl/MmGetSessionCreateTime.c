/*
 * XREFs of MmGetSessionCreateTime @ 0x14043D8B0
 * Callers:
 *     EtwQueryProcessTelemetryInfo @ 0x14043D4E8 (EtwQueryProcessTelemetryInfo.c)
 *     EtwpWriteProcessStarted @ 0x140451038 (EtwpWriteProcessStarted.c)
 * Callees:
 *     PsIsSystemProcess @ 0x14008B4F0 (PsIsSystemProcess.c)
 */

__int64 __fastcall MmGetSessionCreateTime(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || PsIsSystemProcess(a1) )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 8184);
}
