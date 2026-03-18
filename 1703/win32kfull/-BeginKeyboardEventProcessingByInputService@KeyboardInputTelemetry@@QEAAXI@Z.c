/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CADD0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CAA0C (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C032EE98 )
    memset(&dword_1C032EE38, 0, 0x60uLL);
  if ( dword_1C032EE9C != a2 )
  {
    if ( dword_1C032EE9C )
      KeyboardInputTelemetry::_UploadTelemetryData(this);
    dword_1C032EE9C = a2;
    if ( gptiForeground )
    {
      v3 = *(_QWORD *)(gptiForeground + 376LL);
      if ( v3 )
      {
        if ( dword_1C032EE98 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C032EE98 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(pwsz, 0x10uLL, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(gptiForeground + 376LL) + 936LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry = KeQueryPerformanceCounter(0LL).QuadPart;
}
