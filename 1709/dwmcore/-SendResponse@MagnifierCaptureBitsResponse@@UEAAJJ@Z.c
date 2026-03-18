/*
 * XREFs of ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18014A2E0
 * Callers:
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18014A280 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18000B0A8 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0xxq @ 0x18013B6E0 (McTemplateU0xxq.c)
 */

__int64 __fastcall MagnifierCaptureBitsResponse::SendResponse(MagnifierCaptureBitsResponse *this, int a2, __int64 a3)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-38h]
  _DWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  __int64 v12; // [rsp+44h] [rbp-14h]

  v10[0] = 17;
  v10[1] = 0;
  v11 = 0LL;
  v12 = 0LL;
  v10[2] = a2;
  if ( a2 >= 0 )
  {
    a3 = *(unsigned int *)(*((_QWORD *)this + 18) + 616LL);
    LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 18) + 616LL);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CConnection ***)this + 6), (const struct MIL_MESSAGE *)v10, a3);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x8Du);
  *((_BYTE *)this + 33) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LODWORD(v9) = a2;
    McTemplateU0xxq(
      v6,
      &EVTDESC_ETWGUID_MAGNIFIERRENDERTARGET_CAPTUREBITS_Stop,
      *(_QWORD *)(*((_QWORD *)this + 18) + 296LL),
      *((_QWORD *)this + 19),
      v9);
  }
  return v7;
}
