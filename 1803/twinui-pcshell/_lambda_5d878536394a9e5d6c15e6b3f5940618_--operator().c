/*
 * XREFs of _lambda_5d878536394a9e5d6c15e6b3f5940618_::operator() @ 0x18007FFAC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5d878536394a9e5d6c15e6b3f5940618___::Run @ 0x18007FFA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5d878536394a9e5d6c15e6b3f5940618___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180080070 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150 (-InternalRelease@-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microso.c)
 */

__int64 __fastcall lambda_5d878536394a9e5d6c15e6b3f5940618_::operator()(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rbp
  int AgileReference; // edi
  __int64 v8; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  v11 = 0LL;
  v3 = v1[1];
  v4 = *v1;
  Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v11);
  **(_DWORD **)(a1 + 16) = Microsoft::WRL::Details::MakeAndInitialize<CLaunchActivatedEventArgs,CLaunchActivatedEventArgs,HSTRING__ *,HSTRING__ *>(
                             &v11,
                             v4,
                             v3);
  if ( **(int **)(a1 + 16) >= 0 )
  {
    v5 = *(__int64 **)(a1 + 8);
    v6 = v11;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v5);
    AgileReference = 0;
    if ( v6 )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
      AgileReference = RoGetAgileReference(0LL, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, v6, &v10);
      if ( AgileReference >= 0 )
      {
        v8 = *v5;
        *v5 = v10;
        v10 = v8;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
    }
    **(_DWORD **)(a1 + 16) = AgileReference;
  }
  return Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(&v11);
}
