/*
 * XREFs of ?SetCloak@CClassicWindowManager@@UEAAJPEAUHWND__@@HW4_SET_CLOAK_OPTIONS@@@Z @ 0x180006680
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18002ADA0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180007CF0.c)
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x180009230 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::SetCloak(__int64 a1, volatile int *a2, int a3, char a4)
{
  int v8; // ebx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  _BOOL8 v12; // r8
  PVOID Ptr; // rcx
  __int64 (__fastcall *v14)(PVOID, volatile int *, _BOOL8); // rax
  int v15; // eax
  __int64 v16; // rcx
  void (*v17)(void); // rax
  __int64 (__fastcall ***v19)(); // [rsp+20h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h] BYREF
  volatile int *v22; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+48h] [rbp-18h] BYREF

  v23[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v20 = 0LL;
  if ( (a4 & 1) == 0 )
    goto LABEL_7;
  v20 = 0LL;
  v22 = a2;
  v21 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (_QWORD *)(a1 + 96),
         &v22,
         &v21,
         v23,
         v19);
  if ( v8 >= 0 )
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 96) + 8LL * v23[0]);
    v10 = **v9;
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
      v11 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface(
              v9,
              &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
              &v20);
    else
      v11 = v10(v9, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v20);
    v8 = v11;
  }
  if ( v8 >= 0 )
  {
LABEL_7:
    v12 = a3 != 0;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[17].Ptr;
    v14 = *(__int64 (__fastcall **)(PVOID, volatile int *, _BOOL8))(*(_QWORD *)Ptr + 24LL);
    if ( (char *)v14 == (char *)CPrivilegedPresentationOperations::SetShellCloak )
      v15 = CPrivilegedPresentationOperations::SetShellCloak(Ptr, a2, v12);
    else
      v15 = v14(Ptr, a2, v12);
    v8 = v15;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    v17 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
    if ( (char *)v17 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v16);
    else
      v17();
  }
  return (unsigned int)v8;
}
