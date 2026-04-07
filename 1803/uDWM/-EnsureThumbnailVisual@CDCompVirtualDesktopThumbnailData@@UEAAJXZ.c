/*
 * XREFs of ?EnsureThumbnailVisual@CDCompVirtualDesktopThumbnailData@@UEAAJXZ @ 0x180084260
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180086550 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800834A8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800836A0 (-Create@CVirtualDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CVirtualDesktopThumbnailCVI@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180083788 (-Create@CVirtualDesktopThumbnailCVI@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800A427C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800A4428 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800A44B4 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CDCompVirtualDesktopThumbnailData::EnsureThumbnailVisual(CDCompVirtualDesktopThumbnailData *this)
{
  __int64 v1; // rax
  unsigned int v3; // ebx
  CDesktopThumbnailCVIVisual *v4; // rsi
  int v5; // eax
  CBaseObject *v6; // rdi
  int updated; // eax
  int v8; // eax
  int v9; // eax
  struct CVirtualDesktopThumbnailCVI *v10; // rcx
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // eax
  CDesktopThumbnailCVIVisual *v14; // rcx
  struct CVirtualDesktopThumbnailCVI *v15; // rdx
  int v16; // eax
  CDesktopThumbnailCVIVisual *v17; // rax
  CBaseObject *v19; // [rsp+80h] [rbp+48h] BYREF
  CDesktopThumbnailCVIVisual *v20; // [rsp+88h] [rbp+50h] BYREF
  struct CVirtualDesktopThumbnailCVI *v21; // [rsp+90h] [rbp+58h] BYREF
  __int64 v22; // [rsp+98h] [rbp+60h]

  v1 = *((_QWORD *)this + 2);
  v19 = 0LL;
  v3 = 0;
  v21 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  if ( (*(_BYTE *)(v1 + 594) & 0x20) == 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x1F1Fu);
    return v3;
  }
  if ( *((_QWORD *)this + 13) )
    return v3;
  v5 = CVirtualDesktopThumbnail::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v19);
  v3 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x1F27u);
    goto LABEL_22;
  }
  v6 = v19;
  *((_QWORD *)v19 + 35) = this;
  *((_QWORD *)v6 + 34) = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
  updated = CDesktopThumbnailBase::UpdateWindowClones(v6);
  v3 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F29u);
    goto LABEL_23;
  }
  v8 = CVirtualDesktopThumbnailCVI::Create(
         *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
         &v21);
  v3 = v8;
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
    v10 = v21;
    v11 = *(_OWORD *)((char *)this + 56);
    if ( v9 < 0 )
      v9 = 0;
    LODWORD(v22) = v9;
    v12 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
    *((_OWORD *)v21 + 4) = v11;
    if ( v12 < 0 )
      v12 = 0;
    HIDWORD(v22) = v12;
    *((_QWORD *)v10 + 10) = v22;
    *((_QWORD *)v10 + 3) = v6;
    _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
    v13 = CDesktopThumbnailCVIVisual::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
            &v20);
    v3 = v13;
    if ( v13 >= 0 )
    {
      v4 = v20;
      v14 = v20;
      v15 = v21;
      *((_QWORD *)v20 + 39) = *((_QWORD *)this + 2);
      *((_BYTE *)v14 + 337) = 1;
      v16 = CDesktopThumbnailCVIVisual::SetVisual(v14, v15, (const struct tagRECT *)((char *)this + 56));
      v3 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1F35u);
LABEL_22:
        v6 = v19;
        goto LABEL_23;
      }
      CDesktopThumbnailCVIVisual::Update(v4, (const struct tagRECT *)((char *)this + 40), 1.0);
      *((_QWORD *)this + 15) = v19;
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
      v17 = v20;
      *((_QWORD *)this + 13) = v20;
      _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1F30u);
    }
    v4 = v20;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1F2Cu);
LABEL_23:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v21 )
    CBaseObject::Release(v21);
  if ( v4 )
    CBaseObject::Release(v4);
  return v3;
}
