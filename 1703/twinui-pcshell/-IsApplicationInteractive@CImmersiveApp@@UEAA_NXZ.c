/*
 * XREFs of ?IsApplicationInteractive@CImmersiveApp@@UEAA_NXZ @ 0x1800559F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025544 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::IsApplicationInteractive(unsigned __int64 this)
{
  char v2; // bl
  struct IImmersiveMonitor *v3; // rcx
  struct IImmersiveMonitor *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  (*(void (__fastcall **)(unsigned __int64, struct IImmersiveMonitor **))(*(_QWORD *)this + 464LL))(this, &v5);
  v2 = 1;
  if ( (*(_DWORD *)(this + 408) & 4) == 0
    || !CReportWindowVisibilityChange::IsReportingEnabled(
          (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
          v5,
          (struct IImmersiveApplicationInternal *)(this & -(__int64)(this != 88))) )
  {
    v2 = 0;
  }
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
