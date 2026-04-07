/*
 * XREFs of ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCResource@@11111@Z @ 0x18002E090
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180012CFC (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800304B8 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800A66E8 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z @ 0x180004974 (-GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCResource@@0PEAM@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAPEAV4@@Z @ 0x18002DF04 (-CreateBrushForCVI@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAVCResource@@11PEAP.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  CBaseObject **v11; // rsi
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
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rax
  int v32; // r8d
  int v33; // r9d
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  struct CResource *v37; // rcx
  CBaseObject *v38; // rcx
  CBaseObject *v39; // rcx
  CBaseObject *v40; // rcx
  struct CResource *v41; // rdx
  int Brush; // eax
  struct CResource *v44; // [rsp+50h] [rbp-59h] BYREF
  int v45; // [rsp+58h] [rbp-51h]
  int v46; // [rsp+5Ch] [rbp-4Dh]
  CBaseObject *v47; // [rsp+60h] [rbp-49h] BYREF
  CBaseObject *v48; // [rsp+68h] [rbp-41h] BYREF
  CBaseObject *v49; // [rsp+70h] [rbp-39h] BYREF
  struct CResource *v50; // [rsp+78h] [rbp-31h] BYREF
  CBaseObject **v51; // [rsp+80h] [rbp-29h]
  __int128 v52; // [rsp+88h] [rbp-21h] BYREF
  _QWORD v53[2]; // [rsp+98h] [rbp-11h] BYREF

  v50 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  v11 = a8;
  v51 = a8;
  if ( a3 )
  {
    v12 = *a3;
    v47 = v12;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
    }
    else
    {
      v13 = CResource::Create(0x1Bu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v47);
      v14 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x3A2u);
        goto LABEL_64;
      }
    }
  }
  if ( a4 )
  {
    v15 = *a4;
    v48 = v15;
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    }
    else
    {
      v16 = CResource::Create(0x1Bu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v48);
      v14 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x3ACu);
        goto LABEL_64;
      }
    }
  }
  if ( a6 )
  {
    v17 = *a6;
    v49 = v17;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      v18 = CResource::Create(0x21u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v49);
      v14 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3C0u);
        goto LABEL_64;
      }
    }
  }
  v19 = *(CTransitionWindowSnapshot **)(a1 + 544);
  if ( v19 )
  {
    Brush = CTransitionWindowSnapshot::GetBrush(v19, &v50, &v44, (float *)(a1 + 504));
    v14 = Brush;
    if ( Brush >= 0 )
      goto LABEL_37;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Brush, 0x3C7u);
    goto LABEL_62;
  }
  if ( a7 && (v20 = *a7) != 0LL )
  {
    v44 = *a7;
    _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
  }
  else
  {
    v21 = CResource::Create(5u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v44);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x3D1u);
      goto LABEL_64;
    }
  }
  v46 = 0;
  v52 = 0uLL;
  if ( v47 )
  {
    v45 = 0;
    v22 = *((_DWORD *)v47 + 6);
    v52 = 0uLL;
    v46 = v22;
  }
  else
  {
    v52 = _xmm;
    v45 = 1;
  }
  v23 = 0LL;
  v24 = *(_QWORD *)(a1 + 48);
  v25 = *(CWindowData **)(a1 + 64);
  switch ( *(_DWORD *)(a1 + 72) )
  {
    case 1:
      goto LABEL_73;
    case 2:
      v26 = *((_QWORD *)v25 + 53);
      if ( v26 )
      {
        v23 = *(CWindowData **)(v26 + 32);
        break;
      }
      goto LABEL_73;
    case 3:
      if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
      {
        v23 = *(CWindowData **)(*((_QWORD *)v25 + 54) + 80LL);
        break;
      }
LABEL_73:
      v23 = v25;
      break;
  }
  if ( CWindowData::IsImmersiveWindow(v23) && *(_DWORD *)(a1 + 72) == 3 )
  {
    if ( *(_QWORD *)(a1 + 512) )
      v24 = *(_QWORD *)(a1 + 512);
    goto LABEL_29;
  }
  if ( v24 )
    goto LABEL_30;
  v27 = 0LL;
  v28 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 72) == 1 )
    goto LABEL_74;
  if ( *(_DWORD *)(a1 + 72) != 2 )
  {
    if ( *(_DWORD *)(a1 + 72) != 3 )
      goto LABEL_26;
    if ( !CWindowData::IsImmersiveWindow(*(CWindowData **)(a1 + 64)) )
    {
      v27 = *(_QWORD *)(*(_QWORD *)(v28 + 432) + 80LL);
      goto LABEL_26;
    }
    goto LABEL_74;
  }
  v29 = *(_QWORD *)(v28 + 424);
  if ( !v29 )
  {
LABEL_74:
    v27 = v28;
    goto LABEL_26;
  }
  v27 = *(_QWORD *)(v29 + 32);
LABEL_26:
  v30 = *(_QWORD *)(v27 + 392);
  if ( !v30 )
  {
LABEL_99:
    v32 = 0;
    goto LABEL_32;
  }
  if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
    v24 = *(_QWORD *)(v30 + 528);
  else
    v24 = *(_QWORD *)(v30 + 256);
LABEL_29:
  if ( !v24 )
    goto LABEL_99;
LABEL_30:
  v31 = *(_QWORD *)(v24 + 16);
  if ( !v31 )
    goto LABEL_99;
  v32 = *(_DWORD *)(v31 + 24);
LABEL_32:
  if ( v49 )
    v33 = *((_DWORD *)v49 + 6);
  else
    v33 = 0;
  v53[0] = 0LL;
  v53[1] = 0LL;
  v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD *, int, int, int, int))(**((_QWORD **)v44 + 2)
                                                                                            + 1008LL))(
          *((_QWORD *)v44 + 2),
          *((unsigned int *)v44 + 6),
          &v52,
          v53,
          v46,
          v33,
          v32,
          v45);
  v14 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x407u);
    goto LABEL_64;
  }
  v36 = CSecondaryWindowRepresentation::CreateBrushForCVI(v35, 2, (__int64)v44, (__int64)v48, 0LL, &v50);
  v14 = v36;
  if ( v36 >= 0 )
  {
    v11 = v51;
LABEL_37:
    if ( v11 )
    {
      if ( *v11 )
        CBaseObject::Release(*v11);
      v37 = v50;
      *v11 = v50;
      if ( v37 )
        _InterlockedIncrement((volatile signed __int32 *)v37 + 2);
    }
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v38 = v47;
      *a3 = v47;
      if ( v38 )
        _InterlockedIncrement((volatile signed __int32 *)v38 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v39 = v48;
      *a4 = v48;
      if ( v39 )
        _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
    }
    if ( a6 )
    {
      if ( *a6 )
        CBaseObject::Release(*a6);
      v40 = v49;
      *a6 = v49;
      if ( v40 )
        _InterlockedIncrement((volatile signed __int32 *)v40 + 2);
    }
    if ( a7 )
    {
      if ( *a7 )
        CBaseObject::Release(*a7);
      v41 = v44;
      *a7 = v44;
      if ( v41 )
        _InterlockedIncrement((volatile signed __int32 *)v41 + 2);
    }
    goto LABEL_62;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x409u);
LABEL_62:
  if ( v50 )
    CBaseObject::Release(v50);
LABEL_64:
  if ( v47 )
    CBaseObject::Release(v47);
  if ( v48 )
    CBaseObject::Release(v48);
  if ( v49 )
    CBaseObject::Release(v49);
  if ( v44 )
    CBaseObject::Release(v44);
  return v14;
}
