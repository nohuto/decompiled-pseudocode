/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180005F80
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800073D0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180005690 (-RemoveApplication@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEA.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1800056C8 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180007C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180007CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180007CF0.c)
 *     ?IsOwned@CClassicWindow@@UEBA_NXZ @ 0x180007E40 (-IsOwned@CClassicWindow@@UEBA_NXZ.c)
 *     ?IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ @ 0x180007E50 (-IsUnownedNonTrayWindow@CClassicWindow@@UEBA_NXZ.c)
 *     ?SetActivationTime@CClassicWindow@@UEAAXXZ @ 0x180007FD0 (-SetActivationTime@CClassicWindow@@UEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800F486C (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180119AF0 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  CClassicWindow ***v4; // r12
  int active; // edi
  CClassicWindow *v6; // rcx
  __int64 (__fastcall *v7)(CClassicWindow *, GUID *, CClassicWindow **); // rax
  int v8; // eax
  bool (__fastcall *v9)(CClassicWindow *__hidden); // rax
  bool IsOwned; // al
  bool v11; // r15
  struct IUnknown *v12; // rbx
  void (__fastcall *v13)(CClassicWindow *__hidden); // rax
  CClassicWindow *v14; // rcx
  void (*v15)(void); // rax
  CClassicWindow *v17; // rcx
  __int64 (*v18)(void); // rax
  char IsUnownedNonTrayWindow; // al
  char *v20; // rcx
  __int64 (__fastcall *v21)(__int64, unsigned __int64); // rax
  __int64 v22; // rax
  __int64 v23; // rax
  HWND v24; // rax
  __int64 (__fastcall ***v25)(); // [rsp+20h] [rbp-20h]
  CClassicWindow *v26; // [rsp+80h] [rbp+40h] BYREF
  struct IUnknown *v27; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v28; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp+58h] BYREF

  v26 = 0LL;
  v3 = *((_QWORD *)this + 25);
  v28 = a2;
  v27 = 0LL;
  v4 = (CClassicWindow ***)((char *)this + 192);
  active = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
             (_QWORD *)this + 24,
             (volatile int **)&v28,
             (__int64 *)&v27,
             &v29,
             v25);
  if ( active >= 0 )
  {
    v3 = v29;
    v6 = (*v4)[v29];
    v7 = **(__int64 (__fastcall ***)(CClassicWindow *, GUID *, CClassicWindow **))v6;
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface )
      v8 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::QueryInterface(
             v6,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v26);
    else
      v8 = v7(v6, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v26);
    active = v8;
  }
  if ( active >= 0 )
  {
    v9 = *(bool (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v26 + 160LL);
    if ( v9 == CClassicWindow::IsOwned )
      IsOwned = CClassicWindow::IsOwned(v26);
    else
      IsOwned = v9(v26);
    v11 = IsOwned;
    v12 = 0LL;
    v27 = 0LL;
    if ( v3
      || IsOwned
      && !(*(unsigned __int8 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v26 + 168LL))(v26)
      && (v22 = (*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v26 + 96LL))(v26),
          Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v27, v22),
          v12 = v27,
          !(unsigned int)SHIsSameObject(v27, (struct IUnknown *)(*v4)[1])) )
    {
      v17 = **v4;
      v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 152LL);
      if ( (char *)v18 == (char *)CClassicWindow::IsUnownedNonTrayWindow )
        IsUnownedNonTrayWindow = CClassicWindow::IsUnownedNonTrayWindow(v17);
      else
        IsUnownedNonTrayWindow = v18();
      if ( IsUnownedNonTrayWindow )
      {
        v20 = (char *)this + 184;
        v21 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*((_QWORD *)this + 23) + 16LL);
        if ( v21 == CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication )
          CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::RemoveApplication((__int64)v20, 0LL);
        else
          v21((__int64)v20, 0LL);
        --v3;
      }
      if ( v11 )
      {
        if ( v12
          || (v23 = (*(__int64 (__fastcall **)(CClassicWindow *))(*(_QWORD *)v26 + 96LL))(v26),
              Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v27, v23),
              (v12 = v27) != 0LL) )
        {
          v24 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v12->lpVtbl[1].QueryInterface)(v12);
          CClassicWindowManager::_FindClassicWindow(this, v24, 0LL, &v28);
          if ( v3 < v28 )
            ++v3;
          active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                     (__int64)this + 184,
                     (__int64 *)&v27,
                     v28);
        }
      }
      if ( active < 0 )
        goto LABEL_15;
      v28 = (unsigned __int64)v26;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v28);
      active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                 (__int64)this + 184,
                 (__int64 *)&v28,
                 v3);
      Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v28);
    }
    if ( active >= 0 )
    {
      if ( v12 )
        ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl[3].QueryInterface)(v12);
      v13 = *(void (__fastcall **)(CClassicWindow *__hidden))(*(_QWORD *)v26 + 72LL);
      if ( v13 == CClassicWindow::SetActivationTime )
        CClassicWindow::SetActivationTime(v26);
      else
        v13(v26);
    }
LABEL_15:
    if ( v12 )
      ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  }
  v14 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v14);
    else
      v15();
  }
  return (unsigned int)active;
}
