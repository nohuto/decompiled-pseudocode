/*
 * XREFs of HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer @ 0x1C00240B4
 * Callers:
 *     HUBDSM_SendingMsOs20AltEnumCmdOnReenum @ 0x1C001B7B0 (HUBDSM_SendingMsOs20AltEnumCmdOnReenum.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_ControlTransfer @ 0x1C002AF70 (HUBMISC_ControlTransfer.c)
 */

void __fastcall HUBDTX_SendMsOs20AltEnumCommandUsingControlTransfer(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+28h] [rbp-30h]

  *(_BYTE *)(a1 + 400) = 64;
  *(_BYTE *)(a1 + 401) = *(_BYTE *)(a1 + 2052);
  *(_BYTE *)(a1 + 403) = *(_BYTE *)(a1 + 2487);
  *(_BYTE *)(a1 + 402) = 0;
  *(_DWORD *)(a1 + 404) = 8;
  v2 = HUBMISC_ControlTransfer(
         *(_QWORD *)a1,
         *(_QWORD *)(a1 + 24),
         a1,
         (int)a1 + 248,
         (__int64)HUBDTX_ControlTransferComplete,
         0LL,
         0,
         1,
         *(_BYTE *)(a1 + 1512));
  if ( v2 >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2468), 1u);
  }
  else
  {
    LODWORD(v3) = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x31u,
      (__int64)&WPP_0a0f952dc11639804361b505720162cd_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 504, 4004);
  }
}
