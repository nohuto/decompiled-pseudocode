/*
 * XREFs of rimObsIsRegisteredObserverAllowed @ 0x1C0113D8C
 * Callers:
 *     rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C00A490C (rimObsRouteInputAndCheckForExclusiveObservers.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C000E954 (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C0107EB4 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0113CC8 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ApiSetIsProcessForeground @ 0x1C013C6C4 (ApiSetIsProcessForeground.c)
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
