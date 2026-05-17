/*
 * XREFs of sub_1800D5A4C @ 0x1800D5A4C
 * Callers:
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     RtlInitString @ 0x1800404B0 (RtlInitString.c)
 *     _wcsicmp @ 0x18008CAD0 (_wcsicmp.c)
 */

__int64 sub_1800D5A4C()
{
  __int64 i; // rbx
  unsigned __int64 v2; // rbx
  int ProcedureAddressForCaller; // ebx
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  for ( i = qword_18015B590; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &qword_18015B590 )
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
    qword_18015BE28 = v6;
  else
    DbgPrint("AVRF: Failed to find `VerifierStopMessage()' export in verifier.dll! \n");
  return (unsigned int)ProcedureAddressForCaller;
}
