/*
 * XREFs of ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800732C8
 * Callers:
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x180073204 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z @ 0x180073B60 (-s_UpdateResourcesForMonitor@CLivePreview@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180006C48 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180030B6C (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z @ 0x180033420 (-CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCResource@@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x180038328 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18007382C (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 */

__int64 __fastcall CLivePreview::_UpdateResourcesForMonitor(CLivePreview *this, struct LivePreviewResource *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // r14d
  CLivePreview *v6; // rcx
  const struct CTopLevelWindow *v7; // rdx
  int updated; // eax
  char v9; // al
  int v10; // r10d
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // r8d
  __int64 v14; // r8
  int RectangleGeometry; // eax
  char *v16; // r14
  int v17; // eax
  __int64 i; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int v29; // r8d
  __int64 v30; // r9
  int v31; // edx
  __int64 v32; // r8
  int v33; // eax
  char *v34; // r14
  int v35; // eax
  __int64 j; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  int GeometryFromHRGN; // eax
  __int128 v49; // [rsp+90h] [rbp-19h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-9h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-1h]
  __int128 v52; // [rsp+B0h] [rbp+7h] BYREF

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
    v9 = !IsRectEmpty((const RECT *)((char *)a2 + 40));
    *((_BYTE *)a2 + 129) = v9;
    if ( *((_BYTE *)a2 + 128) )
    {
      v10 = *((_DWORD *)a2 + 2) - *(_DWORD *)a2;
      v11 = 0LL;
      v12 = *((unsigned int *)a2 + 1);
      v13 = *((_DWORD *)a2 + 3) - v12;
      if ( v13 >= 0 )
        v11 = (unsigned int)v13;
      v14 = 0LL;
      if ( v10 >= 0 )
        v14 = (unsigned int)v10;
      RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                            *(unsigned int *)a2,
                            v12,
                            v14,
                            v11,
                            (struct CResource **)a2 + 2);
      v3 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x507u);
        return v3;
      }
      v16 = (char *)a2 + 24;
      if ( !*((_QWORD *)a2 + 3) )
      {
        v17 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 3);
        v3 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x50Bu);
          return v3;
        }
      }
      for ( i = 0LL; i < 4; ++i )
        *((float *)&v49 + i) = (float)*((int *)a2 + i);
      v19 = *(_QWORD *)v16;
      v50 = 0LL;
      v51 = 0LL;
      v20 = *(_QWORD *)(*((_QWORD *)this + 64) + 16LL);
      if ( v20 )
        v21 = *(_DWORD *)(v20 + 24);
      else
        v21 = 0;
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v19 + 16) + 1008LL))(
              *(_QWORD *)(v19 + 16),
              *(unsigned int *)(v19 + 24),
              &v49,
              &v50,
              0,
              0,
              v21,
              0);
      v3 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x51Bu);
        return v3;
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v16 + 16LL) + 1016LL))(
              *(_QWORD *)(*(_QWORD *)v16 + 16LL),
              *(unsigned int *)(*(_QWORD *)v16 + 24LL));
      v3 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x51Eu);
        return v3;
      }
      v25 = *((_QWORD *)a2 + 4);
      if ( !v25 )
      {
        v26 = CCachedVisualImageBrushResource::Create(v24, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (__int64 *)a2 + 4);
        v3 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x523u);
          return v3;
        }
        v25 = *((_QWORD *)a2 + 4);
      }
      v27 = *(_QWORD *)v16;
      v52 = _xmm;
      v49 = _xmm;
      v28 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v25 + 16) + 1208LL))(
              *(_QWORD *)(v25 + 16),
              *(unsigned int *)(v25 + 24),
              *(unsigned int *)(*((_QWORD *)this + 59) + 24LL),
              &v52,
              &v49,
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
              *(_DWORD *)(v27 + 24));
      v3 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x541u);
        return v3;
      }
      v9 = *((_BYTE *)a2 + 129);
    }
    if ( v9 )
    {
      v29 = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11);
      v30 = 0LL;
      v31 = *((_DWORD *)a2 + 12) - *((_DWORD *)a2 + 10);
      if ( v29 >= 0 )
        v30 = (unsigned int)v29;
      v32 = 0LL;
      if ( v31 >= 0 )
        v32 = (unsigned int)v31;
      v33 = ResourceHelper::CreateRectangleGeometry(
              *((unsigned int *)a2 + 10),
              *((unsigned int *)a2 + 11),
              v32,
              v30,
              (struct CResource **)a2 + 7);
      v3 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x54Cu);
        return v3;
      }
      v34 = (char *)a2 + 64;
      if ( !*((_QWORD *)a2 + 8) )
      {
        v35 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)a2 + 8);
        v3 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x550u);
          return v3;
        }
      }
      for ( j = 0LL; j < 4; ++j )
        *((float *)&v49 + j) = (float)*((int *)a2 + j + 10);
      v37 = *(_QWORD *)v34;
      v50 = 0LL;
      v51 = 0LL;
      v38 = *(_QWORD *)(*((_QWORD *)this + 66) + 16LL);
      if ( v38 )
        v39 = *(_DWORD *)(v38 + 24);
      else
        v39 = 0;
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64 *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(v37 + 16) + 1008LL))(
              *(_QWORD *)(v37 + 16),
              *(unsigned int *)(v37 + 24),
              &v49,
              &v50,
              0,
              0,
              v39,
              0);
      v3 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x560u);
        return v3;
      }
      v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v34 + 16LL) + 1016LL))(
              *(_QWORD *)(*(_QWORD *)v34 + 16LL),
              *(unsigned int *)(*(_QWORD *)v34 + 24LL));
      v3 = v41;
      if ( v41 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v41, 0x563u);
        return v3;
      }
      v43 = *((_QWORD *)a2 + 9);
      if ( !v43 )
      {
        v44 = CCachedVisualImageBrushResource::Create(v42, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (__int64 *)a2 + 9);
        v3 = v44;
        if ( v44 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v44, 0x567u);
          return v3;
        }
        v43 = *((_QWORD *)a2 + 9);
      }
      v45 = *(_QWORD *)v34;
      v52 = _xmm;
      v49 = _xmm;
      v46 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(v43 + 16) + 1208LL))(
              *(_QWORD *)(v43 + 16),
              *(unsigned int *)(v43 + 24),
              *(unsigned int *)(*((_QWORD *)this + 60) + 24LL),
              &v52,
              &v49,
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
              *(_DWORD *)(v45 + 24));
      v3 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x585u);
        return v3;
      }
      GeometryFromHRGN = ResourceHelper::CreateGeometryFromHRGN(*((HRGN *)a2 + 12), (struct CResource **)a2 + 13);
      v3 = GeometryFromHRGN;
      if ( GeometryFromHRGN < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, GeometryFromHRGN, 0x587u);
        return v3;
      }
    }
    ReleaseGDIObject<HRGN__ *>((void **)a2 + 12);
    return v3;
  }
  while ( 1 )
  {
    v6 = *(CLivePreview **)(*((_QWORD *)this + 38) + 40LL * v5);
    v7 = (const struct CTopLevelWindow *)*((_QWORD *)v6 + 49);
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
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x4F7u);
  return v3;
}
