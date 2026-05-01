/*
 * XREFs of ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x18004401C
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x180041168 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180041DB0 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x180045130 (-AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PE.c)
 * Callees:
 *     WPP_SF_Sdd @ 0x180006BB8 (WPP_SF_Sdd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180046610 (-EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGE.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_AddPresentedWindowCallbackTrigger(
        __int64 a1,
        int a2,
        __int64 (__fastcall ***a3)(__int64, GUID *, __int64 *),
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 *v10; // rax
  __int64 *v11; // rdi
  signed int v12; // esi
  __int64 (__fastcall **v13)(__int64, GUID *, __int64 *); // rbx
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 **v16; // rdx
  __int64 v17; // rcx
  const wchar_t *v18; // rbx
  int v19; // eax
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  __int64 v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h]

  *a6 = 0;
  v10 = (__int64 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 2) = 0;
    v10[2] = 0LL;
    v10[3] = 0LL;
    v10[4] = 0LL;
    *((_DWORD *)v10 + 10) = 0;
    *v10 = (__int64)&CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::`vftable';
    *((_DWORD *)v10 + 12) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
  v12 = v11 == 0LL ? 0x8007000E : 0;
  if ( v11 )
  {
    v12 = CMarshaledInterface::Marshal(v11 + 3, &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a, a5, 2LL);
    if ( v12 >= 0 )
    {
      v13 = *a3;
      v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v11 + 2);
      v12 = (*v13)((__int64)a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v14);
      if ( v12 >= 0 )
      {
        *((_DWORD *)v11 + 2) = a2;
        v11[4] = a4;
        *((_DWORD *)v11 + 10) = _InterlockedIncrement((volatile signed __int32 *)(a1 + 88));
        v12 = 0;
        v15 = *(_QWORD *)(a1 + 104);
        if ( v15 != *(_QWORD *)(a1 + 120)
          || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::EnsureCapacity(
                      a1 + 96,
                      v15 + 1),
              v12 >= 0) )
        {
          v16 = (__int64 **)(*(_QWORD *)(a1 + 96) + 8 * (*(_QWORD *)(a1 + 104))++);
          if ( v16 )
          {
            *v16 = v11;
            (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
          }
        }
        if ( v12 >= 0 )
        {
          *a6 = *((_DWORD *)v11 + 10);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          {
            pv = 0LL;
            v22 = 0LL;
            v23 = 0LL;
            v17 = v11[2];
            v22 = -1LL;
            v23 = -1LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 32LL))(v17, &pv) >= 0
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v18 = (const wchar_t *)pv;
              v19 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a3)[20])(a3);
              WPP_SF_Sdd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Du,
                &WPP_dd55687d9f3130295d495cf49017a234_Traceguids,
                v18,
                v19,
                *a6,
                -2LL);
            }
            if ( pv )
              CoTaskMemFree(pv);
          }
        }
      }
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
  return (unsigned int)v12;
}
