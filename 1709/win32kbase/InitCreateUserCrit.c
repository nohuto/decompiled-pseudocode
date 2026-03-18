/*
 * XREFs of InitCreateUserCrit @ 0x1C01E0188
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 InitCreateUserCrit()
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v1; // rax
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rax
  struct _ERESOURCE *v7; // rax
  struct _KEVENT *v8; // rax
  __int64 result; // rax

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresUser = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_19;
  if ( ExInitializeResourceLite(PoolWithTag) < 0 )
  {
LABEL_42:
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
    goto LABEL_43;
  }
  v1 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresRender = v1;
  if ( !v1 )
    goto LABEL_19;
  if ( ExInitializeResourceLite(v1) < 0 )
    goto LABEL_39;
  v2 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresPTPEventQueue = v2;
  if ( !v2 )
    goto LABEL_19;
  if ( ExInitializeResourceLite(v2) < 0 )
  {
LABEL_36:
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
    goto LABEL_37;
  }
  v3 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresDeviceInfoList = v3;
  if ( v3 )
  {
    if ( ExInitializeResourceLite(v3) < 0 )
    {
LABEL_21:
      ExFreePoolWithTag(gpresDeviceInfoList, 0);
      gpresDeviceInfoList = 0LL;
      goto LABEL_22;
    }
    v4 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
    gpresDitDeviceInfoList = v4;
    if ( v4 )
    {
      if ( ExInitializeResourceLite(v4) < 0 )
      {
LABEL_24:
        ExFreePoolWithTag(gpresDitDeviceInfoList, 0);
        gpresDitDeviceInfoList = 0LL;
        goto LABEL_25;
      }
      v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
      gpresDitTouchInjection = v5;
      if ( v5 )
      {
        if ( ExInitializeResourceLite(v5) < 0 )
          goto LABEL_27;
        v6 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
        gpresDitMouseInjectionFlush = v6;
        if ( v6 )
        {
          if ( ExInitializeResourceLite(v6) < 0 )
          {
LABEL_30:
            ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
            gpresDitMouseInjectionFlush = 0LL;
            goto LABEL_31;
          }
          v7 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
          gpresDitCompositionInputSinkQuery = v7;
          if ( v7 )
          {
            if ( ExInitializeResourceLite(v7) < 0 )
              goto LABEL_33;
            v8 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
            gpHandleFlagsMutex = v8;
            if ( v8 )
            {
              v8->Header.WaitListHead.Flink = 0LL;
              v8->Header.LockNV = 1;
              LODWORD(v8->Header.WaitListHead.Blink) = 0;
              KeInitializeEvent(v8 + 1, SynchronizationEvent, 0);
              result = 1LL;
              gDomainThreadInfoLock = 0LL;
              qword_1C01911D0 = 0LL;
              dword_1C01911D8 = 0;
              gDomainQueueLock = 0LL;
              qword_1C0191188 = 0LL;
              dword_1C0191190 = 0;
              gDomainHookLock = 0LL;
              qword_1C0191170 = 0LL;
              dword_1C0191178 = 0;
              gDomainWinEventLock = 0LL;
              qword_1C0191158 = 0LL;
              dword_1C0191160 = 0;
              gDomainWindowLock = 0LL;
              qword_1C0191128 = 0LL;
              dword_1C0191130 = 0;
              gDomainHandleManagerLock = 0LL;
              qword_1C01911F8 = 0LL;
              dword_1C0191200 = 0;
              gDomainClientLibLock = 0LL;
              qword_1C0191140 = 0LL;
              dword_1C0191148 = 0;
              gDomainDummyLock = 0LL;
              qword_1C01910F8 = 0LL;
              dword_1C0191100 = 0;
              gDomainTlLock = 0LL;
              qword_1C0191110 = 0LL;
              dword_1C0191118 = 0;
              gRotationProcessLock = 0LL;
              return result;
            }
          }
        }
      }
    }
LABEL_19:
    if ( !gpresDeviceInfoList )
      goto LABEL_22;
    ExDeleteResourceLite(gpresDeviceInfoList);
    goto LABEL_21;
  }
LABEL_22:
  if ( gpresDitDeviceInfoList )
  {
    ExDeleteResourceLite(gpresDitDeviceInfoList);
    goto LABEL_24;
  }
LABEL_25:
  if ( !gpresDitTouchInjection )
    goto LABEL_28;
  ExDeleteResourceLite(gpresDitTouchInjection);
LABEL_27:
  ExFreePoolWithTag(gpresDitTouchInjection, 0);
  gpresDitTouchInjection = 0LL;
LABEL_28:
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    goto LABEL_30;
  }
LABEL_31:
  if ( !gpresDitCompositionInputSinkQuery )
    goto LABEL_34;
  ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
LABEL_33:
  ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  gpresDitCompositionInputSinkQuery = 0LL;
LABEL_34:
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    goto LABEL_36;
  }
LABEL_37:
  if ( !gpresRender )
    goto LABEL_40;
  ExDeleteResourceLite(gpresRender);
LABEL_39:
  ExFreePoolWithTag(gpresRender, 0);
  gpresRender = 0LL;
LABEL_40:
  if ( gpresUser )
  {
    ExDeleteResourceLite(gpresUser);
    goto LABEL_42;
  }
LABEL_43:
  UserSetLastError(8);
  return 0LL;
}
