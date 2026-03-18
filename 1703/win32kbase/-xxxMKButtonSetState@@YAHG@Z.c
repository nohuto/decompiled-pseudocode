/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x1C01192F0
 * Callers:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1C0119290 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C0119A50 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     MouseButtonAction @ 0x1C012EDF0 (MouseButtonAction.c)
 *     ApiSetEditionMouseButtonAction @ 0x1C013B65C (ApiSetEditionMouseButtonAction.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013BE54 (ApiSetEditionPostAccessibility.c)
 */

__int64 __fastcall xxxMKButtonSetState(__int16 a1)
{
  BOOL v1; // edi
  bool v2; // zf
  unsigned __int8 v3; // cl
  __int16 v4; // bx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 2LL;
  v1 = a1 != 0;
  v2 = a1 == 0;
  v3 = gwMKButtonState;
  if ( v2 )
    v4 = gwMKButtonState | gwMKCurrentButton;
  else
    v4 = gwMKButtonState & ~gwMKCurrentButton;
  if ( (((unsigned __int8)v4 ^ (unsigned __int8)gwMKButtonState) & 1) != 0 )
  {
    if ( (gdwMitConfig & 1) != 0 )
      MouseButtonAction(1LL, v1, &v6);
    else
      ApiSetEditionMouseButtonAction(1LL, v1, v6);
    v3 = gwMKButtonState;
  }
  if ( (((unsigned __int8)v4 ^ v3) & 2) != 0 )
  {
    if ( (gdwMitConfig & 1) != 0 )
      MouseButtonAction(2LL, v1, &v6);
    else
      ApiSetEditionMouseButtonAction(2LL, v1, v6);
  }
  gwMKButtonState = v4;
  ApiSetEditionPostAccessibility(3LL);
  return 0LL;
}
