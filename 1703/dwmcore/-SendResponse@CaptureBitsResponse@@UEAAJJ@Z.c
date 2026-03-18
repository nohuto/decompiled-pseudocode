/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x1800AFCD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18007E104 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800B0300 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edi
  CLegacySurfaceManager *v7; // rcx
  int v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+44h] [rbp-14h]

  v9 = 2;
  v10 = 0uLL;
  v11 = 0LL;
  LODWORD(v11) = *((_DWORD *)this + 25);
  HIDWORD(v11) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v10 + 4) = *((_QWORD *)this + 14);
    HIDWORD(v10) = *((_DWORD *)this + 32);
  }
  v5 = CChannelContext::PostMessageToChannel(*((CConnection ***)this + 6), (const struct MIL_MESSAGE *)&v9, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA3u);
  }
  else if ( a2 >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v7);
  return v6;
}
