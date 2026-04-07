/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18006C508
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006C444 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x18006CDB0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000C1A0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CFFC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180030C10 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180036334 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18006CA74 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  int v9; // r10d
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // r8
  int RectangleGeometry; // eax
  char *v15; // r14
  int v16; // eax
  __int64 i; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  int v28; // r8d
  __int64 v29; // r9
  int v30; // edx
  __int64 v31; // r8
  int v32; // eax
  char *v33; // r14
  int v34; // eax
  __int64 j; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // eax
  int GeometryFromHRGN; // eax
  __int128 v48; // [rsp+90h] [rbp-19h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-1h]
  __int128 v51; // [rsp+B0h] [rbp+7h] BYREF

  v3 = 0;
  SetRectEmpty((LPRECT)a2);
  SetRectEmpty((LPRECT)((char *)a2 + 40));
  SetRectEmpty((LPRECT)a2 + 5);
  *((_QWORD *)a2 + 12) = CreateRectRgn(0, 0, 0, 0);
  v5 = 0;
  if ( !*((_DWORD *)this + 82) )
  {
LABEL_5:
    *((_BYTE *)a2 + 128) = !IsRectEmpty((const RECT *)a2);
    *((_BYTE *)a2 + 129) = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    if ( *((_BYTE *)a2 + 128) )
    {
      v9 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      v10 = 0LL;
      v11 = *((unsigned int *)a2 + 1);
      v12 = *((_DWORD *)a2 + 3) - v11;
      if ( v12 >= 0 )
        v10 = (unsigned int)v12;
      v13 = 0LL;
      if ( v9 >= 0 )
        v13 = (unsigned int)v9;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(unsigned int *)a2,
                            v11,
                            v13,
                            v10,
                            (struct CResource **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RectangleGeometry, 0x50Bu);
        return v3;
      }
      v15 = (char *)a2 + 24;
      if ( !*((_QWORD *)a2 + 3) )
      {
        v16 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 3);
        v3 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x50Fu);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v48 + i) = (float)*((int *)a2 + i);
      v18 = *(_QWORD *)v15;
      v49 = 0LL;
      v50 = 0LL;
      v19 = *(_QWORD *)(*((_QWORD *)this + 64) + 16LL);
      if ( v19 )
        v20 = *(_DWORD *)(v19 + 24);
      else
        v20 = 0;
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v18 + 16) + 992LL))(
              *(_QWORD *)(v18 + 16),
              *(unsigned int *)(v18 + 24),
              &v48,
              &v49,
              0,
              0,
              v20,
              0);
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x51Fu);
        return v3;
      }
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v15 + 16LL) + 1000LL))(
              *(_QWORD *)(*(_QWORD *)v15 + 16LL),
              *(unsigned int *)(*(_QWORD *)v15 + 24LL));
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x522u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 4) )
      {
        v24 = CCachedVisualImageBrushResource::Create(v23, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 4);
        v3 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x527u);
          return v3;
        }
      }
      v25 = *((_QWORD *)a2 + 4);
      v26 = *(_QWORD *)v15;
      v51 = _xmm;
      v48 = _xmm;
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v25 + 16) + 1192LL))(
              *(_QWORD *)(v25 + 16),
              *(unsigned int *)(v25 + 24),
              *(unsigned int *)(*((_QWORD *)this + 59) + 24LL),
              &v51,
              &v48,
              *(_DWORD *)(*((_QWORD *)this + 59) + 24LL),
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              *(_DWORD *)(v26 + 24));
      v3 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x545u);
        return v3;
      }
    }
    if ( *((_BYTE *)a2 + 129) )
    {
      v28 = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11);
      v29 = 0LL;
      v30 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      if ( v28 >= 0 )
        v29 = (unsigned int)v28;
      v31 = 0LL;
      if ( v30 >= 0 )
        v31 = (unsigned int)v30;
      v32 = ResourceHelper::CreateRectangleGeometry(
              *((unsigned int *)a2 + 10),
              *((unsigned int *)a2 + 11),
              v31,
              v29,
              (struct CResource **)a2 + 7);
      v3 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x550u);
        return v3;
      }
      v33 = (char *)a2 + 64;
      if ( !*((_QWORD *)a2 + 8) )
      {
        v34 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 8);
        v3 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x554u);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v48 + j) = (float)*((int *)a2 + j + 10);
      v36 = *(_QWORD *)v33;
      v49 = 0LL;
      v50 = 0LL;
      v37 = *(_QWORD *)(*((_QWORD *)this + 66) + 16LL);
      if ( v37 )
        v38 = *(_DWORD *)(v37 + 24);
      else
        v38 = 0;
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v36 + 16) + 992LL))(
              *(_QWORD *)(v36 + 16),
              *(unsigned int *)(v36 + 24),
              &v48,
              &v49,
              0,
              0,
              v38,
              0);
      v3 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x564u);
        return v3;
      }
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v33 + 16LL) + 1000LL))(
              *(_QWORD *)(*(_QWORD *)v33 + 16LL),
              *(unsigned int *)(*(_QWORD *)v33 + 24LL));
      v3 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x567u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 9) )
      {
        v42 = CCachedVisualImageBrushResource::Create(v41, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)a2 + 9);
        v3 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x56Bu);
          return v3;
        }
      }
      v43 = *((_QWORD *)a2 + 9);
      v44 = *(_QWORD *)v33;
      v51 = _xmm;
      v48 = _xmm;
      v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v43 + 16) + 1192LL))(
              *(_QWORD *)(v43 + 16),
              *(unsigned int *)(v43 + 24),
              *(unsigned int *)(*((_QWORD *)this + 60) + 24LL),
              &v51,
              &v48,
              *(_DWORD *)(*((_QWORD *)this + 60) + 24LL),
              0,
              0,
              1,
              1,
              0,
              0,
              0,
              0,
              0,
              0,
              *(_DWORD *)(v44 + 24));
      v3 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x589u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(*((HRGN *)a2 + 12), (struct CResource **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, GeometryFromHRGN, 0x58Bu);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 38) + 40LL * v5);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 50);
    if ( v7 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitorHelper(v6, v7, a2);
      v3 = updated;
      if ( updated < 0 )
        break;
    }
    if ( ++v5 >= *((_DWORD *)this + 82) )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x4FBu);
  return v3;
}
