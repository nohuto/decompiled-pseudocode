/*
 * XREFs of ?MetaBitmapRenderTarget_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180130F30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800B01E8 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x18013F1F0 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     Template_xxddffff @ 0x18013FD74 (Template_xxddffff.c)
 *     ?ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x180148964 (-ProcessUpdateParams@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMAGN_UPDATE_TEXTURES_P.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x180148CD0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18014A72C (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18014A830 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 *     ?SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z @ 0x18014A890 (-SendResponse@MagnifierCaptureBitsResponse@@UEAAJJ@Z.c)
 */

__int64 __fastcall CComposition::MetaBitmapRenderTarget_CaptureBits(
        struct CSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *a4)
{
  MagnifierCaptureBitsResponse *v5; // rdi
  unsigned int v9; // edx
  int v10; // r8d
  CMagnifierRenderTarget *Resource; // rax
  struct CResourceTable *v12; // rdx
  CMagnifierRenderTarget *v13; // rbp
  int v14; // ebx
  unsigned __int64 v15; // rcx
  MagnifierCaptureBitsResponse *v16; // rcx
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // eax
  int updated; // eax
  unsigned __int64 v21; // rcx
  MagnifierCaptureBitsResponse *v22; // rax
  int v23; // eax
  int v24; // edx
  int v25; // ecx
  float v27; // [rsp+48h] [rbp-30h]
  struct WICRect v28; // [rsp+50h] [rbp-28h] BYREF

  v5 = 0LL;
  v28.X = 0;
  v28.Y = 0;
  v9 = *((_DWORD *)a4 + 1);
  v28.Width = *((_DWORD *)a4 + 2);
  v28.Height = *((_DWORD *)a4 + 3);
  if ( v9 && v9 < *((_DWORD *)a3 + 7) )
    v10 = *(_DWORD *)(v9 * *((_DWORD *)a3 + 6) + *((_QWORD *)a3 + 5));
  else
    v10 = 0;
  if ( v10 != 58
    || (Resource = (CMagnifierRenderTarget *)CResourceTable::GetResource((__int64)a3, v9, 0x3Au), (v13 = Resource) == 0LL) )
  {
    v17 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x9D3u);
    return v17;
  }
  if ( (*((_BYTE *)a4 + 24) & 2) != 0 )
  {
    v14 = CMagnifierRenderTarget::StopSlicer(Resource);
    v16 = (MagnifierCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v15);
    if ( v16 )
      v5 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(v16, this[5], v13, a2, &v28, *((_QWORD *)a4 + 2));
    if ( !v5 )
    {
      v17 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9E5u);
      return v17;
    }
    *((_DWORD *)v5 + 4) = 0;
    if ( v14 < 0 )
    {
      v19 = MagnifierCaptureBitsResponse::SendResponse(v5, v14);
      v17 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x9F3u);
    }
    else
    {
      v18 = MagnifierCaptureBitsResponse::OnPresentComplete(v5);
      v17 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x9EFu);
    }
  }
  else
  {
    *((_BYTE *)Resource + 288) = 1;
    updated = CMagnifierRenderTarget::ProcessUpdateParams(
                Resource,
                v12,
                (const struct MILCMD_METABITMAPRENDERTARGET_CAPTUREBITS *)((char *)a4 + 32));
    v17 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x9FDu);
    }
    else
    {
      *((_BYTE *)v13 + 201) = 1;
      *((_BYTE *)v13 + 200) = *((_BYTE *)a4 + 24) & 1;
      v22 = (MagnifierCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v21);
      if ( v22 )
        v5 = MagnifierCaptureBitsResponse::MagnifierCaptureBitsResponse(
               v22,
               this[5],
               v13,
               a2,
               &v28,
               *((_QWORD *)a4 + 2));
      if ( !v5 )
      {
        v17 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA0Fu);
        return v17;
      }
      *((_DWORD *)v5 + 4) = 0;
      v23 = CResponseItem::QueueResponse(v5);
      v17 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xA1Bu);
      }
      else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v27 = *((double *)a4 + 8);
        Template_xxddffff(
          v25,
          v24,
          *((_QWORD *)v13 + 37),
          *((_QWORD *)a4 + 2),
          *((_DWORD *)a4 + 8),
          *((_DWORD *)a4 + 9),
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 5)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 6)).m128_i8[0],
          _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)a4 + 7)).m128_i8[0],
          v27,
          *(_QWORD *)&v28.X,
          *(_QWORD *)&v28.Width);
      }
    }
  }
  if ( v5 )
    CMILRefCountBase::Release(v5);
  return v17;
}
