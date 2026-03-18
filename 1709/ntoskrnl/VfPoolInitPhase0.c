/*
 * XREFs of VfPoolInitPhase0 @ 0x1407B7714
 * Callers:
 *     VfInitVerifierComponents @ 0x1407A7380 (VfInitVerifierComponents.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 */

void VfPoolInitPhase0()
{
  unsigned int v0; // eax
  int v1; // ecx

  if ( (MmVerifierData & 0xFBF) != 0 )
  {
    v0 = VfPoolTracesLength;
    if ( (unsigned int)VfPoolTracesLength >= 0x10000 )
    {
      v1 = 0x100000;
      if ( (unsigned int)VfPoolTracesLength <= 0x100000 )
      {
        while ( (v1 & VfPoolTracesLength) == 0 )
        {
          v1 >>= 1;
          if ( v1 < 0x10000 )
            goto LABEL_10;
        }
        v0 = v1 & VfPoolTracesLength;
        VfPoolTracesLength &= v1;
      }
      else
      {
        v0 = 0x100000;
        VfPoolTracesLength = 0x100000;
      }
    }
    else
    {
      v0 = 0x10000;
      VfPoolTracesLength = 0x10000;
    }
LABEL_10:
    VfPoolTraces = (__int64)ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              (unsigned __int64)v0 << 7,
                              0x54506656u,
                              HighPoolPriority);
  }
}
