/*
 * XREFs of ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C011A480
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012E15C (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     RIMOnPnpNotification @ 0x1C01027D0 (RIMOnPnpNotification.c)
 */

__int64 __fastcall CBaseInput::RegisterDispatcherObject(char **this, struct IRegisterInputDispatcherObjects *a2)
{
  __int64 v2; // r8
  _QWORD *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // ebx
  _DWORD v10[4]; // [rsp+30h] [rbp-628h] BYREF
  _QWORD v11[192]; // [rsp+40h] [rbp-618h] BYREF

  v2 = 0LL;
  v5 = this + 22;
  v6 = 11LL;
  do
  {
    if ( *((_DWORD *)v5 - 5) )
    {
      v7 = 3 * v2;
      v11[v7] = *v5;
      v2 = (unsigned int)(v2 + 1);
      v11[v7 + 2] = CBaseInput::_OnDispatcherObjectSignaled;
      v11[v7 + 1] = *(v5 - 1);
    }
    v5 += 5;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  if ( (_DWORD)v2 )
  {
    v8 = (**(__int64 (__fastcall ***)(struct IRegisterInputDispatcherObjects *, char **, __int64, _QWORD *))a2)(
           a2,
           this,
           v2,
           v11);
    if ( v8 >= 0 )
    {
      ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v10);
      RIMOnPnpNotification(this[1]);
      if ( !v10[0] )
        UserSessionSwitchLeaveCrit();
    }
  }
  return (unsigned int)v8;
}
