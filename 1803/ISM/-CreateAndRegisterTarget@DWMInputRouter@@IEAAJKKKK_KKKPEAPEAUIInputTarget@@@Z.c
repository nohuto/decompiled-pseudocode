/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x18007DE48
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18007D530 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18007EC14 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18007FF60 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x180085090 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18008598C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x180081758 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x1800819C8 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned int a8,
        struct IInputTarget **a9)
{
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  struct IInputTarget **v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v24; // [rsp+28h] [rbp-30h] BYREF
  __int64 v25; // [rsp+30h] [rbp-28h]
  __int64 v26; // [rsp+38h] [rbp-20h]

  v26 = -2LL;
  v13 = 0LL;
  v25 = 0LL;
  v14 = *((unsigned int *)this + 25);
  if ( !(_DWORD)v14 )
    goto LABEL_18;
  v15 = operator new[](saturated_mul(v14, 0x28uLL));
  v16 = v15;
  if ( v15
    && (int)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 88, v15, (unsigned int)v14) >= 0 )
  {
    v17 = 0LL;
    while ( v16[10 * v17] != a2 )
    {
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= (unsigned int)v14 )
        goto LABEL_14;
    }
    v24 = 0LL;
    if ( (int)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(
                (char *)this + 88,
                &v16[10 * v17],
                &v24) < 0 )
      goto LABEL_3;
    v18 = v24;
    if ( v24 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      v13 = v18;
      v25 = v18;
    }
LABEL_14:
    operator delete(v16);
    if ( v13 )
    {
      v19 = a9;
      if ( !a9 )
        goto LABEL_24;
      *a9 = 0LL;
      v20 = malloc(0x58uLL);
      v21 = v20;
      if ( v20 )
      {
        memset_0(v20, 0, 0x58uLL);
        v21[4] = &RefCountedObject::`vftable';
        *((_DWORD *)v21 + 10) = 1;
        *v21 = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
        v21[1] = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
        v21[2] = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
        v21[3] = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
        v21[4] = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
        v21[6] = v13;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        *((_DWORD *)v21 + 14) = a3;
        *((_DWORD *)v21 + 15) = a4;
        *((_DWORD *)v21 + 16) = a5;
        v21[9] = a6;
        *((_DWORD *)v21 + 20) = a7;
        *((_DWORD *)v21 + 21) = a8;
        goto LABEL_22;
      }
      goto LABEL_21;
    }
LABEL_18:
    v19 = a9;
    if ( !a9 )
      goto LABEL_24;
    *a9 = 0LL;
    v22 = malloc(0x48uLL);
    v21 = v22;
    if ( v22 )
    {
      memset_0(v22, 0, 0x48uLL);
      v21[3] = &RefCountedObject::`vftable';
      *((_DWORD *)v21 + 8) = 1;
      *v21 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
      v21[1] = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
      v21[2] = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
      v21[3] = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v21 + 10) = a2;
      *((_DWORD *)v21 + 11) = a3;
      *((_DWORD *)v21 + 12) = a4;
      *((_DWORD *)v21 + 13) = a5;
      v21[7] = a6;
      *((_DWORD *)v21 + 16) = a7;
      *((_DWORD *)v21 + 17) = a8;
      goto LABEL_22;
    }
LABEL_21:
    v21 = 0LL;
LABEL_22:
    if ( v21 )
      *v19 = (struct IInputTarget *)v21;
    goto LABEL_24;
  }
LABEL_3:
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(0LL, 0LL, 0);
LABEL_24:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 0LL;
}
