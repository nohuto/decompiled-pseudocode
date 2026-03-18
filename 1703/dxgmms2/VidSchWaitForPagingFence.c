/*
 * XREFs of VidSchWaitForPagingFence @ 0x1C00ACE6C
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00586F0 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C005D200 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005560 (VidSchWaitForSingleSyncObject.c)
 */

_UNKNOWN **__fastcall VidSchWaitForPagingFence(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  unsigned int v5; // ebx
  __int64 v9; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a4 )
  {
    result = &retaddr;
    v5 = a4;
    v9 = 0LL;
    do
    {
      if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 56) )
        break;
      if ( (v5 & 1) != 0 )
        result = (_UNKNOWN **)VidSchWaitForSingleSyncObject(*(_QWORD *)(*(_QWORD *)(a1 + 232) + 8 * v9), a2, a3);
      v9 = (unsigned int)(v9 + 1);
      v5 >>= 1;
    }
    while ( v5 );
  }
  return result;
}
