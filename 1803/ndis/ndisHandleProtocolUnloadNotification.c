/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00E4FFC
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CADD4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001A8FC (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00E7E80 (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C010E318 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_Z(0x1Fu, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, &SourceString->Length);
  v3 = ndisReferenceProtocolByName(SourceString);
  if ( v3 >= 0 )
  {
    ndisDereferenceProtocol(0LL, v2, 5u);
    if ( MEMORY[0x88] )
    {
      MEMORY[0x88]();
    }
    else if ( MEMORY[0x90] )
    {
      ndisInvokeUninstall(0LL);
    }
    else
    {
      v3 = -1073741823;
    }
  }
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_q(0x20u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids, 0LL);
  return (unsigned int)v3;
}
