/*
 * XREFs of PoSetHiberRange @ 0x140241970
 * Callers:
 *     HvlDiscardPagesFromHibernation @ 0x1401EE3F0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401EE450 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x1401EEAD8 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1401EEB70 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x1401F62FC (IoGetDumpHiberRanges.c)
 *     RtlMarkHiberPhase @ 0x14025A810 (RtlMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x14042A5F4 (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x14042DF90 (KdMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x14042E018 (KeMarkHiberPhase.c)
 *     MiGatherHiberRange @ 0x14042F060 (MiGatherHiberRange.c)
 *     MiMarkHiberNotCachedPages @ 0x14042F1F0 (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablesHelper @ 0x14042F368 (MiMarkKernelPageTablesHelper.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14042F440 (MiMarkNonPagedHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140430420 (MmMarkHiberPhase.c)
 *     PopBuildMemoryImageHeader @ 0x140432438 (PopBuildMemoryImageHeader.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140432844 (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     PopMarkComponentsBootPhase @ 0x140433C3C (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140433E88 (PopMarkHiberPhase.c)
 *     VslAllocateSecureHibernateResources @ 0x1406B32F4 (VslAllocateSecureHibernateResources.c)
 *     MmMarkHiberRange @ 0x1406E2544 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 *     PopHiberInitializeResources @ 0x1406FBB38 (PopHiberInitializeResources.c)
 *     BgpFwMarkHiberPhase @ 0x1407D3970 (BgpFwMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PopSetRange @ 0x140241F84 (PopSetRange.c)
 *     MmMarkImageForHiberPhase @ 0x14043066C (MmMarkImageForHiberPhase.c)
 *     MmGetSectionRange @ 0x1406E21A8 (MmGetSectionRange.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  PVOID v5; // rbp
  __int16 v6; // bx
  unsigned int v7; // eax
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // r15
  PHYSICAL_ADDRESS v11; // r12
  __int64 v12; // r14
  _DWORD v13[18]; // [rsp+30h] [rbp-48h] BYREF
  PVOID v14; // [rsp+80h] [rbp+8h]
  unsigned __int64 v15; // [rsp+90h] [rbp+18h] BYREF

  v15 = (unsigned __int64)Address;
  v14 = MemoryMap;
  v5 = MemoryMap;
  v6 = Flags;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( !MemoryMap )
  {
    v5 = (PVOID)BugCheckParameter4;
    v14 = (PVOID)BugCheckParameter4;
    if ( !BugCheckParameter4 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v7 = *(_DWORD *)(BugCheckParameter4 + 184);
    if ( v7 != 8 )
    {
      if ( v7 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v7, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) != 0x10000 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    if ( Length )
      goto LABEL_21;
    if ( (Flags & 0x4000) != 0 )
      KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
    goto LABEL_16;
  }
  if ( (Flags & 0x10000) != 0 )
    KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
  if ( !Length )
  {
LABEL_16:
    if ( (Flags & 0x10000) != 0 )
    {
      MmMarkImageForHiberPhase(v15);
      return;
    }
    if ( (int)MmGetSectionRange(v15, &v15, v13) < 0 )
      KeBugCheckEx(0xA0u, 2uLL, 0xA11FCuLL, 0LL, 0LL);
    Length = v13[0];
  }
LABEL_21:
  if ( (v6 & 4) != 0 )
    v6 = v6 & 0xFFF9 | 2;
  if ( (v6 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v5, Tag);
  }
  else
  {
    v8 = v15 >> 12;
    v9 = (Length + v15 + 4095) >> 12;
    while ( v8 < v9 )
    {
      v10 = v8 + 1;
      v11.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v8 << 12)).QuadPart >> 12;
      v12 = 1LL;
      if ( v8 + 1 < v9 )
      {
        do
        {
          if ( v10 + v11.QuadPart - v8 != (unsigned __int64)MmGetPhysicalAddress((PVOID)((v8 << 12) + (v12 << 12))).QuadPart >> 12 )
            break;
          ++v12;
          ++v10;
        }
        while ( v10 < v9 );
        v5 = v14;
      }
      PopSetRange((ULONG_PTR)v5, Tag);
      v8 += v12;
    }
  }
}
