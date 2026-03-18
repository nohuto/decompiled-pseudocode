/*
 * XREFs of PoSetHiberRange @ 0x140156AD0
 * Callers:
 *     IoGetDumpHiberRanges @ 0x1401569D8 (IoGetDumpHiberRanges.c)
 *     HvlDiscardPagesFromHibernation @ 0x14022BC8C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x14022BCEC (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x14022C378 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x14022C410 (HvlpMarkHypervisorPagesForHibernation.c)
 *     MiMarkKernelPageTablePte @ 0x140255400 (MiMarkKernelPageTablePte.c)
 *     RtlMarkHiberPhase @ 0x140292630 (RtlMarkHiberPhase.c)
 *     PopMarkComponentsBootPhase @ 0x140475428 (PopMarkComponentsBootPhase.c)
 *     BgkResumePrepare @ 0x140476898 (BgkResumePrepare.c)
 *     PopBuildMemoryImageHeader @ 0x140477074 (PopBuildMemoryImageHeader.c)
 *     KdMarkHiberPhase @ 0x1404843F8 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x140484480 (KeMarkHiberPhase.c)
 *     MiGatherHiberRange @ 0x140485440 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPte @ 0x140485520 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140485710 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x1404857DC (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x14048636C (PopMarkHiberPhase.c)
 *     PopHiberInitializeResources @ 0x1405EFC6C (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1405EFF24 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x1405F00AC (PopAllocateHiberContext.c)
 *     VslAllocateSecureHibernateResources @ 0x140717F24 (VslAllocateSecureHibernateResources.c)
 *     BgpFwMarkHiberPhase @ 0x140840360 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14003C3D0 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x140156C6C (PopSetRange.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MmMarkImageForHiberPhase @ 0x140485A18 (MmMarkImageForHiberPhase.c)
 *     MmGetSectionRange @ 0x14074CDF0 (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  PVOID v5; // rbp
  __int16 v6; // bx
  ULONG_PTR v7; // rax
  ULONG v8; // eax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rsi
  __int64 v11; // r14
  ULONG_PTR v12; // r15
  PHYSICAL_ADDRESS v13; // r12
  _DWORD v14[18]; // [rsp+30h] [rbp-48h] BYREF
  PVOID BugCheckParameter3; // [rsp+80h] [rbp+8h]
  unsigned __int64 v16; // [rsp+90h] [rbp+18h] BYREF

  v16 = (unsigned __int64)Address;
  BugCheckParameter3 = MemoryMap;
  v5 = MemoryMap;
  v6 = Flags;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( MemoryMap )
  {
    v8 = Flags & 0x10000;
    if ( (Flags & 0x10000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
  }
  else
  {
    v5 = (PVOID)BugCheckParameter4;
    BugCheckParameter3 = (PVOID)BugCheckParameter4;
    if ( !BugCheckParameter4 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(unsigned int *)(BugCheckParameter4 + 184);
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    if ( !Length && (Flags & 0x4000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    v8 = Flags & 0x10000;
  }
  if ( !Length )
  {
    if ( v8 )
    {
      MmMarkImageForHiberPhase(v16);
      return;
    }
    if ( (int)MmGetSectionRange(v16, &v16, v14) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA120DuLL, 0LL, 0LL);
    Length = v14[0];
  }
  if ( (v6 & 4) != 0 )
    v6 = v6 & 0xFFF9 | 2;
  if ( (v6 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v5, Tag);
  }
  else
  {
    v9 = v16 >> 12;
    v10 = (Length + v16 + 4095) >> 12;
    while ( v9 < v10 )
    {
      v12 = v9 + 1;
      v13.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v9 << 12)).QuadPart >> 12;
      v11 = 1LL;
      if ( v9 + 1 < v10 )
      {
        do
        {
          if ( v12 + v13.QuadPart - v9 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v9 << 12) + (v11 << 12))).QuadPart >> 12 )
            break;
          ++v11;
          ++v12;
        }
        while ( v12 < v10 );
        v5 = BugCheckParameter3;
      }
      PopSetRange((ULONG_PTR)v5, Tag);
      v9 += v11;
    }
  }
}
