/*
 * XREFs of ??$InitializePrivilegedOperationsHelper@V?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@V?$ComPtr@UIPrivilegedTabletModeOperations@@@23@V?$ComPtr@UIPrivilegedForegroundOperations@@@23@@@YAJAEBU_GUID@@PEAUIUnknown@@AEAV?$ComPtr@UIPrivilegedArrangementOperations@@@WRL@Microsoft@@AEAV?$ComPtr@UIPrivilegedTabletModeOperations@@@34@AEAV?$ComPtr@UIPrivilegedForegroundOperations@@@34@@Z @ 0x180025F00
 * Callers:
 *     ?InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180009C80 (-InitializePrivilegedOperations@CApplicationManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InitializePrivilegedOperationsHelper<Microsoft::WRL::ComPtr<IPrivilegedArrangementOperations>,Microsoft::WRL::ComPtr<IPrivilegedTabletModeOperations>,Microsoft::WRL::ComPtr<IPrivilegedForegroundOperations>>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 v8; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 *v12; // r8
  GUID *v13; // rdx
  __int64 v14; // rcx

  if ( *a1 != *(_QWORD *)&GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data1
    || a1[1] != *(_QWORD *)GUID_bf813bd9_98b6_45da_a60e_ac905433da90.Data4 )
  {
    if ( *a1 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1
      && a1[1] == *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4 )
    {
      v10 = *a4;
      v11 = 0;
      if ( *a4 )
      {
        *a4 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v12 = a4;
      v13 = &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd;
    }
    else
    {
      if ( *a1 != *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1
        || a1[1] != *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4 )
      {
        return (unsigned int)-2147467263;
      }
      v11 = 0;
      v14 = *a5;
      if ( *a5 )
      {
        *a5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      v12 = a5;
      v13 = &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2;
    }
    (**a2)(a2, v13, v12);
    return v11;
  }
  v8 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  (**a2)(a2, &GUID_bf813bd9_98b6_45da_a60e_ac905433da90, a3);
  return 0LL;
}
