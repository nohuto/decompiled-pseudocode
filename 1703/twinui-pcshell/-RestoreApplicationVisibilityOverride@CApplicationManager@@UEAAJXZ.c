/*
 * XREFs of ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJXZ @ 0x18000C1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180006BA0 (WPP_SF_d.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::RestoreApplicationVisibilityOverride(CApplicationManager *this)
{
  PSRWLOCK v2; // rsi
  PVOID v3; // rbx
  int v4; // edi
  PVOID Ptr; // rcx
  __int64 v6; // rax
  PVOID v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  PVOID v11; // [rsp+70h] [rbp+18h]

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  v3 = 0LL;
  v11 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals[7].Ptr == 0LL ? 0x8000FFFF : 0;
  if ( CApplicationManagerUtility::g_pIAMGlobals[7].Ptr )
  {
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v3 = v2[7].Ptr;
    v11 = v3;
    v4 = 0;
  }
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v10);
    (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**((_QWORD **)this + 46) + 32LL))(
      *((_QWORD *)this + 46),
      0LL,
      &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
      v6);
    (*(void (__fastcall **)(__int64, PVOID, _QWORD, __int64))(*(_QWORD *)v10 + 32LL))(
      v10,
      v3,
      *((unsigned int *)this + 154),
      2LL);
    v7 = CApplicationManagerUtility::g_pIAMGlobals[7].Ptr;
    if ( v7 )
    {
      CApplicationManagerUtility::g_pIAMGlobals[7].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_8bd202aa8a883acb924286472c3692bf_Traceguids, v4);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v3 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v4;
}
