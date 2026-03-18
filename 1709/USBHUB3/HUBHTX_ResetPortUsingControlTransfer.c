/*
 * XREFs of HUBHTX_ResetPortUsingControlTransfer @ 0x1C0003DD0
 * Callers:
 *     HUBPSM20_InitiatingResetPort @ 0x1C000EA40 (HUBPSM20_InitiatingResetPort.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_ResetPortUsingControlTransfer(__int64 a1)
{
  char v2; // al
  __int64 result; // rax
  int v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+28h] [rbp-30h]

  *(_DWORD *)(a1 + 8) = 3061;
  v2 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 3;
  *(_WORD *)(a1 + 170) = 4;
  *(_BYTE *)(a1 + 168) = v2 | 0x23;
  *(_WORD *)(a1 + 172) = *(_WORD *)(a1 + 200);
  *(_WORD *)(a1 + 174) = 0;
  v4 = *(unsigned __int16 *)(a1 + 200);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 1432),
    4u,
    4u,
    0x2Eu,
    (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
    v4);
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 240LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             0LL,
             0,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2264LL));
  if ( (int)result < 0 )
  {
    LODWORD(v5) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x2Fu,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v5);
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
