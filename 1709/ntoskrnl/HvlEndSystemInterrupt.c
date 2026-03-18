/*
 * XREFs of HvlEndSystemInterrupt @ 0x14017D6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void HvlEndSystemInterrupt()
{
  if ( !_bittestandreset((signed __int32 *)KeGetPcr()->Prcb.VirtualApicAssist, 0) )
    __writemsr(0x40000070u, 0LL);
}
