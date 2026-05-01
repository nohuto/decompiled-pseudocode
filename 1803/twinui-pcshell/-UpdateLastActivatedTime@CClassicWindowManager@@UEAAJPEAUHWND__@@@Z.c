/*
 * XREFs of ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x1800067C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180007CF0.c)
 *     ?SetActivationTime@CClassicWindow@@UEAAXXZ @ 0x180007FD0 (-SetActivationTime@CClassicWindow@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::UpdateLastActivatedTime(CClassicWindowManager *this, volatile int *a2)
{
  int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, CClassicWindow **); // rcx
  __int64 (__fastcall *v6)(_QWORD, GUID *, CClassicWindow **); // rax
  int v7; // eax
  void (*v8)(void); // rax
  CClassicWindow *v9; // rcx
  void (*v10)(void); // rax
  __int64 (__fastcall ***v12)(); // [rsp+20h] [rbp-20h]
  CClassicWindow *v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h] BYREF
  volatile int *v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  v15 = a2;
  v14 = 0LL;
  v4 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         (_QWORD *)this + 13,
         &v15,
         &v14,
         &v16,
         v12);
  if ( v4 >= 0 )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CClassicWindow **))(*((_QWORD *)this + 13) + 8 * v16);
    v6 = **v5;
    v7 = (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface
       ? Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface(
           v5,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &v13)
       : v6(v5, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v13);
    v4 = v7;
    if ( v7 >= 0 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v13 + 72LL);
      if ( (char *)v8 == (char *)CClassicWindow::SetActivationTime )
        CClassicWindow::SetActivationTime(v13);
      else
        v8();
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
    if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v9);
    else
      v10();
  }
  return (unsigned int)v4;
}
