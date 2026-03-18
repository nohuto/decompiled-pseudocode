/*
 * XREFs of VrpAllocateKeyContext @ 0x1406A3AA8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1406A6674 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x1406A6F7C (VrpPreLoadKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
