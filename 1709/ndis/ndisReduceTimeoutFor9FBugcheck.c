/*
 * XREFs of ndisReduceTimeoutFor9FBugcheck @ 0x1C00F995C
 * Callers:
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ndisReduceTimeoutFor9FBugcheck(__int64 a1, unsigned int *a2)
{
  BOOLEAN result; // al
  ULONG v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  result = PoQueryWatchdogTime(*(PDEVICE_OBJECT *)(a1 + 3856), &SecondsRemaining);
  if ( result )
  {
    v4 = SecondsRemaining;
    if ( SecondsRemaining < 3 )
      v4 = 3;
    v5 = 3000;
    v6 = 1000 * v4 - 3000;
    if ( v6 >= 0xBB8 )
      v5 = v6;
    if ( v5 < *a2 )
      *a2 = v5;
    return 1;
  }
  return result;
}
