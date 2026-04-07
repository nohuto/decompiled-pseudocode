/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180076E30
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006EA10 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x1800776F0 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180014B70 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18001A770 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18003C20C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18003CCD8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800773B8 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  int v9; // ecx
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // edx
  int RectangleGeometry; // eax
  char *v14; // r14
  int v15; // eax
  __int64 i; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // r8d
  __int64 v28; // r9
  int v29; // edx
  __int64 v30; // r8
  int v31; // eax
  char *v32; // r14
  int v33; // eax
  __int64 j; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  int GeometryFromHRGN; // eax
  __int128 v47; // [rsp+90h] [rbp-19h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-1h]
  __int128 v50; // [rsp+B0h] [rbp+7h] BYREF

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
      v9 = *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1);
      v10 = 0LL;
      v11 = 0LL;
      v12 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      if ( v9 >= 0 )
        v10 = (unsigned int)v9;
      if ( v12 >= 0 )
        v11 = (unsigned int)v12;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(unsigned int *)a2,
                            *((unsigned int *)a2 + 1),
                            v11,
                            v10,
                            (struct CResource **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x50Bu);
        return v3;
      }
      v14 = (char *)a2 + 24;
      if ( !*((_QWORD *)a2 + 3) )
      {
        v15 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 3);
        v3 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x50Fu);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v47 + i) = (float)*(int *)((char *)&v47 + 4 * i + a2 - (struct LivePreviewResource *)&v47);
      v17 = *(_QWORD *)v14;
      v48 = 0LL;
      v49 = 0LL;
      v18 = *(_QWORD *)(*((_QWORD *)this + 64) + 16LL);
      if ( v18 )
        v19 = *(_DWORD *)(v18 + 24);
      else
        v19 = 0;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v17 + 16) + 992LL))(
              *(_QWORD *)(v17 + 16),
              *(unsigned int *)(v17 + 24),
              &v47,
              &v48,
              0,
              0,
              v19,
              0);
      v3 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x51Fu);
        return v3;
      }
      v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v14 + 16LL) + 1000LL))(
              *(_QWORD *)(*(_QWORD *)v14 + 16LL),
              *(unsigned int *)(*(_QWORD *)v14 + 24LL));
      v3 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x522u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 4) )
      {
        v23 = CCachedVisualImageBrushResource::Create(v22, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (__int64 *)a2 + 4);
        v3 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x527u);
          return v3;
        }
      }
      v24 = *((_QWORD *)a2 + 4);
      v25 = *(_QWORD *)v14;
      v50 = _xmm;
      v47 = _xmm;
      v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v24 + 16) + 1192LL))(
              *(_QWORD *)(v24 + 16),
              *(unsigned int *)(v24 + 24),
              *(unsigned int *)(*((_QWORD *)this + 59) + 24LL),
              &v50,
              &v47,
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
              *(_DWORD *)(v25 + 24));
      v3 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v26, 0x545u);
        return v3;
      }
    }
    if ( *((_BYTE *)a2 + 129) )
    {
      v27 = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11);
      v28 = 0LL;
      v29 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      if ( v27 >= 0 )
        v28 = (unsigned int)v27;
      v30 = 0LL;
      if ( v29 >= 0 )
        v30 = (unsigned int)v29;
      v31 = ResourceHelper::CreateRectangleGeometry(
              *((unsigned int *)a2 + 10),
              *((unsigned int *)a2 + 11),
              v30,
              v28,
              (struct CResource **)a2 + 7);
      v3 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x550u);
        return v3;
      }
      v32 = (char *)a2 + 64;
      if ( !*((_QWORD *)a2 + 8) )
      {
        v33 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 8);
        v3 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x554u);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v47 + j) = (float)*(int *)((char *)&v50 + 4 * j + a2 - (struct LivePreviewResource *)&v47 + 8);
      v35 = *(_QWORD *)v32;
      v48 = 0LL;
      v49 = 0LL;
      v36 = *(_QWORD *)(*((_QWORD *)this + 66) + 16LL);
      if ( v36 )
        v37 = *(_DWORD *)(v36 + 24);
      else
        v37 = 0;
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v35 + 16) + 992LL))(
              *(_QWORD *)(v35 + 16),
              *(unsigned int *)(v35 + 24),
              &v47,
              &v48,
              0,
              0,
              v37,
              0);
      v3 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v38, 0x564u);
        return v3;
      }
      v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v32 + 16LL) + 1000LL))(
              *(_QWORD *)(*(_QWORD *)v32 + 16LL),
              *(unsigned int *)(*(_QWORD *)v32 + 24LL));
      v3 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0x567u);
        return v3;
      }
      if ( !*((_QWORD *)a2 + 9) )
      {
        v41 = CCachedVisualImageBrushResource::Create(v40, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (__int64 *)a2 + 9);
        v3 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0x56Bu);
          return v3;
        }
      }
      v42 = *((_QWORD *)a2 + 9);
      v43 = *(_QWORD *)v32;
      v50 = _xmm;
      v47 = _xmm;
      v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v42 + 16) + 1192LL))(
              *(_QWORD *)(v42 + 16),
              *(unsigned int *)(v42 + 24),
              *(unsigned int *)(*((_QWORD *)this + 60) + 24LL),
              &v50,
              &v47,
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
              *(_DWORD *)(v43 + 24));
      v3 = v44;
      if ( v44 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x589u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(*((HRGN *)a2 + 12), (struct CResource **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x58Bu);
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
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x4FBu);
  return v3;
}
