/*
 * XREFs of ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00CF15C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00CEC84 (-_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        int a2)
{
  __int64 v3; // rax

  if ( !dword_1C032A4F8 )
    memset(&unk_1C032A498, 0, 0x60uLL);
  if ( dword_1C032A4FC != a2 )
  {
    if ( dword_1C032A4FC )
      KeyboardInputTelemetry::_UploadTelemetryData((const WCHAR *)gKeyboardInputTelemetry);
    dword_1C032A4FC = a2;
    if ( gptiForeground )
    {
      v3 = *(_QWORD *)(gptiForeground + 400LL);
      if ( v3 )
      {
        if ( dword_1C032A4F8 != *(_DWORD *)(v3 + 56) )
        {
          dword_1C032A4F8 = *(_DWORD *)(v3 + 56);
          RtlStringCchCopyW(pszDest, 0x10uLL, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(gptiForeground + 400LL) + 944LL));
        }
      }
    }
  }
  gKeyboardInputTelemetry[0] = KeQueryPerformanceCounter(0LL).QuadPart;
}
