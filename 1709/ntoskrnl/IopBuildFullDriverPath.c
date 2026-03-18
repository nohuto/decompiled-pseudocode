/*
 * XREFs of IopBuildFullDriverPath @ 0x140518684
 * Callers:
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     PpCheckInDriverDatabase @ 0x14054466C (PpCheckInDriverDatabase.c)
 *     PiNormalizeDeviceText @ 0x1405854E0 (PiNormalizeDeviceText.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 */

__int64 __fastcall IopBuildFullDriverPath(unsigned __int16 *a1, void *a2, unsigned __int16 *a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // edi
  const void *v7; // r12
  const WCHAR *v8; // r13
  unsigned int v9; // esi
  const wchar_t *v10; // r15
  unsigned __int16 v11; // ax
  PVOID Pool; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx

  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  v5 = 0;
  if ( (int)IopGetRegistryValue(a2) >= 0 && MEMORY[0xC] )
  {
    v6 = 0;
    v7 = (const void *)MEMORY[8];
    v8 = 0LL;
    v9 = MEMORY[0xC] - 2;
    v10 = L"\\SystemRoot\\";
    if ( *(_WORD *)MEMORY[8] == 92 )
      v10 = 0LL;
    else
      v6 = 24;
  }
  else
  {
    v9 = *a1;
    v10 = L"\\SystemRoot\\System32\\Drivers\\";
    v7 = (const void *)*((_QWORD *)a1 + 1);
    v8 = L".SYS";
    v6 = 58;
    v5 = 8;
  }
  v11 = v6 + v9 + v5 + 2;
  a3[1] = v11;
  if ( v11 < (unsigned __int64)(v5 + v6 + v9) + 2 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    Pool = IopVerifierExAllocatePool(PagedPool, v11);
    *((_QWORD *)a3 + 1) = Pool;
    if ( Pool )
    {
      *a3 = a3[1] - 2;
      if ( v10 )
        memmove(Pool, v10, v6);
      if ( v9 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v6), v7, v9);
      if ( v5 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v9 + (unsigned __int64)v6), v8, v5);
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
