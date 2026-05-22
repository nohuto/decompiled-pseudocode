/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x18001A098
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18001A400 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x18001A410 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x180011F94 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x180012180 (-RemoveKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x18001EB34 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x18001EE64 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char *v5; // rcx
  int v6; // r8d
  unsigned int v7; // edx
  int Keys; // eax
  __int64 v9; // rcx
  int v10; // r9d
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebx
  char *v13; // rax
  __int64 v14; // rcx
  char *v15; // r12
  int v16; // r15d
  char *v17; // r13
  int ValueForKey; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  __int64 (__fastcall **v21)(_QWORD, _QWORD); // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  int v26; // r9d
  _QWORD *v28; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v29[3]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v30[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]
  struct DeviceInfo *v32; // [rsp+C8h] [rbp+48h] BYREF
  char v33; // [rsp+D0h] [rbp+50h]
  int v34; // [rsp+D8h] [rbp+58h]

  v33 = a3;
  v32 = a2;
  v29[1] = -2LL;
  v34 = 0;
  v5 = (char *)this + 192;
  if ( a3 )
  {
    v6 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == *((_DWORD *)v5 + 4) || (v7 = 0, !*((_DWORD *)v5 + 2)) )
    {
LABEL_8:
      Keys = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((__int64)v5, (int *)a2, &v32);
      if ( Keys < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          goto LABEL_12;
        v10 = 1211;
        goto LABEL_11;
      }
    }
    else
    {
      while ( *(_DWORD *)(*(_QWORD *)v5 + 16LL * v7) != v6 )
      {
        if ( ++v7 >= *((_DWORD *)v5 + 2) )
          goto LABEL_8;
      }
      LOBYTE(v34) = 1;
    }
  }
  else
  {
    Keys = DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey((__int64)v5, a2);
    if ( Keys < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_12;
      v10 = 1221;
      goto LABEL_11;
    }
  }
  v11 = *((unsigned int *)this + 23);
  v12 = 0;
  if ( (_DWORD)v11 )
  {
    v13 = (char *)operator new[](saturated_mul(v11, 0x28uLL));
    v15 = v13;
    if ( !v13 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 1237, 14);
      goto LABEL_12;
    }
    Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 80, v13, (unsigned int)v11);
    if ( Keys >= 0 )
    {
      v16 = 0;
      while ( 1 )
      {
        v29[0] = 0LL;
        v28 = 0LL;
        v17 = &v15[40 * v16];
        ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey((char *)this + 80, v17, v29);
        if ( ValueForKey < 0 )
          break;
        v20 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
        }
        ValueForKey = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v29[0])(
                        v29[0],
                        &GUID_ce017166_b885_4259_a1c9_31032455b8b4,
                        &v28);
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v26 = 1259;
            goto LABEL_54;
          }
          goto LABEL_55;
        }
        if ( !v28 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            McTemplateU0qqq(0LL, &MinInput_Warning_CheckResult, 0, 1263, 255);
          goto LABEL_55;
        }
        v21 = (__int64 (__fastcall **)(_QWORD, _QWORD))*v28;
        if ( v33 )
        {
          if ( (_BYTE)v34 )
            v22 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v21)[4](v28, a2);
          else
            v22 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v21)[3](v28, a2);
        }
        else
        {
          v22 = ((__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))v21)[5](v28, a2);
        }
        v12 = v22;
        if ( v22 < 0 )
        {
          v30[0] = *(_OWORD *)v17;
          v30[1] = *((_OWORD *)v17 + 1);
          v31 = *((_QWORD *)v17 + 4);
          v23 = (*(__int64 (__fastcall **)(char *, _OWORD *))(*((_QWORD *)this + 7) + 40LL))((char *)this + 56, v30);
          if ( v23 < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v24, &MinInput_Warning_CheckResult, 0, 1292, v23);
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v12 = 0;
        }
        v25 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
        }
        if ( ++v16 >= (unsigned int)v11 )
          return v12;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v26 = 1255;
LABEL_54:
        McTemplateU0qqq(v19, &MinInput_Warning_CheckResult, 0, v26, ValueForKey);
      }
LABEL_55:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_12:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v10 = 1242;
LABEL_11:
    McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, v10, Keys);
    goto LABEL_12;
  }
  return v12;
}
