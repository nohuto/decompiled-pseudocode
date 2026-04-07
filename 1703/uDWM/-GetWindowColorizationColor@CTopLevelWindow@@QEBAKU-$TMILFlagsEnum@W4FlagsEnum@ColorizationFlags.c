/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026D5C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18002906C (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002B290 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, unsigned int a2)
{
  CDesktopManager *v4; // rdi
  __int64 v5; // r8
  bool v6; // zf
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  int v9; // eax
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-28h]

  v4 = CDesktopManager::s_pDesktopManagerInstance;
  IsOpenThemeDataPresent();
  if ( (a2 & 1) == 0 && (a2 & 2) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 584) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 595LL) & 0x20) != 0 )
      a2 |= 1u;
    else
      a2 |= 2u;
  }
  if ( *((_BYTE *)v4 + 25) )
  {
    if ( (a2 & 1) != 0 )
      return *((unsigned int *)v4 + 121);
    else
      return *((unsigned int *)v4 + 122);
  }
  else
  {
    v6 = *((_BYTE *)v4 + 24) == 0;
    v7 = *(_OWORD *)((char *)v4 + 452);
    v14 = *((_DWORD *)v4 + 119);
    v8 = *(_QWORD *)((char *)v4 + 468);
    v9 = *((_DWORD *)v4 + 104);
    v12 = v7;
    v11 = v9;
    v13 = v8;
    if ( !v6 )
      a2 |= 4u;
    if ( *((_BYTE *)v4 + 480) )
      a2 |= 0x20u;
    ((void (__fastcall *)(__int128 *, int *, __int64, _QWORD))CGlassColorizationParameters::AdjustWindowColorization)(
      &v12,
      &v11,
      v5,
      a2);
    return v12 & 0xFF00FF00 | ((unsigned __int8)v12 << 16) | (unsigned int)BYTE2(v12);
  }
}
