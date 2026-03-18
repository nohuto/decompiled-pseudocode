/*
 * XREFs of HUBHTX_AckPortChangeUsingControlTransfer @ 0x1C0003CC4
 * Callers:
 *     HUBPSM20_AckingConnectChangeOnResume @ 0x1C000F310 (HUBPSM20_AckingConnectChangeOnResume.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dL @ 0x1C0002930 (WPP_RECORDER_SF_dL.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_AckPortChangeUsingControlTransfer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]

  v5 = *(_BYTE *)(a1 + 168) & 0x1C;
  *(_BYTE *)(a1 + 169) = 1;
  *(_BYTE *)(a1 + 168) = v5 | 0x23;
  v6 = *(unsigned __int16 *)(a1 + 12);
  *(_WORD *)(a1 + 170) = v6;
  *(_DWORD *)(a1 + 172) = *(unsigned __int16 *)(a1 + 200);
  WPP_RECORDER_SF_dL(*(_QWORD *)(a1 + 1432), v6, a3, a4, v8);
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
  *(_DWORD *)(a1 + 12) = 1000;
  if ( (int)result < 0 )
  {
    LODWORD(v9) = result;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      4u,
      0x2Du,
      (__int64)&WPP_657f02cd6e64326733be7ab9e49a31de_Traceguids,
      v9);
    return (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 1240))(a1, 3008LL);
  }
  return result;
}
