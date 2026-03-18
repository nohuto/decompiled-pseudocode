/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C020CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0008DC0 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C009F688 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C009F7D8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAppendNumberToString @ 0x1C01FCCE8 (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C01FCE1C (DpiAppendStringToString.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C022EA18 (MonitorNotifyDeviceNodeReady.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v3; // r8
  __int64 appended; // rbx
  int v7; // ecx
  char v8; // si
  __int64 v9; // r15
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  const wchar_t *v13; // rdx
  bool v14; // zf
  unsigned __int16 *v15; // rdx
  const WCHAR *v16; // rcx
  void *v17; // rsi
  unsigned int v18; // r14d
  PVOID PoolWithTag; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  PVOID v29; // rax
  void *v30; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp+27h] BYREF

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v3 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  LODWORD(appended) = 0;
  v7 = *(_DWORD *)(v3 + 8);
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( !v7 )
  {
    v15 = (unsigned __int16 *)(DeviceExtension + 512);
    if ( *((_DWORD *)DeviceExtension + 124) == 1 && !*v15 )
    {
      v13 = L"DISPLAY\\Default_Monitor";
      goto LABEL_14;
    }
    v16 = L"DISPLAY\\";
    goto LABEL_45;
  }
  v10 = v7 - 1;
  if ( !v10 )
  {
    if ( !DeviceExtension[510] && *(_DWORD *)(v9 + 2600) >= 2u )
      IoInvalidateDeviceRelations(DeviceObject, PowerRelations);
    v14 = *((_DWORD *)DeviceExtension + 124) == 1;
    DeviceExtension[510] = 1;
    if ( !v14 )
    {
      v17 = 0LL;
      v18 = 0;
      do
      {
        if ( v17 )
          ExFreePoolWithTag(v17, 0);
        v18 += 256;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v18, 0x74727044u);
        v17 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(appended) = -1073741801;
          v28 = WdLogNewEntry5_WdLowResource(v20);
          *(_QWORD *)(v28 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v28);
          return (unsigned int)appended;
        }
        memset(PoolWithTag, 0, v18);
        v21 = RtlStringCbPrintfW(
                (wchar_t *)v17,
                v18,
                L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO"
                 "\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
        v22 = v21;
      }
      while ( v21 == -2147483643 );
      if ( v21 < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        LODWORD(appended) = -1073741823;
        v24 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v24 + 24) = v22;
LABEL_31:
        WdLogEvent5_WdError(v24);
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v17, L",,", &DestinationString);
      ExFreePoolWithTag(v17, 0);
      if ( (int)appended < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v25);
        *(_QWORD *)(v24 + 24) = appended;
        goto LABEL_31;
      }
      if ( DestinationString.Length >> 1 )
      {
        v26 = 0LL;
        v27 = DestinationString.Length >> 1;
        do
        {
          if ( DestinationString.Buffer[v26] == 44 )
            DestinationString.Buffer[v26] = 0;
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      goto LABEL_46;
    }
    LODWORD(appended) = DpiAcquireCoreSyncAccessSafe((__int64)DeviceObject, 1);
    if ( (int)appended >= 0 )
    {
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v9 + 3728), *((_DWORD *)DeviceExtension + 126));
      DeviceExtension[944] = 1;
      DpiReleaseCoreSyncAccessSafe((__int64)DeviceObject, 1);
    }
    v15 = (unsigned __int16 *)(DeviceExtension + 512);
    if ( !*((_WORD *)DeviceExtension + 256) )
    {
      v13 = L"MONITOR\\Default_Monitor";
      goto LABEL_14;
    }
    v16 = L"MONITOR\\";
LABEL_45:
    LODWORD(appended) = DpiAppendStringToString(v16, v15, &DestinationString);
    if ( (int)appended < 0 )
      return (unsigned int)appended;
    goto LABEL_46;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v13 = (const wchar_t *)(DeviceExtension + 716);
    if ( *((_DWORD *)DeviceExtension + 124) == 1 && !*v13 )
      v13 = L"*PNP09FF";
    goto LABEL_14;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v13 = (const wchar_t *)(DeviceExtension + 614);
    if ( !*((_WORD *)DeviceExtension + 307) )
    {
      DpiAppendNumberToString(L"UID", *((_DWORD *)DeviceExtension + 126), &DestinationString);
LABEL_46:
      v8 = 1;
      goto LABEL_47;
    }
LABEL_14:
    RtlInitUnicodeString(&DestinationString, v13);
    goto LABEL_47;
  }
  if ( v12 != 2 || !*((_QWORD *)DeviceExtension + 121) )
  {
    LODWORD(appended) = *(_DWORD *)(a2 + 48);
    return (unsigned int)appended;
  }
  DestinationString = (struct _UNICODE_STRING)*((_OWORD *)DeviceExtension + 60);
LABEL_47:
  v29 = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength + 2LL, 0x74727044u);
  v30 = v29;
  if ( v29 )
  {
    memset(v29, 0, DestinationString.MaximumLength + 2LL);
    memmove(v30, DestinationString.Buffer, DestinationString.MaximumLength);
    *(_QWORD *)(a2 + 56) = v30;
  }
  else
  {
    LODWORD(appended) = -1073741801;
  }
  if ( v8 == 1 )
    RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)appended;
}
