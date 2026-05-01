/*
 * XREFs of ?CompleteInitialization@CImmersiveMode@@UEAAJPEAUIFallbackWindow@@PEAUIImmersiveMonitorManager@@@Z @ 0x1800310F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ?CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x18002ABD4 (-CMonitorNotificationHelper_CreateInstance@@YAJPEAUIImmersiveMonitorNotification@@AEBU_GUID@@PEA.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180031770 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CImmersiveMode::CompleteInitialization(
        CImmersiveMode *this,
        struct IFallbackWindow *a2,
        __int64 (__fastcall ***a3)(struct IImmersiveMonitorManager *, GUID *, __int64 *))
{
  CImmersiveMode *v6; // r15
  __int64 v7; // rcx
  __int64 (__fastcall **v8)(struct IImmersiveMonitorManager *, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  const struct _GUID *v10; // rdx
  signed int v11; // ebx
  NTSTATUS v12; // eax
  signed int v13; // eax
  unsigned int v14; // r14d
  __int64 *v15; // rbx
  __int64 v16; // rdi
  __int64 *v17; // rax
  struct IImmersiveMonitor *v18; // rcx
  __int64 *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rcx
  struct IImmersiveMonitor *v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24[2]; // [rsp+48h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-18h] BYREF
  int v26; // [rsp+60h] [rbp-10h]
  int v27; // [rsp+B0h] [rbp+40h] BYREF
  int v28; // [rsp+B8h] [rbp+48h] BYREF
  __int64 *v29; // [rsp+C0h] [rbp+50h] BYREF
  void *v30; // [rsp+C8h] [rbp+58h] BYREF

  v24[1] = -2LL;
  v6 = (CImmersiveMode *)((char *)this - 72);
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 72) >> 64)));
  if ( *((struct IFallbackWindow **)this + 28) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IFallbackWindow *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v24[0] = 0LL;
  v8 = *a3;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v24);
  v11 = (*v8)((struct IImmersiveMonitorManager *)a3, &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83, v9);
  if ( v11 >= 0 )
  {
    v30 = 0LL;
    v11 = CMonitorNotificationHelper_CreateInstance(
            (struct IImmersiveMonitorNotification *)(((unsigned __int64)this + 32) & -(__int64)(v6 != 0LL)),
            v10,
            &v30);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, void *, char *))(*(_QWORD *)v24[0] + 24LL))(
              v24[0],
              v30,
              (char *)this + 240);
      if ( v11 >= 0 )
      {
        v12 = RtlQueryWnfStateData(
                &v27,
                WNF_IMSN_LAUNCHERVISIBILITY,
                CImmersiveMode::ImmersiveLauncherWNFCallback,
                v6,
                0LL);
        if ( v12 >= 0 )
          v12 = RtlSubscribeWnfStateChangeNotification(
                  (char *)v6 + 328,
                  WNF_IMSN_LAUNCHERVISIBILITY,
                  (unsigned int)v27,
                  CImmersiveMode::ImmersiveLauncherWNFCallback,
                  v6,
                  0LL,
                  0,
                  1);
        v13 = RtlNtStatusToDosError(v12);
        v11 = (unsigned __int16)v13 | 0x80070000;
        if ( v13 <= 0 )
          v11 = v13;
        if ( v11 >= 0 )
        {
          v29 = 0LL;
          v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveMonitorManager *, GUID *, __int64 *), __int64 **))(*a3)[14])(
                  a3,
                  &v29);
          if ( v11 >= 0 )
          {
            v11 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v29 + 24))(v29, &v27);
            if ( v11 >= 0 )
            {
              v14 = 0;
              do
              {
                if ( v14 >= v27 )
                  break;
                v23 = 0LL;
                v15 = v29;
                v16 = *v29;
                v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v23);
                v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v16 + 32))(
                        v15,
                        v14,
                        &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                        v17);
                if ( v11 >= 0 )
                {
                  v11 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v23 + 48LL))(
                          v23,
                          &v28);
                  if ( v11 >= 0 )
                  {
                    if ( v28 )
                      CImmersiveMode::_RegisterDesktopVisibilitySource(v6, v23);
                  }
                }
                v18 = v23;
                if ( v23 )
                {
                  v23 = 0LL;
                  (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v18 + 16LL))(v18);
                }
                ++v14;
              }
              while ( v11 >= 0 );
            }
          }
          v19 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64 *))(*v19 + 16))(v19);
          }
        }
      }
    }
    v20 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v11 >= 0 )
    {
      *((_BYTE *)this + 112) = 1;
      if ( (int)SHRegGetBOOL(
                  HKEY_LOCAL_MACHINE,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\DAMVisibility",
                  L"Enabled",
                  &v27) >= 0 )
        *((_BYTE *)this + 112) = v27 != 0;
    }
  }
  v21 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v26 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v11;
}
