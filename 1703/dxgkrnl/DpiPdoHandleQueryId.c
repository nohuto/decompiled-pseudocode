/*
 * XREFs of DpiPdoHandleQueryId @ 0x1C01197F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiAppendNumberToString @ 0x1C0119D18 (DpiAppendNumberToString.c)
 *     DpiAppendStringToString @ 0x1C011A258 (DpiAppendStringToString.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C011B22C (MonitorNotifyDeviceNodeReady.c)
 */

__int64 __fastcall DpiPdoHandleQueryId(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  char *DeviceExtension; // rdi
  __int64 v3; // r8
  __int64 appended; // rbx
  int v7; // edx
  char v8; // si
  __int64 v9; // r15
  int v10; // edx
  int v11; // edx
  int v12; // edx
  const WCHAR *p_Flags; // rdx
  bool v14; // zf
  const WCHAR *v15; // rdx
  const struct _DEVICE_OBJECT *p_AttachedDevice; // rcx
  PVOID v17; // rax
  void *v18; // rdi
  void *v20; // rsi
  unsigned int v21; // r14d
  PVOID PoolWithTag; // rax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  void *Src[2]; // [rsp+98h] [rbp+27h] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v3 = *(_QWORD *)(a2 + 184);
  Src[0] = 0LL;
  Src[1] = 0LL;
  LODWORD(appended) = 0;
  v7 = *(_DWORD *)(v3 + 8);
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)DeviceExtension + 4) + 64LL);
  if ( !v7 )
  {
    if ( *((_DWORD *)DeviceExtension + 124) != 1 || *((_WORD *)DeviceExtension + 256) )
    {
      v15 = (const WCHAR *)(DeviceExtension + 512);
      p_AttachedDevice = &DeviceObject;
LABEL_15:
      LODWORD(appended) = DpiAppendStringToString((PCWSTR)p_AttachedDevice, v15, (PUNICODE_STRING)Src);
      if ( (int)appended < 0 )
        return (unsigned int)appended;
      goto LABEL_16;
    }
    p_Flags = L"DISPLAY\\Default_Monitor";
LABEL_28:
    RtlInitUnicodeString((PUNICODE_STRING)Src, p_Flags);
    goto LABEL_17;
  }
  v10 = v7 - 1;
  if ( !v10 )
  {
    if ( !DeviceExtension[510] && *(_DWORD *)(v9 + 2600) >= 2u )
      IoInvalidateDeviceRelations(a1, PowerRelations);
    v14 = *((_DWORD *)DeviceExtension + 124) == 1;
    DeviceExtension[510] = 1;
    if ( !v14 )
    {
      v20 = 0LL;
      v21 = 0;
      do
      {
        if ( v20 )
          ExFreePoolWithTag(v20, 0);
        v21 += 256;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x74727044u);
        v20 = PoolWithTag;
        if ( !PoolWithTag )
        {
          LODWORD(appended) = -1073741801;
          v33 = WdLogNewEntry5_WdLowResource(v23);
          *(_QWORD *)(v33 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v33);
          return (unsigned int)appended;
        }
        memset(PoolWithTag, 0, v21);
        v24 = RtlStringCbPrintfW(
                (NTSTRSAFE_PWSTR)v20,
                v21,
                L"VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X&%ws,VIDEO\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&%ws,VIDEO"
                 "\\VEN_%04X&DEV_%04X&%ws,VIDEO\\%ws,,");
        v25 = v24;
      }
      while ( v24 == -2147483643 );
      if ( v24 < 0 )
      {
        ExFreePoolWithTag(v20, 0);
        LODWORD(appended) = -1073741823;
        v28 = WdLogNewEntry5_WdError(v27, v26);
        *(_QWORD *)(v28 + 24) = v25;
LABEL_44:
        WdLogEvent5_WdError(v28);
        return (unsigned int)appended;
      }
      appended = (int)DpiAppendStringToString((PCWSTR)v20, L",,", (PUNICODE_STRING)Src);
      ExFreePoolWithTag(v20, 0);
      if ( (int)appended < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v28 + 24) = appended;
        goto LABEL_44;
      }
      if ( LOWORD(Src[0]) >> 1 )
      {
        v31 = 0LL;
        v32 = LOWORD(Src[0]) >> 1;
        do
        {
          if ( *(_WORD *)((char *)Src[1] + v31) == 44 )
            *(_WORD *)((char *)Src[1] + v31) = 0;
          v31 += 2LL;
          --v32;
        }
        while ( v32 );
      }
      goto LABEL_16;
    }
    LODWORD(appended) = DpiAcquireCoreSyncAccessSafe((__int64)a1, 1);
    if ( (int)appended >= 0 )
    {
      MonitorNotifyDeviceNodeReady(*(DXGADAPTER **)(v9 + 3704), *((_DWORD *)DeviceExtension + 126));
      DeviceExtension[944] = 1;
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
    }
    v15 = (const WCHAR *)(DeviceExtension + 512);
    if ( *((_WORD *)DeviceExtension + 256) )
    {
      p_AttachedDevice = (const struct _DEVICE_OBJECT *)&DeviceObject.AttachedDevice;
      goto LABEL_15;
    }
    p_Flags = L"MONITOR\\Default_Monitor";
    goto LABEL_28;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    if ( *((_DWORD *)DeviceExtension + 124) != 1 || *((_WORD *)DeviceExtension + 358) )
      p_Flags = (const WCHAR *)(DeviceExtension + 716);
    else
      p_Flags = (const WCHAR *)&DeviceObject.Flags;
    goto LABEL_28;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 != 2 || !*((_QWORD *)DeviceExtension + 121) )
    {
      LODWORD(appended) = *(_DWORD *)(a2 + 48);
      return (unsigned int)appended;
    }
    *(_OWORD *)Src = *((_OWORD *)DeviceExtension + 60);
    goto LABEL_17;
  }
  p_Flags = (const WCHAR *)(DeviceExtension + 614);
  if ( *((_WORD *)DeviceExtension + 307) )
    goto LABEL_28;
  DpiAppendNumberToString((PCWSTR)&DeviceObject.DeviceType, *((_DWORD *)DeviceExtension + 126), (PUNICODE_STRING)Src);
LABEL_16:
  v8 = 1;
LABEL_17:
  v17 = ExAllocatePoolWithTag(PagedPool, WORD1(Src[0]) + 2LL, 0x74727044u);
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, WORD1(Src[0]) + 2LL);
    memmove(v18, Src[1], WORD1(Src[0]));
    *(_QWORD *)(a2 + 56) = v18;
  }
  else
  {
    LODWORD(appended) = -1073741801;
  }
  if ( v8 == 1 )
    RtlFreeUnicodeString((PUNICODE_STRING)Src);
  return (unsigned int)appended;
}
