/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00D94DC
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00D9594 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C001802C (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0044008 (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00DC5EC (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C01033F8 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_Z(0x23u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, &SourceString->Length);
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
  if ( (unsigned __int8)byte_1C009260C >= 4u )
    WPP_SF_q(0x24u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids, 0LL);
  return (unsigned int)v3;
}
