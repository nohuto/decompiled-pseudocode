/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C001A984
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C001A700 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C001AB4C (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C001AC64 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     RIMRegisterForInput @ 0x1C00988E0 (RIMRegisterForInput.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbp
  int DispatcherHandles; // r14d
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rsi
  int v14; // edi
  __int64 result; // rax
  int v16; // [rsp+28h] [rbp-50h]

  if ( a3 > 0xC )
    return 3221225485LL;
  v8 = 0LL;
  if ( a3 )
  {
    do
    {
      v9 = *((unsigned int *)a2 + v8);
      if ( (unsigned int)v9 >= 0xC )
        return 3221225485LL;
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v9 + 144),
                            (const struct CRIMBase::DispatcherCreation *)((char *)&unk_1C0160FB0 + 12 * v9));
      if ( DispatcherHandles < 0 )
      {
        v16 = v9;
        WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0xAu, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v16);
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v8 < a3 );
  }
  v11 = *((_QWORD *)this + 21);
  v12 = *((_QWORD *)this + 37);
  v13 = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 72;
  v14 = 0;
  if ( (*((_BYTE *)this + 136) & 0x1C) == 0x1C )
  {
    if ( (int)IsEditionHidAutoRepeatTimeoutSupported(this, a2, a3, a4) >= 0 )
      v14 = EditionHidAutoRepeatTimeout();
    if ( v14 && CRIMBase::SensorDispatcherObject::IsValid((CRIMBase *)((char *)this + 336)) )
      v13 = *((_QWORD *)this + 45);
  }
  result = RIMRegisterForInput(
             *((_DWORD *)this + 34),
             0,
             (_DWORD)gpWin32kDriverObject,
             v11,
             v12,
             v13,
             v14,
             (__int64)a5,
             (__int64)CBaseInput::_RIMCallBack,
             0,
             (__int64)&CRIMBase::_aDeviceTemplate,
             (__int64)this + 8);
  if ( (int)result >= 0 )
    return RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
  return result;
}
