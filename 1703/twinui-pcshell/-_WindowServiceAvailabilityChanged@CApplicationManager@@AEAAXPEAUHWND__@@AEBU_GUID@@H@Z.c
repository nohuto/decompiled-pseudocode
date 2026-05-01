/*
 * XREFs of ?_WindowServiceAvailabilityChanged@CApplicationManager@@AEAAXPEAUHWND__@@AEBU_GUID@@H@Z @ 0x180015800
 * Callers:
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x18000F1B0 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 * Callees:
 *     ?_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication@@IQEBU_GUID@@W4IMM_APP_SERVICE_NOTIFY_FLAGS@@@Z @ 0x1800159F8 (-_SendServiceAvailabilityChangedNotification@CApplicationManager@@AEAAXPEAUIImmersiveApplication.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180017CC8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Add@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJAEBQEAVCOperation@CDelayIAMOperations@@PEA_K@Z @ 0x18001A0F8 (-Add@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAVCOp.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  _DWORD *v10; // rax
  int v11; // r8d
  int v12; // ebx
  __int64 v13; // rax
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int128 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h]
  _DWORD *v19; // [rsp+78h] [rbp+28h] BYREF

  v18 = -2LL;
  *((_QWORD *)&v6 + 1) = a2;
  *(_QWORD *)&v6 = this;
  v16 = 0LL;
  *(_QWORD *)&v17 = a2;
  DWORD2(v17) = 2;
  if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v17, &v16, 0LL) >= 0 )
  {
    v12 = (a4 != 0) + 4;
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 384LL))(v16) == *((_QWORD *)&v6 + 1) )
      v12 |= 2u;
    v19 = 0LL;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
    (**(void (__fastcall ***)(__int64, GUID *, __int64))v16)(v16, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v13);
    CApplicationManager::_SendServiceAvailabilityChangedNotification(v6, v19, 1LL, a3, v12);
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else if ( !GetPropW(*((HWND *)&v6 + 1), L"DelayServiceAvailabilityChangedOperationId") )
  {
    v17 = v6;
    v8 = *(int **)(v6 + 728);
    v9 = 0;
    if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)v8 + 2), v7) )
    {
      v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v19 = v10;
      if ( v10 )
      {
        v10[2] = *v8;
        v10[3] = 5;
        *(_QWORD *)v10 = off_1801A66D0;
        *((_OWORD *)v10 + 1) = v17;
      }
      *(_QWORD *)&v17 = v10;
      if ( v10 )
      {
        if ( (int)CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::Add(
                    v8 + 6,
                    &v17) < 0 )
        {
          if ( !(_QWORD)v17 )
            goto LABEL_19;
          (**(void (__fastcall ***)(_QWORD, __int64))v17)(v17, 1LL);
        }
        else
        {
          v9 = *v8;
          v11 = 1;
          if ( *v8 != -1 )
            v11 = v9 + 1;
          *v8 = v11;
        }
        if ( v9 )
          SetPropW(*((HWND *)&v6 + 1), L"DelayServiceAvailabilityChangedOperationId", (HANDLE)v9);
      }
    }
  }
LABEL_19:
  v15 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
}
