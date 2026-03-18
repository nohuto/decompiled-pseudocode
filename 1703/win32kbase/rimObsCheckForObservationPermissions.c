/*
 * XREFs of rimObsCheckForObservationPermissions @ 0x1C0115698
 * Callers:
 *     NtRIMAddInputObserver @ 0x1C00FF7D0 (NtRIMAddInputObserver.c)
 *     NtRIMUpdateInputObserverRegistration @ 0x1C0100000 (NtRIMUpdateInputObserverRegistration.c)
 * Callees:
 *     RIMIsRunningOnMobile @ 0x1C000A090 (RIMIsRunningOnMobile.c)
 *     RIMIsTestSigningOn @ 0x1C010C8E0 (RIMIsTestSigningOn.c)
 *     ?rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0115200 (-rimIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall rimObsCheckForObservationPermissions(char a1)
{
  unsigned int v1; // ebx
  int v2; // edi
  int v3; // esi
  BOOL v4; // ebp
  int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _EPROCESS *CurrentProcess; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = 1;
  v2 = a1 & 2;
  v3 = a1 & 1;
  v4 = RIMIsRunningOnMobile();
  v5 = RIMIsTestSigningOn();
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7, v6, v8, v9);
  if ( (unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
    return v1;
  if ( !v5 )
  {
    if ( !v4 )
      return 0;
    if ( !v3 )
      goto LABEL_10;
    if ( !v2 )
      return 0;
  }
  if ( v3 )
  {
    v13 = 0;
    RtlInitUnicodeString(&DestinationString, L"inputObservation");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v13) < 0 || !v13 )
      v1 = 0;
  }
LABEL_10:
  if ( v2 )
  {
    v13 = 0;
    RtlInitUnicodeString(&DestinationString, L"inputSuppression");
    if ( (int)RtlCapabilityCheck(0LL, &DestinationString, &v13) < 0 || !v13 )
      return 0;
  }
  return v1;
}
