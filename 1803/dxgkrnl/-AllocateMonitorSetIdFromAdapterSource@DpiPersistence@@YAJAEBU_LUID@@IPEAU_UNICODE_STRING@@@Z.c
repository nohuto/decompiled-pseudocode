/*
 * XREFs of ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009D66C
 * Callers:
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C009EC10 (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01DD18C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C01DD21C (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C009D70C (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C009E200 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::AllocateMonitorSetIdFromAdapterSource(
        struct _LUID *this,
        const struct _LUID *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4)
{
  unsigned int v5; // ebx
  wchar_t *v7; // rax
  __int64 v8; // rcx
  struct _UNICODE_STRING *v9; // r9
  int MonitorSetId; // eax
  struct _UNICODE_STRING *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int appended; // eax
  __int64 v16; // rax
  __int64 v17; // rax

  v5 = (unsigned int)a2;
  a3->Length = 0;
  v7 = (wchar_t *)operator new[](0x8002uLL, 0x63644356u, PagedPool);
  a3->Buffer = v7;
  if ( v7 )
  {
    a3->MaximumLength = -32766;
    MonitorSetId = DpiPersistence::CreateMonitorSetId(this, (const struct _LUID *)v5, (unsigned int)a3, v9);
    v13 = MonitorSetId;
    if ( MonitorSetId < 0
      || (appended = DpiPersistence::SortMonitorSetIdAndAppendHash(a3, v11), v13 = appended, appended < 0) )
    {
      v17 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v17 + 24) = v13;
      WdLogEvent5_WdError(v17);
    }
    return (unsigned int)v13;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v16 + 24) = 32770LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
}
