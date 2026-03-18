/*
 * XREFs of ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180154A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceRect@CBitmapRealization@@QEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801303E0 (-GetSourceRect@CBitmapRealization@@QEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180154DC8 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180155050 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x1801551E4 (-GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z.c)
 *     ?RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z @ 0x180175A84 (-RecordDirectFlipState@CCompositionSurfaceInfo@@QEBAJ_K_N@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Activate(CDirectFlipInfo *this)
{
  int v1; // esi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  struct CBitmapRealization *RenderingRealizationNoRef; // r14
  bool v8; // dl
  int v9; // eax
  int CurrentDXGIResource; // eax
  int v11; // eax
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 v15; // rbx
  unsigned int v16; // eax
  int v17; // eax
  float v19; // [rsp+30h] [rbp-50h]
  __int64 *v20; // [rsp+38h] [rbp-48h] BYREF
  struct IDXGIResource *v21; // [rsp+40h] [rbp-40h] BYREF
  struct _LUID v22; // [rsp+48h] [rbp-38h] BYREF
  float v23[4]; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v24[4]; // [rsp+60h] [rbp-20h] BYREF

  v1 = *((_DWORD *)this + 16);
  v20 = 0LL;
  v3 = *((_QWORD *)this + 2);
  v21 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct _LUID *, _QWORD, _QWORD))(*(_QWORD *)v3 + 104LL))(v3, &v22, 0LL, 0LL);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x12Fu);
  }
  else if ( v1 == 4 || (v6 = CDirectFlipInfo::CheckIndependentFlipSupport(this, (bool *)this + 85), v5 = v6, v6 >= 0) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                      + 4));
    v8 = !*((_BYTE *)this + 48) && *(_DWORD *)(*((_QWORD *)this + 4) + 76LL) != -1;
    v9 = CDirectFlipInfo::EnsureIndependentFlipState(this, v8, 0);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x144u);
    }
    else
    {
      CurrentDXGIResource = CDirectFlipInfo::GetCurrentDXGIResource(this, v22, &v21);
      v5 = CurrentDXGIResource;
      if ( CurrentDXGIResource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDXGIResource, 0x146u);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x149u);
        }
        else
        {
          CBitmapRealization::GetSourceRect((__int64)RenderingRealizationNoRef, (__int64)v23);
          v12 = v23[0] + 6291456.25;
          v24[0] = (int)(LODWORD(v12) << 10) >> 11;
          v13 = v23[1] + 6291456.25;
          v24[1] = (int)(LODWORD(v13) << 10) >> 11;
          v14 = v23[2] + 6291456.25;
          v24[2] = (int)(LODWORD(v14) << 10) >> 11;
          v19 = v23[3] + 6291456.25;
          v24[3] = (int)(LODWORD(v19) << 10) >> 11;
          v15 = *v20;
          v16 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 13) + 56LL))((__int64)RenderingRealizationNoRef + 104);
          v17 = (*(__int64 (__fastcall **)(__int64 *, struct IDXGIResource *, _QWORD, _DWORD *))(v15 + 336))(
                  v20,
                  v21,
                  v16,
                  v24);
          v5 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x154u);
          }
          else
          {
            *((_DWORD *)this + 16) = 4;
            if ( v1 != 4 )
              CCompositionSurfaceInfo::RecordDirectFlipState(
                *((CCompositionSurfaceInfo **)this + 4),
                *((_QWORD *)this + 9),
                1);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x133u);
  }
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v20);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v21);
  return v5;
}
