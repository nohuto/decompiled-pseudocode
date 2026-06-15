/*
 * XREFs of _lambda_4b3be4062b453557032a0102af949bc6_::operator() @ 0x1800C7EB0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_::_Do_call @ 0x1800CB3F0 (std--_Func_impl_no_alloc__lambda_4b3be4062b453557032a0102af949bc6__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void lambda_4b3be4062b453557032a0102af949bc6_::operator()()
{
  __int64 *v0; // rdi
  __int64 *v1; // rbx
  void *v2; // [rsp+28h] [rbp-20h] BYREF
  __int128 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  v3 = 0LL;
  (*(void (__fastcall **)(CDeviceGraphStore *, void **))(*(_QWORD *)g_DeviceGraphStore + 56LL))(g_DeviceGraphStore, &v2);
  v0 = (__int64 *)v3;
  v1 = (__int64 *)v2;
  if ( v2 != (void *)v3 )
  {
    do
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 392LL))(*v1);
      ++v1;
    }
    while ( v1 != v0 );
    v0 = (__int64 *)v3;
    v1 = (__int64 *)v2;
  }
  if ( v1 )
  {
    if ( v1 != v0 )
    {
      do
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1++);
      while ( v1 != v0 );
      v1 = (__int64 *)v2;
    }
    std::_Deallocate(v1, (__int64)(*((_QWORD *)&v3 + 1) - (_QWORD)v1) >> 3, 8uLL);
  }
}
