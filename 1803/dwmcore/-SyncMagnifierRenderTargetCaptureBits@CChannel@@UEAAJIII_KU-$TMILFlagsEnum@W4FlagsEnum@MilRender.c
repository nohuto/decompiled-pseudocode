/*
 * XREFs of ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@IAEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAI@Z @ 0x180145480
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800876A8 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::SyncMagnifierRenderTargetCaptureBits(
        CChannel *this,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // ebx
  _BYTE v17[8]; // [rsp+30h] [rbp-51h] BYREF
  int v18; // [rsp+38h] [rbp-49h]
  int v19; // [rsp+3Ch] [rbp-45h]
  _DWORD v20[4]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h]
  int v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+6Ch] [rbp-15h] BYREF
  __int128 v24; // [rsp+70h] [rbp-11h]
  __int128 v25; // [rsp+80h] [rbp-1h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+C0h] [rbp+3Fh] BYREF

  v27 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v20[0] = 252;
  memset_0(&v23, 0, 0x2CuLL);
  v21 = a5;
  v22 = a6;
  v23 = a7;
  v20[1] = a2;
  v20[2] = a3;
  v20[3] = a4;
  v13 = a8[1];
  v24 = *a8;
  v26 = *((_QWORD *)a8 + 4);
  v25 = v13;
  v14 = CChannel::SendSyncCommand(this, v20, 0x48u, (struct MIL_MESSAGE *)v17);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x7F1u);
  }
  else
  {
    v15 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x7F3u);
    else
      *a9 = v19;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v27);
  return v15;
}
