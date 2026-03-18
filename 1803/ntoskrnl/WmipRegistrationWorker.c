/*
 * XREFs of WmipRegistrationWorker @ 0x1406045B0
 * Callers:
 *     <none>
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400739AC (WmipUnreferenceRegEntry.c)
 *     IoControlPnpDeviceActionQueue @ 0x1400C88F0 (IoControlPnpDeviceActionQueue.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WmipRegisterOrUpdateDS @ 0x1405FE570 (WmipRegisterOrUpdateDS.c)
 */

__int64 WmipRegistrationWorker()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  int v3; // ecx
  char v4; // dl
  __int64 result; // rax

  do
  {
    IoControlPnpDeviceActionQueue(1);
    IoControlPnpDeviceActionQueue(0);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v0 = WmipRegWorkList;
    if ( *((PVOID **)WmipRegWorkList + 1) != &WmipRegWorkList
      || (v1 = *(_QWORD *)WmipRegWorkList, *(PVOID *)(*(_QWORD *)WmipRegWorkList + 8LL) != WmipRegWorkList) )
    {
      __fastfail(3u);
    }
    WmipRegWorkList = *(PVOID *)WmipRegWorkList;
    *(_QWORD *)(v1 + 8) = &WmipRegWorkList;
    KeReleaseMutex(&WmipSMMutex, 0);
    v2 = v0[3];
    if ( v2 )
    {
      v3 = *((_DWORD *)v0 + 4);
      if ( v3 )
      {
        if ( v3 != 1 )
          goto LABEL_7;
        v4 = 1;
      }
      else
      {
        v4 = 0;
      }
      WmipRegisterOrUpdateDS(v0[3], v4);
LABEL_7:
      WmipUnreferenceRegEntry(v2);
    }
    ExFreePoolWithTag(v0, 0);
    result = (unsigned int)_InterlockedExchangeAdd(&WmipRegWorkItemCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
