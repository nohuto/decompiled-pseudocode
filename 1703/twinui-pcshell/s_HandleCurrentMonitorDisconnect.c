/*
 * XREFs of s_HandleCurrentMonitorDisconnect @ 0x1801519B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801526F0 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall s_HandleCurrentMonitorDisconnect(
        ImmersiveMonitorHelper *this,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  char v5; // si
  char v6; // bl
  int v7; // eax
  _QWORD *v8; // rdi
  __int64 (__fastcall **v9)(_QWORD *, _QWORD, GUID *, GUID *, __int64 *); // rbx
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
    if ( v18 || !(unsigned int)SHIsSameObject(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5), a2) )
      return v6;
    v16[0] = 0LL;
    v8 = (_QWORD *)*((_QWORD *)this + 6);
    v9 = (__int64 (__fastcall **)(_QWORD *, _QWORD, GUID *, GUID *, __int64 *))(*v8 + 72LL);
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)v16);
    v11 = (*v9)(v8, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v10);
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
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 136LL))(*((_QWORD *)this + 7));
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
