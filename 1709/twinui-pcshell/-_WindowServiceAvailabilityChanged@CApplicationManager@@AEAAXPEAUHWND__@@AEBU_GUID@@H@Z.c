/*
 * XREFs of ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x1800163D0
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F520 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800165C0 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180018F0C (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001AE88 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::_WindowServiceAvailabilityChanged(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        int a4)
{
  __int128 v6; // rdi
  HWND v7; // rdx
  int *v8; // rdi
  unsigned int v9; // ebx
  HWND v10; // rax
  int v11; // r8d
  int v12; // ebx
  __int64 v13; // rax
  HWND v14; // rcx
  __int64 v15; // rcx
  HWND v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+88h] [rbp+28h] BYREF

  v18 = -2LL;
  *((_QWORD *)&v6 + 1) = a2;
  *(_QWORD *)&v6 = this;
  v20 = 0LL;
  v16 = a2;
  v17 = 2;
  if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v16, &v20, 0LL) >= 0 )
  {
    v12 = (a4 != 0) + 4;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 384LL))(v20) == *((_QWORD *)&v6 + 1) )
      v12 |= 2u;
    v16 = 0LL;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
    (**(void (__fastcall ***)(__int64, GUID *, __int64))v20)(v20, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v13);
    CApplicationManager::_SendServiceAvailabilityChangedNotification(v6, v16, 1LL, a3, v12);
    v14 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else if ( !GetPropW(*((HWND *)&v6 + 1), L"DelayServiceAvailabilityChangedOperationId") )
  {
    v19 = v6;
    v8 = *(int **)(v6 + 808);
    v9 = 0;
    if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v8 + 2), v7) )
    {
      v10 = (HWND)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v10;
      if ( v10 )
      {
        *((_DWORD *)v10 + 2) = *v8;
        *((_DWORD *)v10 + 3) = 5;
        *(_QWORD *)v10 = off_1801F9758;
        *((_OWORD *)v10 + 1) = v19;
      }
      v16 = v10;
      if ( v10 )
      {
        if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                    v8 + 6,
                    &v16) < 0 )
        {
          if ( !v16 )
            goto LABEL_19;
          (**(void (__fastcall ***)(HWND, __int64))v16)(v16, 1LL);
        }
        else
        {
          v9 = *v8;
          v11 = 1;
          if ( *v8 != -1 )
            v11 = *v8 + 1;
          *v8 = v11;
        }
        if ( v9 )
          SetPropW(*((HWND *)&v6 + 1), L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v9);
      }
    }
  }
LABEL_19:
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
}
