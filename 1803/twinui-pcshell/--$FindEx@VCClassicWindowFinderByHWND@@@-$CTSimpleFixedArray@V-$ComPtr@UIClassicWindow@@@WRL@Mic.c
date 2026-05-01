/*
 * XREFs of ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0
 * Callers:
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x18000569C (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180006680 (-SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z.c)
 *     ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1800067C0 (-UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800068C0 (-GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z.c)
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180006B20 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 *     ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180006C30 (-HandleOwnerSwitch@CClassicWindowManager@@UEAA-AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x180007480 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ??_GCClassicWindow@@MEAAPEAXI@Z @ 0x180007D60 (--_GCClassicWindow@@MEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
        _QWORD *a1,
        volatile int **a2,
        __int64 *a3,
        _QWORD *a4,
        __int64 (__fastcall ***a5)())
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  __int64 (__fastcall ***v11)(); // rbx
  __int64 (__fastcall *v12)(); // rax
  volatile int *v13; // rdx
  __int64 (__fastcall ***v14)(); // r10
  bool (__fastcall *v15)(CClassicWindow *__hidden, HWND); // rax
  bool v16; // al
  int v17; // esi
  __int64 (*v18)(void); // rax
  CClassicWindow *v19; // r10
  void *(__fastcall *v20)(CClassicWindow *__hidden, unsigned int); // rax
  struct Microsoft::WRL::Details::ModuleBase *v21; // rcx
  __int64 (__fastcall ***v23)(); // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+20h]

  *a4 = 0LL;
  v9 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v10 = *a3;
    v24 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = *(__int64 (__fastcall ****)())(*a1 + 8 * v9);
    a5 = v11;
    if ( v11 )
      ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v11)[1])(v11);
    v23 = 0LL;
    v12 = **v11;
    if ( v12 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
    {
      v23 = v11;
      ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v11)[1])(v11);
    }
    else if ( ((int (__fastcall *)(__int64 (__fastcall ***)(), GUID *, __int64 (__fastcall ****)()))v12)(
                v11,
                &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
                &v23) < 0 )
    {
      v14 = v23;
      goto LABEL_15;
    }
    v13 = *a2;
    v14 = v23;
    v15 = (bool (__fastcall *)(CClassicWindow *__hidden, HWND))(*v23)[24];
    if ( v15 == CClassicWindow::IsEqualByHWND )
    {
      v16 = v13 == (volatile int *)v23[2];
    }
    else
    {
      v16 = v15((CClassicWindow *)v23, (HWND)v13);
      v14 = v23;
    }
    if ( v16 )
    {
      v17 = 0;
      goto LABEL_16;
    }
LABEL_15:
    v17 = -1;
LABEL_16:
    if ( !v14 )
      goto LABEL_27;
    v23 = 0LL;
    v18 = (*v14)[2];
    if ( v18 != Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
    {
      v21 = (struct Microsoft::WRL::Details::ModuleBase *)v14;
LABEL_26:
      ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v18)(v21);
      goto LABEL_27;
    }
    if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)v14 + 12), v13) )
    {
      v20 = *(void *(__fastcall **)(CClassicWindow *__hidden, unsigned int))(*(_QWORD *)v19 + 216LL);
      if ( v20 == CClassicWindow::`scalar deleting destructor' )
        CClassicWindow::`scalar deleting destructor'(v19, 1u);
      else
        v20(v19, 1u);
      v21 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v18 = *(__int64 (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( (char *)v18 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        {
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
          goto LABEL_27;
        }
        goto LABEL_26;
      }
    }
LABEL_27:
    ((void (__fastcall *)(__int64 (__fastcall ***)()))(*v11)[2])(v11);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v17 )
      break;
    if ( (unsigned __int64)++v9 >= a1[1] )
      return 2147647531LL;
  }
  *a4 = v9;
  return 0LL;
}
