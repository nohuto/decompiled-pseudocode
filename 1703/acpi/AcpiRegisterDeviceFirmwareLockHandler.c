/*
 * XREFs of AcpiRegisterDeviceFirmwareLockHandler @ 0x1C0094110
 * Callers:
 *     ACPIIoctlRegisterDeviceFirmwareLock @ 0x1C002A5E8 (ACPIIoctlRegisterDeviceFirmwareLock.c)
 * Callees:
 *     InsertDeviceFirmwareLockHandlerEntry @ 0x1C002A660 (InsertDeviceFirmwareLockHandlerEntry.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall AcpiRegisterDeviceFirmwareLockHandler(PVOID Object, int a2, __int64 a3, __int64 a4)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  int inserted; // edi
  void *v11; // rcx

  if ( Object && a2 == 132 && a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x4F706341u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x50uLL);
      v8[1] = v8;
      *v8 = v8;
      v8[3] = v8 + 2;
      v8[2] = v8 + 2;
      v8[4] = Object;
      *((_DWORD *)v8 + 10) = 132;
      v8[6] = a3;
      v8[7] = a4;
      *((_DWORD *)v8 + 16) = 1;
      ObfReferenceObjectWithTag(Object, 0x4F706341u);
      inserted = InsertDeviceFirmwareLockHandlerEntry((__int64)v8);
      if ( inserted < 0 )
      {
        v11 = (void *)v8[4];
        if ( v11 )
          ObfDereferenceObjectWithTag(v11, 0x4F706341u);
        ExFreePoolWithTag(v8, 0x4F706341u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inserted;
}
