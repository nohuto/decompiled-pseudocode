/*
 * XREFs of WmipRegisterDevice @ 0x14057F3F8
 * Callers:
 *     IoWMIRegistrationControl @ 0x14057F320 (IoWMIRegistrationControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     WmipUnreferenceRegEntry @ 0x1400DEBA0 (WmipUnreferenceRegEntry.c)
 *     WmipAllocRegEntry @ 0x140123F48 (WmipAllocRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012402C (WmipFindRegEntryByDevice.c)
 *     WmipDeregisterRegEntry @ 0x1401240E0 (WmipDeregisterRegEntry.c)
 *     WmipRegisterOrUpdateDS @ 0x140544FA8 (WmipRegisterOrUpdateDS.c)
 *     WmipQueueRegWork @ 0x14057F56C (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14057F644 (WmipUpdateDeviceStackSize.c)
 */

__int64 __fastcall WmipRegisterDevice(struct _DEVICE_OBJECT *Object, int a2)
{
  unsigned int v2; // ebx
  bool v3; // bp
  char *RegEntryByDevice; // rsi
  PDEVICE_OBJECT AttachedDeviceReference; // rdi
  __int64 v7; // rcx
  int updated; // edi
  _QWORD *v9; // rax

  v2 = 0;
  v3 = 0;
  if ( a2 < 0 )
    v2 = 0x10000000;
  if ( (a2 & 0x10000) != 0 )
    v2 |= 16 * (a2 & 0xF00000 | 0x4000000);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  RegEntryByDevice = (char *)WmipFindRegEntryByDevice((__int64)Object);
  if ( RegEntryByDevice )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = 0x40000000;
LABEL_12:
    WmipUnreferenceRegEntry((__int64)RegEntryByDevice);
    goto LABEL_13;
  }
  if ( ((v2 >> 28) & 1) != 0 )
  {
    updated = 0;
  }
  else
  {
    AttachedDeviceReference = IoGetAttachedDeviceReference(Object);
    LOBYTE(v7) = AttachedDeviceReference->StackSize + 1;
    WmipUpdateDeviceStackSize(v7);
    ObfDereferenceObject(AttachedDeviceReference);
    updated = ObReferenceObjectByPointer(Object, 0, 0LL, 0);
  }
  if ( updated < 0 )
  {
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  else
  {
    v9 = WmipAllocRegEntry((__int64)Object, v2);
    RegEntryByDevice = (char *)v9;
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)v9 + 12, 1u);
      KeReleaseMutex(&WmipSMMutex, 0);
      if ( ((v2 >> 28) & 1) != 0 )
      {
        updated = WmipRegisterOrUpdateDS((__int64)RegEntryByDevice, 0);
        if ( updated < 0 )
          v3 = 1;
      }
      else
      {
        updated = WmipQueueRegWork(0LL, RegEntryByDevice);
        v3 = updated < 0;
      }
      goto LABEL_12;
    }
    KeReleaseMutex(&WmipSMMutex, 0);
    updated = -1073741670;
  }
LABEL_13:
  if ( v3 )
    WmipDeregisterRegEntry(RegEntryByDevice);
  return (unsigned int)updated;
}
