/*
 * XREFs of ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B7204
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 * Callees:
 *     GetWindowCloakState @ 0x1C0061BB0 (GetWindowCloakState.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     DCELayerHitTest @ 0x1C009CC6C (DCELayerHitTest.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00B7310 (IsWindowUnderActiveLockScreen.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DCEHitTestWindow @ 0x1C01BF8F0 (DCEHitTestWindow.c)
 */

__int64 __fastcall DCEIsWindowHit(struct tagWND *a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3)
{
  bool v3; // zf
  unsigned __int64 v5; // rbx
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rcx
  char *v12; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+28h] [rbp-30h] BYREF

  v3 = (*((_BYTE *)a1 + 71) & 0x10) == 0;
  v5 = (unsigned __int64)*a2;
  v13 = (unsigned __int64)*a2;
  if ( v3 || (unsigned int)GetWindowCloakState((__int64)a1) || (unsigned int)IsWindowUnderActiveLockScreen(a1) )
    return 0LL;
  v8 = *((_QWORD *)a1 + 28);
  if ( *((_QWORD *)a1 + 36) )
  {
    v14[0] = 0LL;
    v14[1] = 0LL;
    if ( v8 )
      GreGetRgnBox(v8, v14);
    v12 = (char *)v14;
    if ( !*((_QWORD *)a1 + 28) )
      v12 = (char *)a1 + 128;
    if ( !(unsigned int)DCEHitTestWindow(v12, *((_QWORD *)a1 + 36), &v13, a3) )
      return 0LL;
    v5 = v13;
    goto LABEL_7;
  }
  if ( v8 )
  {
    v9 = HIDWORD(v13);
    if ( (unsigned int)GrePtInRegion(v8, (unsigned int)v5, HIDWORD(v13)) )
      goto LABEL_8;
    return 0LL;
  }
  if ( !PtInRect((_DWORD *)a1 + 32, v5) )
    return 0LL;
LABEL_7:
  v9 = HIDWORD(v13);
LABEL_8:
  v10 = *((_QWORD *)a1 + 27);
  if ( (v10 || (v10 = *((_QWORD *)a1 + 28)) != 0) && !(unsigned int)GrePtInRegion(v10, (unsigned int)v5, v9) )
    return 0LL;
  if ( (*((_BYTE *)a1 + 66) & 8) != 0 && (*((_DWORD *)a1 + 76) & 0x20) == 0 && !DCELayerHitTest((__int64)a1, v5) )
    return 0LL;
  if ( *((_QWORD *)a1 + 36) )
    *a2 = (struct tagPOINT)v5;
  return 1LL;
}
