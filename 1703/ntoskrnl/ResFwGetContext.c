/*
 * XREFs of ResFwGetContext @ 0x140755458
 * Callers:
 *     BgGetContext @ 0x14075540C (BgGetContext.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x140077240 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  int v2; // ecx
  unsigned int v3; // ebp
  unsigned int v4; // r14d
  PMDL PagesForMdl; // rax
  PMDL v6; // rsi
  char *MappedSystemVa; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( (dword_140341A30 & 1) == 0 )
    return 3221225473LL;
  v2 = dword_140341A4C;
  if ( dword_140341A50 >= (unsigned int)dword_140341A4C )
    v2 = dword_140341A50;
  v3 = (dword_140341A5C + v2 + dword_140341A58 + 20479) & 0xFFFFF000;
  v4 = ((v3 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v4 + v3, MmCached, 5u);
  v6 = PagesForMdl;
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
  v8 = qword_140341A60;
  *(_QWORD *)(qword_140341A60 + 8) = v6;
  *(_QWORD *)(v8 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
  {
    *(_DWORD *)(v8 + 24) = v4 + v3;
    *(_DWORD *)(v8 + 232) = v3;
    *(_QWORD *)(v8 + 224) = &MappedSystemVa[v4];
  }
  else
  {
    *(_DWORD *)(v8 + 24) = 0;
    *(_DWORD *)(v8 + 232) = 0;
    *(_QWORD *)(v8 + 224) = 0LL;
  }
  BgpAnimationRegionSave = qword_140341AE0;
  BgpTextRegionSave = qword_140341AE8;
  result = 0LL;
  *a1 = v8;
  return result;
}
