/*
 * XREFs of ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x180036740
 * Callers:
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B3D0 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002C188 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ @ 0x1800367A0 (-EnsureThumbnailVisual@CThumbnailData@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDCompDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180083300 (-Create@CDCompDesktopThumbnail@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDCompDesktopThumbnailCVI@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800833E8 (-Create@CDCompDesktopThumbnailCVI@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800834A8 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z @ 0x1800A4228 (-SetSourceRect@CDCompDesktopThumbnailCVI@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z @ 0x1800A427C (-SetVisual@CDesktopThumbnailCVIVisual@@QEAAJPEAVCDesktopThumbnailCVI@@AEBUtagRECT@@@Z.c)
 *     ?Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z @ 0x1800A4428 (-Update@CDesktopThumbnailCVIVisual@@QEAAXAEBUtagRECT@@N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800A44B4 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 */

__int64 __fastcall CDCompThumbnailData::EnsureThumbnailVisual(CDCompThumbnailData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int updated; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct CDCompDesktopThumbnail *v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  struct CDCompDesktopThumbnailCVI *v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  CDesktopThumbnailCVIVisual *v16; // rbx
  struct CDCompDesktopThumbnailCVI *v17; // rdx
  CDesktopThumbnailCVIVisual *v18; // rcx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  CDesktopThumbnailCVIVisual *v21; // [rsp+60h] [rbp+40h] BYREF
  struct CDCompDesktopThumbnailCVI *v22; // [rsp+68h] [rbp+48h] BYREF
  struct CDCompDesktopThumbnail *v23; // [rsp+70h] [rbp+50h] BYREF

  if ( *((_DWORD *)this + 28) == 1 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v23);
    updated = CDCompDesktopThumbnail::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v23);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 7879LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)updated,
        savedregs);
LABEL_25:
      Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v23);
      return v6;
    }
    v8 = v23;
    *((_QWORD *)v23 + 35) = this;
    *((_QWORD *)v8 + 34) = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
    updated = CDesktopThumbnailBase::UpdateWindowClones(v8);
    v6 = updated;
    if ( updated < 0 )
    {
      v7 = 7881LL;
      goto LABEL_9;
    }
    v22 = 0LL;
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
    v9 = CDCompDesktopThumbnailCVI::Create(
           *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
           &v22);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = v22;
      v9 = CDCompDesktopThumbnailCVI::SetSourceRect(v22, (const struct tagRECT *)((char *)this + 56));
      v6 = v9;
      if ( v9 >= 0 )
      {
        v12 = *((_DWORD *)this + 12) - *((_DWORD *)this + 10);
        if ( v12 < 0 )
          v12 = 0;
        LODWORD(v21) = v12;
        v13 = *((_DWORD *)this + 13) - *((_DWORD *)this + 11);
        if ( v13 < 0 )
          v13 = 0;
        HIDWORD(v21) = v13;
        *((_QWORD *)v11 + 9) = v21;
        *((_QWORD *)v11 + 3) = v8;
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        v21 = 0LL;
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
        v14 = CDesktopThumbnailCVIVisual::Create(
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                &v21);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v16 = v21;
          v17 = v22;
          v18 = v21;
          *((_QWORD *)v21 + 39) = *((_QWORD *)this + 2);
          *((_DWORD *)v18 + 85) = *((_DWORD *)this + 9);
          *((_BYTE *)v18 + 337) = 1;
          v14 = CDesktopThumbnailCVIVisual::SetVisual(v18, v17, (const struct tagRECT *)((char *)this + 56));
          v6 = v14;
          if ( v14 >= 0 )
          {
            CDesktopThumbnailCVIVisual::Update(
              v16,
              (const struct tagRECT *)((char *)this + 40),
              (double)*((unsigned __int8 *)this + 72) / 255.0);
            v21 = 0LL;
            *((_QWORD *)this + 13) = v16;
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
            Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v23);
            return 0LL;
          }
          v15 = 7896LL;
        }
        else
        {
          v15 = 7890LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
          (const char *)(unsigned int)v14,
          savedregs);
        Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v21);
        goto LABEL_24;
      }
      v10 = 7885LL;
    }
    else
    {
      v10 = 7884LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
      (const char *)(unsigned int)v9,
      savedregs);
LABEL_24:
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v22);
    goto LABEL_25;
  }
  if ( *((_DWORD *)this + 28) )
    return 0LL;
  v2 = CThumbnailData::EnsureThumbnailVisual(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EE0,
    (unsigned int)"windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)v2,
    savedregs);
  return v3;
}
