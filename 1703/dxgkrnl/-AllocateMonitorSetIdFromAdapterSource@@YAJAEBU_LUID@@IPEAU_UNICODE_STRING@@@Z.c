/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD690
 * Callers:
 *     ?ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C00AE230 (-ReadDpiFromRegistry@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BBFE4 (-WriteDpiToHKLMRegistry@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z @ 0x1C01BC07C (-WriteDpiToRegistry@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00AD730 (-CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C00ADB2C (-SortMonitorSetIdAndAppendHash@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall AllocateMonitorSetIdFromAdapterSource(
        const struct _LUID *a1,
        unsigned int a2,
        struct _UNICODE_STRING *a3)
{
  wchar_t *v6; // rax
  __int64 v7; // rcx
  int MonitorSetId; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int appended; // eax
  __int64 v14; // rax
  __int64 v15; // rax

  a3->Length = 0;
  v6 = (wchar_t *)operator new(0x8002uLL, 0x63644356u, PagedPool);
  a3->Buffer = v6;
  if ( v6 )
  {
    a3->MaximumLength = -32766;
    MonitorSetId = CreateMonitorSetId(a1, a2, a3);
    v11 = MonitorSetId;
    if ( MonitorSetId < 0 || (appended = SortMonitorSetIdAndAppendHash(a3), v11 = appended, appended < 0) )
    {
      v15 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v15 + 24) = v11;
      WdLogEvent5_WdError(v15);
    }
    return (unsigned int)v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v14 + 24) = 32770LL;
    WdLogEvent5_WdLowResource(v14);
    return 3221225495LL;
  }
}
