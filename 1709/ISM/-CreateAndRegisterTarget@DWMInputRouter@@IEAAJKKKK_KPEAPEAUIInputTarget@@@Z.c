/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800198FC
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800191F0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18001B250 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800A92A8 (-HitTest3D@MPCInputRouter@@AEAAXPEAUInputInfo@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800A9AA4 (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x18001EB34 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x18001EE64 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned __int64 a6,
        struct IInputTarget **a7)
{
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rsi
  int Keys; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int ValueForKey; // eax
  __int64 v20; // rcx
  __int64 v21; // rdi
  struct IInputTarget **v22; // rsi
  char v23; // di
  int v24; // r9d
  _QWORD *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rcx
  char v28; // di
  char v29; // si
  int v30; // r9d
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v34; // [rsp+38h] [rbp-40h] BYREF
  __int64 v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+48h] [rbp-30h]

  v36 = -2LL;
  v11 = 0LL;
  v35 = 0LL;
  v12 = *((unsigned int *)this + 23);
  if ( (_DWORD)v12 )
  {
    v13 = operator new[](saturated_mul(v12, 0x28uLL));
    v15 = v13;
    if ( !v13 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 1014, 3);
      goto LABEL_5;
    }
    Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 80, v13, (unsigned int)v12);
    if ( Keys < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v17, &MinInput_Warning_CheckResult, 0, 1016, Keys);
      goto LABEL_5;
    }
    v18 = 0LL;
    while ( v15[10 * v18] != a2 )
    {
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= (unsigned int)v12 )
        goto LABEL_20;
    }
    v34 = 0LL;
    ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(
                    (char *)this + 80,
                    &v15[10 * v18],
                    &v34);
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v20, &MinInput_Warning_CheckResult, 0, 1032, ValueForKey);
LABEL_5:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v21 = v34;
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
      v11 = v21;
      v35 = v21;
    }
LABEL_20:
    operator delete(v15);
    if ( v11 )
    {
      v22 = a7;
      if ( !a7 )
      {
        v23 = 3;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_44;
        v24 = 49;
LABEL_30:
        McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v24, v23);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 1051, v23);
        goto LABEL_44;
      }
      *a7 = 0LL;
      v25 = malloc(0x50uLL);
      v26 = v25;
      if ( v25 )
        memset(v25, 0, 0x50uLL);
      if ( !v26 )
      {
        v23 = 14;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_44;
        v24 = 63;
        goto LABEL_30;
      }
      v26[4] = &RefCountedObject::`vftable';
      *((_DWORD *)v26 + 10) = 1;
      *v26 = &DWMFocusedInputTarget::`vftable'{for `IInputTarget'};
      v26[1] = &DWMFocusedInputTarget::`vftable'{for `IInputTarget2'};
      v26[2] = &DWMFocusedInputTarget::`vftable'{for `IFocusInputTarget'};
      v26[3] = &DWMFocusedInputTarget::`vftable'{for `IDCompInputTarget'};
      v26[4] = &DWMFocusedInputTarget::`vftable'{for `RefCountedObject'};
      v26[6] = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      *((_DWORD *)v26 + 14) = a3;
      *((_DWORD *)v26 + 15) = a4;
      *((_DWORD *)v26 + 16) = a5;
      v26[9] = a6;
LABEL_43:
      *v22 = (struct IInputTarget *)v26;
      goto LABEL_44;
    }
  }
  v22 = a7;
  if ( a7 )
  {
    *a7 = 0LL;
    v31 = malloc(0x40uLL);
    v26 = v31;
    if ( v31 )
      memset(v31, 0, 0x40uLL);
    if ( v26 )
    {
      v26[3] = &RefCountedObject::`vftable';
      *((_DWORD *)v26 + 8) = 1;
      *v26 = &DWMLegacyInputTarget::`vftable'{for `IInputTarget'};
      v26[1] = &DWMLegacyInputTarget::`vftable'{for `IInputTarget2'};
      v26[2] = &DWMLegacyInputTarget::`vftable'{for `IFocusInputTarget'};
      v26[3] = &DWMLegacyInputTarget::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v26 + 10) = a2;
      *((_DWORD *)v26 + 11) = a3;
      *((_DWORD *)v26 + 12) = a4;
      *((_DWORD *)v26 + 13) = a5;
      v26[7] = a6;
      goto LABEL_43;
    }
    v28 = 14;
    v29 = 14;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_44;
    v30 = 61;
  }
  else
  {
    v28 = 3;
    v29 = 3;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_44;
    v30 = 47;
  }
  McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v30, v28);
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v32, &MinInput_Warning_CheckResult, 0, 1061, v29);
LABEL_44:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
