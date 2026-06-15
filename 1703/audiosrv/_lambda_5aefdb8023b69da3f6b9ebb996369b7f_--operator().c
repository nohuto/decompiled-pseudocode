/*
 * XREFs of _lambda_5aefdb8023b69da3f6b9ebb996369b7f_::operator() @ 0x1800A4DC4
 * Callers:
 *     std::_Func_impl__lambda_5aefdb8023b69da3f6b9ebb996369b7f__std::allocator_int__void_::_Do_call @ 0x1800A7610 (std--_Func_impl__lambda_5aefdb8023b69da3f6b9ebb996369b7f__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_5aefdb8023b69da3f6b9ebb996369b7f_::operator()(LPVOID *a1)
{
  _QWORD *i; // rbx
  _QWORD *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // rdi
  __int128 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]

  v6 = 0LL;
  v7 = 0LL;
  (*(void (__fastcall **)(CDeviceGraphStore *, __int128 *))(*(_QWORD *)g_DeviceGraphStore + 40LL))(
    g_DeviceGraphStore,
    &v6);
  v3 = (_QWORD *)*((_QWORD *)&v6 + 1);
  for ( i = (_QWORD *)v6; i != v3; ++i )
    (*(void (__fastcall **)(_QWORD, LPVOID))(*(_QWORD *)*i + 384LL))(*i, *a1);
  CoTaskMemFree(*a1);
  v4 = (__int64 *)v6;
  if ( (_QWORD)v6 )
  {
    v5 = (__int64 *)*((_QWORD *)&v6 + 1);
    if ( (_QWORD)v6 != *((_QWORD *)&v6 + 1) )
    {
      do
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v4++);
      while ( v4 != v5 );
      v4 = (__int64 *)v6;
    }
    std::_Deallocate(v4, (v7 - (__int64)v4) >> 3, 8uLL);
  }
}
