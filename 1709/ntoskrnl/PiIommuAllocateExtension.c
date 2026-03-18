/*
 * XREFs of PiIommuAllocateExtension @ 0x14058F934
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x140517228 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipIommuRetrieveDevicePath @ 0x14058FA04 (PipIommuRetrieveDevicePath.c)
 *     PiIommuFreeExtension @ 0x14059F28C (PiIommuFreeExtension.c)
 *     PnpTraceIommuDeviceProperties @ 0x1406D1404 (PnpTraceIommuDeviceProperties.c)
 */

__int64 __fastcall PiIommuAllocateExtension(__int64 a1, ULONG_PTR a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rbx
  int DevicePath; // edi
  __int64 (__fastcall *v8)(_QWORD, unsigned int *); // rax
  char v9; // cl
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64706E50u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    DevicePath = PipIommuRetrieveDevicePath(a2);
    if ( DevicePath < 0
      || ((v8 = *(__int64 (__fastcall **)(_QWORD, unsigned int *))(a2 + 64)) == 0LL
        ? (DevicePath = -1073741637)
        : (DevicePath = v8(*(_QWORD *)(a2 + 8), &v11)),
          DevicePath < 0) )
    {
      PiIommuFreeExtension((ULONG_PTR)PoolWithTag);
      PoolWithTag = 0LL;
    }
    else
    {
      *((_BYTE *)PoolWithTag + 8) ^= (*((_BYTE *)PoolWithTag + 8) ^ (8 * (v11 >> 1))) & 8;
      v9 = *((_BYTE *)PoolWithTag + 8) ^ (*((_BYTE *)PoolWithTag + 8) ^ (4 * v11)) & 4;
      *((_BYTE *)PoolWithTag + 8) = v9;
      if ( (v9 & 4) != 0 )
        PnpTraceIommuDeviceProperties(a1, v11);
    }
  }
  else
  {
    DevicePath = -1073741670;
  }
  result = (unsigned int)DevicePath;
  *a3 = PoolWithTag;
  return result;
}
