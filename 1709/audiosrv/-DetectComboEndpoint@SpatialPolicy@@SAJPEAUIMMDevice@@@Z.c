/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x1800BA5B4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800B7AFC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x18000878C (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005ABB0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$?4AEAV?$function@$$A6AXXZ@std@@X@?$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z @ 0x18005B10C (--$-4AEAV-$function@$$A6AXXZ@std@@X@-$function@$$A6AXXZ@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x1800BA580 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     GetContainerId @ 0x1800BAB0C (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x1800BABC0 (GetEndpointFormFactor.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(struct IMMDevice *a1)
{
  char v2; // si
  int ContainerId; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  int EndpointFormFactor; // r14d
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  LPVOID v11; // rdi
  __int64 v12; // rdx
  ARM_EVENT *v13; // rbx
  LPVOID pv; // [rsp+28h] [rbp-49h] BYREF
  __int64 v15; // [rsp+30h] [rbp-41h] BYREF
  int v16; // [rsp+38h] [rbp-39h]
  __int128 v17; // [rsp+40h] [rbp-31h]
  __int64 v18; // [rsp+50h] [rbp-21h]
  _QWORD v19[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall **v20)(); // [rsp+68h] [rbp-9h] BYREF
  __int128 v21; // [rsp+70h] [rbp-1h]
  __int64 (__fastcall ***v22)(); // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v18 = -2LL;
  v2 = 0;
  v16 = 0;
  if ( IsSpatialComboEndpointDeterminationDisabled() )
    return 0LL;
  v15 = 0LL;
  ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                  a1,
                  0LL,
                  &v15);
  v5 = ContainerId;
  if ( ContainerId >= 0 )
  {
    EndpointFormFactor = GetEndpointFormFactor(v15);
    v8 = (unsigned int)(EndpointFormFactor - 1);
    if ( (v8 & 0xFFFFFFFD) == 0 )
    {
      ContainerId = GetContainerId(v8, v15, v19);
      v5 = ContainerId;
      if ( ContainerId < 0 )
      {
        v6 = 460LL;
        goto LABEL_8;
      }
      v9 = v19[0];
      if ( !v19[0] )
        v9 = v19[1] + 1LL;
      if ( !v9 )
      {
        pv = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        v10 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v11 = pv;
          v13 = (ARM_EVENT *)operator new(0x48uLL);
          v19[0] = v13;
          if ( v13 )
          {
            LODWORD(v17) = EndpointFormFactor;
            *((_QWORD *)&v17 + 1) = v11;
            v20 = off_1800F4688;
            v21 = v17;
            v22 = &v20;
            v2 = 1;
            v16 = 1;
            *(_QWORD *)v13 = &ARM_EVENT::`vftable';
            *((_QWORD *)v13 + 8) = 0LL;
            std::function<void (void)>::operator=<std::function<void (void)> &,void>((_QWORD *)v13 + 1);
          }
          else
          {
            v13 = 0LL;
          }
          if ( (v2 & 1) != 0 )
            std::_Func_class<void,>::_Tidy(&v20, v12);
          if ( v13 && PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v13, 0LL) )
          {
            v13 = 0LL;
            pv = 0LL;
          }
          v5 = 0;
          if ( v13 )
            ARM_EVENT::`scalar deleting destructor'(v13, 1LL);
        }
        else
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x1D5,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v10);
        }
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_27;
      }
    }
    v5 = 0;
    goto LABEL_27;
  }
  v6 = 450LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
    (const char *)(unsigned int)ContainerId);
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  return v5;
}
