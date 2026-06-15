/*
 * XREFs of ?DetectComboEndpoint@SpatialPolicy@@SAJPEAUIMMDevice@@@Z @ 0x180039AF4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     IsSpatialComboEndpointDeterminationDisabled @ 0x180003E88 (IsSpatialComboEndpointDeterminationDisabled.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180039790 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     GetEndpointFormFactor @ 0x18003C538 (GetEndpointFormFactor.c)
 *     GetContainerId @ 0x18003C818 (GetContainerId.c)
 *     ??_GARM_EVENT@@UEAAPEAXI@Z @ 0x180045030 (--_GARM_EVENT@@UEAAPEAXI@Z.c)
 *     ??0ARM_EVENT@@QEAA@$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180045090 (--0ARM_EVENT@@QEAA@$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x180045160 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SpatialPolicy::DetectComboEndpoint(struct IMMDevice *a1)
{
  char v2; // si
  int ContainerId; // eax
  unsigned int v4; // edi
  int EndpointFormFactor; // r14d
  __int64 v6; // rcx
  __int64 v8; // rcx
  int v9; // eax
  LPVOID v10; // rbx
  LPVOID v11; // rax
  ARM_EVENT *v12; // rbx
  __int64 v13; // rdx
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
  if ( !IsSpatialComboEndpointDeterminationDisabled() )
  {
    v15 = 0LL;
    ContainerId = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                    a1,
                    0LL,
                    &v15);
    v4 = ContainerId;
    if ( ContainerId < 0 )
    {
      v13 = 448LL;
    }
    else
    {
      EndpointFormFactor = GetEndpointFormFactor(v15);
      v6 = (unsigned int)(EndpointFormFactor - 1);
      if ( (v6 & 0xFFFFFFFD) != 0 )
      {
LABEL_4:
        v4 = 0;
LABEL_5:
        wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>(&v15);
        return v4;
      }
      ContainerId = GetContainerId(v6, v15, v19);
      v4 = ContainerId;
      if ( ContainerId >= 0 )
      {
        v8 = v19[0];
        if ( !v19[0] )
          v8 = v19[1] + 1LL;
        if ( !v8 )
        {
          pv = 0LL;
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            &pv,
            0LL);
          v9 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a1->lpVtbl->GetId)(a1, &pv);
          v4 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x1D3,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v9,
              (int)pv);
          }
          else
          {
            v10 = pv;
            v11 = operator new(0x48uLL);
            v19[0] = v11;
            if ( v11 )
            {
              LODWORD(v17) = EndpointFormFactor;
              *((_QWORD *)&v17 + 1) = v10;
              v20 = off_1800DBF60;
              v21 = v17;
              v22 = &v20;
              v2 = 1;
              v16 = 1;
              v12 = (ARM_EVENT *)ARM_EVENT::ARM_EVENT(v11, &v20);
            }
            else
            {
              v12 = 0LL;
            }
            if ( (v2 & 1) != 0 )
              std::_Func_class<void,>::_Tidy(&v20);
            if ( v12 )
            {
              if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v12, 0LL) )
              {
                v12 = 0LL;
                pv = 0LL;
              }
              v4 = 0;
              if ( v12 )
                ARM_EVENT::`scalar deleting destructor'(v12, 1u);
            }
            else
            {
              v4 = 0;
            }
          }
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_5;
        }
        goto LABEL_4;
      }
      v13 = 458LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)ContainerId,
      (int)pv);
    goto LABEL_5;
  }
  return 0LL;
}
