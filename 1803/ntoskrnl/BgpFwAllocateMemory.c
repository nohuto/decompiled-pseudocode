/*
 * XREFs of BgpFwAllocateMemory @ 0x1401655A0
 * Callers:
 *     BgpFwQueryBootGraphicsInformation @ 0x140164E84 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x140173ACC (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x1401758F4 (RaspAllocateMemory.c)
 *     BcpGetProgressMessages @ 0x14017C468 (BcpGetProgressMessages.c)
 *     BgpFwLibraryInitialize @ 0x14083B9FC (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x14083C0D0 (BgpTxtCreateRegion.c)
 *     BgpGxRectangleCreate @ 0x14083C2B0 (BgpGxRectangleCreate.c)
 *     ResFwpPageInBackground @ 0x14083C37C (ResFwpPageInBackground.c)
 *     TxtpAddCacheEntry @ 0x14083D4D4 (TxtpAddCacheEntry.c)
 *     BgpConsoleInitialize @ 0x14083D9A0 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x14083DBB8 (BgpDisplayCharacterGetContext.c)
 *     BgpTxtGetRegionContext @ 0x1408415B8 (BgpTxtGetRegionContext.c)
 *     BgpFoInitialize @ 0x1408E3930 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x1408E3A2C (FopInitializeFonts.c)
 *     FopReadMappingTable @ 0x1408E3B54 (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x1408E3D24 (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x1408E3EB8 (FopReadCmapTable.c)
 *     FopReadNamingTable @ 0x1408E41EC (FopReadNamingTable.c)
 *     BgpBcInitializeCriticalMode @ 0x1408E4574 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400B33E0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 *     BgpFwReserveAllocate @ 0x14016572C (BgpFwReserveAllocate.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  PMDL v3; // rbx
  ULONG v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *PoolWithTag; // rax
  __int64 v8; // rcx
  char *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_14039D7F0 & 0x800) == 0 )
  {
    v1 = dword_14039D7F0 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    if ( v5 + a1 >= a1 )
    {
      v6 = v5 + a1;
      if ( v5 + a1 < 0xFFFFEFFF )
      {
        if ( v6 < 0x1000 )
        {
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5 + a1, v4);
LABEL_7:
          if ( !PoolWithTag )
            goto LABEL_20;
          v2 = &PoolWithTag[v5];
          if ( v1 )
          {
            v8 = qword_14039D8C0;
            v9 = v2 - 40;
            if ( *(__int64 **)(qword_14039D8C0 + 8) != &qword_14039D8C0 )
              __fastfail(3u);
            *(_QWORD *)v9 = qword_14039D8C0;
            *((_QWORD *)v9 + 1) = &qword_14039D8C0;
            *(_QWORD *)(v8 + 8) = v9;
            qword_14039D8C0 = (__int64)(v2 - 40);
          }
          *((_DWORD *)v2 - 6) = v4;
          *((_QWORD *)v2 - 2) = v6;
          *((_QWORD *)v2 - 1) = v3;
          if ( !v2 )
          {
LABEL_20:
            if ( v3 )
            {
              MiFreePagesFromMdl((ULONG_PTR)v3, 0);
              ExFreePoolWithTag(v3, 0);
            }
          }
          return (__int64)v2;
        }
        v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
        v3 = PagesForMdl;
        if ( PagesForMdl )
        {
          if ( (PagesForMdl->MdlFlags & 5) != 0 )
            PoolWithTag = (char *)PagesForMdl->MappedSystemVa;
          else
            PoolWithTag = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          goto LABEL_7;
        }
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
