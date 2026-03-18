/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x140655CC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpGetNextGuidEntry @ 0x14058F080 (EtwpGetNextGuidEntry.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpEventWriteEnableInfo @ 0x1407AACDC (EtwpEventWriteEnableInfo.c)
 *     EtwpEventWriteGuidEntry @ 0x1407AAE4C (EtwpEventWriteGuidEntry.c)
 *     EtwpEventWriteRegEntry @ 0x1407AAF98 (EtwpEventWriteRegEntry.c)
 *     EtwpEventWriteTemplateSession @ 0x1407AB340 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  char v5; // r14
  unsigned int i; // ebx
  signed __int64 *j; // rdx
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // edi
  _DWORD *v16; // rsi
  __int64 v17; // rcx
  signed __int64 *NextGuidEntry; // rax
  signed __int64 *v19; // rbx
  signed __int64 *k; // rdx
  signed __int64 v21; // rax
  struct _KTHREAD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // edi
  _DWORD *v27; // rsi
  __int64 v28; // rcx
  signed __int64 *m; // rdi
  __int64 v30; // rcx
  signed __int64 *v31; // rax
  signed __int64 *v32; // rbx

  if ( ControlCode == 2 )
  {
    v4 = EtwpHostSiloState;
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(EtwpHostSiloState + 16); ++i )
    {
      v8 = EtwpAcquireLoggerContextByLoggerId(v4, i, 0);
      v10 = v8;
      if ( v8 )
      {
        EtwpEventWriteTemplateSession(v9, &ETW_EVENT_SESSION_INFO, v8);
        EtwpReleaseLoggerContext(v10, 0);
      }
      v4 = EtwpHostSiloState;
    }
    for ( j = 0LL; ; j = v19 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v4, j, 2);
      v19 = NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(NextGuidEntry + 48), 0LL);
      v19[49] = (signed __int64)KeGetCurrentThread();
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v12, &ETW_EVENT_GROUP_ENTRY_INFO, v19);
      v15 = 0;
      v16 = v19 + 14;
      do
      {
        if ( *v16 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v13) = v15;
          EtwpEventWriteEnableInfo(v17, v19, v13);
        }
        ++v15;
        v16 += 8;
      }
      while ( v15 < 8 );
      v19[49] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v19 + 48), 0LL, v13, v14);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = EtwpHostSiloState;
    }
    for ( k = 0LL; ; k = v32 )
    {
      v31 = EtwpGetNextGuidEntry(EtwpHostSiloState, k, 0);
      v32 = v31;
      if ( !v31 )
        break;
      v21 = v31[3] - *(_QWORD *)&EventTracingProvGuid.Data1;
      if ( !v21 )
        v21 = v32[4] - *(_QWORD *)EventTracingProvGuid.Data4;
      if ( v21 )
      {
        v22 = KeGetCurrentThread();
        --v22->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v32 + 48), 0LL);
        v5 = 1;
        v32[49] = (signed __int64)KeGetCurrentThread();
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GUID_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v23, &ETW_EVENT_GUID_ENTRY_INFO, v32);
      v26 = 0;
      v27 = v32 + 14;
      do
      {
        if ( *v27 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v24) = v26;
          EtwpEventWriteEnableInfo(v28, v32, v24);
        }
        ++v26;
        v27 += 8;
      }
      while ( v26 < 8 );
      for ( m = (signed __int64 *)v32[5]; m != v32 + 5; m = (signed __int64 *)*m )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_REG_ENTRY_INFO) )
          EtwpEventWriteRegEntry(v30, m);
      }
      if ( v5 )
      {
        v32[49] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v32 + 48), 0LL, v24, v25);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v5 = 0;
      }
    }
  }
}
