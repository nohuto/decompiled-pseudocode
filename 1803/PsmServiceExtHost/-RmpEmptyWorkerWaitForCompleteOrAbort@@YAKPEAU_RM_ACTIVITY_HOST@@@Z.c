/*
 * XREFs of ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800599D4
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpEmptyWorkerWaitForCompleteOrAbort(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  NTSTATUS v3; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  HANDLE Object[2]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  __int64 *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]

  HampHostReleaseLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64));
  RmpReleaseGlobalLock();
  Object[0] = *((HANDLE *)a1 + 155);
  Object[1] = *((HANDLE *)a1 + 154);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v2 = *((_QWORD *)a1 + 4);
    v13 = 0;
    v7 = v2;
    v11 = &v7;
    v12 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007EC11, 0LL, 0LL, 3u, &pData);
  }
  v3 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_ACTIVITY_HOST *)((char *)a1 + 64), 0);
  if ( v3 )
  {
    v4 = 0;
  }
  else
  {
    *((_DWORD *)a1 + 312) = 0;
    NtClearEvent(*((HANDLE *)a1 + 155));
    v4 = 1;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v5 = *((_QWORD *)a1 + 4);
    v13 = 0;
    v16 = 0;
    v8 = v5;
    v11 = &v8;
    v14 = &v7;
    v12 = 8;
    LODWORD(v7) = v4;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007EAF2, 0LL, 0LL, 4u, &pData);
  }
  return v4;
}
