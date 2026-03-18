/*
 * XREFs of HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold @ 0x1C000F730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfDeviceIsConnectedOnPortChangeInD3Cold(__int64 a1)
{
  unsigned __int16 v1; // ax
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_WORD *)(*(_QWORD *)(a1 + 960) + 184LL);
  if ( (v1 & 1) != 0 )
    return 3089LL;
  v2 = ((((v1 >> 5) & 0xF) - 6) & 0xFFFB) == 0;
  result = 3005LL;
  if ( v2 )
    return 3089LL;
  return result;
}
