/*
 * XREFs of CcRegisterExternalCache @ 0x14015C840
 * Callers:
 *     <none>
 * Callees:
 *     CcAddExternalCache @ 0x14015C8C4 (CcAddExternalCache.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi

  v2 = 0;
  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x1950uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x43456343u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *v6 = a1;
    CcAddExternalCache(v6);
    *a2 = v6;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
