/*
 * XREFs of s_HandleConnectIfNoCurrentMonitorExists @ 0x180185DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801869C8 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall s_HandleConnectIfNoCurrentMonitorExists(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  char v3; // bl
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( (~(a3 >> 5) & 1) == 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v11);
    if ( v6 >= 0 )
    {
      if ( v11 )
      {
        v7 = *((_QWORD *)this + 8);
        v10 = 0;
        if ( !v7 || ((*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v10), !v10) )
        {
          ImmersiveMonitorHelper::ConnectToMonitor(this, a2);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 136LL))(*((_QWORD *)this + 10));
          return 1;
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x160,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v6);
    }
  }
  return v3;
}
