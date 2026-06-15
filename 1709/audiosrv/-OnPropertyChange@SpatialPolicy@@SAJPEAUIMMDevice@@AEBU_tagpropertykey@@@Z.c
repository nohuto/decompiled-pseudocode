/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     GetSpatialSettingsMonitoringPKey @ 0x18000873C (GetSpatialSettingsMonitoringPKey.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x18000878C (IsSpatialComboEndpointDeterminationDisabled.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800333A8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180033408 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetContainerId @ 0x1800BAB0C (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x1800BABC0 (GetEndpointFormFactor.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800BAF8C (ReconsiderSpatialOnComboEndpoints.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(struct IMMDevice *a1, const struct _tagpropertykey *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int ContainerId; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int EndpointFormFactor; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v15[1] = -2LL;
  if ( dword_18014C29C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18014C29C);
    if ( dword_18014C29C == -1 )
    {
      xmmword_18014BF10 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_18014BF20 = 0;
      Init_thread_footer(&dword_18014C29C);
    }
  }
  v4 = xmmword_18014BF10 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_18014BF10 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *((_QWORD *)&xmmword_18014BF10 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v4 )
    GetSpatialSettingsMonitoringPKey((__int64)&xmmword_18014BF10);
  if ( IsSpatialComboEndpointDeterminationDisabled() )
    return 0LL;
  v5 = *(_QWORD *)&a2->fmtid.Data1 - xmmword_18014BF10;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)xmmword_18014BF10 )
    v5 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&xmmword_18014BF10 + 1);
  if ( v5 || a2->pid != dword_18014BF20 )
    return 0LL;
  v15[0] = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                  a1,
                  0LL,
                  v15);
  v8 = ContainerId;
  if ( ContainerId >= 0 )
  {
    EndpointFormFactor = GetEndpointFormFactor(v15[0]);
    v11 = EndpointFormFactor - 1;
    if ( (v11 & 0xFFFFFFFD) == 0 )
    {
      ContainerId = GetContainerId(v11, v15[0], v16);
      v8 = ContainerId;
      if ( ContainerId < 0 )
      {
        v9 = 527LL;
        goto LABEL_19;
      }
      v12 = v16[0];
      if ( !v16[0] )
        v12 = v16[1] + 1LL;
      if ( !v12 )
      {
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v13 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
        v8 = v13;
        if ( v13 >= 0 )
        {
          ReconsiderSpatialOnComboEndpoints(EndpointFormFactor, pv);
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x218,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v13,
            (int)pv);
        }
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_29;
      }
    }
    v8 = 0;
    goto LABEL_29;
  }
  v9 = 517LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)ContainerId,
    (int)pv);
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
  return v8;
}
