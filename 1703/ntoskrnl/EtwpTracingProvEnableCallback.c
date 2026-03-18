/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x1405D65E0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x140552724 (EtwpGetNextGuidEntry.c)
 *     EtwpEventWriteEnableInfo @ 0x14070D698 (EtwpEventWriteEnableInfo.c)
 *     EtwpEventWriteGuidEntry @ 0x14070D80C (EtwpEventWriteGuidEntry.c)
 *     EtwpEventWriteRegEntry @ 0x14070D958 (EtwpEventWriteRegEntry.c)
 *     EtwpEventWriteTemplateSession @ 0x14070DDE0 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  char v4; // r14
  unsigned int i; // ebx
  unsigned int *v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // rdi
  signed __int64 *j; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  _DWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  signed __int64 *NextGuidEntry; // rax
  signed __int64 *v17; // rbx
  signed __int64 *k; // rdx
  signed __int64 v19; // rax
  struct _KTHREAD *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edi
  _DWORD *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r8
  signed __int64 *m; // rdi
  __int64 v27; // rcx
  signed __int64 *v28; // rax
  signed __int64 *v29; // rbx

  if ( ControlCode == 2 )
  {
    v4 = 0;
    for ( i = 0; i < 0x40; ++i )
    {
      v6 = EtwpAcquireLoggerContextByLoggerId(EtwpHostSiloState, i, 0);
      v8 = v6;
      if ( v6 )
      {
        EtwpEventWriteTemplateSession(v7, &ETW_EVENT_SESSION_INFO, v6);
        EtwpReleaseLoggerContext(v8, 0);
      }
    }
    for ( j = 0LL; ; j = v17 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(EtwpHostSiloState, j, 2);
      v17 = NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(NextGuidEntry + 48), 0LL);
      v17[49] = (signed __int64)KeGetCurrentThread();
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v11, &ETW_EVENT_GROUP_ENTRY_INFO, v17);
      v12 = 0;
      v13 = v17 + 14;
      do
      {
        if ( *v13 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v15) = v12;
          EtwpEventWriteEnableInfo(v14, v17, v15);
        }
        ++v12;
        v13 += 8;
      }
      while ( v12 < 8 );
      v17[49] = 0LL;
      ExReleasePushLockEx((ULONG_PTR)(v17 + 48), 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    for ( k = 0LL; ; k = v29 )
    {
      v28 = EtwpGetNextGuidEntry(EtwpHostSiloState, k, 0);
      v29 = v28;
      if ( !v28 )
        break;
      v19 = v28[3] - *(_QWORD *)&EventTracingProvGuid.Data1;
      if ( !v19 )
        v19 = v29[4] - *(_QWORD *)EventTracingProvGuid.Data4;
      if ( v19 )
      {
        v20 = KeGetCurrentThread();
        --v20->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v29 + 48), 0LL);
        v4 = 1;
        v29[49] = (signed __int64)KeGetCurrentThread();
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GUID_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v21, &ETW_EVENT_GUID_ENTRY_INFO, v29);
      v22 = 0;
      v23 = v29 + 14;
      do
      {
        if ( *v23 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v25) = v22;
          EtwpEventWriteEnableInfo(v24, v29, v25);
        }
        ++v22;
        v23 += 8;
      }
      while ( v22 < 8 );
      for ( m = (signed __int64 *)v29[5]; m != v29 + 5; m = (signed __int64 *)*m )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_REG_ENTRY_INFO) )
          EtwpEventWriteRegEntry(v27, m);
      }
      if ( v4 )
      {
        v29[49] = 0LL;
        ExReleasePushLockEx((ULONG_PTR)(v29 + 48), 0LL);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v4 = 0;
      }
    }
  }
}
