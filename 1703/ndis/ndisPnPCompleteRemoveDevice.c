/*
 * XREFs of ndisPnPCompleteRemoveDevice @ 0x1C00BE9A0
 * Callers:
 *     ndisWdfDeviceObjectCleanup @ 0x1C0064A7C (ndisWdfDeviceObjectCleanup.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisIsMiniportStarted @ 0x1C0019CC0 (ndisIsMiniportStarted.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00BEA64 (ndisIfRemoveIfBlockMiniportAssociation.c)
 *     ndisMInvokeRemoveDevice @ 0x1C00BF6B0 (ndisMInvokeRemoveDevice.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(__int64 a1)
{
  unsigned int v2; // edi
  void (__fastcall *v3)(_QWORD); // rax
  __int64 v4; // rcx

  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x59u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, a1);
  v2 = 1;
  if ( (ndisIsMiniportStarted((struct _NDIS_MINIPORT_BLOCK *)a1) || (*(_DWORD *)(a1 + 120) & 0x80u) != 0)
    && *(_DWORD *)(a1 + 1524) == 1
    && (*(_DWORD *)(a1 + 124) & 0x4000) == 0 )
  {
    v2 = 2;
  }
  v3 = *(void (__fastcall **)(_QWORD))(a1 + 4872);
  if ( v3 )
    v3(*(_QWORD *)(a1 + 4896));
  ndisMInvokeRemoveDevice(a1);
  IoDeleteSymbolicLink(*(PUNICODE_STRING *)(a1 + 4200));
  if ( *(_QWORD *)(a1 + 4184) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 4176));
    *(_QWORD *)(a1 + 4184) = 0LL;
  }
  v4 = *(_QWORD *)(a1 + 4064);
  *(_DWORD *)(a1 + 4084) = v2;
  if ( v4 )
    ndisIfRemoveIfBlockMiniportAssociation(v4, a1, v2);
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_q(0x5Au, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, a1);
}
