/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005E39C
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005DB08 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C005E6A0 (IsWindowUnderActiveLockScreen.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     DCELayerHitTest @ 0x1C010DCA8 (DCELayerHitTest.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01C3214 (DCEHitTestWindow.c)
 *     GetWindowFrameRect @ 0x1C01D5DE8 (GetWindowFrameRect.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  bool v3; // zf
  struct tagPOINT v5; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int y; // esi
  __int64 v11; // rcx
  struct tagPOINT v13; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v14[16]; // [rsp+28h] [rbp-30h] BYREF

  v3 = (*((_BYTE *)a1 + 71) & 0x10) == 0;
  v5 = *a2;
  v13 = *a2;
  if ( v3 || (unsigned int)GetWindowCloakState(a1) || (unsigned int)IsWindowUnderActiveLockScreen(a1) )
    return 0LL;
  if ( *((_QWORD *)a1 + 36) )
  {
    GetWindowFrameRect(v8, v14);
    if ( (unsigned int)DCEHitTestWindow(v14, *((_QWORD *)a1 + 36), &v13, a3) )
    {
      v5 = v13;
      goto LABEL_7;
    }
    return 0LL;
  }
  v9 = *((_QWORD *)a1 + 28);
  if ( v9 )
  {
    y = v13.y;
    if ( (unsigned int)GrePtInRegion(v9, (unsigned int)v5.x, (unsigned int)v13.y) )
      goto LABEL_8;
    return 0LL;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)((char *)a1 + 128, v5) )
    return 0LL;
LABEL_7:
  y = v13.y;
LABEL_8:
  v11 = *((_QWORD *)a1 + 27);
  if ( (v11 || (v11 = *((_QWORD *)a1 + 28)) != 0) && !(unsigned int)GrePtInRegion(v11, (unsigned int)v5.x, y) )
    return 0LL;
  if ( (*((_BYTE *)a1 + 66) & 8) != 0
    && (*((_DWORD *)a1 + 76) & 0x20) == 0
    && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))DCELayerHitTest)(a1, v5) )
  {
    return 0LL;
  }
  if ( *((_QWORD *)a1 + 36) )
    *a2 = v5;
  return 1LL;
}
