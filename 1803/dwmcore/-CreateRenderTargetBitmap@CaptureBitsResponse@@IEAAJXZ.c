/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180170ADC
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18001E650 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplaySet@@QEBA?AU_LUID@@XZ @ 0x18000A7E8 (-GetPrimaryAdapterLuid@CDisplaySet@@QEBA-AU_LUID@@XZ.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x180017E6C (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18001F1FC (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800B6AE8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  __int64 v2; // xmm0_8
  int v4; // eax
  int CurrentDisplaySet; // eax
  CDisplaySet *v6; // r14
  unsigned int v7; // esi
  int v8; // ebx
  struct _LUID *PrimaryAdapterLuid; // rax
  int v10; // edi
  int ScratchRenderTargetBitmap; // eax
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r9d
  unsigned int v18; // r8d
  int v19; // eax
  int v21; // [rsp+38h] [rbp-41h]
  int v22; // [rsp+38h] [rbp-41h]
  CDisplaySet *v23; // [rsp+70h] [rbp-9h] BYREF
  __int64 v24; // [rsp+78h] [rbp-1h]
  const char *v25; // [rsp+80h] [rbp+7h] BYREF
  int v26; // [rsp+88h] [rbp+Fh]
  __int64 v27; // [rsp+90h] [rbp+17h] BYREF
  int v28; // [rsp+98h] [rbp+1Fh]

  v1 = *((_DWORD *)this + 27);
  v2 = *(_QWORD *)((char *)this + 100);
  v23 = 0LL;
  v27 = v2;
  v28 = v1;
  v4 = v2;
  if ( (_DWORD)v2 == 88 )
    v4 = 87;
  v24 = 0LL;
  LODWORD(v27) = v4;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)0x57, &v23);
  v6 = v23;
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentDisplaySet, 0x198u);
  }
  else
  {
    v8 = DisplayId::All;
    v25 = "DWM Scratch Rendertarget (capturebits)";
    v26 = 38;
    PrimaryAdapterLuid = (struct _LUID *)CDisplaySet::GetPrimaryAdapterLuid(v23, (struct _LUID *)&v23);
    v10 = v24;
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v25,
                                  *((_DWORD *)this + 22),
                                  *((_DWORD *)this + 23),
                                  v24,
                                  0,
                                  (__int64)&v27,
                                  v21,
                                  *PrimaryAdapterLuid,
                                  v8,
                                  0,
                                  0,
                                  (_QWORD *)this + 9);
    v7 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x1ACu);
      v12 = *((_QWORD *)v6 + 2);
      v13 = 0;
      v14 = 0LL;
      if ( *(_DWORD *)(v12 + 88) )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(v12 + 64) + 8 * v14);
          if ( *(_DWORD *)(v15 + 296) == 5140 && *(_DWORD *)(v15 + 300) == 140 )
            break;
          v14 = (unsigned int)(v14 + 1);
          if ( (unsigned int)v14 >= *(_DWORD *)(v12 + 88) )
            goto LABEL_11;
        }
        v13 = v14;
      }
LABEL_11:
      v16 = *(_QWORD *)(v12 + 64);
      v17 = *((_DWORD *)this + 23);
      v18 = *((_DWORD *)this + 22);
      v25 = "DWM Scratch Rendertarget (capturebits)";
      v26 = 38;
      v19 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v25,
              v18,
              v17,
              v10,
              0,
              (__int64)&v27,
              v22,
              *(struct _LUID *)(*(_QWORD *)(v16 + 8LL * v13) + 336LL),
              v8,
              0,
              0,
              (_QWORD *)this + 9);
      v7 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1BDu);
    }
  }
  if ( v6 )
    CDisplaySet::Release(v6);
  return v7;
}
