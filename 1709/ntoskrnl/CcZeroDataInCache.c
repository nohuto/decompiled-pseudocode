/*
 * XREFs of CcZeroDataInCache @ 0x14011ED48
 * Callers:
 *     CcZeroData @ 0x14011E9B0 (CcZeroData.c)
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14001B660 (CcSetDirtyPinnedData.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     CcUnpinFileDataEx @ 0x140068040 (CcUnpinFileDataEx.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     CcPinFileData @ 0x140079AD0 (CcPinFileData.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x1400BDA70 (MiProbeAndLockPages.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  char *v9; // rdi
  char v11; // [rsp+50h] [rbp-58h]
  unsigned int v12; // [rsp+54h] [rbp-54h]
  unsigned int v13; // [rsp+58h] [rbp-50h]
  PVOID BcbVoid; // [rsp+60h] [rbp-48h] BYREF
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-40h]
  PVOID VirtualAddress; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF
  __int64 v18; // [rsp+80h] [rbp-28h] BYREF
  char v19; // [rsp+B8h] [rbp+10h]

  v7 = 0;
  v8 = *a2;
  v18 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  MemoryDescriptorList = 0LL;
  v19 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v18, a3 - v7, 0, 1, a4, (ULONG_PTR *)&BcbVoid, &VirtualAddress, &v17) )
  {
    v12 = v17 - v8;
    v13 = v17 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v17 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v11 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v11 - 2;
    LODWORD(v8) = v17;
    v18 = v17;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress, v12);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx((char *)BcbVoid, 0, 0);
    v9 = 0LL;
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    MemoryDescriptorList = 0LL;
    v7 = v13;
    if ( a3 <= v13 )
      goto LABEL_8;
  }
  v19 = 0;
  v9 = (char *)BcbVoid;
LABEL_8:
  if ( v9 )
    CcUnpinFileDataEx(v9, 0, 0);
  return v19;
}
