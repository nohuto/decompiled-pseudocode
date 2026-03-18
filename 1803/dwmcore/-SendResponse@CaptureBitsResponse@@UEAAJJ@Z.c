/*
 * XREFs of ?SendResponse@CaptureBitsResponse@@UEAAJJ@Z @ 0x18001E310
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180020454 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180021138 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CaptureBitsResponse::SendResponse(CaptureBitsResponse *this, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  CLegacySurfaceManager *v6; // rcx
  int v8; // [rsp+30h] [rbp-28h] BYREF
  __int128 v9; // [rsp+34h] [rbp-24h]
  __int64 v10; // [rsp+44h] [rbp-14h]

  v8 = 2;
  v9 = 0uLL;
  v10 = 0LL;
  LODWORD(v10) = *((_DWORD *)this + 25);
  HIDWORD(v10) = a2;
  if ( a2 >= 0 )
  {
    *(_QWORD *)((char *)&v9 + 4) = *((_QWORD *)this + 14);
    HIDWORD(v9) = *((_DWORD *)this + 32);
  }
  v4 = CChannelContext::PostMessageToChannel(*((CChannelContext **)this + 6), (const struct MIL_MESSAGE *)&v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x89u);
  }
  else if ( a2 >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  v6 = (CLegacySurfaceManager *)(*((_QWORD *)this + 3) + 96LL);
  *((_BYTE *)this + 33) = 1;
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(v6);
  return v5;
}
