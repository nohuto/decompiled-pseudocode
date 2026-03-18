/*
 * XREFs of ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C009B54C
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0059AE0 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058120 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00A353C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00A3600 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // r9
  struct _MDL *v6; // rax
  struct _MDL *v7; // rsi
  int v9; // ebp
  __int64 v10; // [rsp+40h] [rbp-18h]

  v2 = *a2;
  v4 = **a2;
  v5 = *(_QWORD *)(v4 + 136);
  if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 300LL) & 8) != 0 )
    v6 = VidMmiBuildMdlFromMdl(
           (PVOID)v2[2],
           *(_QWORD *)(v4 + 16),
           *(struct _MDL **)(v5 + 32),
           *(_QWORD *)(v4 + 144) / 4096LL);
  else
    v6 = VidMmiBuildMdlForContiguousMmIo(
           (PVOID)v2[2],
           *(_QWORD *)(v4 + 8),
           (union _LARGE_INTEGER)(*(_QWORD *)(v5 + 32) + *(_QWORD *)(v4 + 144)));
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  LODWORD(v10) = 0;
  v9 = VIDMM_GLOBAL::Rotate(
         (__int64)this,
         *(_QWORD *)(v2[1] + 24),
         v2[3],
         1u,
         (__int64)v6,
         *(_QWORD *)(v4 + 16),
         0LL,
         0LL,
         v10,
         v4);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    *((_BYTE *)v2 + 32) |= 1u;
    *(_BYTE *)(v4 + 98) = 1;
  }
  return (unsigned int)v9;
}
