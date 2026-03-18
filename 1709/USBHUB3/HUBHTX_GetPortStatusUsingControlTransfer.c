/*
 * XREFs of HUBHTX_GetPortStatusUsingControlTransfer @ 0x1C0003B98
 * Callers:
 *     HUBPSM20_GettingPortStatusInWaitingForStopSuspend @ 0x1C000EE40 (HUBPSM20_GettingPortStatusInWaitingForStopSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBMISC_ControlTransfer @ 0x1C002A20C (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_GetPortStatusUsingControlTransfer(__int64 a1)
{
  char v1; // al
  unsigned __int16 v3; // di
  __int64 result; // rax
  int v5; // [rsp+28h] [rbp-40h]
  __int64 v6; // [rsp+28h] [rbp-40h]

  v1 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 0;
  *(_BYTE *)(a1 + 168) = v1 | 0xA3;
  *(_WORD *)(a1 + 172) = *(_WORD *)(a1 + 200);
  if ( (*(_DWORD *)(a1 + 204) & 0x100) != 0 )
  {
    *(_WORD *)(a1 + 170) = 2;
    v3 = 8;
  }
  else
  {
    *(_WORD *)(a1 + 170) = 0;
    v3 = 4;
  }
  *(_WORD *)(a1 + 174) = v3;
  v5 = *(unsigned __int16 *)(a1 + 200);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1 + 1432),
    4u,
    4u,
    0x28u,
    (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
    v5);
  result = HUBMISC_ControlTransfer(
             *(_QWORD *)a1,
             *(_QWORD *)(*(_QWORD *)a1 + 240LL),
             a1,
             (int)a1 + 16,
             (__int64)HUBHTX_PortControlTransferComplete,
             a1 + 184,
             v3,
             0,
             *(_BYTE *)(*(_QWORD *)a1 + 2264LL));
  if ( (int)result < 0 )
  {
    LODWORD(v6) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x29u,
      (__int64)&WPP_c9133184bb0b3c65ec7754ef3e1e0957_Traceguids,
      v6);
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
