/*
 * XREFs of AcpipAllocatePciBusState @ 0x1C0030A70
 * Callers:
 *     IsPciBusAsync @ 0x1C00313DC (IsPciBusAsync.c)
 * Callees:
 *     <none>
 */

char *AcpipAllocatePciBusState()
{
  char *PoolWithTag; // rbx
  KIRQL v1; // al
  __int64 v2; // rcx
  _BYTE *v3; // rdx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x46706341u);
  if ( !PoolWithTag )
  {
    v1 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
    v2 = 0LL;
    v3 = &unk_1C0066C68;
    while ( *v3 )
    {
      v2 = (unsigned int)(v2 + 1);
      v3 += 144;
      if ( (unsigned int)v2 >= 4 )
        goto LABEL_7;
    }
    *((_BYTE *)&gPreAllocPciPool + 144 * v2 + 136) = 1;
    PoolWithTag = (char *)&gPreAllocPciPool + 144 * v2;
LABEL_7:
    KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v1);
  }
  return PoolWithTag;
}
