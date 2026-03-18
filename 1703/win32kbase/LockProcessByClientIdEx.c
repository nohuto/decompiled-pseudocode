/*
 * XREFs of LockProcessByClientIdEx @ 0x1C008BF84
 * Callers:
 *     xxxDwmCheckProcessSession @ 0x1C008BF30 (xxxDwmCheckProcessSession.c)
 *     UserFindBaseWindowHandle @ 0x1C00E6A4C (UserFindBaseWindowHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LockProcessByClientIdEx(void *a1, PEPROCESS *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx

  result = PsLookupProcessByProcessId(a1, a2);
  v6 = result;
  if ( result >= 0 )
  {
    if ( a3 )
      *a3 = PsGetProcessSessionId(*a2);
    return v6;
  }
  return result;
}
