/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180148C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011B170 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180148FD0 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180149268 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x1801493F8 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x1801497F8 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x18017CAA0 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  int v1; // esi
  __int64 v3; // rcx
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  struct CBitmapRealization *RenderingRealizationNoRef; // r14
  bool v8; // bl
  signed int v9; // eax
  signed int CurrentDXGIResource; // eax
  signed int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // rbx
  __int64 v16; // rax
  signed int v17; // eax
  float v19; // [rsp+40h] [rbp-9h]
  __int64 *v20; // [rsp+48h] [rbp-1h] BYREF
  struct IDXGIResource *v21; // [rsp+50h] [rbp+7h] BYREF
  void *v22; // [rsp+58h] [rbp+Fh] BYREF
  struct _LUID v23; // [rsp+60h] [rbp+17h] BYREF
  float v24[4]; // [rsp+68h] [rbp+1Fh] BYREF
  _DWORD v25[4]; // [rsp+78h] [rbp+2Fh] BYREF

  v1 = *((_DWORD *)this + 14);
  v20 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v21 = 0LL;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD))(*(_QWORD *)v3 + 88LL))(v3, &v23, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x12Cu);
  }
  else if ( v1 == 4 || (v6 = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 77), v5 = v6, v6 >= 0) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                      + 4));
    v8 = *((int *)this + 15) < 2 && *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) != -1;
    CDirectFlipInfo::UpdateHDRMetaData(this, (const void **)&v22);
    v9 = CDirectFlipInfo::EnsureIndependentFlipState(this, v8, 0);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x143u);
    }
    else
    {
      CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource(this, v23, &v21);
      v5 = CurrentDXGIResource;
      if ( CurrentDXGIResource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CurrentDXGIResource, 0x145u);
      }
      else
      {
        v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 2))(
                *((_QWORD *)this + 2),
                &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
                &v20);
        v5 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x148u);
        }
        else
        {
          CBitmapRealization::GetSourceRect((__int64)RenderingRealizationNoRef, (__int64)v24);
          v12 = v24[0] + 6291456.25;
          v25[0] = (int)(LODWORD(v12) << 10) >> 11;
          v13 = v24[1] + 6291456.25;
          v25[1] = (int)(LODWORD(v13) << 10) >> 11;
          v14 = v24[2] + 6291456.25;
          v25[2] = (int)(LODWORD(v14) << 10) >> 11;
          v19 = v24[3] + 6291456.25;
          v25[3] = (int)(LODWORD(v19) << 10) >> 11;
          v15 = *v20;
          v16 = (*(__int64 (__fastcall **)(__int64, float *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
                  (__int64)RenderingRealizationNoRef + 144,
                  v24);
          v17 = (*(__int64 (__fastcall **)(__int64 *, struct IDXGIResource *, _QWORD, _QWORD, void *, _DWORD *))(v15 + 344))(
                  v20,
                  v21,
                  *(unsigned int *)(v16 + 8),
                  *((unsigned int *)this + 24),
                  v22,
                  v25);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0x155u);
          }
          else
          {
            *((_DWORD *)this + 14) = 4;
            if ( v1 != 4 )
              CCompositionSurfaceInfo::RecordDirectFlipState(
                *((CCompositionSurfaceInfo **)this + 4),
                *((_QWORD *)this + 8),
                1);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x130u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v20);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v21);
  return v5;
}
