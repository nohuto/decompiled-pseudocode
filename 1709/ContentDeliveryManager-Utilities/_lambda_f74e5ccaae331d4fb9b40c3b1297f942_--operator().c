/*
 * XREFs of _lambda_f74e5ccaae331d4fb9b40c3b1297f942_::operator() @ 0x18000D278
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000D020 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003CE0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180016CAC (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001CC9C (--$WaitForCompletion@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deploym.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_f74e5ccaae331d4fb9b40c3b1297f942_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  _BYTE v27[8]; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v28; // [rsp+40h] [rbp-21h] BYREF
  __int64 v29; // [rsp+48h] [rbp-19h] BYREF
  __int64 v30; // [rsp+50h] [rbp-11h] BYREF
  __int64 v31; // [rsp+58h] [rbp-9h] BYREF
  __int64 v32; // [rsp+60h] [rbp-1h] BYREF
  __int64 v33; // [rsp+68h] [rbp+7h] BYREF
  __int64 v34; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD v35[2]; // [rsp+78h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+27h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v35[1] = -2LL;
  v35[0] = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Management.Deployment.PackageManager", 0x2Cu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         string,
         v35);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x13A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_49;
  }
  v31 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v35[0] + 160LL))(
         v35[0],
         0LL,
         **a1,
         &v31);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x13A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v5);
LABEL_42:
    v6 = v31;
    goto LABEL_47;
  }
  v6 = v31;
  if ( v31 )
  {
    v30 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v30);
    v4 = v7;
    if ( v7 >= 0
      && (v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 56LL))(v30, v27), v4 = v7, v7 >= 0) )
    {
      while ( 1 )
      {
        if ( !v27[0] )
        {
          v24 = v30;
          if ( v30 )
          {
            v30 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v6 = v31;
          goto LABEL_46;
        }
        v33 = 0LL;
        v29 = 0LL;
        v28 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v33);
        v4 = v8;
        if ( v8 < 0 )
          goto LABEL_35;
        v9 = v33;
        v10 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, &v29);
        v4 = v8;
        if ( v8 < 0
          || (v11 = v29,
              WindowsDeleteString(v28),
              v28 = 0LL,
              v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 96LL))(v11, &v28),
              v4 = v8,
              v8 < 0) )
        {
LABEL_35:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x13A,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v8);
          goto LABEL_36;
        }
        v32 = 0LL;
        (*(void (__fastcall **)(_QWORD, HSTRING, __int64 *))(*(_QWORD *)v35[0] + 64LL))(v35[0], v28, &v32);
        v34 = 0LL;
        v12 = v32;
        v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(v32);
        if ( v4 < 0 )
          break;
        v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, &v34);
        if ( v4 < 0 )
          break;
        v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 64LL))(v30, v27);
        v4 = v13;
        if ( v13 < 0 )
        {
          v18 = (unsigned int)v13;
          goto LABEL_31;
        }
        v14 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        WindowsDeleteString(v28);
        v28 = 0LL;
        v16 = v29;
        if ( v29 )
        {
          v29 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      v18 = (unsigned int)v4;
LABEL_31:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v18);
      v19 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = v32;
      if ( v32 )
      {
        v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
LABEL_36:
      WindowsDeleteString(v28);
      v28 = 0LL;
      v21 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x13A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v7);
    }
    v23 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    goto LABEL_42;
  }
LABEL_46:
  v4 = 0;
LABEL_47:
  if ( v6 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
LABEL_49:
  v25 = v35[0];
  if ( v35[0] )
  {
    v35[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v4;
}
