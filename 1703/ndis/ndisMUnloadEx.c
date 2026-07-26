/*
 * XREFs of ndisMUnloadEx @ 0x1C00C0560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003CB3C (WPP_SF_qqq.c)
 *     ndisMInvokeDriverUnload @ 0x1C00C061C (ndisMInvokeDriverUnload.c)
 */

void __fastcall ndisMUnloadEx(PDRIVER_OBJECT DriverObject)
{
  char *DriverObjectExtension; // rbp
  char *v3; // rsi

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x64u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DriverObject);
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
    WPP_SF_qqq(0x65u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, DriverObject, DriverObjectExtension, v3);
}
