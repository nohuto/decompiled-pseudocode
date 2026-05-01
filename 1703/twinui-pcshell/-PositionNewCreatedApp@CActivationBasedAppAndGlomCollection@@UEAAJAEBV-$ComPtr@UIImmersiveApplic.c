/*
 * XREFs of ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@UEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Z @ 0x180006EA0
 * Callers:
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18000CCD0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180014108 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000746C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x180016BE0 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?Add@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@PEA_K@Z @ 0x180016CB8 (-Add@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$CTPoli.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180016F3C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?InsertAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180016FB4 (-InsertAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ?PositionNewCreatedApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Z @ 0x180017110 (-PositionNewCreatedApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_319196609fc91a8a5111ea6790a28edd___ @ 0x180017AA8 (CIAMGlobals--QueueViewManagementTask__lambda_319196609fc91a8a5111ea6790a28edd___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActivationBasedAppAndGlomCollection::PositionNewCreatedApp(
        CActivationBasedAppAndGlomCollection *a1,
        struct IImmersiveApplicationInternal **a2)
{
  CActivationBasedAppAndGlomCollection *v3; // rsi
  int v4; // ebx
  unsigned __int64 v5; // r15
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // rdi
  _QWORD *v7; // r14
  unsigned __int64 i; // rsi
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  LPVOID pv; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-20h]
  __int64 v16; // [rsp+38h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+48h] [rbp-8h]
  unsigned __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v21; // [rsp+A0h] [rbp+50h] BYREF

  v3 = a1;
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(a1, *a2, &v21, &v20) >= 0 )
  {
    v5 = v20;
    v6 = v21;
  }
  else
  {
    pv = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 2;
    v4 = CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::Add(
           (char *)v3 + 40,
           &pv,
           &v20);
    v5 = v20;
    if ( v4 < 0 )
      v6 = v21;
    else
      v6 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)(*((_QWORD *)v3 + 5) + 40 * v20);
    v7 = pv;
    if ( pv )
    {
      for ( i = 0LL; i < v15; ++i )
      {
        v9 = v7[i];
        if ( v9 )
        {
          v7[i] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      CoTaskMemFree(v7);
      v3 = a1;
    }
    if ( v4 < 0 )
      goto LABEL_27;
  }
  v4 = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::InsertAt(
         v6,
         a2,
         *((_QWORD *)v6 + 1));
  if ( v4 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)*a2 + 160LL))(*a2);
    if ( v10 >= *((_DWORD *)v6 + 8) )
      *((_DWORD *)v6 + 8) = v10 + 1;
  }
  if ( v4 < 0 )
    goto LABEL_27;
  v4 = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewCreatedApp(v3, a2);
  if ( v4 < 0 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
      v6,
      *((_QWORD *)v6 + 1) - 1LL);
  }
  else
  {
    v20 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, unsigned __int64 *))*a2)(
           *a2,
           &GUID_8b14e88b_5663_4caf_b196_c31479262831,
           &v20);
    if ( v4 >= 0 )
    {
      v11 = v20;
      v21 = (struct CActivationBasedAppAndGlomCollection::CGlomCollection *)v20;
      if ( v20 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 8LL))(v20);
      v4 = CIAMGlobals::QueueViewManagementTask__lambda_319196609fc91a8a5111ea6790a28edd___(v11, &v21);
    }
    v12 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( v4 < 0 )
  {
LABEL_27:
    if ( v6 && !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)v3 + 40,
        v5);
  }
  return (unsigned int)v4;
}
