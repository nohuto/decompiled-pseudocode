/*
 * XREFs of ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x1800254B8
 * Callers:
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001B868 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180032750 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveWindowColorizationColor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int128 v5; // xmm0
  __int64 v6; // xmm1_8
  int v7; // eax
  __int64 result; // rax
  int v9; // edx
  int v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 26) )
  {
    if ( (a3 & 1) != 0 )
      v9 = *(_DWORD *)(a1 + 524);
    else
      v9 = *(_DWORD *)(a1 + 528);
  }
  else
  {
    v5 = *(_OWORD *)(a1 + 492);
    v13 = *(_DWORD *)(a1 + 516);
    v6 = *(_QWORD *)(a1 + 508);
    v7 = *(_DWORD *)(a1 + 456);
    v11 = v5;
    v10 = v7;
    v12 = v6;
    if ( *(_BYTE *)(a1 + 25) )
      a3 = (unsigned int)a3 | 4;
    if ( *(_BYTE *)(a1 + 520) )
      a3 = (unsigned int)a3 | 0x20;
    CGlassColorizationParameters::AdjustWindowColorization(&v11, &v10, a3, (unsigned int)a3);
    result = (unsigned __int8)v11 << 16;
    v9 = v11 & 0xFF00FF00 | result | BYTE2(v11);
  }
  *a4 = v9;
  return result;
}
