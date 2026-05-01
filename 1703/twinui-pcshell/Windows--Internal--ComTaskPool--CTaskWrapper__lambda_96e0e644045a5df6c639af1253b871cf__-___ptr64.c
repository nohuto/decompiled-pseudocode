/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf__&___ptr64_::Run @ 0x18004E970
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z @ 0x1800066DC (-VerifyCriticalResult@CRVPrivate@@YA_NPEAJPEBGIPEAVCCriticalFailureHandler@@@Z.c)
 *     ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18004D1D0 (-_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_96e0e644045a5df6c639af1253b871cf______ptr64_::Run(
        __int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  **(_DWORD **)(a1 + 16) = CApplicationFrameService::_CreateFrameManager(*(_QWORD *)(a1 + 24), **(_DWORD **)(a1 + 32));
  if ( !**(_DWORD **)(a1 + 32) )
    CRVPrivate::VerifyCriticalResult(
      *(_QWORD *)(a1 + 16),
      L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
      (const unsigned __int16 *)0x4C3,
      v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(*(_QWORD *)v3 + 180LL) = ((**(int **)(a1 + 16) >> 31) & 0xFFFFFFFE) + 2;
  WakeByAddressAll((PVOID)(*(_QWORD *)v3 + 180LL));
  if ( **(int **)(a1 + 16) >= 0 )
  {
    v4 = *(__int64 **)(a1 + 48);
    v5 = *(_QWORD *)(a1 + 24);
    v6 = *(_QWORD *)(v5 + 160);
    if ( *v4 != v6 )
    {
      if ( v6 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*(_QWORD *)(v5 + 160));
      v7 = *v4;
      *v4 = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
