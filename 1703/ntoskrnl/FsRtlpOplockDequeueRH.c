/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x14004FB70
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140019A38 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlUninitializeOplock @ 0x140029950 (FsRtlUninitializeOplock.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x140052940 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140050ED4 (IoGetOplockFullFoExt.c)
 */

_QWORD *__fastcall FsRtlpOplockDequeueRH(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v4; // r9
  __int64 v5; // rcx
  _QWORD *result; // rax

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24), a2, a3, a1);
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  v5 = *v4;
  result = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*result != v4 )
    __fastfail(3u);
  *result = v5;
  *(_QWORD *)(v5 + 8) = result;
  return result;
}
