/*
 * XREFs of ExGetSystemFirmwareTable @ 0x1405D3420
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14055C888 (ExpGetSystemFirmwareTableInformation.c)
 */

__int64 __fastcall ExGetSystemFirmwareTable(unsigned int a1, unsigned int a2, void *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v9; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // rbx
  int SystemFirmwareTableInformation; // edi
  int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 && a4 )
    return 3221225485LL;
  v9 = a4 + 16;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, a4 + 16, 0x54465241u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[3] = a4;
    *PoolWithTag = a1;
    PoolWithTag[1] = 1;
    PoolWithTag[2] = a2;
    SystemFirmwareTableInformation = ExpGetSystemFirmwareTableInformation(PoolWithTag, 0, v9, &v14);
    if ( ((int)(SystemFirmwareTableInformation + 0x80000000) < 0 || SystemFirmwareTableInformation == -1073741789) && a5 )
      *a5 = v11[3];
    if ( SystemFirmwareTableInformation >= 0 )
    {
      if ( a3 )
        memmove(a3, v11 + 4, (unsigned int)(v14 - 16));
    }
    ExFreePoolWithTag(v11, 0x54465241u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)SystemFirmwareTableInformation;
}
