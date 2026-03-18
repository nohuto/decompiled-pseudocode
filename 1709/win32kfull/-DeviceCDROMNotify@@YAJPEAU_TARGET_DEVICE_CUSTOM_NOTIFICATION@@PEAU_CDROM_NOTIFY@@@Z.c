/*
 * XREFs of ?DeviceCDROMNotify@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x1C01BDE70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ShowAutorunCursor @ 0x1C01A103C (ShowAutorunCursor.c)
 */

__int64 __fastcall DeviceCDROMNotify(char *NotificationStructure, unsigned int *Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  struct _LIST_ENTRY *v5; // rax
  struct _LIST_ENTRY *v6; // rdi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  PVOID *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax

  if ( gProtocolType )
    return 0LL;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_MEDIA_ARRIVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_MEDIA_ARRIVAL.Data4;
  if ( !v3 )
  {
    Context[8] = 1;
    goto LABEL_10;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_MEDIA_REMOVAL.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_MEDIA_REMOVAL.Data4;
  if ( !v4 )
  {
    Context[8] = 2;
LABEL_10:
    v5 = (struct _LIST_ENTRY *)Win32AllocPoolNonPaged(Context[4], 1886417749LL);
    v6 = v5;
    if ( v5 )
    {
      memmove(v5, Context, Context[4]);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      Flink = gMediaChangeList.Flink;
      if ( gMediaChangeList.Flink->Blink != &gMediaChangeList )
        __fastfail(3u);
      v6->Blink = &gMediaChangeList;
      v8 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
      v6->Flink = Flink;
      Flink->Blink = v6;
      gMediaChangeList.Flink = v6;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v8);
      KeSetEvent((PRKEVENT)WPP_MAIN_CB.Queue.ListEntry.Blink, 1, 0);
    }
    return 0LL;
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( v9 )
  {
    v14 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_IO_DEVICE_BECOMING_READY.Data1;
    if ( !v14 )
      v14 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_IO_DEVICE_BECOMING_READY.Data4;
    if ( !v14 )
      ShowAutorunCursor(10 * *((_DWORD *)NotificationStructure + 11));
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
    {
      v10 = *(_QWORD **)Context;
      if ( *(unsigned int **)(*(_QWORD *)Context + 8LL) != Context
        || (v11 = (PVOID *)*((_QWORD *)Context + 1), *v11 != Context) )
      {
        __fastfail(3u);
      }
      *v11 = v10;
      v10[1] = v11;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      IoUnregisterPlugPlayNotification(*((PVOID *)Context + 3));
      Win32FreePool(Context, v12, v13);
    }
    else
    {
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    }
  }
  return 0LL;
}
