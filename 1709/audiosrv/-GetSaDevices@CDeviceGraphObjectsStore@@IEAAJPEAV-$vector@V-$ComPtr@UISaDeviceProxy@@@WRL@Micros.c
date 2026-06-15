/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180096F6C
 * Callers:
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180096F60 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180097020 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     _lambda_66f05aa6b27db1192e1217df58c6c38a_::operator() @ 0x1800963F0 (_lambda_66f05aa6b27db1192e1217df58c6c38a_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // r14
  unsigned int v7; // ebp
  __int64 v8; // r8
  Microsoft::WRL::Details::WeakReferenceImpl **v9; // rbx
  Microsoft::WRL::Details::WeakReferenceImpl **v10; // rdi
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v7 = 0;
  v13 = 0;
  v8 = 3 * v3;
  v12[0] = a2;
  v12[1] = &v13;
  v9 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 24 * v3 + 88);
  v10 = *(Microsoft::WRL::Details::WeakReferenceImpl ***)(a1 + 8 * v8 + 80);
  if ( v10 != v9 )
  {
    do
      lambda_66f05aa6b27db1192e1217df58c6c38a_::operator()((__int64)v12, v10++);
    while ( v10 != v9 );
    v7 = v13;
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return v7;
}
