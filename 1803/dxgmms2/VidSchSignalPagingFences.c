/*
 * XREFs of VidSchSignalPagingFences @ 0x1C00BE1E4
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00600E8 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0064BD0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00073F0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C002F060 (VidSchSignalSyncObjectsFromCpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(
        __int64 a1,
        void **a2,
        unsigned __int64 *a3,
        __int64 a4,
        unsigned int a5,
        char a6)
{
  int v8; // r8d
  _QWORD *v9; // r9
  __int64 v10; // rax

  if ( *(_BYTE *)(a1 + 54) )
    return VidSchSignalSyncObjectsFromCpu((_QWORD *)1, (__int64)a2, 0, a3, 0);
  if ( a5 == -1 )
  {
    v8 = *(_DWORD *)(a1 + 60);
    if ( a6 )
      v9 = *(_QWORD **)(a1 + 264);
    else
      v9 = *(_QWORD **)(a1 + 240);
  }
  else
  {
    v8 = 1;
    if ( a6 )
      v10 = *(_QWORD *)(a1 + 264);
    else
      v10 = *(_QWORD *)(a1 + 240);
    v9 = (_QWORD *)(v10 + 8LL * a5);
  }
  return VidSchSignalSyncObjectsFromGpu(0LL, 0LL, v8, v9, 1u, a2, 0, a3);
}
