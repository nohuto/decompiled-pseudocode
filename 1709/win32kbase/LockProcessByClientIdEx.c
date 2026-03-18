/*
 * XREFs of LockProcessByClientIdEx @ 0x1C0092324
 * Callers:
 *     LockProcessByClientId @ 0x1C00921C0 (LockProcessByClientId.c)
 *     xxxDwmCheckProcessSession @ 0x1C00922D0 (xxxDwmCheckProcessSession.c)
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
