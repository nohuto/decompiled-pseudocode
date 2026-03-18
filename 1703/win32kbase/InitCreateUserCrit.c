/*
 * XREFs of InitCreateUserCrit @ 0x1C01D5008
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 InitCreateUserCrit()
{
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rax
  struct _ERESOURCE *v7; // rax
  struct _ERESOURCE *v8; // rax
  struct _ERESOURCE *v9; // rax
  struct _ERESOURCE *v10; // rax
  struct _ERESOURCE *v11; // rax
  struct _KEVENT *v12; // rax

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresUser = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( ExInitializeResourceLite(PoolWithTag) < 0 )
    {
LABEL_47:
      ExFreePoolWithTag(gpresUser, 0);
      gpresUser = 0LL;
      goto LABEL_48;
    }
    v4 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
    gpresRender = v4;
    if ( v4 )
    {
      if ( ExInitializeResourceLite(v4) < 0 )
        goto LABEL_44;
      v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
      gpresMouseEventQueue = v5;
      if ( v5 )
      {
        if ( ExInitializeResourceLite(v5) < 0 )
        {
LABEL_41:
          ExFreePoolWithTag(gpresMouseEventQueue, 0);
          gpresMouseEventQueue = 0LL;
          goto LABEL_42;
        }
        v6 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
        gpresPTPEventQueue = v6;
        if ( v6 )
        {
          if ( ExInitializeResourceLite(v6) < 0 )
            goto LABEL_38;
          v7 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
          gpresDeviceInfoList = v7;
          if ( !v7 )
            goto LABEL_24;
          if ( ExInitializeResourceLite(v7) < 0 )
            goto LABEL_23;
          v8 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
          gpresDitDeviceInfoList = v8;
          if ( v8 )
          {
            if ( ExInitializeResourceLite(v8) < 0 )
              goto LABEL_26;
            v9 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
            gpresDitTouchInjection = v9;
            if ( v9 )
            {
              if ( ExInitializeResourceLite(v9) < 0 )
              {
LABEL_29:
                ExFreePoolWithTag(gpresDitTouchInjection, 0);
                gpresDitTouchInjection = 0LL;
                goto LABEL_30;
              }
              v10 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
              gpresDitMouseInjectionFlush = v10;
              if ( v10 )
              {
                if ( ExInitializeResourceLite(v10) < 0 )
                  goto LABEL_32;
                v11 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
                gpresDitCompositionInputSinkQuery = v11;
                if ( v11 )
                {
                  if ( ExInitializeResourceLite(v11) < 0 )
                  {
LABEL_35:
                    ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
                    gpresDitCompositionInputSinkQuery = 0LL;
                    goto LABEL_36;
                  }
                  v12 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
                  gpHandleFlagsMutex = v12;
                  if ( v12 )
                  {
                    v12->Header.WaitListHead.Flink = 0LL;
                    LODWORD(v12->Header.WaitListHead.Blink) = 0;
                    v12->Header.LockNV = 1;
                    KeInitializeEvent(v12 + 1, SynchronizationEvent, 0);
                    return 1LL;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( gpresDeviceInfoList )
  {
    ExDeleteResourceLite(gpresDeviceInfoList);
LABEL_23:
    ExFreePoolWithTag(gpresDeviceInfoList, 0);
    gpresDeviceInfoList = 0LL;
  }
LABEL_24:
  if ( !gpresDitDeviceInfoList )
    goto LABEL_27;
  ExDeleteResourceLite(gpresDitDeviceInfoList);
LABEL_26:
  ExFreePoolWithTag(gpresDitDeviceInfoList, 0);
  gpresDitDeviceInfoList = 0LL;
LABEL_27:
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    goto LABEL_29;
  }
LABEL_30:
  if ( !gpresDitMouseInjectionFlush )
    goto LABEL_33;
  ExDeleteResourceLite(gpresDitMouseInjectionFlush);
LABEL_32:
  ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  gpresDitMouseInjectionFlush = 0LL;
LABEL_33:
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    goto LABEL_35;
  }
LABEL_36:
  if ( !gpresPTPEventQueue )
    goto LABEL_39;
  ExDeleteResourceLite(gpresPTPEventQueue);
LABEL_38:
  ExFreePoolWithTag(gpresPTPEventQueue, 0);
  gpresPTPEventQueue = 0LL;
LABEL_39:
  if ( gpresMouseEventQueue )
  {
    ExDeleteResourceLite(gpresMouseEventQueue);
    goto LABEL_41;
  }
LABEL_42:
  if ( !gpresRender )
    goto LABEL_45;
  ExDeleteResourceLite(gpresRender);
LABEL_44:
  ExFreePoolWithTag(gpresRender, 0);
  gpresRender = 0LL;
LABEL_45:
  if ( gpresUser )
  {
    ExDeleteResourceLite(gpresUser);
    goto LABEL_47;
  }
LABEL_48:
  UserSetLastError(8LL, v1, v2, v3);
  return 0LL;
}
