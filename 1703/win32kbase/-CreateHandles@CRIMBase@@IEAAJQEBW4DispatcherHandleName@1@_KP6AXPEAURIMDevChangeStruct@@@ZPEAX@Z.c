/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C004FFAC
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C004FD40 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJW4DispatcherHandleType@2@W4DispatcherHandleName@2@@Z @ 0x1C00520C4 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJW4DispatcherHandleType@2@W4Dispat.c)
 *     RIMRegisterForInput @ 0x1C008FAE0 (RIMRegisterForInput.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // ecx
  __int64 v15; // r8

  if ( a3 > 0xB )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v9 >= 0xB )
        return 3221225485LL;
      result = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                 (char *)this + 32 * v9 + 8 * v9 + 152,
                 (unsigned int)((unsigned int)(v9 - 2) <= 2) + 1);
      if ( (int)result < 0 )
        return result;
    }
    while ( ++v8 < a3 );
  }
  v11 = *((_QWORD *)this + 20);
  v12 = 0LL;
  v13 = *((_QWORD *)this + 30);
  if ( *((_DWORD *)this + 69) )
    v12 = *((_QWORD *)this + 35);
  v14 = 0;
  *((_QWORD *)this + 9) = (char *)this + 80;
  if ( (*((_DWORD *)this + 36) & 0x1C) == 0
    || ((int)IsEditionHidAutoRepeatTimeoutSupported(0LL, a2, a3, a4) >= 0
      ? (v14 = EditionHidAutoRepeatTimeout())
      : (v14 = 0),
        !v14) )
  {
    v12 = 0LL;
  }
  result = RIMRegisterForInput(
             *((_DWORD *)this + 36),
             0,
             (_DWORD)gpWin32kDriverObject,
             v11,
             v13,
             v12,
             v14,
             (__int64)a5,
             (__int64)CBaseInput::_RIMCallBack,
             0,
             (__int64)&CRIMBase::_aDeviceTemplate,
             (__int64)this + 8);
  if ( (int)result >= 0 )
  {
    LOBYTE(v15) = 1;
    return RawInputManagerObjectResolveHandle(*((_QWORD *)this + 1), 3LL, v15, (char *)this + 16);
  }
  return result;
}
