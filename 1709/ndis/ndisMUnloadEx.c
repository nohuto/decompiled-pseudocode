/*
 * XREFs of ndisMUnloadEx @ 0x1C00AC0B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ndisMInvokeDriverUnload @ 0x1C00AC16C (ndisMInvokeDriverUnload.c)
 */

void __fastcall ndisMUnloadEx(PDRIVER_OBJECT DriverObject)
{
  char *DriverObjectExtension; // rbp
  char *v3; // rsi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, (__int64)DriverObject);
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E4D4944);
  v3 = (char *)IoGetDriverObjectExtension(DriverObject, (PVOID)0x4E494944);
  if ( DriverObjectExtension )
    ndisMInvokeDriverUnload(DriverObjectExtension, DriverObject);
  if ( v3 )
    ndisMInvokeDriverUnload(v3, DriverObject);
  if ( DriverObjectExtension )
  {
    KeWaitForSingleObject(DriverObjectExtension + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(DriverObjectExtension + 368));
  }
  if ( v3 )
  {
    KeWaitForSingleObject(v3 + 368, Executive, 0, 0, 0LL);
    KeClearEvent((PRKEVENT)(v3 + 368));
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqq(0x65u, &WPP_94bf37800e1134dcb4e413b6850d45c3_Traceguids, DriverObject, DriverObjectExtension, v3);
}
