/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___::Run @ 0x1803064A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@AgileGitPtr@@QEAAJW4AgileReferenceOptions@@AEBU_GUID@@PEAUIUnknown@@@Z @ 0x18006FB24 (-Initialize@AgileGitPtr@@QEAAJW4AgileReferenceOptions@@AEBU_GUID@@PEAUIUnknown@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@AEAPEAUHSTRING__@@1@Z @ 0x180305B10 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Micr.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___::Run(
        __int64 a1)
{
  HSTRING **v1; // rax
  HSTRING *v3; // rbx
  HSTRING *v4; // rdi
  __int64 v5; // rdx
  CLaunchActivatedEventArgs *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(HSTRING ***)(a1 + 16);
  v7 = 0LL;
  v3 = v1[1];
  v4 = *v1;
  Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v7);
  **(_DWORD **)(a1 + 32) = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ * &,HSTRING__ * &>(
                             &v7,
                             v4,
                             v3);
  if ( **(int **)(a1 + 32) >= 0 )
    **(_DWORD **)(a1 + 32) = AgileGitPtr::Initialize(
                               *(__int64 **)(a1 + 24),
                               v5,
                               (__int64)&GUID_cf651713_cd08_4fd8_b697_a281b6544e2e,
                               (__int64)v7);
  return Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v7);
}
