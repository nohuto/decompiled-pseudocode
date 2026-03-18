/*
 * XREFs of IopBuildFullDriverPath @ 0x1404D9704
 * Callers:
 *     PpCheckInDriverDatabase @ 0x1404B3D84 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     PiNormalizeDeviceText @ 0x1404DAC60 (PiNormalizeDeviceText.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopBuildFullDriverPath(unsigned __int16 *a1, void *a2, unsigned __int16 *a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // edi
  const WCHAR *v7; // r13
  const void *v8; // r12
  const wchar_t *v9; // r15
  unsigned int v10; // esi
  unsigned __int16 v11; // ax
  PVOID PoolWithTagPriority; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx

  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  v5 = 0;
  if ( (int)IopGetRegistryValue(a2) >= 0 && MEMORY[0xC] )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = (const void *)MEMORY[8];
    v9 = L"\\SystemRoot\\";
    v10 = MEMORY[0xC] - 2;
    if ( *(_WORD *)MEMORY[8] == 92 )
      v9 = 0LL;
    else
      v6 = 24;
  }
  else
  {
    v10 = *a1;
    v9 = L"\\SystemRoot\\System32\\Drivers\\";
    v8 = (const void *)*((_QWORD *)a1 + 1);
    v7 = L".SYS";
    v6 = 58;
    v5 = 8;
  }
  v11 = v6 + v10 + v5 + 2;
  a3[1] = v11;
  if ( v11 < (unsigned __int64)(v5 + v6 + v10) + 2 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v11,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v11, 0x20206F49u);
    *((_QWORD *)a3 + 1) = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      *a3 = a3[1] - 2;
      if ( v9 )
        memmove(PoolWithTagPriority, v9, v6);
      if ( v10 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v6), v8, v10);
      if ( v5 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v10 + (unsigned __int64)v6), v7, v5);
      v13 = *a3;
      v14 = *((_QWORD *)a3 + 1);
      v15 = 0;
      *(_WORD *)(v14 + 2 * (v13 >> 1)) = 0;
    }
    else
    {
      a3[1] = 0;
      return (unsigned int)-1073741670;
    }
  }
  return v15;
}
