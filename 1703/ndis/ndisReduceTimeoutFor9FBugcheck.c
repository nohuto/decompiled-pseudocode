/*
 * XREFs of ndisReduceTimeoutFor9FBugcheck @ 0x1C00B58E8
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ndisReduceTimeoutFor9FBugcheck(__int64 a1, unsigned int *a2)
{
  BOOLEAN result; // al
  ULONG v4; // eax
  unsigned int v5; // ecx
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  result = PoQueryWatchdogTime(*(PDEVICE_OBJECT *)(a1 + 3856), &SecondsRemaining);
  if ( result )
  {
    v4 = SecondsRemaining;
    if ( SecondsRemaining < 3 )
      v4 = 3;
    v5 = 1000 * v4 - 3000;
    if ( v5 < 0xBB8 )
      v5 = 3000;
    if ( v5 < *a2 )
      *a2 = v5;
    return 1;
  }
  return result;
}
