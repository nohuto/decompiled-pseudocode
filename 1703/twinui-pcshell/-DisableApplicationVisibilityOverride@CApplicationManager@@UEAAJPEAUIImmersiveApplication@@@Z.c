/*
 * XREFs of ?DisableApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18000BFC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sdd @ 0x180006B18 (WPP_SF_Sdd.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::DisableApplicationVisibilityOverride(
        CApplicationManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64))
{
  __int64 (__fastcall **v4)(struct IImmersiveApplication *, GUID *, __int64); // rbx
  __int64 v5; // rax
  signed int v6; // edi
  PSRWLOCK v7; // rsi
  void *v8; // rbx
  PVOID Ptr; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  const wchar_t *v12; // rbx
  void *v13; // rcx
  char v15[4]; // [rsp+20h] [rbp-30h]
  LPVOID pv; // [rsp+38h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  __int64 v18; // [rsp+48h] [rbp-8h]
  void *v19; // [rsp+88h] [rbp+38h] BYREF
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v19 = 0LL;
  v4 = *a2;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
  v6 = (*v4)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v5);
  if ( v6 >= 0 )
  {
    v7 = CApplicationManagerUtility::g_pIAMGlobals;
    v6 = CApplicationManagerUtility::g_pIAMGlobals[7].Ptr != 0LL ? 0x8000FFFF : 0;
    if ( !CApplicationManagerUtility::g_pIAMGlobals[7].Ptr )
    {
      v8 = v19;
      if ( v19 )
      {
        (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 8LL))(v19);
        Ptr = v7[7].Ptr;
        v7[7].Ptr = v8;
        if ( Ptr )
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      }
      v20 = 0LL;
      v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
      (*(void (__fastcall **)(_QWORD, _QWORD, GUID *, __int64))(**((_QWORD **)this + 46) + 32LL))(
        *((_QWORD *)this + 46),
        0LL,
        &GUID_af7f312d_0a79_47c9_9bb6_8bd386c0ffee,
        v10);
      (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v20 + 32LL))(
        v20,
        v19,
        *((unsigned int *)this + 154),
        1LL);
      v11 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 )
  {
    pv = 0LL;
    v17 = -1LL;
    v18 = -1LL;
    if ( ((int (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64), LPVOID *))(*a2)[4])(
           a2,
           &pv) >= 0
      && v19
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v12 = (const wchar_t *)pv;
      *(_DWORD *)v15 = (*(__int64 (**)(void))(*(_QWORD *)v19 + 160LL))();
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xCu,
        &WPP_8bd202aa8a883acb924286472c3692bf_Traceguids,
        v12,
        *(_DWORD *)v15,
        v6,
        -2LL);
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v17 = 0LL;
    v18 = 0LL;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v6;
}
