/*
 * XREFs of KiOpPatchCode @ 0x14020D3F4
 * Callers:
 *     KiOp_MOVAPS @ 0x14020D6B0 (KiOp_MOVAPS.c)
 *     KiOp_MOVDQA @ 0x14020D730 (KiOp_MOVDQA.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwProtectVirtualMemory @ 0x14017E2C0 (ZwProtectVirtualMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall KiOpPatchCode(__int64 a1, unsigned __int64 a2, char a3)
{
  NTSTATUS v5; // esi
  unsigned int v7; // edi
  _BYTE *v8; // rax
  ULONG NewAccessProtection; // [rsp+30h] [rbp-78h] BYREF
  SIZE_T NumberOfBytesToProtect; // [rsp+38h] [rbp-70h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  _BYTE MemoryDescriptorList[56]; // [rsp+48h] [rbp-60h] BYREF

  BaseAddress = (PVOID)a2;
  NumberOfBytesToProtect = 1LL;
  ExAcquireFastMutex(&KiUserCodePatchMutex);
  v5 = ZwProtectVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         &NumberOfBytesToProtect,
         0x40u,
         &NewAccessProtection);
  if ( v5 >= 0 )
  {
    memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
    *(_QWORD *)MemoryDescriptorList = 0LL;
    *(_WORD *)&MemoryDescriptorList[8] = 8 * ((((a2 & 0xFFF) + 4096) >> 12) + 6);
    *(_WORD *)&MemoryDescriptorList[10] = 0;
    *(_QWORD *)&MemoryDescriptorList[32] = a2 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)&MemoryDescriptorList[44] = a2 & 0xFFF;
    *(_DWORD *)&MemoryDescriptorList[40] = 1;
    v7 = 0;
    MiProbeAndLockPages(MemoryDescriptorList, 1, 1);
    if ( (MemoryDescriptorList[10] & 5) != 0 )
      v8 = *(_BYTE **)&MemoryDescriptorList[24];
    else
      v8 = MmMapLockedPagesSpecifyCache((PMDL)MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    if ( v8 )
      *v8 = a3;
    else
      v7 = -1073741670;
    MmUnlockPages((PMDL)MemoryDescriptorList);
    ZwProtectVirtualMemory(
      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
      &BaseAddress,
      &NumberOfBytesToProtect,
      NewAccessProtection,
      &NewAccessProtection);
    KeReleaseGuardedMutex(&KiUserCodePatchMutex);
    return v7;
  }
  else
  {
    KeReleaseGuardedMutex(&KiUserCodePatchMutex);
    return (unsigned int)v5;
  }
}
