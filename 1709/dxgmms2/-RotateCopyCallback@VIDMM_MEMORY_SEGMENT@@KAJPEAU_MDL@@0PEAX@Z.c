/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C00A9340
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C00599B8 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E2B0 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER v4; // r10
  VIDMM_GLOBAL *v5; // rdi
  SIZE_T ByteCount; // rsi
  struct _MDL *v8; // r8
  struct VIDMM_SEGMENT *v9; // r10
  struct _VIDMM_GLOBAL_ALLOC *v10; // r11
  struct _VIDMM_GLOBAL_ALLOC *QuadPart; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax

  v4 = a3[1];
  v5 = *(VIDMM_GLOBAL **)(v4.QuadPart + 8);
  if ( (*(_BYTE *)(1552LL * (*(_DWORD *)(a3->QuadPart + 76) & 0x3F) + *((_QWORD *)v5 + 5021) + 436) & 4) == 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  if ( VIDMM_GLOBAL::IsTdrPending(*(VIDMM_GLOBAL **)(v4.QuadPart + 8)) )
  {
    a3[4].QuadPart += ByteCount;
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransfer(
      v5,
      v10,
      ByteCount,
      a3[4].QuadPart,
      v9,
      a3 + 2,
      0LL,
      0LL,
      0LL,
      v8,
      (DXGK_TRANSFERFLAGS)a3[3].LowPart);
    QuadPart = (struct _VIDMM_GLOBAL_ALLOC *)a3->QuadPart;
    a3[4].QuadPart += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines(v5, QuadPart);
    if ( VIDMM_GLOBAL::IsTdrPending(v5) )
    {
      v14 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 512LL);
      if ( (*(_BYTE *)(v14 + 2860) & 4) != 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12, v13);
        v15[5] = 0LL;
        v15[7] = 0LL;
        v15[3] = 270LL;
        v15[4] = 4LL;
        v15[6] = 10LL;
        WdLogEvent5_WdCriticalError(v15);
      }
    }
  }
  return 0LL;
}
