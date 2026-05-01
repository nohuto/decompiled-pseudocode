/*
 * XREFs of s_HandleConnectIfNewPrimaryArrives @ 0x180151BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ @ 0x180152568 (-IsCurrentMonitorAlsoPrimary@ImmersiveMonitorHelper@@AEAA_NXZ.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801526F0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall s_HandleConnectIfNewPrimaryArrives(
        ImmersiveMonitorHelper *this,
        struct IImmersiveMonitor *a2,
        unsigned int a3)
{
  char v3; // bl
  int v6; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+18h] BYREF
  int v11; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  if ( (~(a3 >> 1) & 1) == 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v10);
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
    if ( v10 )
    {
      v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)a2 + 56LL))(a2, &v11);
      if ( v6 < 0 )
      {
        v7 = 372LL;
        goto LABEL_7;
      }
      if ( v11 && !ImmersiveMonitorHelper::IsCurrentMonitorAlsoPrimary(this) )
      {
        ImmersiveMonitorHelper::ConnectToMonitor(this, a2);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 136LL))(*((_QWORD *)this + 7));
        return 1;
      }
    }
  }
  return v3;
}
