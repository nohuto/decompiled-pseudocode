/*
 * XREFs of ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003020 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180003050 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z @ 0x180003090 (-get_AppMemoryUsageLevel@CMemoryManager@System@Windows@@UEAAJPEAW4AppMemoryUsageLevel@23@@Z.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x18000913C (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_KPEAU_PROCESS_JOB_MEMORY_INFO@@.c)
 *     ?TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z @ 0x18000BC50 (-TrySetAppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJ_KPEAE@Z.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x18000BCB0 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 * Callees:
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x18000355C (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x1800035E4 (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x180007550 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Init(__int64 a1, __int64 a2, __int64 a3)
{
  ModernResourceManagerProxy *v3; // rbx
  int v4; // edi
  ModernResourceManagerProxy *v6; // rax
  int v7; // eax
  void (*v8)(struct _RM_COMMIT_LEVEL_CHANGE_PAYLOAD *); // rdx
  void (*v9)(unsigned __int64, unsigned __int64); // r8

  v3 = 0LL;
  RtlAcquireSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock, a2, a3);
  if ( Windows::System::CMemoryManager::s_pProxy )
  {
LABEL_2:
    v4 = 0;
    goto LABEL_3;
  }
  v6 = (ModernResourceManagerProxy *)operator new(0x58uLL);
  if ( v6 )
    v3 = ModernResourceManagerProxy::ModernResourceManagerProxy(v6);
  if ( v3 )
  {
    v7 = CempRpcBindToServer(&unk_180010810);
    v4 = v7 | 0x10000000;
    if ( v7 >= 0 )
    {
      v4 = ModernResourceManagerProxy::RegisterCommitMemoryCallback(v3, v8, v9);
      if ( v4 >= 0 )
      {
        if ( Windows::System::CMemoryManager::s_pProxy )
          (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)Windows::System::CMemoryManager::s_pProxy
                                                               + 16LL))(Windows::System::CMemoryManager::s_pProxy);
        Windows::System::CMemoryManager::s_pProxy = v3;
        v3 = 0LL;
        goto LABEL_2;
      }
    }
  }
  else
  {
    v4 = -2147024882;
  }
LABEL_3:
  RtlReleaseSRWLockExclusive(&Windows::System::CMemoryManager::s_Lock);
  if ( v3 )
    (*(void (__fastcall **)(ModernResourceManagerProxy *))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
