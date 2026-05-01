/*
 * XREFs of ?IsCompatibilityKeyboardEnabled@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x18023E6D0
 * Callers:
 *     ?UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802440D0 (-UpdateFullLayoutAvailability@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall TouchKeyboardExperienceManager::IsCompatibilityKeyboardEnabled(TouchKeyboardExperienceManager *this)
{
  char v1; // bl
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  v4 = HIDWORD(this);
  v1 = 0;
  pcbData = 4;
  pvData = 0;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
         L"EnableCompatibilityKeyboard",
         0x18u,
         0LL,
         &pvData,
         &pcbData) >= 0
    && pvData )
  {
    return 1;
  }
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\TabletTip\\1.7",
         L"EnableCompatibilityKeyboard",
         0x18u,
         0LL,
         &pvData,
         &pcbData) >= 0 )
    return pvData != 0;
  return v1;
}
