/*
 * XREFs of _lambda_e1bed2b100b1af394f2735e08786001a_::operator() @ 0x1800681D8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___::Run @ 0x18006EE00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9a5d3aef815fc73238a5c81fbaaa2c3___--Run.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e1bed2b100b1af394f2735e08786001a_::operator()(__int64 a1)
{
  unsigned int v2; // esi
  __int64 *v3; // rdi
  __int64 v4; // rbx
  __int64 *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  v11 = 0LL;
  if ( *(_BYTE *)(a1 + 16) )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v10 = 0LL;
    v3 = *(__int64 **)(a1 + 8);
    v4 = *v3;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
    (*(void (__fastcall **)(__int64 *, SID *, GUID *, __int64 *))(v4 + 24))(
      v3,
      &SID_ImmersiveApplicationManagerPriv,
      &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
      v5);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 176LL))(
           v10,
           *(_QWORD *)(*(_QWORD *)a1 + 552LL),
           &v11);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v6);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  LOBYTE(v2) = v11 == 1;
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 128LL) + 72LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 128LL),
           *(_QWORD *)(*(_QWORD *)a1 + 552LL),
           v2);
}
