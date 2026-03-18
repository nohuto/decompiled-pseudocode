/*
 * XREFs of VidSchSignalPagingFences @ 0x1C006F99C
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchSignalPagingFences(__int64 a1, void **a2, _QWORD *a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r10d
  __int64 *v8; // rdx
  __int64 v10; // rax

  if ( a5 == -1 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    if ( (_BYTE)a6 )
      v8 = *(__int64 **)(a1 + 240);
    else
      v8 = *(__int64 **)(a1 + 232);
  }
  else
  {
    v7 = 1;
    if ( (_BYTE)a6 )
      v10 = *(_QWORD *)(a1 + 240);
    else
      v10 = *(_QWORD *)(a1 + 232);
    v8 = (__int64 *)(v10 + 8LL * a5);
  }
  return VidSchSignalSyncObjectsFromGpu(v7, v8, 1u, a2, 0, a3);
}
