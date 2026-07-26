/*
 * XREFs of ndisMRestoreOpenHandlers @ 0x1C0012060
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00185E4 (ndisIndicateStatusInternal.c)
 *     ndisMResetCompleteStage2 @ 0x1C0060A74 (ndisMResetCompleteStage2.c)
 *     ndisDevicePowerOn @ 0x1C00F5400 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C00F58C0 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMiniportXStateClearFlag @ 0x1C0022404 (ndisMiniportXStateClearFlag.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 */

__int64 __fastcall ndisMRestoreOpenHandlers(__int64 a1, __int64 a2)
{
  char v2; // di
  int v4; // ecx
  __int64 result; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx

  v2 = a2;
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    WPP_SF_qD(88LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1, a2) )
  {
    v6 = *(_QWORD *)(a1 + 2056);
    if ( v6 && !*(_BYTE *)(v6 + 384) )
      *(_QWORD *)(v6 + 640) = ndisFilterIndicateReceiveNetBufferLists;
    v7 = *(_QWORD **)(a1 + 56);
    *(_DWORD *)(a1 + 2676) = *(_DWORD *)(a1 + 2680);
    *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
    result = (__int64)ndisOpenCancelSendNetBufferLists;
    for ( *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists; v7; v7 = (_QWORD *)v7[49] )
    {
      v7[12] = v7[72];
      v7[21] = v7[70];
      v7[37] = v7[71];
      result = (__int64)ndisMReset;
      v7[22] = ndisMReset;
      v7[23] = ndisLegacyRequest;
      v7[24] = ndisMOidRequest;
      v7[103] = ndisMDirectOidRequest;
    }
  }
  else
  {
    result = (unsigned int)Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0LL )
      result = Template_jqxq(
                 v4,
                 (unsigned int)&KeptMiniportFakeHandlers,
                 (int)a1 + 4032,
                 (int)a1 + 4032,
                 *(_DWORD *)(a1 + 4080),
                 *(_QWORD *)(a1 + 4048),
                 *(_BYTE *)(a1 + 930));
    if ( (*(_BYTE *)(a1 + 930) & 2) != 0 )
    {
      for ( result = *(_QWORD *)(a1 + 56); result; result = *(_QWORD *)(result + 392) )
      {
        *(_QWORD *)(result + 184) = ndisLegacyRequest;
        *(_QWORD *)(result + 192) = ndisMOidRequest;
        *(_QWORD *)(result + 824) = ndisMDirectOidRequest;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092614 >= 4u )
    return WPP_SF_q(89LL, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
  return result;
}
