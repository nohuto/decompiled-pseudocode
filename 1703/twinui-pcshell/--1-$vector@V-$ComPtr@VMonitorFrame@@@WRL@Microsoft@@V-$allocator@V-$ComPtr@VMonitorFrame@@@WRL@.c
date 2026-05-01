/*
 * XREFs of ??1?$vector@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VMonitorFrame@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18006FE08
 * Callers:
 *     ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x18006F150 (--_ECSplashScreen@@UEAAPEAXI@Z.c)
 *     ??_EHolographicPositioner@@UEAAPEAXI@Z @ 0x1800E0A08 (--_EHolographicPositioner@@UEAAPEAXI@Z.c)
 *     ??_EPeoplePaneViewManager@@UEAAPEAXI@Z @ 0x1800EC8C4 (--_EPeoplePaneViewManager@@UEAAPEAXI@Z.c)
 *     ??_GXamlAllUpViewHost@@UEAAPEAXI@Z @ 0x18012CC90 (--_GXamlAllUpViewHost@@UEAAPEAXI@Z.c)
 *     __lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()_::_1_::dtor$1 @ 0x18019F14D (__lambda_9d1d8d58343981d67c57f7f39dcd56a0_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<MonitorFrame>>::~vector<Microsoft::WRL::ComPtr<MonitorFrame>>(
        __int64 a1)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v2 != v3 )
    {
      v4 = *(_QWORD *)v2;
      if ( *(_QWORD *)v2 )
      {
        *(_QWORD *)v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v2 += 8;
    }
    std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
