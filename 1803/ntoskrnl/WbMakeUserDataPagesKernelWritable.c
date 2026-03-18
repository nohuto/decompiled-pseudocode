/*
 * XREFs of WbMakeUserDataPagesKernelWritable @ 0x14048AACC
 * Callers:
 *     sub_14048AAA0 @ 0x14048AAA0 (sub_14048AAA0.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     ZwProtectVirtualMemory @ 0x1401A7EC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall WbMakeUserDataPagesKernelWritable(PVOID VirtualAddress, ULONG Length, struct _MDL **a3, _QWORD *a4)
{
  struct _MDL *v8; // rbx
  int v9; // esi
  NTSTATUS v10; // edi
  struct _MDL *Mdl; // rax
  PVOID MappedSystemVa; // rax
  PVOID v14[3]; // [rsp+48h] [rbp-40h] BYREF
  SIZE_T v15; // [rsp+90h] [rbp+8h] BYREF
  ULONG v16; // [rsp+98h] [rbp+10h] BYREF

  v8 = 0LL;
  v9 = 0;
  v16 = 0;
  v14[0] = VirtualAddress;
  v15 = Length;
  v10 = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v14, &v15, 4u, &v16);
  if ( v10 >= 0 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v8 = Mdl;
    if ( Mdl )
    {
      v9 = 1;
      MmProbeAndLockPages(Mdl, 1, IoModifyAccess);
      if ( (v8->MdlFlags & 5) != 0 )
        MappedSystemVa = v8->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
      v14[1] = MappedSystemVa;
      if ( MappedSystemVa )
      {
        if ( a4 )
          *a4 = MappedSystemVa;
        if ( a3 )
        {
          *a3 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v8 )
  {
    if ( v9 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return (unsigned int)v10;
}
