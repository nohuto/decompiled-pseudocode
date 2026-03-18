/*
 * XREFs of VidSchSignalPagingFences @ 0x1C00759EC
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005B7DC (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007290 (VidSchSignalSyncObjectsFromGpu.c)
 */

__int64 __fastcall VidSchSignalPagingFences(__int64 a1, void **a2, _QWORD *a3, __int64 a4, unsigned int a5, char a6)
{
  unsigned int v7; // r10d
  __int64 *v8; // rdx
  __int64 v10; // rax

  if ( a5 == -1 )
  {
    v7 = *(_DWORD *)(a1 + 56);
    if ( a6 )
      v8 = *(__int64 **)(a1 + 248);
    else
      v8 = *(__int64 **)(a1 + 240);
  }
  else
  {
    v7 = 1;
    if ( a6 )
      v10 = *(_QWORD *)(a1 + 248);
    else
      v10 = *(_QWORD *)(a1 + 240);
    v8 = (__int64 *)(v10 + 8LL * a5);
  }
  return VidSchSignalSyncObjectsFromGpu(v7, v8, 1u, a2, 0, a3);
}
