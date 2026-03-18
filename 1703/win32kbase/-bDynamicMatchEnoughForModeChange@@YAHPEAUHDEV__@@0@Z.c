/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C008EBFC
 * Callers:
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C00EFD74 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00EFDB0 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // ebp
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  _DWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  _DWORD *v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 1;
  v10 = a1;
  if ( a1[531] == 1 || a2[531] == 1 )
    v3 = 0;
  v5 = 0;
  if ( ((a2[460] ^ a1[460]) & 0x840000) == 0 )
    v5 = v3;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v7 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v9);
    if ( v7 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v10)
      || (v8 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v9), v8 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v10)) )
    {
      v5 = 0;
    }
  }
  if ( *((_QWORD *)a2 + 364)
    || *((_QWORD *)a2 + 382)
    || *((_QWORD *)a2 + 383)
    || *((_QWORD *)a2 + 389)
    || *((_QWORD *)a2 + 375) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 364)
    || *((_QWORD *)a1 + 382)
    || *((_QWORD *)a1 + 383)
    || *((_QWORD *)a1 + 389)
    || *((_QWORD *)a1 + 375) )
  {
    return 0;
  }
  return v5;
}
