/*
 * XREFs of ?GetApplicationViewWindow@CClassicWindowManager@@UEAAPEAUHWND__@@PEAU2@@Z @ 0x1800068C0
 * Callers:
 *     ?_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z @ 0x18003DE00 (-_HandleActivation2@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@W4MODE_CHANGE_REASON@@@Z.c)
 * Callees:
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180007CF0.c)
 *     ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x180007E70 (-ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetApplicationViewWindow(CClassicWindowManager *this, HWND a2)
{
  HWND Window; // rdi
  __int64 v4; // rsi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, CClassicWindow **); // rcx
  __int64 (__fastcall *v6)(_QWORD, GUID *, CClassicWindow **); // rax
  int v7; // eax
  CClassicWindow *v8; // rbx
  bool (__fastcall *v9)(CClassicWindow *__hidden); // rax
  bool ShouldShowInSwitchers; // al
  CClassicWindow *v11; // rcx
  void (*v12)(void); // rax
  __int64 (__fastcall ***v14)(); // [rsp+20h] [rbp-20h]
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  CClassicWindow *v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF
  volatile int *v18; // [rsp+88h] [rbp+48h] BYREF

  v15[1] = -2LL;
  Window = a2;
  v4 = 0LL;
  while ( Window )
  {
    if ( v4 )
      break;
    v16 = 0LL;
    v18 = (volatile int *)Window;
    v17 = 0LL;
    if ( (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
                (_QWORD *)this + 15,
                &v18,
                &v17,
                v15,
                v14) >= 0 )
    {
      v5 = *(__int64 (__fastcall ****)(_QWORD, GUID *, CClassicWindow **))(*((_QWORD *)this + 15) + 8LL * v15[0]);
      v6 = **v5;
      v7 = (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface
         ? Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface(
             v5,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v16)
         : v6(v5, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v16);
      if ( v7 >= 0 )
      {
        v8 = v16;
        v9 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v16 + 128LL);
        if ( v9 == CClassicWindow::ShouldShowInSwitchers )
        {
          ShouldShowInSwitchers = CClassicWindow::ShouldShowInSwitchers(v16);
        }
        else
        {
          ShouldShowInSwitchers = v9(v16);
          v8 = v16;
        }
        if ( ShouldShowInSwitchers )
          v4 = (*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v8 + 24LL))(v8);
      }
    }
    Window = GetWindow(Window, 4u);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
      if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v11);
      else
        v12();
    }
  }
  return v4;
}
