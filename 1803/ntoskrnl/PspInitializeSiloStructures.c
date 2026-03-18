/*
 * XREFs of PspInitializeSiloStructures @ 0x14089FF04
 * Callers:
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x140584D84 (PspSiloInitializeSharedUserSessionId.c)
 *     PspAllocStorage @ 0x140620A74 (PspAllocStorage.c)
 *     PspStorageAllocSlot @ 0x1406217F8 (PspStorageAllocSlot.c)
 *     ObCreateObjectType @ 0x140621880 (ObCreateObjectType.c)
 *     PspStorageFreeSlot @ 0x1407808EC (PspStorageFreeSlot.c)
 */

char PspInitializeSiloStructures()
{
  PVOID PoolWithTag; // rax
  PVOID v2; // rcx
  unsigned int v3; // ecx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  dword_140466980 = 1;
  dword_140466984 = 259;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x248uLL, 0x476C6953u);
  qword_140466990 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x248uLL);
  if ( (int)PspSiloInitializeSharedUserSessionId(qword_140466990) < 0
    || (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectorySiloContextSlot) < 0 )
  {
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsObjectDirectoryTeardownSlot) < 0 )
  {
    v3 = PsObjectDirectorySiloContextSlot;
LABEL_15:
    PspStorageFreeSlot(v3);
    return 0;
  }
  if ( (int)PspStorageAllocSlot((ULONG *)&PsSystemRootSiloContextSlot) < 0 )
  {
    PspStorageFreeSlot(PsObjectDirectorySiloContextSlot);
    v3 = PsObjectDirectoryTeardownSlot;
    goto LABEL_15;
  }
  PspSiloMonitorLock = 0LL;
  qword_1403A6148 = (__int64)&PspSiloMonitorList;
  PspSiloMonitorList = (__int64)&PspSiloMonitorList;
  memset(v4, 0, 0x78uLL);
  BYTE2(v4[0]) |= 0x84u;
  LOWORD(v4[0]) = 120;
  HIDWORD(v4[1]) = 0x20000;
  v4[2] = 0x2000000020000LL;
  HIDWORD(v4[4]) = 1;
  v4[3] = 0xF0000000F0000LL;
  v4[9] = PspDeleteSiloContext;
  if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"$&", (__int64)v4, 0LL, (__int64)&PsSiloContextPagedType) >= 0 )
  {
    HIDWORD(v4[4]) = 512;
    if ( (int)ObCreateObjectType((const UNICODE_STRING *)L"*,", (__int64)v4, 0LL, (__int64)&PsSiloContextNonPagedType) < 0 )
    {
      v2 = PsSiloContextPagedType;
    }
    else
    {
      if ( (int)PspAllocStorage(&qword_140466978) >= 0 )
        return 1;
      ObfDereferenceObjectWithTag(PsSiloContextPagedType, 0x746C6644u);
      v2 = (PVOID)PsSiloContextNonPagedType;
    }
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return 0;
}
