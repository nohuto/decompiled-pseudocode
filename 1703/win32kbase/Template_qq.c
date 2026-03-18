/*
 * XREFs of Template_qq @ 0x1C00DC97C
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004AFA0 (xxxCreateThreadInfo.c)
 *     EtwTraceFocusChange @ 0x1C008A500 (EtwTraceFocusChange.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 *     EtwTraceCompleteInputDeviceRead @ 0x1C00D9AE0 (EtwTraceCompleteInputDeviceRead.c)
 *     EtwTraceDwmManipulationFrameRouted @ 0x1C00D9D40 (EtwTraceDwmManipulationFrameRouted.c)
 *     EtwTraceDwmManipulationFrameStart @ 0x1C00D9D70 (EtwTraceDwmManipulationFrameStart.c)
 *     EtwTraceStartInputDeviceRead @ 0x1C00DA660 (EtwTraceStartInputDeviceRead.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v6.Ptr = (ULONGLONG)&v10;
  v6.Size = 4;
  v6.Reserved = 0;
  v7 = &a5;
  v8 = 4;
  v9 = 0;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 2u, &v6);
}
