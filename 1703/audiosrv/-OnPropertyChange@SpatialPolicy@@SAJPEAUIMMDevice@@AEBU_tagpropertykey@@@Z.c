/*
 * XREFs of ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0
 * Callers:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x180002F50 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x180079E28 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 * Callees:
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180003E88 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x180039894 (ReconsiderSpatialOnComboEndpoints.c)
 *     GetEndpointFormFactor @ 0x18003C538 (GetEndpointFormFactor.c)
 *     GetContainerId @ 0x18003C818 (GetContainerId.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialPolicy::OnPropertyChange(struct IMMDevice *a1, const struct _tagpropertykey *a2)
{
  __int64 v4; // rax
  int ContainerId; // eax
  unsigned int v7; // ebx
  unsigned int EndpointFormFactor; // edi
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v14[1] = -2LL;
  if ( (unsigned __int8)IsSpatialComboEndpointDeterminationDisabled() )
    return 0LL;
  v4 = *(_QWORD *)&a2->fmtid.Data1 - *(_QWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid.Data1;
  if ( *(_QWORD *)&a2->fmtid.Data1 == *(_QWORD *)&PKEY_SpatialAudioEndpoint_Settings.fmtid.Data1 )
    v4 = *(_QWORD *)a2->fmtid.Data4 - *(_QWORD *)PKEY_SpatialAudioEndpoint_Settings.fmtid.Data4;
  if ( v4 || a2->pid != 2 )
    return 0LL;
  v14[0] = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD *))a1->lpVtbl->OpenPropertyStore)(
                  a1,
                  0LL,
                  v14);
  v7 = ContainerId;
  if ( ContainerId < 0 )
  {
    v12 = 508LL;
    goto LABEL_21;
  }
  EndpointFormFactor = GetEndpointFormFactor(v14[0]);
  v9 = EndpointFormFactor - 1;
  if ( (v9 & 0xFFFFFFFD) == 0 )
  {
    ContainerId = GetContainerId(v9, v14[0], v15);
    v7 = ContainerId;
    if ( ContainerId >= 0 )
    {
      v10 = v15[0];
      if ( !v15[0] )
        v10 = v15[1] + 1LL;
      if ( !v10 )
      {
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v11 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
        v7 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x20F,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v11,
            (int)pv);
        }
        else
        {
          ReconsiderSpatialOnComboEndpoints(EndpointFormFactor, pv);
          v7 = 0;
        }
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    v12 = 518LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId,
      (int)pv);
    goto LABEL_14;
  }
LABEL_13:
  v7 = 0;
LABEL_14:
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(v14);
  return v7;
}
