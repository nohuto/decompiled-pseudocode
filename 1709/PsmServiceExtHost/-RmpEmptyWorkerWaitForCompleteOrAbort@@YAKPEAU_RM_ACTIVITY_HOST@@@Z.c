/*
 * XREFs of ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003AAE4
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18001B480 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerWaitForCompleteOrAbort(struct _RM_ACTIVITY_HOST *a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  __int64 v4; // rax
  NTSTATUS v5; // ebx
  unsigned int v6; // ebx
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-29h] BYREF
  __int64 v12; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Object[2]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  __int64 *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  RmpReleaseGlobalLock();
  Object[0] = *((HANDLE *)a1 + 137);
  Object[1] = *((HANDLE *)a1 + 136);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v4 = *((_QWORD *)a1 + 3);
    v17 = 0;
    v11 = v4;
    v15 = &v11;
    v16 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058901, v2, v3, 3u, &pData);
  }
  v5 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    *((_DWORD *)a1 + 276) = 0;
    NtClearEvent(*((HANDLE *)a1 + 137));
    v6 = 1;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v9 = *((_QWORD *)a1 + 3);
    v17 = 0;
    v20 = 0;
    v12 = v9;
    v15 = &v12;
    v18 = &v11;
    v16 = 8;
    LODWORD(v11) = v6;
    v19 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800586A2, v7, v8, 4u, &pData);
  }
  return v6;
}
