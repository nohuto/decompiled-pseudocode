/*
 * XREFs of ndisMRestoreOpenHandlers @ 0x1C000F7E0
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0017E84 (ndisIndicateStatusInternal.c)
 *     ndisMResetCompleteStage2 @ 0x1C00614CC (ndisMResetCompleteStage2.c)
 *     ndisDevicePowerOn @ 0x1C0100560 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C0100A70 (ndisDevicePowerDown.c)
 * Callees:
 *     ndisMiniportXStateClearFlag @ 0x1C0016708 (ndisMiniportXStateClearFlag.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisMRestoreOpenHandlers(__int64 a1, __int64 a2)
{
  char v2; // di
  int v4; // ecx
  __int64 (__fastcall *v5)(); // r9
  __int64 result; // rax
  __int64 v7; // rax
  _QWORD *v8; // rcx

  v2 = a2;
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_qD(92LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1, a2) )
  {
    v7 = *(_QWORD *)(a1 + 2056);
    if ( v7 && !*(_BYTE *)(v7 + 384) )
      *(_QWORD *)(v7 + 640) = ndisFilterIndicateReceiveNetBufferLists;
    v8 = *(_QWORD **)(a1 + 56);
    *(_DWORD *)(a1 + 2676) = *(_DWORD *)(a1 + 2680);
    *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
    result = (__int64)ndisOpenCancelSendNetBufferLists;
    *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists;
    if ( v8 )
    {
      v5 = ndisMDirectOidRequest;
      do
      {
        v8[12] = v8[72];
        v8[21] = v8[70];
        v8[37] = v8[71];
        result = (__int64)ndisMReset;
        v8[22] = ndisMReset;
        v8[23] = ndisLegacyRequest;
        v8[24] = ndisMOidRequest;
        v8[103] = ndisMDirectOidRequest;
        v8 = (_QWORD *)v8[49];
      }
      while ( v8 );
    }
  }
  else
  {
    result = (unsigned int)Microsoft_Windows_NDISEnableBits;
    if ( (Microsoft_Windows_NDISEnableBits & 0x80u) != 0 )
      result = McTemplateK0jqxq(
                 v4,
                 (unsigned int)&KeptMiniportFakeHandlers,
                 (int)a1 + 4032,
                 (int)a1 + 4032,
                 *(_DWORD *)(a1 + 4080),
                 *(_QWORD *)(a1 + 4048),
                 *(_BYTE *)(a1 + 930));
    if ( (*(_BYTE *)(a1 + 930) & 2) != 0 )
    {
      result = *(_QWORD *)(a1 + 56);
      if ( result )
      {
        v5 = ndisMDirectOidRequest;
        do
        {
          *(_QWORD *)(result + 184) = ndisLegacyRequest;
          *(_QWORD *)(result + 192) = ndisMOidRequest;
          *(_QWORD *)(result + 824) = ndisMDirectOidRequest;
          result = *(_QWORD *)(result + 392);
        }
        while ( result );
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    return WPP_SF_q(93LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v5);
  return result;
}
