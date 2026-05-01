/*
 * XREFs of ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180041C6C
 * Callers:
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_NW4ApplicationViewMode@ViewManagement@UI@Windows@@MM_KPEAUIPropertySet@Collections@Foundation@7@PEAUIAsyncCallback@@@Z @ 0x18003F7A8 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1_N.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x180040140 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCall.c)
 *     ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x180042C30 (-AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PE.c)
 * Callees:
 *     WPP_SF_Sdd @ 0x180006B18 (WPP_SF_Sdd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$CreateRefCountedObj@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@XZ @ 0x180044758 (--$CreateRefCountedObj@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@YA-AV-$ComPtr@V-$CR.c)
 *     ?EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180045074 (-EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGE.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x1800472D0 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  _DWORD *v10; // r15
  __int64 *v11; // rbx
  signed int v12; // esi
  __int64 *v13; // rdi
  __int64 (__fastcall **v14)(__int64, GUID *, __int64 *); // rsi
  __int64 *v15; // rax
  signed __int32 v16; // eax
  __int64 v17; // rdx
  __int64 **v18; // rdx
  __int64 v19; // rcx
  const wchar_t *v20; // rdi
  int v21; // eax
  char v23[4]; // [rsp+20h] [rbp-58h]
  char v24[4]; // [rsp+28h] [rbp-50h]
  LPVOID pv; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+48h] [rbp-30h]

  v10 = a6;
  *a6 = 0;
  CreateRefCountedObj<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>(&a6);
  v11 = (__int64 *)a6;
  v12 = a6 == 0LL ? 0x8007000E : 0;
  if ( a6 )
  {
    v12 = CMarshaledInterface::Marshal(a6 + 6, &GUID_ea8a389b_437d_4791_aa14_5dca004bc92a, a5, 2LL);
    if ( v12 >= 0 )
    {
      v13 = v11 + 2;
      v14 = *a3;
      v15 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v11 + 2);
      v12 = (*v14)((__int64)a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v15);
      if ( v12 >= 0 )
      {
        *((_DWORD *)v11 + 2) = a2;
        v11[4] = a4;
        v16 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
        v11 = (__int64 *)a6;
        a6[10] = v16;
        v12 = 0;
        v17 = *(_QWORD *)(a1 + 88);
        if ( v17 != *(_QWORD *)(a1 + 104)
          || (v12 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::EnsureCapacity(
                      a1 + 80,
                      v17 + 1),
              v12 >= 0) )
        {
          v18 = (__int64 **)(*(_QWORD *)(a1 + 80) + 8 * (*(_QWORD *)(a1 + 88))++);
          if ( v18 )
          {
            *v18 = v11;
            (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
          }
        }
        if ( v12 >= 0 )
        {
          *v10 = *((_DWORD *)v11 + 10);
          if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
          {
            pv = 0LL;
            v26 = 0LL;
            v27 = 0LL;
            v19 = *v13;
            v26 = -1LL;
            v27 = -1LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v19 + 32LL))(v19, &pv) >= 0
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v20 = (const wchar_t *)pv;
              v21 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*a3)[20])(a3);
              *(_DWORD *)v24 = *v10;
              *(_DWORD *)v23 = v21;
              WPP_SF_Sdd(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x1Du,
                &WPP_99aca6d361263e91c27c68872c80b102_Traceguids,
                v20,
                *(_DWORD *)v23,
                *(_DWORD *)v24);
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
