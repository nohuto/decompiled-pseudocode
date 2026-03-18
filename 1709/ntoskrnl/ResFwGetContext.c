/*
 * XREFs of ResFwGetContext @ 0x1407D3B2C
 * Callers:
 *     BgGetContext @ 0x1407D2E90 (BgGetContext.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     MmAllocatePagesForMdlEx @ 0x14011CC10 (MmAllocatePagesForMdlEx.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  __int64 result; // rax
  int v3; // ecx
  unsigned int v4; // ebp
  unsigned int v5; // r14d
  PMDL PagesForMdl; // rax
  PMDL v7; // rsi
  char *MappedSystemVa; // rdx
  __int64 v9; // rcx

  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( (dword_14035A1B0 & 1) == 0 )
    return 3221225473LL;
  v3 = dword_14035A1CC;
  if ( dword_14035A1D0 >= (unsigned int)dword_14035A1CC )
    v3 = dword_14035A1D0;
  v4 = (dword_14035A1DC + v3 + dword_14035A1D8 + 20479) & 0xFFFFF000;
  v5 = ((v4 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v5 + v4, MmCached, 5u);
  v7 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  v9 = qword_14035A1E0;
  *(_QWORD *)(qword_14035A1E0 + 8) = v7;
  *(_QWORD *)(v9 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
  {
    *(_DWORD *)(v9 + 24) = v5 + v4;
    *(_DWORD *)(v9 + 232) = v4;
    *(_QWORD *)(v9 + 224) = &MappedSystemVa[v5];
  }
  else
  {
    *(_DWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 232) = 0;
    *(_QWORD *)(v9 + 224) = 0LL;
  }
  BgpAnimationRegionSave = qword_14035A260;
  BgpTextRegionSave = qword_14035A268;
  result = 0LL;
  *a1 = v9;
  return result;
}
