/*
 * XREFs of HUBDESC_InternalValidateLastInterface @ 0x1C002D4D8
 * Callers:
 *     HUBDESC_InternalValidateInterfaceDescriptor @ 0x1C002EFD0 (HUBDESC_InternalValidateInterfaceDescriptor.c)
 *     HUBDESC_ValidateConfigurationDescriptorSet @ 0x1C002F7F4 (HUBDESC_ValidateConfigurationDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C002C7F8 (WPP_RECORDER_SF_DDDD.c)
 *     HUBDESC_ShouldEnforceWin8ValidationImmutable @ 0x1C002CC90 (HUBDESC_ShouldEnforceWin8ValidationImmutable.c)
 *     HUBDESC_InternalValidateLastEndpoint @ 0x1C002D3DC (HUBDESC_InternalValidateLastEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateLastInterface(__int64 a1, int *a2, __int64 a3)
{
  int *v4; // rdi
  int v6; // eax
  char v7; // si
  int v9; // [rsp+20h] [rbp-38h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v10 = 0;
    v4 = &v10;
  }
  v6 = *(_DWORD *)(a1 + 256);
  v7 = 1;
  if ( (v6 & 1) != 0 )
  {
    HUBDESC_InternalValidateLastEndpoint(a1, v4, a3);
    if ( *v4 != 1 && *(_BYTE *)(a1 + 185) != *(_BYTE *)(a1 + 184) )
    {
      if ( HUBDESC_ShouldEnforceWin8ValidationImmutable(a1) || *(_BYTE *)(a1 + 13) )
        *v4 = 2;
      WPP_RECORDER_SF_DDDD(a3, *(unsigned __int8 *)(a1 + 184), *(unsigned __int8 *)(a1 + 185), 0x1Bu, v9);
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 107LL);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 1;
  }
  if ( *v4 )
  {
    v7 = 0;
    WPP_RECORDER_SF_(a3, 2u, 5u, 0x1Cu, (__int64)&WPP_5b4d017512d138c94e3b39cc69d57afb_Traceguids);
  }
  return v7;
}
