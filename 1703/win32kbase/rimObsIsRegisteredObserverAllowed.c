/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C01152C4
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C0099C1C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C010C8E0 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0115200 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ApiSetIsProcessForeground @ 0x1C013D1F8 (ApiSetIsProcessForeground.c)
 */

__int64 __fastcall rimObsIsRegisteredObserverAllowed(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ProcessWin32Process; // rax

  v2 = 1;
  if ( !(unsigned int)RIMIsTestSigningOn() )
  {
    if ( !RIMIsRunningOnMobile() )
      return 0;
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 32));
    if ( !(unsigned int)ApiSetIsProcessForeground(*(unsigned int *)(ProcessWin32Process + 56))
      && !(unsigned int)rimIsProcessLocalSystem(*(struct _EPROCESS **)(a1 + 32)) )
    {
      return 0;
    }
  }
  return v2;
}
