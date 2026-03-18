/*
 * XREFs of PspInitializeSiloStructures @ 0x1407FEF44
 * Callers:
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PspSiloInitializeSharedUserSessionId @ 0x14045EF7C (PspSiloInitializeSharedUserSessionId.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 *     PspStorageAllocSlot @ 0x14059F4C8 (PspStorageAllocSlot.c)
 *     PspAllocStorage @ 0x1405CE18C (PspAllocStorage.c)
 *     PspStorageFreeSlot @ 0x1406E4CD4 (PspStorageFreeSlot.c)
 */

char PspInitializeSiloStructures()
{
  PVOID PoolWithTag; // rax
  PVOID v2; // rcx
  unsigned int v3; // ecx
  _QWORD v4[16]; // [rsp+20h] [rbp-29h] BYREF

  dword_1403FA960 = 1;
  dword_1403FA964 = 259;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x248uLL, 0x476C6953u);
  qword_1403FA970 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  memset(PoolWithTag, 0, 0x248uLL);
  if ( (int)PspSiloInitializeSharedUserSessionId(qword_1403FA970) < 0
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
  qword_140348E88 = (__int64)&PspSiloMonitorList;
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
      if ( (int)PspAllocStorage(&qword_1403FA958) >= 0 )
        return 1;
      ObfDereferenceObjectWithTag(PsSiloContextPagedType, 0x746C6644u);
      v2 = (PVOID)PsSiloContextNonPagedType;
    }
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  }
  return 0;
}
