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
  unsigned __int64 v2; // rbx
  int ProcedureAddressForCaller; // ebx
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  for ( i = qword_18015A570; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_18015A570 )
      goto LABEL_5;
    if ( !wcsicmp(*(const wchar_t **)(i + 24), L"verifier.dll") )
      break;
  }
  v2 = *(_QWORD *)(*(_QWORD *)(i + 32) + 48LL);
  if ( !v2 )
  {
LABEL_5:
    DbgPrint("AVRF: Failed to find verifier.dll among loaded providers! \n");
    return 3221225473LL;
  }
  RtlInitString(&DestinationString, "VerifierStopMessage");
  ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(v2, (const void **)&DestinationString, 0, &v6, 0, retaddr);
  if ( ProcedureAddressForCaller >= 0 )
    qword_18015AE08 = v6;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddressForCaller;
}
