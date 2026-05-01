/*
 * XREFs of ?IsForcedFullScreenCompatModeEnabled@FullScreenPositionerHelpers@@YA_NXZ @ 0x18014EAA4
 * Callers:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18014EB84 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FullScreenPositionerHelpers::IsForcedFullScreenCompatModeEnabled(FullScreenPositionerHelpers *this)
{
  int v1; // eax
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  bool v4; // zf
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = dword_180438020;
  if ( !dword_180438020 )
  {
    v7 = 0;
    v8 = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\FullScreen",
               L"IsForcedCompatModeEnabled",
               0x10000012u,
               &v7,
               &v6,
               &v8);
    LOWORD(v3) = 13;
    if ( ValueW )
    {
      if ( ValueW == 234 )
        ValueW = 13;
      v3 = ValueW;
      if ( ValueW <= 0 )
        goto LABEL_14;
    }
    else if ( v7 == 4 )
    {
      if ( v6 <= 1 )
      {
        v3 = 0;
        v4 = v6 == 1;
LABEL_6:
        LOBYTE(ValueW) = v4;
        goto LABEL_15;
      }
    }
    else if ( v8 == 4 && (unsigned __int16)(v6 - 48) <= 1u )
    {
      v3 = 0;
      ValueW = 0;
      v4 = (_WORD)v6 == 49;
      goto LABEL_6;
    }
    v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_14:
    ValueW = v6;
LABEL_15:
    if ( v3 < 0 )
    {
      v1 = dword_180438020;
    }
    else
    {
      v1 = (ValueW ^ 1) + 1;
      dword_180438020 = v1;
    }
  }
  return v1 == 1;
}
