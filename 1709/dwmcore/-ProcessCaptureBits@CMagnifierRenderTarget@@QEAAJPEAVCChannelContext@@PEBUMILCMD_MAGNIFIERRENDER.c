/*
 * XREFs of ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x18007F028 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180137E08 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801389A8 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180138D20 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     McTemplateU0xxddffff @ 0x180138F44 (McTemplateU0xxddffff.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18014A178 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18014A280 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18014A2E0 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessCaptureBits(
        CMagnifierRenderTarget *this,
        struct CChannelContext *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *a3)
{
  MagnifierCaptureBitsResponse *v3; // rdi
  bool v7; // zf
  int v8; // ebx
  MagnifierCaptureBitsResponse *v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  signed int v12; // eax
  signed int updated; // eax
  MagnifierCaptureBitsResponse *v14; // rax
  signed int v15; // eax
  int v16; // edx
  int v17; // ecx
  unsigned int v19; // [rsp+20h] [rbp-58h]
  float v20; // [rsp+48h] [rbp-30h]
  struct WICRect v21; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0LL;
  v21.X = 0;
  v21.Y = 0;
  v7 = (*((_BYTE *)a3 + 24) & 2) == 0;
  v21.Width = *((_DWORD *)a3 + 2);
  v21.Height = *((_DWORD *)a3 + 3);
  if ( v7 )
  {
    *((_BYTE *)this + 210) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                this,
                a2,
                (const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)((char *)a3 + 32));
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0xA0u);
    }
    else
    {
      *((_BYTE *)this + 209) = 1;
      *((_BYTE *)this + 208) = *((_BYTE *)a3 + 24) & 1;
      v14 = (MagnifierCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
      if ( v14 )
        v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
               v14,
               *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 80LL),
               this,
               a2,
               &v21,
               *((_QWORD *)a3 + 2));
      if ( !v3 )
      {
        v19 = 178;
        goto LABEL_6;
      }
      *((_DWORD *)v3 + 4) = 0;
      v15 = CResponseItem::QueueResponse(v3);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0xBFu);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v20 = *((double *)a3 + 8);
        McTemplateU0xxddffff(
          v17,
          v16,
          *((_QWORD *)this + 37),
          *((_QWORD *)a3 + 2),
          *((_DWORD *)a3 + 8),
          *((_DWORD *)a3 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a3 + 7)).m128_i8[0],
          v20,
          *(_QWORD *)&v21.X,
          *(_QWORD *)&v21.Width);
      }
    }
  }
  else
  {
    v8 = CMagnifierRenderTarget::StopSlicer(this);
    v9 = (MagnifierCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v9 )
      v3 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
             v9,
             *(struct CSurfaceManager **)(*((_QWORD *)this + 2) + 80LL),
             this,
             a2,
             &v21,
             *((_QWORD *)a3 + 2));
    if ( !v3 )
    {
      v19 = 135;
LABEL_6:
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, v19);
      return v10;
    }
    *((_DWORD *)v3 + 4) = 0;
    if ( v8 < 0 )
    {
      v12 = MagnifierCaptureBitsResponse::SendResponse(v3, v8);
      v10 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x96u);
    }
    else
    {
      v11 = MagnifierCaptureBitsResponse::OnPresentComplete(v3);
      v10 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x92u);
    }
  }
  if ( v3 )
    CMILRefCountBase::Release(v3);
  return v10;
}
