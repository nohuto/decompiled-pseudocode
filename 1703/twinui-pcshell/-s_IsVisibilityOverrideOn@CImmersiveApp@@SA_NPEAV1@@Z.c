/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x180056B70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180025544 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  struct IImmersiveApplicationInternal *v1; // rbx
  char IsReportingEnabled; // bl
  struct IImmersiveMonitor *v3; // rcx
  struct IImmersiveMonitor *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  v1 = (struct CImmersiveApp *)((char *)a1 + 88);
  (*(void (__fastcall **)(char *, struct IImmersiveMonitor **))(*((_QWORD *)a1 + 11) + 464LL))((char *)a1 + 88, &v5);
  IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                         (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                         v5,
                         v1);
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return IsReportingEnabled;
}
