/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x18005ED9C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180018268 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18002A9C0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004B238 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetContainerId @ 0x18005EE8C (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x18005EF08 (GetEndpointFormFactor.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x1800EEF50 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x1800EF020 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(struct IMMDevice *a1)
{
  char v2; // si
  int ContainerId; // eax
  unsigned int v4; // edi
  int EndpointFormFactor; // r14d
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rdx
  int v10; // eax
  LPVOID v11; // rbx
  LPVOID v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ARM_EVENT *v16; // rbx
  LPVOID pv; // [rsp+28h] [rbp-49h] BYREF
  __int64 v18; // [rsp+30h] [rbp-41h] BYREF
  int v19; // [rsp+38h] [rbp-39h]
  __int128 v20; // [rsp+40h] [rbp-31h]
  __int64 v21; // [rsp+50h] [rbp-21h]
  _QWORD v22[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v23)(); // [rsp+68h] [rbp-9h] BYREF
  __int128 v24; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall ***v25)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v21 = -2LL;
  v2 = 0;
  v19 = 0;
  if ( !IsSpatialComboEndpointDeterminationDisabled() )
  {
    v18 = 0LL;
    ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                    a1,
                    0LL,
                    &v18);
    v4 = ContainerId;
    if ( ContainerId < 0 )
    {
      v9 = 450LL;
    }
    else
    {
      EndpointFormFactor = GetEndpointFormFactor(v18);
      v6 = (unsigned int)(EndpointFormFactor - 1);
      if ( (v6 & 0xFFFFFFFD) != 0 )
      {
LABEL_8:
        v4 = 0;
LABEL_9:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
        return v4;
      }
      ContainerId = GetContainerId(v6, v18, v22);
      v4 = ContainerId;
      if ( ContainerId >= 0 )
      {
        v7 = v22[0];
        if ( !v22[0] )
          v7 = v22[1] + 1LL;
        if ( !v7 )
        {
          pv = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          v10 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
          v4 = v10;
          if ( v10 >= 0 )
          {
            v11 = pv;
            v12 = operator new(0x48uLL);
            v22[0] = v12;
            if ( v12 )
            {
              LODWORD(v20) = EndpointFormFactor;
              *((_QWORD *)&v20 + 1) = v11;
              v23 = off_18012CC28;
              v24 = v20;
              v25 = &v23;
              v2 = 1;
              v19 = 1;
              v16 = (ARM_EVENT *)ARM_EVENT::ARM_EVENT(v12, &v23);
            }
            else
            {
              v16 = 0LL;
            }
            if ( (v2 & 1) != 0 )
              std::_Func_class<void,>::_Tidy((__int64)&v23, v13, v14, v15);
            if ( v16 && PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v16, 0LL) )
            {
              v16 = 0LL;
              pv = 0LL;
            }
            v4 = 0;
            if ( v16 )
              ARM_EVENT::`scalar deleting destructor'(v16, 1u);
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D5,
              (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v10);
          }
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_9;
        }
        goto LABEL_8;
      }
      v9 = 460LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId);
    goto LABEL_9;
  }
  return 0LL;
}
