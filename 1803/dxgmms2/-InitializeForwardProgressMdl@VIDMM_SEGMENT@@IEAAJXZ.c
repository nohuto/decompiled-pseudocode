/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C007EE14
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007F130 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(PHYSICAL_ADDRESS *this)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  struct _MDL *v5; // rcx
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rax

  v2 = -1073741801;
  v3 = operator new[](0x18uLL, 0x35336956u, PagedPool);
  this[33].QuadPart = (LONGLONG)v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C0047640);
    v9 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v9 + 24) = 716LL;
    goto LABEL_9;
  }
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  *(_QWORD *)(this[33].QuadPart + 8) = MmAllocatePagesForMdl(0LL, this[15], 0LL, 0x10000uLL);
  v5 = *(struct _MDL **)(this[33].QuadPart + 8);
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C004760C);
    v9 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v9 + 24) = 710LL;
    goto LABEL_9;
  }
  v6 = MmMapLockedPagesSpecifyCache(v5, 0, MmWriteCombined, 0LL, 0, 0x40000020u);
  this[32].QuadPart = (LONGLONG)v6;
  if ( !v6 )
  {
    _InterlockedIncrement(&dword_1C004763C);
    v9 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v9 + 24) = 704LL;
LABEL_9:
    WdLogEvent5_WdLowResource(v9);
    return v2;
  }
  return 0;
}
