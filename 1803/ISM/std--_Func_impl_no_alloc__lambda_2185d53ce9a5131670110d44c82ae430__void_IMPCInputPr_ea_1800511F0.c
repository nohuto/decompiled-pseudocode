/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputProviderBase_____ptr64_::_Do_call @ 0x1800511F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAAEAUPointData3D@@AEBU2@@Z @ 0x180040884 (--$emplace_back@AEBUPointData3D@@@-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@.c)
 *     ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x180040B4C (--1-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_2185d53ce9a5131670110d44c82ae430__void_IMPCInputProviderBase_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 i; // rbx
  unsigned __int64 v6[4]; // [rsp+28h] [rbp-20h] BYREF

  v3 = *a2;
  (*(void (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD))(*(_QWORD *)*a2 + 104LL))(*a2, v6, *(_QWORD *)(a1 + 8));
  v4 = v6[1];
  for ( i = v6[0]; i != v4; i += 184LL )
  {
    *(_DWORD *)(i + 176) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 320LL))(v3);
    std::vector<PointData3D>::emplace_back<PointData3D const &>(*(_QWORD *)(a1 + 16), i);
  }
  std::vector<PointData3D>::~vector<PointData3D>(v6);
}
