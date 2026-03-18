/*
 * XREFs of CcZeroDataInCache @ 0x1401178EC
 * Callers:
 *     CcZeroData @ 0x14044A710 (CcZeroData.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x1400B3C60 (MiProbeAndLockPages.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 */

char __fastcall CcZeroDataInCache(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  PVOID v9; // rsi
  char v11; // [rsp+50h] [rbp-58h]
  unsigned int v12; // [rsp+58h] [rbp-50h]
  PVOID BcbVoid; // [rsp+60h] [rbp-48h] BYREF
  PMDL MemoryDescriptorList; // [rsp+68h] [rbp-40h]
  PVOID VirtualAddress; // [rsp+70h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp-30h] BYREF
  __int64 v17; // [rsp+80h] [rbp-28h] BYREF
  char v18; // [rsp+B8h] [rbp+10h]

  v7 = 0;
  v8 = *a2;
  v17 = *a2;
  BcbVoid = 0LL;
  VirtualAddress = 0LL;
  MemoryDescriptorList = 0LL;
  v18 = 1;
  while ( (unsigned __int8)CcPinFileData(a1, &v17, a3 - v7, 0, 1, a4, (ULONG_PTR *)&BcbVoid, &VirtualAddress, &v16) )
  {
    v12 = v16 - v8 + v7;
    MemoryDescriptorList = IoAllocateMdl(VirtualAddress, (int)v16 - (int)v8, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
      RtlRaiseStatus(-1073741670);
    v11 = BYTE5(KeGetCurrentThread()[1].Queue) + 2;
    BYTE5(KeGetCurrentThread()[1].Queue) = 1;
    MiProbeAndLockPages(MemoryDescriptorList, 0, 0);
    BYTE5(KeGetCurrentThread()[1].Queue) = v11 - 2;
    LODWORD(v8) = v16;
    v17 = v16;
    MmSetAddressRangeModifiedEx((unsigned __int64)VirtualAddress);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    CcUnpinFileDataEx(BcbVoid, 0LL, 0LL);
    v9 = 0LL;
    BcbVoid = 0LL;
    MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
    MemoryDescriptorList = 0LL;
    v7 = v12;
    if ( a3 <= v12 )
      goto LABEL_8;
  }
  v18 = 0;
  v9 = BcbVoid;
LABEL_8:
  if ( v9 )
    CcUnpinFileDataEx(v9, 0LL, 0LL);
  return v18;
}
