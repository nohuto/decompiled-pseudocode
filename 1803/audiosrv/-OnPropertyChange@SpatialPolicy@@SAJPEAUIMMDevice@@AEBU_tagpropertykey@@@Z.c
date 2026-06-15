/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x180005FA4
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x1800181B4 (GetSpatialSettingsMonitoringPKey.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180018268 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetContainerId @ 0x18005EE8C (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x18005EF08 (GetEndpointFormFactor.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800611C8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180061228 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800EF668 (ReconsiderSpatialOnComboEndpoints.c)
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
  __int64 v12; // rax
  int v13; // eax
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v15[1] = -2LL;
  if ( dword_18018A228 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18018A228);
    if ( dword_18018A228 == -1 )
    {
      xmmword_180189F48 = (__int128)GUID_00000000_0000_0000_0000_000000000000;
      dword_180189F58 = 0;
      Init_thread_footer(&dword_18018A228);
    }
  }
  v4 = xmmword_180189F48 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( (_QWORD)xmmword_180189F48 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v4 = *((_QWORD *)&xmmword_180189F48 + 1) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v4 )
    GetSpatialSettingsMonitoringPKey(&xmmword_180189F48);
  if ( (unsigned __int8)IsSpatialComboEndpointDeterminationDisabled() )
    return 0LL;
  v5 = *(_QWORD *)&a2->fmtid.Data1 - xmmword_180189F48;
  if ( *(_QWORD *)&a2->fmtid.Data1 == (_QWORD)xmmword_180189F48 )
    v5 = *(_QWORD *)a2->fmtid.Data4 - *((_QWORD *)&xmmword_180189F48 + 1);
  if ( v5 || a2->pid != dword_180189F58 )
    return 0LL;
  v15[0] = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD *))a1->lpVtbl->OpenPropertyStore)(
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
          wil::details::in1diag3::Return_Hr(
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
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)ContainerId,
    (int)pv);
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v15);
  return v8;
}
