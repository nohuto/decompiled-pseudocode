/*
 * XREFs of ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z @ 0x180082A6C
 * Callers:
 *     ?SyncTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z @ 0x1800806D0 (-SyncTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z.c)
 *     ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x18013A520 (-SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z.c)
 *     ?SyncMetaBitmapRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@IAEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAI@Z @ 0x18013A5E0 (-SyncMetaBitmapRenderTargetCaptureBits@CChannel@@UEAAJIII_KU-$TMILFlagsEnum@W4FlagsEnum@MilRende.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SyncFlush@CChannel@@UEAAJXZ @ 0x180082920 (-SyncFlush@CChannel@@UEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::SendSyncCommand(CChannel *this, void *a2, unsigned int a3, struct MIL_MESSAGE *a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // xmm1_8

  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  v6 = CChannel::SendCommand(this, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xDFu);
  }
  else
  {
    v8 = CChannel::SyncFlush(this);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xE2u);
    }
    else if ( a4 )
    {
      v9 = *((_DWORD *)this + 38);
      v10 = *((_QWORD *)this + 18);
      *(_OWORD *)a4 = *((_OWORD *)this + 8);
      *((_QWORD *)a4 + 2) = v10;
      *((_DWORD *)a4 + 6) = v9;
    }
  }
  return v7;
}
