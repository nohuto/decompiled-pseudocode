/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B274
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005B874 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C004BE68 (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int16 v2; // si
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rdx
  char **v11; // rcx
  char *v12; // rdi
  char **v13; // rcx

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[22], *((void **)a2 + 19));
  v5 = *((_QWORD *)a2 + 17);
  *((_DWORD *)a2 + 32) = 2;
  if ( (*(_DWORD *)(v5 + 80) & 0x1000) == 0 )
    v2 = *(_DWORD *)(v5 + 16) + 1;
  *(_WORD *)(*((_QWORD *)a2 + 65) + 6LL) = v2;
  *(_QWORD *)(*((_QWORD *)a2 + 65) + 24LL) = *((_QWORD *)a2 + 18) + *(_QWORD *)(*((_QWORD *)a2 + 17) + 24LL);
  v6 = *((unsigned int *)this + 101);
  v7 = *((_QWORD *)a2 + 2);
  this[30] = (VIDMM_LINEAR_POOL *)((char *)this[30] + v7);
  v8 = *((_QWORD *)this[1] + 5150) + 280 * v6;
  *(_QWORD *)(v8 + 8LL * *((int *)this + 125) + 248) += v7;
  ++*((_DWORD *)this + 86);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&VIDMM_SEGMENT::_GlobalTotalBytesCommittedInAperture,
      *((_QWORD *)a2 + 2));
  v9 = (char *)a2 + 416;
  v10 = *((_QWORD *)a2 + 52);
  v11 = (char **)*((_QWORD *)a2 + 53);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v10 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416) || *v11 != v9 )
    __fastfail(3u);
  *v11 = (char *)v10;
  v12 = (char *)(this + 23);
  *(_QWORD *)(v10 + 8) = v11;
  v13 = (char **)*((_QWORD *)v12 + 1);
  if ( *v13 != v12 )
    __fastfail(3u);
  *(_QWORD *)v9 = v12;
  *((_QWORD *)a2 + 53) = v13;
  *v13 = v9;
  *((_QWORD *)v12 + 1) = v9;
}
