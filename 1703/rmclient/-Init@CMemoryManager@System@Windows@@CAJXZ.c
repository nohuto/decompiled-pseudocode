/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003F80
 * Callers:
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002FD4 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@.c)
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800034F0 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800035A0 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800035E0 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x1800036A0 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18000BB00 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 * Callees:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003D40 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x180003DCC (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     RmpBindToRmRpcServer @ 0x180004120 (RmpBindToRmRpcServer.c)
 *     ??2@YAPEAX_K@Z @ 0x180007C40 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Init(__int64 a1, __int64 a2, __int64 a3)
{
  ModernResourceManagerProxy *v3; // rdi
  int v4; // ebx
  ModernResourceManagerProxy *v6; // rax
  void (*v7)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v8)(unsigned __int64, unsigned __int64); // r8

  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock, a2, a3);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
    v4 = 0;
  }
  else
  {
    v6 = (ModernResourceManagerProxy *)operator new(0x58uLL);
    if ( v6 && (v3 = ModernResourceManagerProxy::ModernResourceManagerProxy(v6)) != 0LL )
    {
      v4 = RmpBindToRmRpcServer(&unk_18000F790);
      if ( v4 >= 0 )
      {
        v4 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v3, v7, v8);
        if ( v4 >= 0 )
        {
          if ( Windows::System::CMemoryManager::s_pProxy )
            (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                                 + 16LL))(Windows::System::CMemoryManager::s_pProxy);
          Windows::System::CMemoryManager::s_pProxy = v3;
          v3 = 0LL;
          v4 = 0;
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v3 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
