/*
 * XREFs of ?DecrementGlobalOverride@CApplicationManager@@UEAAJXZ @ 0x18000BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DecrementGlobalOverride(CApplicationManager *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v2 = -2147024891;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v3 = *((_DWORD *)this + 158);
  if ( v3 )
  {
    v4 = v3 - 1;
    *((_DWORD *)this + 158) = v4;
    if ( !v4 )
    {
      HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[5].Ptr) = 1;
      v8 = 0LL;
      v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v8);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**((_QWORD **)this + 50) + 32LL))(
        *((_QWORD *)this + 50),
        0LL,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        v5);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 24LL))(v8, 2LL, *((unsigned int *)this + 164));
      v6 = v8;
      if ( v8 )
      {
        v8 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    v2 = 0;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return v2;
}
