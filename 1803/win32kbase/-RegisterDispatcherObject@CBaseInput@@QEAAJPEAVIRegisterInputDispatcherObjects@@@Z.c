/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0124210
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C0130BA4 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0033028 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C003AF34 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C01228F8 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0123204 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(char **this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rdi
  CRIMBase::SensorDispatcherObject *v3; // rsi
  unsigned int i; // ebx
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  _DWORD v13[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v14[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (CRIMBase::SensorDispatcherObject *)(this + 18);
  for ( i = 0; i < 0xE; ++i )
  {
    if ( CRIMBase::IsDispatcherObjectValid((CRIMBase *)this, i) )
    {
      v7 = 3 * v2;
      v14[3 * v2] = CRIMBase::GetDispatcherObjectByIndex((CRIMBase *)this, i);
      v14[3 * v2 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      if ( !CRIMBase::SensorDispatcherObject::IsValid(v3) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      v2 = (unsigned int)(v2 + 1);
      v14[v7 + 1] = *((_QWORD *)v3 + 5);
    }
    v3 = (CRIMBase::SensorDispatcherObject *)((char *)v3 + 64);
  }
  v10 = 0;
  if ( (_DWORD)v2 )
  {
    v10 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, char **, _QWORD, _QWORD *))a2)(
            a2,
            this,
            (unsigned int)v2,
            v14);
    if ( v10 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v13);
      RIMOnPnpNotification(this[1]);
      if ( !v13[0] )
        UserSessionSwitchLeaveCrit(v11);
    }
  }
  return (unsigned int)v10;
}
