/*
 * XREFs of CcZeroDataInCache @ 0x1400988F4
 * Callers:
 *     CcZeroData @ 0x140098570 (CcZeroData.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x140020610 (MiProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     MmSetAddressRangeModifiedEx @ 0x140124A90 (MmSetAddressRangeModifiedEx.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

char __fastcall CcZeroDataInCache(int a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v7; // esi
  __int64 v8; // rbx
  char v9; // bl
  PVOID v10; // r14
  unsigned int v12; // [rsp+54h] [rbp-64h]
  unsigned int v13; // [rsp+58h] [rbp-60h]
  PMDL MemoryDescriptorList; // [rsp+60h] [rbp-58h]
  PVOID BcbVoid; // [rsp+68h] [rbp-50h] BYREF
  PVOID VirtualAddress; // [rsp+70h] [rbp-48h] BYREF
  __int64 v17; // [rsp+78h] [rbp-40h] BYREF
  __int64 v18; // [rsp+80h] [rbp-38h] BYREF
  char v19; // [rsp+C8h] [rbp+10h]

  v7 = 0;
  v8 = *a2;
  v18 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  v19 = 1;
  while ( (unsigned __int8)CcPinFileData(
                             a1,
                             (unsigned int)&v18,
                             a3 - v7,
                             0,
                             1,
                             a4,
                             (__int64)&BcbVoid,
                             (__int64)&VirtualAddress,
                             (__int64)&v17) )
  {
    v12 = v17 - v8;
    v13 = v17 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v17 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v9 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v9 - 2;
    LODWORD(v8) = v17;
    v18 = v17;
    MmSetAddressRangeModifiedEx(VirtualAddress, v12);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid);
    v10 = 0LL;
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    v7 = v13;
    if ( a3 <= v13 )
      goto LABEL_8;
  }
  v19 = 0;
  v10 = BcbVoid;
LABEL_8:
  if ( v10 )
    CcUnpinFileDataEx(v10);
  return v19;
}
