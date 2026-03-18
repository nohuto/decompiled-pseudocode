/*
 * XREFs of KiDetectAmdSsbdSupport @ 0x1401A5F9C
 * Callers:
 *     KiDetectBpbMsr @ 0x140171D04 (KiDetectBpbMsr.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiDetectAmdSsbdSupport(int a1, __int16 *a2)
{
  __int16 v2; // ax

  v2 = *a2;
  if ( (a1 & 0x1000000) != 0 )
  {
    v2 |= 0x40u;
    *a2 = v2;
  }
  if ( (a1 & 0x4000000) != 0 )
  {
    v2 |= 0xC0u;
    *a2 = v2;
  }
  return (v2 & 0x40) != 0;
}
