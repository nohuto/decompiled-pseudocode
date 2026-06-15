/*
 * XREFs of _lambda_bcae059e430ab0425bfd15752f8ec40b_::operator() @ 0x180002688
 * Callers:
 *     Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog_____ptr64_Windows::ApplicationModel::PackageUninstallingEventArgs_____ptr64___lambda_bcae059e430ab0425bfd15752f8ec40b__2__1_::Invoke @ 0x180002660 (Microsoft--WRL--Details--InvokeHelper_Windows--Foundation--ITypedEventHandler_Windo_ea_180002660.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_bcae059e430ab0425bfd15752f8ec40b_::operator()(AtmosCheck **a1, __int64 a2, __int64 a3)
{
  AtmosCheck *v5; // rcx
  int v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v8 = 0;
  LOBYTE(v9) = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a3 + 72LL))(a3, &v9);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 80LL))(a3, &v8);
    if ( v6 >= 0 && (_BYTE)v9 && !v8 )
    {
      *((_DWORD *)*a1 + 28) = 3;
      v6 = AtmosCheck::PerformLicenseCheck(*a1, 1);
    }
  }
  AtmosCheck::Trace(v5, "AppUninstall check result", v6);
  return (unsigned int)v6;
}
