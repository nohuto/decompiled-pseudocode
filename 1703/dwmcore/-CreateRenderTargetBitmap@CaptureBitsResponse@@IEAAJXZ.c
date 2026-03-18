/*
 * XREFs of ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18014A044
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800B0004 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAUPixelFormatInfo@@_NAEBU_GUID@@U_LUID@@VDisplayId@@44PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001AF94 (-GetScratchRenderTargetBitmap@CD3DDeviceManager@@QEAAJAEBVCResourceTag@@IIUIntermediateRTUsage@@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::CreateRenderTargetBitmap(CaptureBitsResponse *this)
{
  int v1; // eax
  __int64 v2; // xmm0_8
  int v4; // eax
  int CurrentDisplaySet; // eax
  CDisplaySet *v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // edi
  struct _LUID v10; // rbx
  __int64 v11; // rax
  int v12; // esi
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  int ScratchRenderTargetBitmap; // eax
  __int64 v16; // r8
  unsigned int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct _LUID v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // r9d
  unsigned int v23; // r8d
  int v24; // eax
  __int64 v26; // [rsp+38h] [rbp-41h]
  __int64 v27; // [rsp+38h] [rbp-41h]
  CDisplaySet *v28; // [rsp+70h] [rbp-9h] BYREF
  int v29; // [rsp+78h] [rbp-1h]
  const char *v30; // [rsp+80h] [rbp+7h] BYREF
  int v31; // [rsp+88h] [rbp+Fh]
  __int64 v32; // [rsp+90h] [rbp+17h] BYREF
  int v33; // [rsp+98h] [rbp+1Fh]

  v1 = *((_DWORD *)this + 27);
  v2 = *(_QWORD *)((char *)this + 100);
  v28 = 0LL;
  v32 = v2;
  v33 = v1;
  v4 = v2;
  if ( (_DWORD)v2 == 88 )
    v4 = 87;
  v30 = 0LL;
  LODWORD(v32) = v4;
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet((CDisplayManager *)0x57, &v28);
  v6 = v28;
  v7 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x1B0u);
  }
  else
  {
    v8 = *((_DWORD *)v28 + 10);
    v9 = DisplayId::All;
    v10 = g_luidZero;
    if ( v8 < *((_DWORD *)v28 + 18) )
      v10 = *(struct _LUID *)(*(_QWORD *)(*((_QWORD *)v28 + 6) + 8LL * v8) + 224LL);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 8LL))(*((_QWORD *)this + 3) + 16LL);
    v12 = (int)v30;
    v13 = *((_DWORD *)this + 23);
    v14 = *((_DWORD *)this + 22);
    v28 = (CDisplaySet *)"DWM Scratch Rendertarget (capturebits)";
    v29 = 38;
    ScratchRenderTargetBitmap = CD3DDeviceManager::GetScratchRenderTargetBitmap(
                                  (CD3DDeviceManager *)&g_D3DDeviceManager,
                                  (__int64)&v28,
                                  v14,
                                  v13,
                                  (int)v30,
                                  0,
                                  (struct PixelFormatInfo *)&v32,
                                  v26,
                                  (struct _GUID *)(v11 + 324),
                                  v10,
                                  v9,
                                  0,
                                  0,
                                  (void **)this + 9);
    v7 = ScratchRenderTargetBitmap;
    if ( ScratchRenderTargetBitmap < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ScratchRenderTargetBitmap, 0x1C5u);
      v16 = *((_QWORD *)v6 + 2);
      v17 = 0;
      v18 = 0LL;
      if ( *(_DWORD *)(v16 + 88) )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v16 + 64) + 8 * v18);
          if ( *(_DWORD *)(v19 + 296) == 5140 && *(_DWORD *)(v19 + 300) == 140 )
            break;
          v18 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 88) )
            goto LABEL_13;
        }
        v17 = v18;
      }
LABEL_13:
      v20 = *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(v16 + 64) + 8LL * v17) + 336LL);
      v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 8LL))(*((_QWORD *)this + 3) + 16LL);
      v22 = *((_DWORD *)this + 23);
      v23 = *((_DWORD *)this + 22);
      v30 = "DWM Scratch Rendertarget (capturebits)";
      v31 = 38;
      v24 = CD3DDeviceManager::GetScratchRenderTargetBitmap(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              (__int64)&v30,
              v23,
              v22,
              v12,
              0,
              (struct PixelFormatInfo *)&v32,
              v27,
              (struct _GUID *)(v21 + 324),
              v20,
              v9,
              0,
              0,
              (void **)this + 9);
      v7 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x1D7u);
    }
  }
  if ( v6 )
    CDisplaySet::Release(v6);
  return v7;
}
