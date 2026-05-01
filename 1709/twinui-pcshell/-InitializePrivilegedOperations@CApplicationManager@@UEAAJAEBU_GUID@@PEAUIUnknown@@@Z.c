/*
 * XREFs of ?InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180009C80
 * Callers:
 *     <none>
 * Callees:
 *     ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@@Z @ 0x180025F00 (--$InitializePrivilegedOperationsHelper@V-$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Micros.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::InitializePrivilegedOperations(
        CApplicationManager *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  PSRWLOCK v4; // r8
  PSRWLOCK v5; // rdi
  unsigned int v6; // ebx
  PVOID Ptr; // rcx
  GUID *v8; // rdx
  PVOID v9; // rcx
  PVOID v10; // rcx

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8.Data4 )
  {
    v5 = CApplicationManagerUtility::g_pIAMGlobals + 14;
    v6 = 0;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    if ( Ptr )
    {
      v5->Ptr = 0LL;
      (*(void (__fastcall **)(PVOID, const struct _GUID *, PSRWLOCK))(*(_QWORD *)Ptr + 16LL))(Ptr, a2, v4);
    }
    v8 = &GUID_02d40f3e_548a_4be9_adfe_5c0ffeae1bc8;
  }
  else if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1
         && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data4 )
  {
    v5 = CApplicationManagerUtility::g_pIAMGlobals + 15;
    v6 = 0;
    v9 = CApplicationManagerUtility::g_pIAMGlobals[15].Ptr;
    if ( v9 )
    {
      v5->Ptr = 0LL;
      (*(void (__fastcall **)(PVOID, const struct _GUID *, PSRWLOCK))(*(_QWORD *)v9 + 16LL))(v9, a2, v4);
    }
    v8 = &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
  }
  else
  {
    if ( *(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1
      || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4 )
    {
      return (unsigned int)InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>>(
                             (_DWORD)a2,
                             (_DWORD)a3,
                             (int)CApplicationManagerUtility::g_pIAMGlobals + 136,
                             (int)CApplicationManagerUtility::g_pIAMGlobals + 144,
                             (__int64)&CApplicationManagerUtility::g_pIAMGlobals[19]);
    }
    v5 = CApplicationManagerUtility::g_pIAMGlobals + 16;
    v6 = 0;
    v10 = CApplicationManagerUtility::g_pIAMGlobals[16].Ptr;
    if ( v10 )
    {
      v5->Ptr = 0LL;
      (*(void (__fastcall **)(PVOID, const struct _GUID *, PSRWLOCK))(*(_QWORD *)v10 + 16LL))(v10, a2, v4);
    }
    v8 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
  }
  ((void (__fastcall *)(struct IUnknown *, GUID *, PSRWLOCK))a3->lpVtbl->QueryInterface)(a3, v8, v5);
  return v6;
}
