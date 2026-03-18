/*
 * XREFs of PspIumAllocatePhysicalPages @ 0x14023A554
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140077240 (MmAllocatePagesForMdlEx.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1400B3890 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspIumAllocatePhysicalPages(int a1, struct _MDL **a2)
{
  unsigned int v2; // ebx
  PMDL PagesForMdl; // rax
  PMDL v6; // rdi
  struct _MDL *Next; // rax
  ULONG ByteCount; // ebp
  ULONG v10; // ebp
  _DWORD *v11; // rax
  _DWORD *v12; // rsi
  struct _MDL MemoryDescriptorList; // [rsp+30h] [rbp-48h] BYREF
  struct _MDL *v14; // [rsp+60h] [rbp-18h]

  v2 = 0;
  PagesForMdl = MmAllocatePagesForMdlEx(
                  0LL,
                  (PHYSICAL_ADDRESS)-1LL,
                  0LL,
                  (unsigned __int64)(unsigned int)(a1 + 1) << 12,
                  MmCached,
                  0x209u);
  v6 = PagesForMdl;
  if ( !PagesForMdl )
    return 3221225495LL;
  if ( a1 )
  {
    ByteCount = PagesForMdl->ByteCount;
    MemoryDescriptorList.Next = 0LL;
    *(_DWORD *)&MemoryDescriptorList.Size = 131128;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    v10 = ByteCount >> 12;
    v14 = (struct _MDL *)*((_QWORD *)&PagesForMdl->ByteCount + v10);
    v11 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
    v12 = v11;
    if ( !v11 )
    {
      MiFreePagesFromMdl((ULONG_PTR)v6, 0);
      v2 = -1073741670;
      goto LABEL_9;
    }
    memmove(v11, v6, 8LL * v10 + 48);
    v12[10] -= 4096;
    MmUnmapLockedPages(v12, &MemoryDescriptorList);
    Next = v14;
  }
  else
  {
    Next = PagesForMdl[1].Next;
  }
  *a2 = Next;
LABEL_9:
  ExFreePoolWithTag(v6, 0);
  return v2;
}
