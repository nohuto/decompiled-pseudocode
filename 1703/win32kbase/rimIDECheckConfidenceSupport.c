/*
 * XREFs of rimIDECheckConfidenceSupport @ 0x1C0108FF4
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

int __fastcall rimIDECheckConfidenceSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int result; // eax
  unsigned __int16 v4[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_BUTTON_CAPS v5; // [rsp+50h] [rbp-68h] BYREF

  v4[0] = 1;
  result = rimHidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &v5, v4, a2);
  if ( (int)(result + 0x80000000) < 0 || result == -1072627705 )
    *(_DWORD *)(a1 + 260) |= 0x10u;
  else
    *(_DWORD *)(a1 + 260) &= ~0x10u;
  return result;
}
