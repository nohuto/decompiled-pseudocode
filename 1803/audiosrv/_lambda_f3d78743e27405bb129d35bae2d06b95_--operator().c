/*
 * XREFs of _lambda_f3d78743e27405bb129d35bae2d06b95_::operator() @ 0x1800CFADC
 * Callers:
 *     wil::details::lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___::_lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___ @ 0x1800CF49C (wil--details--lambda_call__lambda_f3d78743e27405bb129d35bae2d06b95___--_lambda_call__lambda_f3d7.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D2804 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f3d78743e27405bb129d35bae2d06b95_::operator()(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  void *v4; // [rsp+28h] [rbp-20h] BYREF
  __int128 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  (*(void (__fastcall **)(CDeviceGraphStore *, void **))(*(_QWORD *)g_DeviceGraphStore + 56LL))(g_DeviceGraphStore, &v4);
  v2 = (__int64 *)v5;
  v3 = (__int64 *)v4;
  if ( v4 != (void *)v5 )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 392LL))(*v3, **a1);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)v5;
    v3 = (__int64 *)v4;
  }
  if ( v3 )
  {
    if ( v3 != v2 )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v3++);
      while ( v3 != v2 );
      v3 = (__int64 *)v4;
    }
    std::_Deallocate(v3, (__int64)(*((_QWORD *)&v5 + 1) - (_QWORD)v3) >> 3, 8uLL);
  }
}
