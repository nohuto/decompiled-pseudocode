/*
 * XREFs of ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180015EAC
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18003373C (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180038EF0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CThumbnailData *,0>::Remove(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r11
  unsigned int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rdx

  v2 = *a1;
  v4 = *((_DWORD *)a1 + 6);
  v5 = 0LL;
  if ( v4 )
  {
    v6 = *a2;
    do
    {
      if ( v6 == *(_QWORD *)(v2 + 8 * v5) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < v4 );
  }
  if ( (unsigned int)v5 >= v4 )
    return 0LL;
  if ( (unsigned int)v5 < v4 - 1 )
  {
    do
    {
      v7 = (unsigned int)v5;
      LODWORD(v5) = v5 + 1;
      *(_QWORD *)(v2 + 8 * v7) = *(_QWORD *)(v2 + 8LL * (unsigned int)v5);
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
  }
  --*((_DWORD *)a1 + 6);
  return 1LL;
}
