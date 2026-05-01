/*
 * XREFs of ??$AsAgile@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@YAJPEAUIAsyncCallbackDispatcher@@PEAVAgileRef@01@@Z @ 0x18018C8E4
 * Callers:
 *     ?RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ @ 0x18018D830 (-RuntimeClassInitialize@CreationThreadDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180091F9C (--4-$ComPtr@UIAgileReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::AsAgile<IAsyncCallbackDispatcher>(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a1, a2);
  }
  else
  {
    v6 = 0LL;
    Microsoft::WRL::ComPtr<IAgileReference>::operator=(a2, &v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v6);
  }
  return v2;
}
