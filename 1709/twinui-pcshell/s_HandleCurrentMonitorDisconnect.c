/*
 * XREFs of s_HandleCurrentMonitorDisconnect @ 0x180185C70
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801869C8 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall s_HandleCurrentMonitorDisconnect(
        ImmersiveMonitorHelper *this,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  char v5; // si
  char v6; // di
  int v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // rbx
  __int64 *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  struct IImmersiveMonitor *v14; // rcx
  struct IImmersiveMonitor *v16[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v18; // [rsp+70h] [rbp+18h] BYREF
  int v19; // [rsp+78h] [rbp+20h] BYREF

  v16[1] = (struct IImmersiveMonitor *)-2LL;
  v5 = 0;
  if ( (~(a3 >> 5) & 1) == 0 )
  {
    v6 = 0;
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int *))(*a2)[6])(a2, &v18);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13E,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
        (const char *)(unsigned int)v7);
      return v6;
    }
    if ( v18 || !(unsigned int)SHIsSameObject(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 8), a2) )
      return v6;
    v16[0] = 0LL;
    v8 = (__int64 *)*((_QWORD *)this + 9);
    v9 = *v8;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)v16);
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, GUID *, __int64 *))(v9 + 72))(
            v8,
            0LL,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
            v10);
    v12 = retaddr;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v16[0] + 48LL))(v16[0], &v19);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        if ( v19 )
        {
          ImmersiveMonitorHelper::ConnectToMonitor(this, v16[0]);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 136LL))(*((_QWORD *)this + 10));
        }
        goto LABEL_13;
      }
      v13 = 329LL;
    }
    else
    {
      v13 = 326LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v12,
      (void *)v13,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v11);
LABEL_13:
    v6 = 1;
    v14 = v16[0];
    if ( v16[0] )
    {
      v16[0] = 0LL;
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return v6;
  }
  return v5;
}
