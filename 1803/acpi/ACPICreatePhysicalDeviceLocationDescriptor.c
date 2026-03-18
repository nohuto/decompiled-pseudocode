/*
 * XREFs of ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C008B268
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPICreatePhysicalDeviceLocationDescriptor(__int64 a1, _QWORD *a2)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v5; // rdi
  unsigned int v6; // ebx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x42706341u);
  *a2 = PoolWithTag;
  v5 = PoolWithTag;
  v6 = 0;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x88uLL);
    if ( a1 )
    {
      v5[1] = *(_OWORD *)a1;
      *((_DWORD *)v5 + 8) = *(_DWORD *)(a1 + 16);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
