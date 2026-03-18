/*
 * XREFs of ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800200D8
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18001CF54 (-AddUnclaimedToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z @ 0x18001D024 (-GetLegacyTokens@CLegacySurfaceManager@@QEAAJ_KPEAIPEAH@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180020454 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

__int64 __fastcall CSurfaceManager::ProcessLegacyTokens(CSurfaceManager *this, unsigned __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r12d
  unsigned int v4; // r15d
  unsigned __int64 v5; // rsi
  int v7; // eax
  int v8; // edi
  int v9; // esi
  int FrameLegacyTokens; // eax
  CLegacySurfaceManager *v11; // rcx
  unsigned int *v12; // r8
  unsigned int v13; // r14d
  __int64 v14; // rsi
  int v16; // eax
  int LegacyTokens; // eax
  unsigned int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r15d
  int v22; // eax
  char v23; // r14
  unsigned int v24; // ecx
  __int64 v25; // r9
  unsigned int i; // r8d
  unsigned int v27; // eax
  void *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-28h]
  int v33; // [rsp+30h] [rbp-18h] BYREF
  void *lpMem; // [rsp+38h] [rbp-10h]
  unsigned __int64 v35; // [rsp+90h] [rbp+48h] BYREF
  unsigned __int64 v36; // [rsp+98h] [rbp+50h]
  unsigned int v37; // [rsp+A0h] [rbp+58h] BYREF

  v36 = a2;
  v3 = 0;
  v4 = 0;
  v37 = 0;
  v5 = a2;
  v33 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Start);
  if ( *((_QWORD *)this + 38) )
  {
    if ( ++*((_DWORD *)this + 78) > 8u )
    {
      ++*((_DWORD *)this + 80);
      CLegacySurfaceManager::ReleaseCaptureBitsResponse((CSurfaceManager *)((char *)this + 96));
    }
  }
  v7 = *((_DWORD *)this + 56);
  v8 = 0;
  if ( v7 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Start);
      v7 = *((_DWORD *)this + 56);
    }
    v18 = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        v19 = *((_QWORD *)this + 25);
        LOBYTE(v35) = 0;
        ++*(_DWORD *)(v19 + 16LL * v18);
        v20 = *((_QWORD *)this + 25);
        v21 = *(_DWORD *)(v20 + 16LL * v18);
        lpMem = *(void **)(v20 + 16LL * v18 + 8);
        v22 = CLegacySurfaceManager::ProcessToken(
                (CSurfaceManager *)((char *)this + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)lpMem,
                a3,
                (bool *)&v35);
        v8 = v22;
        if ( v22 < 0 )
          break;
        v23 = v35;
        if ( (_BYTE)v35 || v21 > 0x64 )
        {
          v24 = *((_DWORD *)this + 56);
          if ( v18 >= v24 )
          {
            v8 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x108u);
            goto LABEL_35;
          }
          v25 = *((_QWORD *)this + 25);
          for ( i = v18; i < v24 - 1; v24 = *((_DWORD *)this + 56) )
          {
            v29 = 2LL * i;
            v30 = 2LL * ++i;
            *(_OWORD *)(v25 + 8 * v29) = *(_OWORD *)(v25 + 8 * v30);
          }
          v27 = v24 - 1;
          v8 = 0;
          v28 = lpMem;
          *((_DWORD *)this + 56) = v27;
          operator delete(v28);
          if ( !v23 )
            ++*((_DWORD *)this + 49);
          --v18;
        }
        if ( ++v18 >= *((_DWORD *)this + 56) )
          goto LABEL_35;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x100u);
LABEL_35:
      v4 = 0;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSDEFERREDTOKENS_Stop);
    v5 = v36;
  }
  if ( v8 < 0 )
  {
    v32 = 278;
    v31 = v8;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, v32);
    goto LABEL_13;
  }
  v35 = v5;
  v9 = 0;
  FrameLegacyTokens = NtDCompositionGetFrameLegacyTokens(&v35, &v37, &v33);
  if ( FrameLegacyTokens < 0 )
  {
    v9 = FrameLegacyTokens | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FrameLegacyTokens | 0x10000000, 0x17u);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_GetPresentHistory,
      (unsigned int)v9,
      v37);
  *((_DWORD *)this + 48) = v9;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      v13 = 0;
      v14 = *((_QWORD *)this + 65);
      v3 += v37;
      if ( v37 )
        break;
LABEL_12:
      if ( v33 )
      {
        ++v4;
        LegacyTokens = CLegacySurfaceManager::GetLegacyTokens(v11, v36, &v37, &v33);
        *((_DWORD *)this + 48) = LegacyTokens;
        if ( LegacyTokens >= 0 )
          continue;
      }
      goto LABEL_13;
    }
    while ( 1 )
    {
      LOBYTE(v35) = 0;
      v16 = CLegacySurfaceManager::ProcessToken(
              (CSurfaceManager *)((char *)this + 96),
              (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v14,
              v12,
              (bool *)&v35);
      v8 = v16;
      if ( v16 < 0 )
        break;
      if ( !(_BYTE)v35 )
      {
        v16 = CLegacySurfaceManager::AddUnclaimedToken(
                (CSurfaceManager *)((char *)this + 96),
                (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v14);
        v8 = v16;
        if ( v16 < 0 )
        {
          v32 = 312;
          goto LABEL_48;
        }
      }
      ++v13;
      v14 += *(unsigned int *)(v14 + 4);
      if ( v13 >= v37 )
        goto LABEL_12;
    }
    v32 = 305;
LABEL_48:
    v31 = v16;
    goto LABEL_50;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qq(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSPRESENTHISTORY_Stop,
      v3,
      v4);
  dword_1802D62EC += v3;
  return (unsigned int)v8;
}
