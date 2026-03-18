/*
 * XREFs of MiMapViewInSystemSpace @ 0x1404F7614
 * Callers:
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404D3B60 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmMapViewInSystemSpace @ 0x1404F6020 (MmMapViewInSystemSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1404F6190 (MmMapViewInSystemSpaceEx.c)
 *     MmMapViewInSessionSpaceEx @ 0x1404F6A80 (MmMapViewInSessionSpaceEx.c)
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiCheckPurgeAndUpMapCount @ 0x14009F9C0 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiInsertInSystemSpace @ 0x1400B6230 (MiInsertInSystemSpace.c)
 *     MiDereferenceControlArea @ 0x140131C80 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // bp
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // ebx

  v7 = a6;
  if ( (a6 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  a6 = 0LL;
  v12 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v12);
  v13 = *a4;
  if ( !*a4 )
  {
    *(_WORD *)a5 = 0;
    *a4 = *(_QWORD *)(a1 + 48) - *a5;
    goto LABEL_5;
  }
  v14 = (unsigned __int16)*(_DWORD *)a5;
  if ( v13 + v14 >= v14 )
  {
    *a4 = v13 + v14;
    *(_WORD *)a5 = 0;
    if ( *a4 <= *(_QWORD *)(a1 + 48) - *a5 )
    {
LABEL_5:
      v15 = MiInsertInSystemSpace(a2, *a4, a1, a5, v7, a7, (unsigned __int64 *)&a6);
      if ( v15 >= 0 )
      {
        *a3 = a6;
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v15 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v12);
  return (unsigned int)v15;
}
