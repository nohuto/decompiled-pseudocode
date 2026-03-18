/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C007BE64
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C210 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(PHYSICAL_ADDRESS *this)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct _MDL *v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax

  v2 = -1073741801;
  v3 = operator new[](0x18uLL, 0x35336956u, PagedPool);
  this[33].QuadPart = (LONGLONG)v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C0040640);
    v12 = WdLogNewEntry5_WdLowResource(v5, v4);
    *(_QWORD *)(v12 + 24) = 716LL;
    goto LABEL_9;
  }
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  *(_QWORD *)(this[33].QuadPart + 8) = MmAllocatePagesForMdl(0LL, this[15], 0LL, 0x10000uLL);
  v7 = *(struct _MDL **)(this[33].QuadPart + 8);
  if ( !v7 )
  {
    _InterlockedIncrement(&dword_1C004060C);
    v12 = WdLogNewEntry5_WdLowResource(0LL, v6);
    *(_QWORD *)(v12 + 24) = 710LL;
    goto LABEL_9;
  }
  v8 = MmMapLockedPagesSpecifyCache(v7, 0, MmWriteCombined, 0LL, 0, 0x40000020u);
  this[32].QuadPart = (LONGLONG)v8;
  if ( !v8 )
  {
    _InterlockedIncrement(&dword_1C004063C);
    v12 = WdLogNewEntry5_WdLowResource(v10, v9);
    *(_QWORD *)(v12 + 24) = 704LL;
LABEL_9:
    WdLogEvent5_WdLowResource(v12);
    return v2;
  }
  return 0;
}
