/*
 * XREFs of MiInitializeMemoryEvents @ 0x1405A25E8
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x14006F530 (RtlGetDaclSecurityDescriptor.c)
 *     MiUpdateAvailableEvents @ 0x1401548AC (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140154988 (MiSignalNonPagedPoolWatchers.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCreateMemoryEvent @ 0x1405A2730 (MiCreateMemoryEvent.c)
 *     MiCreatePartitionNamespace @ 0x1405A2A54 (MiCreatePartitionNamespace.c)
 *     MiCreateMemoryEventSD @ 0x1405A316C (MiCreateMemoryEventSD.c)
 *     MiInitializePagedPoolEvents @ 0x14080432C (MiInitializePagedPoolEvents.c)
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
      v5 = a1[33];
      LOBYTE(v4) = a1 == &MiSystemPartition;
    }
    MemoryEventSD = MiCreateMemoryEvent(
                      (unsigned int)&MiMemoryEventNames[8 * v3],
                      v3,
                      v5,
                      (unsigned int)SecurityDescriptor,
                      v4,
                      (__int64)&a1[(unsigned int)v3 + 35],
                      (__int64)&a1[v3 + 46]);
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
