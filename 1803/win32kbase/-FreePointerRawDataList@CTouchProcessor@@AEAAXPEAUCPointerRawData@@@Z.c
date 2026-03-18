/*
 * XREFs of ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C0112380
 * Callers:
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C010F698 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0111BBC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerRawDataList(struct _KTHREAD **this, struct CPointerRawData *a2)
{
  struct CPointerRawData *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx

  v2 = a2;
  if ( this[13] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  while ( v2 )
  {
    v3 = (__int64)v2;
    v2 = (struct CPointerRawData *)*((_QWORD *)v2 + 3);
    v4 = *(_QWORD *)(v3 + 16);
    if ( !v4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2);
      v4 = *(_QWORD *)(v3 + 16);
    }
    Win32FreePool(v4);
    Win32FreePool(v3);
  }
}
