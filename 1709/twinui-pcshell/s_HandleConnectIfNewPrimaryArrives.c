/*
 * XREFs of s_HandleConnectIfNewPrimaryArrives @ 0x180185E90
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801869C8 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall s_HandleConnectIfNewPrimaryArrives(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  char v3; // bl
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  if ( (~(a3 >> 1) & 1) == 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v12);
    if ( v6 < 0 )
    {
      v7 = 369LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v6);
      return v3;
    }
    if ( v12 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 56LL))(a2, &v13);
      if ( v6 < 0 )
      {
        v7 = 372LL;
        goto LABEL_7;
      }
      if ( v13 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8), v10);
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFC,
            (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
            (const char *)(unsigned int)v8);
        if ( !v10[0] )
        {
          ImmersiveMonitorHelper::ConnectToMonitor(this, a2);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 136LL))(*((_QWORD *)this + 10));
          return 1;
        }
      }
    }
  }
  return v3;
}
