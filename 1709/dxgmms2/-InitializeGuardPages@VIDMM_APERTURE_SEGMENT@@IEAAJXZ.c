/*
 * XREFs of ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C007BD10
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007BDB0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00A7514 (-FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::InitializeGuardPages(PHYSICAL_ADDRESS *this)
{
  struct _MDL *PagesForMdl; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  __int64 i; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
  this[61].QuadPart = (LONGLONG)PagesForMdl;
  if ( !PagesForMdl )
  {
    _InterlockedIncrement(&dword_1C0040610);
    v10 = WdLogNewEntry5_WdLowResource(v4, v3);
    *(_QWORD *)(v10 + 24) = 228LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  v5 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  this[62].QuadPart = (LONGLONG)v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C0040610);
    v11 = WdLogNewEntry5_WdLowResource(v6, 0LL);
    *(_QWORD *)(v11 + 24) = 245LL;
    WdLogEvent5_WdLowResource(v11);
    VIDMM_APERTURE_SEGMENT::FreeGuardPages((VIDMM_APERTURE_SEGMENT *)this);
    return 3221225495LL;
  }
  this[63].QuadPart = *(_QWORD *)(this[61].QuadPart + 48) << 12;
  v7 = v5;
  for ( i = 1024LL; i; --i )
    *v7++ = 1685217607;
  return 0LL;
}
