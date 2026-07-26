/*
 * XREFs of ndisReduceTimeoutFor9FBugcheck @ 0x1C00B8A28
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B860C (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisReduceTimeoutFor9FBugcheck(__int64 a1, unsigned int *a2)
{
  ULONG v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // eax
  ULONG SecondsRemaining; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 || !PoQueryWatchdogTime(*(PDEVICE_OBJECT *)(a1 + 3856), &SecondsRemaining) )
    return 0;
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
