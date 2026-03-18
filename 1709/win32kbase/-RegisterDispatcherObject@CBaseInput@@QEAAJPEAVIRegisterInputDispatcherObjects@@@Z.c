/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0019990
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012D6C0 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     RIMOnPnpNotification @ 0x1C000A430 (RIMOnPnpNotification.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C001AB4C (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(CBaseInput *this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  CRIMBase::SensorDispatcherObject *v5; // rbp
  __int64 v7; // r14
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  _DWORD v12[4]; // [rsp+30h] [rbp-648h] BYREF
  _QWORD v13[192]; // [rsp+40h] [rbp-638h] BYREF

  v2 = 0LL;
  v3 = (_QWORD *)((char *)this + 184);
  v5 = (CBaseInput *)((char *)this + 144);
  v7 = 12LL;
  do
  {
    if ( CRIMBase::SensorDispatcherObject::IsValid(v5) )
    {
      v8 = 3 * v2;
      v13[v8] = v3[1];
      v2 = (unsigned int)(v2 + 1);
      v13[v8 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      v13[v8 + 1] = *v3;
    }
    v5 = (CRIMBase::SensorDispatcherObject *)((char *)v5 + 64);
    v3 += 8;
    --v7;
  }
  while ( v7 );
  v9 = 0;
  if ( (_DWORD)v2 )
  {
    v9 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, CBaseInput *, _QWORD, _QWORD *))a2)(
           a2,
           this,
           (unsigned int)v2,
           v13);
    if ( v9 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v12);
      RIMOnPnpNotification(*((_QWORD *)this + 1));
      if ( !v12[0] )
        UserSessionSwitchLeaveCrit(v10);
    }
  }
  return (unsigned int)v9;
}
