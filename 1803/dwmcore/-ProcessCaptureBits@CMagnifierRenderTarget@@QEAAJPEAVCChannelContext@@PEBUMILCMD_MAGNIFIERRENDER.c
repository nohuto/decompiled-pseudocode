/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x18015A828
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18001F788 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x18015AE68 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18015B1E0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xxddffff @ 0x18015B394 (McTemplateU0xxddffff.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18016DCB8 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x180172F94 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x1801730B0 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x180173110 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  MagnifierCaptureBitsResponse *v3; // rdi
  bool v7; // zf
  int v8; // ebx
  unsigned __int64 v9; // rcx
  MagnifierCaptureBitsResponse *v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int updated; // eax
  unsigned __int64 v15; // rcx
  MagnifierCaptureBitsResponse *v16; // rax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned int v21; // [rsp+20h] [rbp-58h]
  float v22; // [rsp+48h] [rbp-30h]
  struct WICRect v23; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0LL;
  v23.X = 0;
  v23.Y = 0;
  v7 = (*((_BYTE *)a3 + 24) & 2) == 0;
  v23.Width = *((_DWORD *)a3 + 2);
  v23.Height = *((_DWORD *)a3 + 3);
  if ( v7 )
  {
    *((_BYTE *)this + 266) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                this,
                a2,
                (const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
    v11 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x9Eu);
    }
    else
    {
      *((_BYTE *)this + 265) = 1;
      *((_BYTE *)this + 264) = *((_BYTE *)a3 + 24) & 1;
      v16 = (MagnifierCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v15);
      if ( v16 )
        v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
               v16,
               *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 80LL),
               this,
               a2,
               &v23,
               *((_QWORD *)a3 + 2));
      if ( !v3 )
      {
        v21 = 176;
        goto LABEL_6;
      }
      *((_DWORD *)v3 + 4) = 0;
      v17 = CResponseItem::QueueResponse(v3);
      v11 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xBDu);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v22 = *((double *)a3 + 8);
        McTemplateU0xxddffff(
          v19,
          v18,
          *((_QWORD *)this + 44),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          *((_DWORD *)a3 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
          v22,
          *(_QWORD *)&v23.X,
          *(_QWORD *)&v23.Width);
      }
    }
  }
  else
  {
    v8 = CMagnifierRenderTarget::StopSlicer(this);
    v10 = (MagnifierCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v9);
    if ( v10 )
      v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
             v10,
             *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 80LL),
             this,
             a2,
             &v23,
             *((_QWORD *)a3 + 2));
    if ( !v3 )
    {
      v21 = 133;
LABEL_6:
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v21);
      return v11;
    }
    *((_DWORD *)v3 + 4) = 0;
    if ( v8 < 0 )
    {
      v13 = MagnifierCaptureBitsResponse::SendResponse(v3, v8);
      v11 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x94u);
    }
    else
    {
      v12 = MagnifierCaptureBitsResponse::OnPresentComplete(v3);
      v11 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x90u);
    }
  }
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v11;
}
