/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x180032920
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002C4D4 (-CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEA.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18003308C (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180034D60 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveMode::CompleteInitialization(
        CImmersiveMode *this,
        struct IFallbackWindow *a2,
        __int64 (__fastcall ***a3)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  CImmersiveMode *v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rcx
  __int64 (__fastcall **v11)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 *v12; // rax
  const struct _GUID *v13; // rdx
  signed int i; // ebx
  NTSTATUS v15; // eax
  signed int v16; // eax
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 *v19; // rax
  struct IImmersiveMonitor *v20; // rcx
  __int64 *v21; // rcx
  void *v22; // rcx
  __int64 v23; // rcx
  struct IImmersiveMonitor *v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26[3]; // [rsp+48h] [rbp-30h] BYREF
  int v27; // [rsp+60h] [rbp-18h]
  int v28; // [rsp+C0h] [rbp+48h] BYREF
  int v29; // [rsp+C8h] [rbp+50h] BYREF
  __int64 *v30; // [rsp+D0h] [rbp+58h] BYREF
  void *v31; // [rsp+D8h] [rbp+60h] BYREF

  v26[1] = -2LL;
  v6 = (CImmersiveMode *)((char *)this - 96);
  v7 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 96) & -(__int64)(this != (CImmersiveMode *)96));
  v26[2] = (__int64)v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v27 = v8;
  v9 = 0;
  if ( *((struct IFallbackWindow **)this + 32) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v10 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v26[0] = 0LL;
  v11 = *a3;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v26);
  i = (*v11)((struct IImmersiveMonitorManager *)a3, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v12);
  if ( i >= 0 )
  {
    v31 = 0LL;
    i = CMonitorNotificationHelper_CreateInstance(
          (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 48) & -(__int64)(v6 != 0LL)),
          v13,
          &v31);
    if ( i >= 0 )
    {
      i = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v26[0] + 24LL))(
            v26[0],
            v31,
            (char *)this + 272);
      if ( i >= 0 )
      {
        v15 = RtlQueryWnfStateData(
                &v28,
                WNF_IMSN_LAUNCHERVISIBILITY,
                CImmersiveMode::ImmersiveLauncherWNFCallback,
                v6,
                0LL);
        if ( v15 >= 0 )
          v15 = RtlSubscribeWnfStateChangeNotification(
                  (char *)v6 + 384,
                  WNF_IMSN_LAUNCHERVISIBILITY,
                  (unsigned int)v28,
                  CImmersiveMode::ImmersiveLauncherWNFCallback,
                  v6,
                  0LL,
                  0,
                  1);
        v16 = RtlNtStatusToDosError(v15);
        i = (unsigned __int16)v16 | 0x80070000;
        if ( v16 <= 0 )
          i = v16;
        if ( i >= 0 )
        {
          v30 = 0LL;
          i = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *), __int64 **))(*a3)[14])(
                a3,
                &v30);
          if ( i >= 0 )
          {
            for ( i = (*(__int64 (__fastcall **)(__int64 *, int *))(*v30 + 24))(v30, &v28); i >= 0; ++v9 )
            {
              if ( v9 >= v28 )
                break;
              v25 = 0LL;
              v17 = v30;
              v18 = *v30;
              v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v25);
              i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v18 + 32))(
                    v17,
                    v9,
                    &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                    v19);
              if ( i >= 0 )
              {
                i = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v25 + 48LL))(v25, &v29);
                if ( i >= 0 )
                {
                  if ( v29 )
                    CImmersiveMode::_RegisterDesktopVisibilitySource(v6, v25);
                }
              }
              v20 = v25;
              if ( v25 )
              {
                v25 = 0LL;
                (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v20 + 16LL))(v20);
              }
            }
          }
          v21 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
          }
        }
      }
    }
    v22 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( i >= 0 )
    {
      *((_BYTE *)this + 144) = 1;
      if ( (int)SHRegGetBOOL(
                  HKEY_LOCAL_MACHINE,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DAMVisibility",
                  L"Enabled",
                  &v28) >= 0 )
        *((_BYTE *)this + 144) = v28 != 0;
    }
  }
  v23 = v26[0];
  if ( v26[0] )
  {
    v26[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return (unsigned int)i;
}
