/*
 * XREFs of VrpAllocateKeyContext @ 0x140708118
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x14070AD00 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14070B60C (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall VrpAllocateKeyContext(PVOID Object)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x67655256u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    ObfReferenceObjectWithTag(Object, 0x67655256u);
    v3[5] = Object;
  }
  return v3;
}
