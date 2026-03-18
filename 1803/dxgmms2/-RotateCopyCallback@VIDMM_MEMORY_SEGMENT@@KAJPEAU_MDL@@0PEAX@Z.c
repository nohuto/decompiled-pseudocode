/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C00B1180
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005E3CC (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0062910 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, union _LARGE_INTEGER *a3)
{
  union _LARGE_INTEGER v4; // r10
  VIDMM_GLOBAL *v5; // rdi
  SIZE_T ByteCount; // rsi
  struct _MDL *v8; // r8
  unsigned __int64 v9; // r9
  struct VIDMM_SEGMENT *v10; // r10
  struct _VIDMM_GLOBAL_ALLOC *v11; // r11
  struct _VIDMM_GLOBAL_ALLOC *QuadPart; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax

  v4 = a3[1];
  v5 = *(VIDMM_GLOBAL **)(v4.QuadPart + 8);
  if ( (*(_BYTE *)(1560LL * (*(_DWORD *)(a3->QuadPart + 76) & 0x3F) + *((_QWORD *)v5 + 5090) + 436) & 4) == 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  if ( VIDMM_GLOBAL::IsTdrPending(*(VIDMM_GLOBAL **)(v4.QuadPart + 8)) )
  {
    a3[4].QuadPart = v9 + ByteCount;
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransfer(
      v5,
      v11,
      ByteCount,
      v9,
      v10,
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
      v15 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 528LL);
      if ( (*(_BYTE *)(v15 + 2884) & 4) != 0 )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v13, v14);
        v16[5] = 0LL;
        v16[7] = 0LL;
        v16[3] = 270LL;
        v16[4] = 4LL;
        v16[6] = 10LL;
        WdLogEvent5_WdCriticalError(v16);
      }
    }
  }
  return 0LL;
}
