/*
 * XREFs of CreateScreenPalette @ 0x1C020DD2C
 * Callers:
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01E8144 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     GreGetSystemPaletteUse @ 0x1C011551C (GreGetSystemPaletteUse.c)
 *     GreGetSystemPaletteEntries @ 0x1C0295C00 (GreGetSystemPaletteEntries.c)
 */

__int64 __fastcall CreateScreenPalette(HDC a1, __int64 *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  int v7; // ebp
  signed int DeviceCaps; // esi
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // esi
  __int64 v14; // rax
  _BYTE *v15; // rcx
  __int64 Palette; // rax

  v6 = 0;
  if ( (unsigned int)GreGetSystemPaletteUse(a1) == 1 )
    v7 = (int)GreGetDeviceCaps(a1, 106LL) / 2;
  else
    v7 = 1;
  DeviceCaps = GreGetDeviceCaps(a1, 104LL);
  if ( DeviceCaps < 0 )
    return 3221225485LL;
  if ( DeviceCaps < v7 )
    return 3221225485LL;
  v9 = 4LL * (unsigned int)DeviceCaps;
  if ( v9 > 0xFFFFFFFF )
    return 3221225485LL;
  v10 = v9 + 8;
  if ( v10 < 8 )
    return 3221225485LL;
  v11 = Win32AllocPoolWithQuota(v10, 1650684757LL);
  if ( v11 )
  {
    *(_WORD *)(v11 + 2) = DeviceCaps;
    *(_WORD *)v11 = 768;
    if ( !(unsigned int)GreGetSystemPaletteEntries(a1, 0, DeviceCaps, (struct tagPALETTEENTRY *)(v11 + 4)) )
      goto LABEL_14;
    v13 = DeviceCaps - v7;
    if ( v7 < (__int64)v13 )
    {
      v14 = v13 - (__int64)v7;
      v15 = (_BYTE *)(v11 + 7 + 4LL * v7);
      do
      {
        *v15 = 4;
        v15 += 4;
        --v14;
      }
      while ( v14 );
    }
    Palette = GreCreatePalette(v11, v7, v12);
    if ( Palette )
    {
      *a2 = v11;
      *a3 = Palette;
    }
    else
    {
LABEL_14:
      Win32FreePool(v11);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
