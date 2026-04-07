/*
 * XREFs of ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800A22E0
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180038664 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009DFB0 (-ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRectT<MilPointAndSizeL>(_DWORD *a1, int *a2, int *a3)
{
  int v3; // ebx
  int v6; // r11d
  int v7; // r11d
  int v8; // r9d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r8d
  __int64 result; // rax

  v3 = *a3;
  v6 = *a2 + a2[2];
  if ( v6 >= *a3 + a3[2] )
    v6 = *a3 + a3[2];
  if ( *a2 > v3 )
    v3 = *a2;
  v7 = v6 - v3;
  *a1 = v3;
  a1[2] = v7;
  if ( v7 > 0 )
  {
    v8 = a3[1];
    v9 = a2[1];
    v10 = v8 + a3[3];
    v11 = v9 + a2[3];
    if ( v11 >= v10 )
      v11 = v10;
    if ( v9 > v8 )
      v8 = v9;
    v12 = v11 - v8;
    a1[1] = v8;
    a1[3] = v12;
    if ( v12 > 0 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
