/*
 * XREFs of BgpFwAllocateMemory @ 0x14013E320
 * Callers:
 *     BgpRasPrintGlyph @ 0x14013C14C (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x14013E2C0 (RaspAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14013E750 (BgpFwQueryBootGraphicsInformation.c)
 *     BcpGetProgressMessages @ 0x14013E908 (BcpGetProgressMessages.c)
 *     BgpConsoleInitialize @ 0x1407CE070 (BgpConsoleInitialize.c)
 *     BgpDisplayCharacterGetContext @ 0x1407CE760 (BgpDisplayCharacterGetContext.c)
 *     BgpTxtCreateRegion @ 0x1407CF494 (BgpTxtCreateRegion.c)
 *     TxtpAddCacheEntry @ 0x1407CFE6C (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x1407CFFBC (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x1407D01A4 (BgpFwLibraryInitialize.c)
 *     BgpTxtGetRegionContext @ 0x1407D07A8 (BgpTxtGetRegionContext.c)
 *     ResFwBackgroundTransition @ 0x1407D0BC4 (ResFwBackgroundTransition.c)
 *     BgpFoInitialize @ 0x14086EBD4 (BgpFoInitialize.c)
 *     FopInitializeFonts @ 0x14086ECD0 (FopInitializeFonts.c)
 *     FopValidateFontNameTable @ 0x14086EDF8 (FopValidateFontNameTable.c)
 *     BgpBcInitializeCriticalMode @ 0x14086F1D0 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x14086F494 (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x14086F7E8 (FopReadMappingTable.c)
 *     FopReadCmapTable @ 0x14086F9B8 (FopReadCmapTable.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x14011CC10 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x14013E858 (BgpFwReserveAllocate.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  if ( (dword_14035A1B0 & 0x800) == 0 )
  {
    v1 = dword_14035A1B0 & 0x8000;
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
            v8 = qword_14035A270;
            v9 = v2 - 40;
            if ( *(__int64 **)(qword_14035A270 + 8) != &qword_14035A270 )
              __fastfail(3u);
            *(_QWORD *)v9 = qword_14035A270;
            *((_QWORD *)v9 + 1) = &qword_14035A270;
            *(_QWORD *)(v8 + 8) = v9;
            qword_14035A270 = (__int64)(v2 - 40);
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
