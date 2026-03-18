/*
 * XREFs of PiPnpRtlGatherContainerRemoveInfo @ 0x140696C24
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x140696B80 (PiPnpRtlFreeContainerRemoveInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherContainerRemoveInfo(_WORD *a1, _WORD *a2, unsigned int ***a3)
{
  __int64 *PoolWithTag; // rax
  int Object; // ebx

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x47706E50u);
  *a3 = (unsigned int **)PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreeContainerRemoveInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  Object = PiDmGetObject(1, a1, PoolWithTag);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  Object = PiDmGetObject(5, a2, (__int64 *)*a3 + 1);
  if ( Object == -1073741772 )
    Object = 0;
  if ( Object < 0 )
    goto LABEL_8;
  return (unsigned int)Object;
}
