/*
 * XREFs of sub_1800DC28C @ 0x1800DC28C
 * Callers:
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x1800303B0 (LdrGetProcedureAddressForCaller.c)
 *     RtlInitString @ 0x18003AB50 (RtlInitString.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     _wcsicmp @ 0x1800976A0 (_wcsicmp.c)
 */

__int64 sub_1800DC28C()
{
  __int64 i; // rbx
  void *v2; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  _STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  PVOID *Callback; // [rsp+48h] [rbp+0h]
  PVOID ProcedureAddress; // [rsp+50h] [rbp+8h] BYREF

  for ( i = qword_18015A570; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_18015A570 )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(void **)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitString(&DestinationString, "VerifierStopMessage");
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v2, &DestinationString, 0, &ProcedureAddress, 0, Callback);
  if ( ProcedureAddressForCaller >= 0 )
    qword_18015AE08 = (__int64)ProcedureAddress;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddressForCaller;
}
