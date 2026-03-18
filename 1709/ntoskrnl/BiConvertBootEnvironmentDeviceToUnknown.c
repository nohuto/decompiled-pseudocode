/*
 * XREFs of BiConvertBootEnvironmentDeviceToUnknown @ 0x140779BCC
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x1405B0050 (BiConvertRegistryDataToElement.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1405B06F0 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToUnknown(_DWORD *Src, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi

  v3 = -1;
  if ( Src[2] < 0xFFFFFFEC )
    v3 = Src[2] + 20;
  v7 = Src[2] >= 0xFFFFFFEC ? 0xC0000095 : 0;
  if ( (unsigned int)(Src[2] + 20) >= 0x14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x4B444342u);
    v7 = 0;
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v3);
      *v9 = 5;
      memmove(v9 + 5, Src, (unsigned int)Src[2]);
      *a2 = v9;
      *a3 = v3;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v7;
}
