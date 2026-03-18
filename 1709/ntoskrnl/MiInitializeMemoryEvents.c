/*
 * XREFs of MiInitializeMemoryEvents @ 0x1405B1D08
 * Callers:
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1400BB9A0 (RtlGetDaclSecurityDescriptor.c)
 *     MiUpdateAvailableEvents @ 0x140137060 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x1401398B4 (MiSignalNonPagedPoolWatchers.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiCreateMemoryEvent @ 0x1405B1E50 (MiCreateMemoryEvent.c)
 *     MiCreatePartitionNamespace @ 0x1405B2174 (MiCreatePartitionNamespace.c)
 *     MiCreateMemoryEventSD @ 0x1405B2AA4 (MiCreateMemoryEventSD.c)
 *     MiInitializePagedPoolEvents @ 0x140828D10 (MiInitializePagedPoolEvents.c)
 */

_BOOL8 __fastcall MiInitializeMemoryEvents(ULONG_PTR *a1)
{
  int MemoryEventSD; // ebx
  __int64 v3; // rsi
  int v4; // r8d
  ULONG_PTR v5; // r10
  _BYTE SecurityDescriptor[72]; // [rsp+40h] [rbp-48h] BYREF
  BOOLEAN DaclPresent; // [rsp+98h] [rbp+10h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+A0h] [rbp+18h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp+20h] BYREF

  memset(SecurityDescriptor, 0, 0x28uLL);
  MemoryEventSD = MiCreateMemoryEventSD(SecurityDescriptor);
  if ( MemoryEventSD < 0 )
    goto LABEL_11;
  MemoryEventSD = MiCreatePartitionNamespace(a1);
  if ( MemoryEventSD < 0 )
    goto LABEL_11;
  v3 = 0LL;
  do
  {
    v4 = 0;
    if ( (unsigned int)v3 < 4 )
    {
      if ( a1 != &MiSystemPartition )
        goto LABEL_7;
      LODWORD(v5) = 0;
    }
    else
    {
      v5 = a1[28];
      LOBYTE(v4) = a1 == &MiSystemPartition;
    }
    MemoryEventSD = MiCreateMemoryEvent(
                      (unsigned int)&MiMemoryEventNames[8 * v3],
                      v3,
                      v5,
                      (unsigned int)SecurityDescriptor,
                      v4,
                      (__int64)&a1[(unsigned int)v3 + 30],
                      (__int64)&a1[v3 + 41]);
    if ( MemoryEventSD < 0 )
      goto LABEL_11;
LABEL_7:
    v3 = (unsigned int)(v3 + 1);
  }
  while ( (unsigned int)v3 < 0xB );
  if ( a1 == &MiSystemPartition )
  {
    MiInitializePagedPoolEvents();
    MiSignalNonPagedPoolWatchers();
  }
  MiUpdateAvailableEvents(a1);
  MemoryEventSD = 0;
LABEL_11:
  Dacl = 0LL;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent )
    ExFreePoolWithTag(Dacl, 0);
  return MemoryEventSD >= 0;
}
