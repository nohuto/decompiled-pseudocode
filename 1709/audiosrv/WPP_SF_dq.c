/*
 * XREFs of WPP_SF_dq @ 0x1800770B0
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x1800190E0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z @ 0x180019370 (-NotifyStreamSuspensionStateChanged@CAudioSession@@UEAAJPEAVCAudioStream@@H@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019450 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180019640 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dq(__int64 a1, unsigned __int16 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a2, &v5);
}
