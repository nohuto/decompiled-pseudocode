/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x1800171CC
 * Callers:
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x180017188 (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 *     ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x1800A89B0 (--_GMPCInputRouter@@EEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??1?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ @ 0x18000B234 (--1-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$vector@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18001DF80 (--1-$vector@U-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$allocator@PEAUIDisplayBindingObse.c)
 *     ??1?$vector@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@KV?$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x18001E024 (--1-$vector@U-$pair@KV-$ComPtr@UIDisplayBinding@@@WRL@Microsoft@@@std@@V-$allocator@U-$pair@KV-$.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x18001EE64 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800CB418 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CB420 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=30
void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  char *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbp
  int Keys; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 i; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 j; // r8
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  char *v30; // rcx
  char *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  _OWORD v49[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v50; // [rsp+60h] [rbp-28h]

  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputRouterStatics'};
  v2 = (char *)this + 56;
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 29);
  if ( v5 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 27);
  if ( v6 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 30);
  if ( v7 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((unsigned int *)this + 23);
  if ( (_DWORD)v8 )
  {
    v9 = operator new[](saturated_mul(v8, 0x28uLL));
    v11 = v9;
    if ( v9 )
    {
      Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 80, v9, (unsigned int)v8);
      if ( Keys >= 0 )
      {
        v14 = 0;
        while ( 1 )
        {
          v49[0] = *(_OWORD *)&v11[5 * v14];
          v49[1] = *(_OWORD *)&v11[5 * v14 + 2];
          v50 = v11[5 * v14 + 4];
          v15 = (*(__int64 (__fastcall **)(char *, _OWORD *))(*(_QWORD *)v2 + 40LL))(v2, v49);
          if ( v15 < 0 )
            break;
          if ( ++v14 >= (unsigned int)v8 )
          {
            operator delete(v11);
            goto LABEL_27;
          }
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v16, &MinInput_Warning_CheckResult, 0, 984, v15);
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 979, Keys);
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 974, 14);
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
LABEL_27:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v18 = 6LL * (unsigned int)i;
    v19 = *((_QWORD *)this + 10);
    *(_OWORD *)(v19 + 8 * v18) = *((_OWORD *)this + 6);
    *(_OWORD *)(v19 + 8 * v18 + 16) = *((_OWORD *)this + 7);
    *(_QWORD *)(v19 + 8 * v18 + 32) = *((_QWORD *)this + 16);
  }
  *((_DWORD *)this + 23) = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 50); j = (unsigned int)(j + 1) )
  {
    i = 2LL * (unsigned int)j;
    *(_DWORD *)(*((_QWORD *)this + 24) + 16LL * (unsigned int)j) = *((_DWORD *)this + 52);
  }
  *((_DWORD *)this + 51) = 0;
  v21 = *((_QWORD *)this + 19);
  if ( v21 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 16LL))(v21, i, j);
  }
  v22 = *((_QWORD *)this + 20);
  if ( v22 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 16LL))(v22, i, j);
  }
  v23 = *((_QWORD *)this + 18);
  if ( v23 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v23 + 16LL))(v23, i, j);
  }
  v24 = *((_QWORD *)this + 40);
  if ( v24 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v24 + 16LL))(v24, i, j);
  }
  v25 = *((_QWORD *)this + 42);
  if ( v25 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 16LL))(v25, i, j);
  }
  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
    (__int64 *)this + 74,
    i);
  v26 = *((_QWORD *)this + 73);
  if ( v26 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 72) + 144LL))(*((_QWORD *)this + 72));
  *((_QWORD *)this + 73) = 0LL;
  v27 = *((_QWORD *)this + 72);
  if ( v27 )
  {
    *((_QWORD *)this + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::~KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>(
    (__int64 *)this + 56,
    v26);
  v28 = *((_QWORD *)this + 55);
  if ( v28 )
  {
    *((_QWORD *)this + 55) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = *((_QWORD *)this + 54);
  if ( v29 )
  {
    *((_QWORD *)this + 54) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  operator delete(*((void **)this + 51));
  v30 = (char *)*((_QWORD *)this + 47);
  if ( v30 )
  {
    v31 = v30 - 8;
    `eh vector destructor iterator'(
      v30,
      0x50uLL,
      *((_QWORD *)v30 - 1),
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
    operator delete[](v31, 80LL * *(_QWORD *)v31 + 8);
  }
  v32 = *((_QWORD *)this + 45);
  if ( v32 )
  {
    *((_QWORD *)this + 45) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *((_QWORD *)this + 44);
  if ( v33 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *((_QWORD *)this + 42);
  if ( v34 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *((_QWORD *)this + 41);
  if ( v35 )
  {
    *((_QWORD *)this + 41) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = *((_QWORD *)this + 40);
  if ( v36 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = *((_QWORD *)this + 39);
  if ( v37 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = *((_QWORD *)this + 38);
  if ( v38 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  std::vector<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>::~vector<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>((char *)this + 280);
  std::vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>::~vector<std::pair<unsigned long,Microsoft::WRL::ComPtr<IDisplayBinding>>>((char *)this + 256);
  v39 = *((_QWORD *)this + 30);
  if ( v39 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = *((_QWORD *)this + 29);
  if ( v40 )
  {
    *((_QWORD *)this + 29) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = *((_QWORD *)this + 28);
  if ( v41 )
  {
    *((_QWORD *)this + 28) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = *((_QWORD *)this + 27);
  if ( v42 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  operator delete(*((void **)this + 24));
  v43 = *((_QWORD *)this + 22);
  if ( v43 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = *((_QWORD *)this + 21);
  if ( v44 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v45 = *((_QWORD *)this + 20);
  if ( v45 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = *((_QWORD *)this + 19);
  if ( v46 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  v47 = *((_QWORD *)this + 18);
  if ( v47 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  v48 = *((_QWORD *)this + 17);
  if ( v48 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  operator delete(*((void **)this + 10));
  *((_QWORD *)this + 8) = &RefCountedObject::`vftable';
}
