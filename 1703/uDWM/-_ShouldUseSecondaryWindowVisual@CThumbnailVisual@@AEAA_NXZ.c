/*
 * XREFs of ?_ShouldUseSecondaryWindowVisual@CThumbnailVisual@@AEAA_NXZ @ 0x180038470
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180039390 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?GetThumbnailType@CSecondaryWindowRepresentation@@QEBA?AW4THUMBNAIL_TYPE@@XZ @ 0x18000E340 (-GetThumbnailType@CSecondaryWindowRepresentation@@QEBA-AW4THUMBNAIL_TYPE@@XZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180038590 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 */

char __fastcall CThumbnailVisual::_ShouldUseSecondaryWindowVisual(CThumbnailVisual *this)
{
  char v2; // bl
  __int64 v4; // rcx
  int v5; // r9d
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx

  v2 = 1;
  if ( !EqualRect(
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 48LL),
          (const RECT *)(*(_QWORD *)(*((_QWORD *)this + 46) + 24LL) + 204LL)) )
    return 0;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
    return 0;
  v4 = *((_QWORD *)this + 46);
  if ( (*(_BYTE *)(v4 + 36) & 2) != 0
    && (*(_DWORD *)(v4 + 36) & 0x100000) == 0
    && !EqualRect((const RECT *)(*(_QWORD *)(v4 + 24) + 48LL), (const RECT *)(v4 + 56)) )
  {
    return 0;
  }
  v5 = *(_DWORD *)(*((_QWORD *)this + 46) + 36LL);
  if ( (v5 & 0x40000000) != 0 )
    return 0;
  v6 = *((_QWORD *)this + 47);
  if ( v6
    && (unsigned int)CSecondaryWindowRepresentation::GetThumbnailType(v6) != 1
    && (v7 = *((_DWORD *)this + 131)) != 0
    && (v8 = *((_DWORD *)this + 132)) != 0 )
  {
    if ( (float)((float)*((int *)this + 127) / (float)v7) < 0.5
      || (float)((float)*((int *)this + 128) / (float)v8) < 0.5 )
    {
      return 0;
    }
  }
  else if ( (v5 & 0x4000000) != 0 )
  {
    return 0;
  }
  return v2;
}
