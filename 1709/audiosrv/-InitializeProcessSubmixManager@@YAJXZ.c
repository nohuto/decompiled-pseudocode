/*
 * XREFs of ?InitializeProcessSubmixManager@@YAJXZ @ 0x18009FC34
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800941B8 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18005C6B8 (--1-$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 InitializeProcessSubmixManager(void)
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx
  int v2; // edi
  CAudioDGProcess *v3; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  g_ProcessSubmixManager = 0LL;
  v0 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v0;
  v1 = v0;
  if ( !v0 )
  {
    Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(&v6);
    v2 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6F,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  v0[3] = 1;
  *(_QWORD *)v0 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IProcessSubmixManager>::`vftable';
  if ( v3 )
    (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)v1 = &CProcessSubmixManager::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v1 + 4), 0, 0);
  *((_QWORD *)v1 + 7) = 0LL;
  *((_QWORD *)v1 + 8) = 0LL;
  *((_QWORD *)v1 + 9) = 0LL;
  v2 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, CProcessSubmixManager **))v1)(
         v1,
         &GUID_eb20673d_5f1b_4787_a403_1e0c470fbfb7,
         &g_ProcessSubmixManager);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v2 < 0 )
    goto LABEL_6;
  return 0LL;
}
