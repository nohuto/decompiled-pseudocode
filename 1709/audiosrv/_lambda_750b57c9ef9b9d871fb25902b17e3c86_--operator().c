/*
 * XREFs of _lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator() @ 0x180098980
 * Callers:
 *     wil::details::lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___::_lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___ @ 0x1800988D0 (wil--details--lambda_call__lambda_750b57c9ef9b9d871fb25902b17e3c86___--_lambda_call__lambda_750b.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18009B8E8 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18002A250 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_750b57c9ef9b9d871fb25902b17e3c86_::operator()(_QWORD **a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  void *v6; // [rsp+28h] [rbp-20h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  (*(void (__fastcall **)(CDeviceGraphStore *, void **))(*(_QWORD *)g_DeviceGraphStore + 56LL))(g_DeviceGraphStore, &v6);
  v2 = v6;
  v3 = (_QWORD *)v7;
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v2 + 376LL))(*v2, **a1);
    ++v2;
  }
  v4 = (__int64 *)v6;
  if ( v6 )
  {
    v5 = (__int64 *)v7;
    if ( v6 != (void *)v7 )
    {
      do
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v4++);
      while ( v4 != v5 );
      v4 = (__int64 *)v6;
    }
    std::_Deallocate(v4, (__int64)(*((_QWORD *)&v7 + 1) - (_QWORD)v4) >> 3, 8uLL);
  }
}
