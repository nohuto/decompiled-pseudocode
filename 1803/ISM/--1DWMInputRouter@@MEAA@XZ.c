/*
 * XREFs of ??1DWMInputRouter@@MEAA@XZ @ 0x18007B6E8
 * Callers:
 *     ??_EDWMInputRouter@@MEAAPEAXI@Z @ 0x18007B6A4 (--_EDWMInputRouter@@MEAAPEAXI@Z.c)
 *     ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x1800848D0 (--_GMPCInputRouter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ @ 0x18000F62C (--1-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@QEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBKUInputContext@@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@2@@std@@QEAA@XZ @ 0x180080E40 (--1-$list@U-$pair@$$CBKUInputContext@@@std@@V-$allocator@U-$pair@$$CBKUInputContext@@@std@@@2@@s.c)
 *     ??1?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAA@XZ @ 0x18008158C (--1-$vector@UDeviceDisplayMapping@DWMInputRouter@@V-$allocator@UDeviceDisplayMapping@DWMInputRou.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x1800819C8 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DWMInputRouter::~DWMInputRouter(DWMInputRouter *this)
{
  char *v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  unsigned int v10; // esi
  __int64 i; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 j; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
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
  _OWORD v46[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v47; // [rsp+50h] [rbp-28h]

  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `ISystemInputRouterHitTest'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  v2 = (char *)this + 56;
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `ISupportedInputUpdateProvider'};
  *((_QWORD *)this + 9) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 33);
  if ( v5 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 34);
  if ( v6 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((unsigned int *)this + 25);
  if ( (_DWORD)v7 )
  {
    v8 = operator new[](saturated_mul(v7, 0x28uLL));
    v9 = v8;
    if ( v8
      && (int)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 88, v8, (unsigned int)v7) >= 0 )
    {
      v10 = 0;
      while ( 1 )
      {
        v46[0] = *(_OWORD *)&v9[5 * v10];
        v46[1] = *(_OWORD *)&v9[5 * v10 + 2];
        v47 = v9[5 * v10 + 4];
        if ( (*(int (__fastcall **)(char *, _OWORD *))(*(_QWORD *)v2 + 40LL))(v2, v46) < 0 )
          break;
        if ( ++v10 >= (unsigned int)v7 )
        {
          operator delete(v9);
          goto LABEL_19;
        }
      }
    }
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
LABEL_19:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v12 = 6LL * (unsigned int)i;
    v13 = *((_QWORD *)this + 11);
    *(_OWORD *)(v13 + 8 * v12) = *(_OWORD *)((char *)this + 104);
    *(_OWORD *)(v13 + 8 * v12 + 16) = *(_OWORD *)((char *)this + 120);
    *(_QWORD *)(v13 + 8 * v12 + 32) = *((_QWORD *)this + 17);
  }
  *((_DWORD *)this + 25) = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 60); j = (unsigned int)(j + 1) )
  {
    i = 2LL * (unsigned int)j;
    *(_DWORD *)(*((_QWORD *)this + 29) + 16LL * (unsigned int)j) = *((_DWORD *)this + 62);
  }
  *((_DWORD *)this + 61) = 0;
  v15 = *((_QWORD *)this + 20);
  if ( v15 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, i, j);
  }
  v16 = *((_QWORD *)this + 21);
  if ( v16 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, i, j);
  }
  v17 = *((_QWORD *)this + 19);
  if ( v17 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, i, j);
  }
  v18 = *((_QWORD *)this + 38);
  if ( v18 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, i, j);
  }
  v19 = *((_QWORD *)this + 40);
  if ( v19 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v19 + 16LL))(v19, i, j);
  }
  v20 = *((_QWORD *)this + 86);
  if ( v20 )
  {
    v21 = (__int64)(*((_QWORD *)this + 88) - v20) >> 3;
    if ( v21 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v21 < 0x1000 )
      {
LABEL_40:
        operator delete((void *)v20);
        *((_QWORD *)this + 86) = 0LL;
        *((_QWORD *)this + 87) = 0LL;
        *((_QWORD *)this + 88) = 0LL;
        goto LABEL_41;
      }
      if ( (v20 & 0x1F) == 0 )
      {
        v22 = *(_QWORD *)(v20 - 8);
        if ( v22 < v20 )
        {
          v20 = v20 - v22 - 8;
          if ( v20 <= 0x1F )
          {
            v20 = v22;
            goto LABEL_40;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v20, i);
    goto LABEL_89;
  }
LABEL_41:
  v23 = *((_QWORD *)this + 81);
  if ( !v23 )
    goto LABEL_49;
  v24 = (__int64)(*((_QWORD *)this + 83) - v23) >> 3;
  if ( v24 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_89;
  if ( 8 * v24 >= 0x1000 )
  {
    if ( (v23 & 0x1F) == 0 )
    {
      v25 = *(_QWORD *)(v23 - 8);
      if ( v25 < v23 )
      {
        v23 = v23 - v25 - 8;
        if ( v23 <= 0x1F )
        {
          v23 = v25;
          goto LABEL_48;
        }
      }
    }
LABEL_89:
    _o__invalid_parameter_noinfo_noreturn(v23, i);
    JUMPOUT(0x18007BDCBLL);
  }
LABEL_48:
  operator delete((void *)v23);
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
LABEL_49:
  std::list<std::pair<unsigned long const,InputContext>>::~list<std::pair<unsigned long const,InputContext>>(
    (char *)this + 632,
    i,
    j);
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
    (__int64 *)this + 62,
    v26);
  v27 = *((_QWORD *)this + 61);
  if ( v27 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 144LL))(*((_QWORD *)this + 60));
  *((_QWORD *)this + 61) = 0LL;
  v28 = *((_QWORD *)this + 60);
  if ( v28 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>::~KernelInputConnection<_MIT_POINTER_INPUT_DOWN_MESSAGE>(
    (__int64 *)this + 44,
    v27);
  v29 = *((_QWORD *)this + 43);
  if ( v29 )
  {
    *((_QWORD *)this + 43) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
  }
  v30 = *((_QWORD *)this + 42);
  if ( v30 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v31 = *((_QWORD *)this + 40);
  if ( v31 )
  {
    *((_QWORD *)this + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = *((_QWORD *)this + 39);
  if ( v32 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *((_QWORD *)this + 38);
  if ( v33 )
  {
    *((_QWORD *)this + 38) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  v34 = *((_QWORD *)this + 37);
  if ( v34 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v35 = *((_QWORD *)this + 36);
  if ( v35 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = *((_QWORD *)this + 34);
  if ( v36 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = *((_QWORD *)this + 33);
  if ( v37 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = *((_QWORD *)this + 32);
  if ( v38 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  operator delete(*((void **)this + 29));
  v39 = *((_QWORD *)this + 27);
  if ( v39 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  std::vector<DWMInputRouter::DeviceDisplayMapping>::~vector<DWMInputRouter::DeviceDisplayMapping>((char *)this + 192);
  v40 = *((_QWORD *)this + 23);
  if ( v40 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = *((_QWORD *)this + 22);
  if ( v41 )
  {
    *((_QWORD *)this + 22) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = *((_QWORD *)this + 21);
  if ( v42 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = *((_QWORD *)this + 20);
  if ( v43 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = *((_QWORD *)this + 19);
  if ( v44 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
  v45 = *((_QWORD *)this + 18);
  if ( v45 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  operator delete(*((void **)this + 11));
  *((_QWORD *)this + 9) = &RefCountedObject::`vftable';
}
