/*
 * XREFs of RegisterHvPepIdleStatesV2 @ 0x1C002B9A4
 * Callers:
 *     RegisterHvIdleStates @ 0x1C002B510 (RegisterHvIdleStates.c)
 * Callees:
 *     GetHvPpmCapabilities @ 0x1C002ABD0 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C002AE28 (RegisterHvCStates.c)
 *     RegisterVmIdleStates @ 0x1C002BECC (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvPepIdleStatesV2(__int64 a1)
{
  int v2; // ebx
  bool v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = RegisterHvCStates(a1);
  if ( v2 >= 0 )
  {
    GetHvPpmCapabilities(0LL, &v4, 0LL);
    if ( v4 )
      return (unsigned int)RegisterVmIdleStates(a1);
  }
  return (unsigned int)v2;
}
