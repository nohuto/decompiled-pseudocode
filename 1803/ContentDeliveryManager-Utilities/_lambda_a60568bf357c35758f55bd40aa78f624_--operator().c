/*
 * XREFs of _lambda_a60568bf357c35758f55bd40aa78f624_::operator() @ 0x18000E144
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000DE90 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180004050 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019264 (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001F97C (--$WaitForCompletion@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deploym.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_a60568bf357c35758f55bd40aa78f624_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
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
  v34 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Management.Deployment.PackageManager", 0x2Cu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         string,
         &v34);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v35[0] = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v34 + 160LL))(v34, 0LL, **a1, v35);
    v4 = v5;
    if ( v5 >= 0 )
    {
      if ( v35[0] )
      {
        v30 = 0LL;
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v35[0] + 48LL))(v35[0], &v30);
        v4 = v6;
        if ( v6 >= 0
          && (v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 56LL))(v30, v27), v4 = v6, v6 >= 0) )
        {
          while ( 1 )
          {
            if ( !v27[0] )
            {
              v17 = v30;
              if ( v30 )
              {
                v30 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
              }
              goto LABEL_29;
            }
            v32 = 0LL;
            v29 = 0LL;
            v28 = 0LL;
            v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v32);
            v4 = v7;
            if ( v7 < 0 )
              goto LABEL_41;
            v8 = v32;
            v9 = v29;
            if ( v29 )
            {
              v29 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            }
            v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v29);
            v4 = v7;
            if ( v7 < 0
              || (v10 = v29,
                  WindowsDeleteString(v28),
                  v28 = 0LL,
                  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 96LL))(v10, &v28),
                  v4 = v7,
                  v7 < 0) )
            {
LABEL_41:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x144,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                (const char *)(unsigned int)v7);
              goto LABEL_42;
            }
            v31 = 0LL;
            (*(void (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v34 + 64LL))(v34, v28, &v31);
            v33 = 0LL;
            v11 = v31;
            v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(v31);
            if ( v4 < 0 )
              break;
            v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &v33);
            if ( v4 < 0 )
              break;
            v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 64LL))(v30, v27);
            v4 = v12;
            if ( v12 < 0 )
            {
              v21 = (unsigned int)v12;
              goto LABEL_37;
            }
            v13 = v33;
            if ( v33 )
            {
              v33 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            }
            v14 = v31;
            if ( v31 )
            {
              v31 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            WindowsDeleteString(v28);
            v28 = 0LL;
            v15 = v29;
            if ( v29 )
            {
              v29 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
            v16 = v32;
            if ( v32 )
            {
              v32 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
          }
          v21 = (unsigned int)v4;
LABEL_37:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x144,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v21);
          v22 = v33;
          if ( v33 )
          {
            v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          v23 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          }
LABEL_42:
          WindowsDeleteString(v28);
          v28 = 0LL;
          v24 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = v32;
          if ( v32 )
          {
            v32 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x144,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v6);
        }
        v26 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      else
      {
LABEL_29:
        v4 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
    }
    v18 = v35[0];
    if ( v35[0] )
    {
      v35[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x144,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
  }
  v19 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v4;
}
