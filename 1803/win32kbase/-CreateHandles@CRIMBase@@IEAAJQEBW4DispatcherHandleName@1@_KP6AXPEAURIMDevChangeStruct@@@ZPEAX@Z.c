/*
 * XREFs of ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260
 * Callers:
 *     ?InitializeSensor@CBaseInput@@QEAAJXZ @ 0x1C0123060 (-InitializeSensor@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     RIMRegisterForInput @ 0x1C00E4790 (RIMRegisterForInput.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ?CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z @ 0x1C0122110 (-CreateDispatcherHandles@SensorDispatcherObject@CRIMBase@@QEAAJAEBUDispatcherCreation@2@@Z.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C01228A4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0123204 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CRIMBase::CreateHandles(
        CRIMBase *this,
        const enum CRIMBase::DispatcherHandleName *a2,
        unsigned __int64 a3,
        void (*a4)(struct RIMDevChangeStruct *),
        void *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rsi
  int DispatcherHandles; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 DispatcherHandleByName; // rbp
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // edi
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx

  if ( a3 > 0xE )
    return 3221225485LL;
  v9 = 0LL;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int *)a2 + v9);
      if ( (unsigned int)v10 >= 0xE )
        return 3221225485LL;
      if ( dword_1C0183EA0[3 * v10] != (_DWORD)v10 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(dword_1C0183EA0, a2);
      DispatcherHandles = CRIMBase::SensorDispatcherObject::CreateDispatcherHandles(
                            (CRIMBase *)((char *)this + 64 * (unsigned __int64)(unsigned int)v10 + 144),
                            (const struct CRIMBase::DispatcherCreation *)&dword_1C0183EA0[3 * v10]);
      if ( DispatcherHandles < 0 )
      {
        WPP_RECORDER_SF_d(
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
          2u,
          2u,
          0xAu,
          (__int64)&WPP_eab42dbcaee03f33877399e40ce8cb8f_Traceguids,
          v10);
        return (unsigned int)DispatcherHandles;
      }
    }
    while ( ++v9 < a3 );
  }
  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 0LL, 0LL, a4);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12);
  v18 = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL, v15);
  if ( !v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
  v19 = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 72;
  v20 = 0;
  if ( (*((_BYTE *)this + 136) & 0x1C) == 0x1C )
  {
    if ( (int)IsEditionHidAutoRepeatTimeoutSupported() >= 0 )
      v20 = EditionHidAutoRepeatTimeout();
    if ( v20 )
    {
      if ( CRIMBase::IsDispatcherObjectValid(this, 3u) )
      {
        v19 = CRIMBase::GetDispatcherHandleByName(this, 3LL, 0LL, v21);
        if ( !v19 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
      }
    }
  }
  v24 = RIMRegisterForInput(
          *((_DWORD *)this + 34),
          DispatcherHandleByName,
          v18,
          v19,
          v20,
          (__int64)a5,
          (__int64)CBaseInput::_RIMCallBack,
          (__int64)this + 8);
  if ( v24 >= 0 )
  {
    v24 = RawInputManagerObjectResolveHandle(*((char **)this + 1), 3u, 1, (PVOID *)this + 2);
    if ( v24 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
  }
  return (unsigned int)v24;
}
