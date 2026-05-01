/*
 * XREFs of ?Initialize@AgileGitPtr@@QEAAJW4AgileReferenceOptions@@AEBU_GUID@@PEAUIUnknown@@@Z @ 0x18006FB24
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___::Run @ 0x1803064A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall AgileGitPtr::Initialize(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int AgileReference; // edi
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1);
  AgileReference = 0;
  if ( a4 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
    AgileReference = RoGetAgileReference(0LL, a3, a4, &v10);
    if ( AgileReference >= 0 )
    {
      v8 = *a1;
      *a1 = v10;
      v10 = v8;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v10);
  }
  return (unsigned int)AgileReference;
}
