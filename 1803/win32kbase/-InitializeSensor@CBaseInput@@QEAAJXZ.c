/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0123060
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0130BA4 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  void (*v4)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v7[56]; // [rsp+38h] [rbp-50h] BYREF

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  *((_DWORD *)this + 270) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *((_DWORD *)this + 271) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v7, &v6);
  result = CRIMBase::CreateHandles(this, (const enum CRIMBase::DispatcherHandleName *)v7, (unsigned int)v6, v4, this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
