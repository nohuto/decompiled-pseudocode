/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18000DE38
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B084 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18000FDA4 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009E188 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x18000B9A4 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x18000DCAC (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetBrush(
        __int64 a1,
        __int64 a2,
        CBaseObject **a3,
        CBaseObject **a4,
        __int64 a5,
        CBaseObject **a6,
        struct CResource **a7,
        CBaseObject **a8)
{
  CBaseObject **v8; // rsi
  CBaseObject *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  CBaseObject *v15; // rax
  int v16; // eax
  CBaseObject *v17; // rax
  int v18; // eax
  CTransitionWindowSnapshot *v19; // rcx
  struct CResource *v20; // rax
  int v21; // eax
  int v22; // eax
  CWindowData *v23; // rdx
  __int64 v24; // rbx
  CWindowData *v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  struct CResource *v35; // rcx
  CBaseObject *v36; // rcx
  CBaseObject *v37; // rcx
  CBaseObject *v38; // rcx
  struct CResource *v39; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int Brush; // eax
  struct CResource *v44; // [rsp+50h] [rbp-59h] BYREF
  CBaseObject *v45; // [rsp+58h] [rbp-51h] BYREF
  CBaseObject *v46; // [rsp+60h] [rbp-49h] BYREF
  CBaseObject *v47; // [rsp+68h] [rbp-41h] BYREF
  int v48; // [rsp+70h] [rbp-39h]
  int v49; // [rsp+74h] [rbp-35h]
  struct CResource *v50; // [rsp+78h] [rbp-31h] BYREF
  CBaseObject **v51; // [rsp+80h] [rbp-29h]
  __int128 v52; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v53[2]; // [rsp+98h] [rbp-11h] BYREF

  v8 = a8;
  v51 = a8;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v44 = 0LL;
  if ( a3 )
  {
    v12 = *a3;
    v45 = v12;
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    if ( !v45 )
    {
      v13 = CResource::Create(27LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v45);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3A3u);
        goto LABEL_66;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v46 = v15;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    if ( !v46 )
    {
      v16 = CResource::Create(27LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v46);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3ADu);
        goto LABEL_66;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v47 = v17;
    if ( v17 )
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    if ( !v47 )
    {
      v18 = CResource::Create(33LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v47);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3C1u);
        goto LABEL_66;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 544);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v50, &v44, (float *)(a1 + 504));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_39;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x3C8u);
    goto LABEL_64;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v44 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CResource::Create(5LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v44);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x3D2u);
      goto LABEL_66;
    }
  }
  v49 = 0;
  v52 = 0uLL;
  if ( v45 )
  {
    v48 = 0;
    v22 = *((_DWORD *)v45 + 6);
    v52 = 0uLL;
    v49 = v22;
  }
  else
  {
    v52 = _xmm;
    v48 = 1;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v41 = *((_QWORD *)v25 + 53);
      if ( v41 )
      {
        v23 = *(CWindowData **)(v41 + 32);
        goto LABEL_24;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_24;
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v23 = *(CWindowData **)(*((_QWORD *)v25 + 54) + 80LL);
        goto LABEL_24;
      }
    }
  }
  v23 = v25;
LABEL_24:
  if ( CWindowData::IsImmersiveWindow(v23) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 512) )
      v24 = *(_QWORD *)(a1 + 512);
    goto LABEL_31;
  }
  if ( v24 )
    goto LABEL_32;
  v26 = 0LL;
  v27 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) != 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == 2 )
    {
      v42 = *(_QWORD *)(v27 + 424);
      if ( v42 )
      {
        v26 = *(_QWORD *)(v42 + 32);
        goto LABEL_28;
      }
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != 3 )
        goto LABEL_28;
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(v27 + 432) + 80LL);
        goto LABEL_28;
      }
    }
  }
  v26 = v27;
LABEL_28:
  v28 = *(_QWORD *)(v26 + 400);
  if ( !v28 )
  {
LABEL_102:
    v30 = 0;
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
    v24 = *(_QWORD *)(v28 + 528);
  else
    v24 = *(_QWORD *)(v28 + 256);
LABEL_31:
  if ( !v24 )
    goto LABEL_102;
LABEL_32:
  v29 = *(_QWORD *)(v24 + 16);
  if ( !v29 )
    goto LABEL_102;
  v30 = *(_DWORD *)(v29 + 24);
LABEL_34:
  if ( v47 )
    v31 = *((_DWORD *)v47 + 6);
  else
    v31 = 0;
  v53[0] = 0LL;
  v53[1] = 0LL;
  v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD *, int, int, int, int))(**((_QWORD **)v44 + 2)
                                                                                            + 992LL))(
          *((_QWORD *)v44 + 2),
          *((unsigned int *)v44 + 6),
          &v52,
          v53,
          v49,
          v31,
          v30,
          v48);
  v14 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x408u);
    goto LABEL_66;
  }
  v34 = CSecondaryWindowRepresentation::CreateBrushForCVI(v33, 2, (__int64)v44, (__int64)v46, 0LL, &v50);
  v14 = v34;
  if ( v34 >= 0 )
  {
    v8 = v51;
LABEL_39:
    if ( v8 )
    {
      if ( *v8 )
        CBaseObject::Release(*v8);
      v35 = v50;
      *v8 = v50;
      if ( v35 )
        _InterlockedIncrement((volatile signed __int32 *)v35 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v36 = v45;
      *a3 = v45;
      if ( v36 )
        _InterlockedIncrement((volatile signed __int32 *)v36 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v37 = v46;
      *a4 = v46;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v38 = v47;
      *a6 = v47;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v39 = v44;
      *a7 = v44;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    goto LABEL_64;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x40Au);
LABEL_64:
  if ( v50 )
    CBaseObject::Release(v50);
LABEL_66:
  if ( v45 )
    CBaseObject::Release(v45);
  if ( v46 )
    CBaseObject::Release(v46);
  if ( v47 )
    CBaseObject::Release(v47);
  if ( v44 )
    CBaseObject::Release(v44);
  return v14;
}
