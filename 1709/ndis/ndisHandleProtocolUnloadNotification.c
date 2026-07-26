/*
 * XREFs of ndisHandleProtocolUnloadNotification @ 0x1C00E389C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00C5E14 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0006BC0 (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     ndisInvokeUninstall @ 0x1C00E662C (ndisInvokeUninstall.c)
 *     ndisReferenceProtocolByName @ 0x1C010C388 (ndisReferenceProtocolByName.c)
 */

__int64 __fastcall ndisHandleProtocolUnloadNotification(PCUNICODE_STRING SourceString)
{
  __int64 v2; // rdx
  int v3; // edi

  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_Z(0x1Fu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, &SourceString->Length);
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
  if ( (unsigned __int8)byte_1C009874C >= 4u )
    WPP_SF_q(0x20u, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, 0LL);
  return (unsigned int)v3;
}
