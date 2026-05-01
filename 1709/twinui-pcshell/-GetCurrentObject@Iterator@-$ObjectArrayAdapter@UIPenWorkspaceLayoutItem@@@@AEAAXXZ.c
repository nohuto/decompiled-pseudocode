/*
 * XREFs of ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIPenWorkspaceLayoutItem@@@@AEAAXXZ @ 0x1800EB5C0
 * Callers:
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1800E9D6C (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ObjectArrayAdapter<IPenWorkspaceLayoutItem>::Iterator::GetCurrentObject(unsigned int *a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)(a1 + 2);
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  for ( result = *((_QWORD *)a1 + 2); *a1 < *(_DWORD *)(result + 8); result = *((_QWORD *)a1 + 2) )
  {
    v5 = *v1;
    v6 = **((_QWORD **)a1 + 2);
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
               v6,
               *a1,
               &GUID_c343e0c0_9666_444b_898f_cc498c7e521a,
               v1);
    if ( (int)result >= 0 )
      break;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"internal\\shell\\private\\inc\\objectarrayadapter.h",
      (const char *)(unsigned int)result);
    ++*a1;
  }
  return result;
}
