/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032BFC
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180021A70 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180032B94 (-RmpActivityHostNewProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriority(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // r9d
  const struct _TlgProvider_t *v3; // rcx
  UINT32 cData; // r10d
  unsigned int v6; // [rsp+30h] [rbp-9h] BYREF
  __int64 v7; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned int *v9; // [rsp+60h] [rbp+27h]
  UINT32 v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int64 *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v6 = RmHamHostActOnProcesses(
         a1,
         0x2000,
         1,
         (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostSetStoreHighMemoryPriorityProcessCallback,
         0LL);
  v2 = v6;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v11 = 0;
    v14 = 0;
    v9 = &v6;
    v7 = *((_QWORD *)a1 + 4);
    v12 = &v7;
    v10 = cData;
    v13 = 8;
    TlgWrite(v3, &unk_180080C9E, 0LL, 0LL, cData, &pData);
    return v6;
  }
  return v2;
}
