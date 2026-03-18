/*
 * XREFs of CreateKernelEvent @ 0x1C0054640
 * Callers:
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJW4DispatcherHandleType@2@W4DispatcherHandleName@2@@Z @ 0x1C00520C4 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJW4DispatcherHandleType@2@W4Dispat.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 *     VideoPortCallout @ 0x1C009CCB0 (VideoPortCallout.c)
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0131B3C (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 */

struct _KEVENT *__fastcall CreateKernelEvent(EVENT_TYPE Type, BOOLEAN a2)
{
  struct _KEVENT *v4; // rax
  struct _KEVENT *v5; // rbx

  v4 = (struct _KEVENT *)Win32AllocPoolNonPaged(24LL, 1699443541LL);
  v5 = v4;
  if ( v4 )
    KeInitializeEvent(v4, Type, a2);
  return v5;
}
