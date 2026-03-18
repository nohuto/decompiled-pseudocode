/*
 * XREFs of ResFwGetContext @ 0x14083B210
 * Callers:
 *     BgGetContext @ 0x14083B1C4 (BgGetContext.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x1400B33E0 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall ResFwGetContext(__int64 *a1)
{
  char *v1; // rbx
  char v3; // al
  int v4; // ecx
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  PMDL PagesForMdl; // rax
  PMDL v8; // rdi
  char *MappedSystemVa; // rdx
  __int64 v10; // r8
  __int64 result; // rax

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v3 = dword_14039D7F0;
  *a1 = 0LL;
  if ( (v3 & 1) == 0 )
    return 3221225473LL;
  v4 = dword_14039D80C;
  if ( dword_14039D810 >= (unsigned int)dword_14039D80C )
    v4 = dword_14039D810;
  v5 = (dword_14039D81C + v4 + dword_14039D818 + 20479) & 0xFFFFF000;
  v6 = ((v5 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6 + v5, MmCached, 5u);
  v8 = PagesForMdl;
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
  v10 = qword_14039D820;
  *(_QWORD *)(qword_14039D820 + 8) = v8;
  *(_QWORD *)(v10 + 16) = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v6];
  *(_DWORD *)(v10 + 24) = MappedSystemVa != 0LL ? v6 + v5 : 0;
  *(_DWORD *)(v10 + 248) = MappedSystemVa != 0LL ? v5 : 0;
  *(_QWORD *)(v10 + 240) = v1;
  BgpAnimationRegionSave = qword_14039D8B0;
  BgpTextRegionSave = qword_14039D8B8;
  result = 0LL;
  *a1 = v10;
  return result;
}
