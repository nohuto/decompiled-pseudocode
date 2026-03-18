/*
 * XREFs of ValidateTimerCallback @ 0x1C00F2078
 * Callers:
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     NtUserValidateTimerCallback @ 0x1C00F2030 (NtUserValidateTimerCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateTimerCallback(__int64 a1)
{
  int v1; // eax

  if ( *(_DWORD *)(a1 + 608) <= 0x501u )
    v1 = *(_DWORD *)(a1 + 624);
  else
    v1 = 0;
  return (v1 & 0x1000000) != 0
      && (*(_DWORD *)(a1 + 464) & 0xC) == 0
      && PsGetProcessId(**(PEPROCESS **)(a1 + 400)) != (HANDLE)gpidLogon;
}
