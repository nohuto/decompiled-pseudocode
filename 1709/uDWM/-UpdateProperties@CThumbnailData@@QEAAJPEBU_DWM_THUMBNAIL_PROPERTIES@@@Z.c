/*
 * XREFs of ?UpdateProperties@CThumbnailData@@QEAAJPEBU_DWM_THUMBNAIL_PROPERTIES@@@Z @ 0x18000CD1C
 * Callers:
 *     ?UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTIES@@@Z @ 0x180007BB4 (-UpdateThumbnailProperties@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_UPDATETHUMBNAILPROPERTI.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002B780 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007CE00 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 * Callees:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x18001019C (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CThumbnailData::UpdateProperties(CThumbnailData *this, const struct _DWM_THUMBNAIL_PROPERTIES *a2)
{
  unsigned int v2; // ebp
  int v3; // esi
  int v6; // ecx
  int v7; // edx
  DWORD v8; // edx
  DWORD v9; // ecx
  DWORD v10; // ecx
  signed int v11; // eax
  int v12; // ecx
  CThumbnailVisual *v13; // rcx
  int updated; // eax
  int v16; // eax

  v2 = 0;
  v3 = 0;
  if ( (a2->dwFlags & 1) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 40), &a2->rcDestination) || (*((_BYTE *)this + 36) & 1) == 0 )
      v3 = 1;
    *((_DWORD *)this + 9) |= 1u;
    *(RECT *)((char *)this + 40) = a2->rcDestination;
  }
  if ( (a2->dwFlags & 2) != 0 )
  {
    if ( !EqualRect((const RECT *)((char *)this + 56), &a2->rcSource) || (*((_BYTE *)this + 36) & 2) == 0 )
      v3 |= 2u;
    *((_DWORD *)this + 9) |= 2u;
    *(RECT *)((char *)this + 56) = a2->rcSource;
  }
  if ( (a2->dwFlags & 4) != 0 )
  {
    if ( *((_BYTE *)this + 72) != a2->opacity || (*((_BYTE *)this + 36) & 4) == 0 )
      v3 |= 4u;
    *((_DWORD *)this + 9) |= 4u;
    *((_BYTE *)this + 72) = a2->opacity;
  }
  if ( (a2->dwFlags & 8) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 73) != a2->fVisible || (*((_BYTE *)this + 36) & 8) == 0 )
      v3 |= 8u;
    *((_DWORD *)this + 9) |= 8u;
    *(_DWORD *)((char *)this + 73) = a2->fVisible;
  }
  if ( (a2->dwFlags & 0x10) != 0 )
  {
    if ( *(_DWORD *)((char *)this + 77) != a2->fSourceClientAreaOnly || (*((_BYTE *)this + 36) & 0x10) == 0 )
      v3 |= 0x10u;
    *((_DWORD *)this + 9) |= 0x10u;
    *(_DWORD *)((char *)this + 77) = a2->fSourceClientAreaOnly;
  }
  v6 = v3 | 0x80000;
  if ( (a2->dwFlags & 0x80000) == 0 )
    v6 = v3;
  v7 = v6;
  if ( (a2->dwFlags & 0x400000) != 0 )
  {
    v16 = *((_DWORD *)this + 9);
    if ( (v16 & 0x400000) == 0 )
    {
      v7 = v6 | 0x400000;
      *((_DWORD *)this + 9) = v16 | 0x400000;
    }
  }
  v8 = a2->dwFlags & 0x30000 | v7;
  if ( (a2->dwFlags & 0x100000) != 0 )
  {
    v8 |= 0x100000u;
    *((_DWORD *)this + 9) |= 0x100000u;
  }
  if ( (a2->dwFlags & 0x800000) != 0 )
  {
    v8 |= 0x800000u;
    *((_DWORD *)this + 9) |= 0x800000u;
  }
  v9 = a2->dwFlags & 0xC000000;
  if ( v9 )
  {
    v8 |= v9;
    *((_DWORD *)this + 9) = v9 | *((_DWORD *)this + 9) & 0xF3FFFFFF;
  }
  v10 = a2->dwFlags & 0x30000000;
  if ( v10 )
  {
    v8 |= v10;
    *((_DWORD *)this + 9) = v10 | *((_DWORD *)this + 9) & 0xCFFFFFFF;
  }
  v11 = a2->dwFlags & 0xC0000000;
  if ( v11 )
  {
    v8 |= v11;
    v12 = v11 | *((_DWORD *)this + 9) & 0x3FFFFFFF;
    *((_DWORD *)this + 9) = v12;
    if ( v11 < 0 )
      *((_DWORD *)this + 9) = v12 & 0xFFEFFFFF;
  }
  v13 = (CThumbnailVisual *)*((_QWORD *)this + 11);
  if ( v13 )
  {
    updated = CThumbnailVisual::UpdateProperties(v13, v8);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1D1Cu);
  }
  return v2;
}
