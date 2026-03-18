/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1801482EC
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x18007FA74 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NU_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AE28 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  __int64 v2; // xmm0_8
  int v4; // eax
  signed int CurrentDisplaySet; // eax
  CDisplaySet *v6; // r14
  unsigned int v7; // esi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  char v11; // di
  unsigned int v12; // r9d
  unsigned int v13; // r8d
  signed int ScratchRenderTargetBitmap; // eax
  __int64 v15; // r8
  unsigned int v16; // r10d
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  signed int v22; // eax
  int v24; // [rsp+38h] [rbp-41h]
  int v25; // [rsp+38h] [rbp-41h]
  CDisplaySet *v26; // [rsp+70h] [rbp-9h] BYREF
  int v27; // [rsp+78h] [rbp-1h]
  const char *v28; // [rsp+80h] [rbp+7h] BYREF
  int v29; // [rsp+88h] [rbp+Fh]
  __int64 v30; // [rsp+90h] [rbp+17h] BYREF
  int v31; // [rsp+98h] [rbp+1Fh]

  v1 = *((_DWORD *)this + 27);
  v2 = *(_QWORD *)((char *)this + 100);
  v26 = 0LL;
  v30 = v2;
  v31 = v1;
  v4 = v2;
  if ( (_DWORD)v2 == 88 )
    v4 = 87;
  v28 = 0LL;
  LODWORD(v30) = v4;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)0x57, &v26);
  v6 = v26;
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDisplaySet, 0x19Au);
  }
  else
  {
    v8 = *((unsigned int *)v26 + 10);
    v9 = DisplayId::All;
    v10 = (__int64)g_luidZero;
    if ( (unsigned int)v8 < *((_DWORD *)v26 + 18) )
      v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v26 + 6) + 8 * v8) + 224LL);
    v11 = (char)v28;
    v12 = *((_DWORD *)this + 23);
    v13 = *((_DWORD *)this + 22);
    v26 = (CDisplaySet *)"DWM Scratch Rendertarget (capturebits)";
    v27 = 38;
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v26,
                                  v13,
                                  v12,
                                  (char)v28,
                                  0,
                                  (__int64)&v30,
                                  v24,
                                  v10,
                                  DisplayId::All,
                                  0,
                                  0,
                                  (_QWORD *)this + 9);
    v7 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ScratchRenderTargetBitmap, 0x1AEu);
      v15 = *((_QWORD *)v6 + 2);
      v16 = 0;
      v17 = 0LL;
      if ( *(_DWORD *)(v15 + 88) )
      {
        while ( 1 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v15 + 64) + 8 * v17);
          if ( *(_DWORD *)(v18 + 296) == 5140 && *(_DWORD *)(v18 + 300) == 140 )
            break;
          v17 = (unsigned int)(v17 + 1);
          if ( (unsigned int)v17 >= *(_DWORD *)(v15 + 88) )
            goto LABEL_13;
        }
        v16 = v17;
      }
LABEL_13:
      v19 = *(_QWORD *)(v15 + 64);
      v20 = *((_DWORD *)this + 23);
      v21 = *((_DWORD *)this + 22);
      v28 = "DWM Scratch Rendertarget (capturebits)";
      v29 = 38;
      v22 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v28,
              v21,
              v20,
              v11,
              0,
              (__int64)&v30,
              v25,
              *(_QWORD *)(*(_QWORD *)(v19 + 8LL * v16) + 336LL),
              v9,
              0,
              0,
              (_QWORD *)this + 9);
      v7 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x1BFu);
    }
  }
  if ( v6 )
    CDisplaySet::Release(v6);
  return v7;
}
