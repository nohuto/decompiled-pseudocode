/*
 * XREFs of ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C004FD40
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012E15C (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C004FFAC (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::InitializeSensor(CBaseInput *this)
{
  void (*v2)(struct RIMDevChangeStruct *); // r9
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[48]; // [rsp+38h] [rbp-40h] BYREF

  *((_DWORD *)this + 158) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *((_DWORD *)this + 159) = (unsigned int)PsGetCurrentThreadId();
  (*(void (__fastcall **)(CBaseInput *, _BYTE *, unsigned __int64 *))(*(_QWORD *)this + 24LL))(this, v5, &v4);
  result = CRIMBase::CreateHandles(
             this,
             (const enum CRIMBase::DispatcherHandleName *const)v5,
             (unsigned int)v4,
             v2,
             this);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 32LL))(this);
  return result;
}
