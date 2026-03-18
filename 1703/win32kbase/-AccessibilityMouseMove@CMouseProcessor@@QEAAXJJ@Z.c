/*
 * XREFs of ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C01311E4
 * Callers:
 *     MouseMove @ 0x1C012EE50 (MouseMove.c)
 * Callees:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0046C60 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z @ 0x1C0046F54 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@@Z.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0047130 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C007E43C (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this)
{
  int v2; // r10d
  int v3; // r11d
  struct tagPOINT v4; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v5[8]; // [rsp+48h] [rbp-21h] BYREF
  __int128 v6; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v7[3]; // [rsp+60h] [rbp-9h] BYREF
  int v8; // [rsp+78h] [rbp+Fh]
  __int64 v9; // [rsp+80h] [rbp+17h]
  __int128 v10; // [rsp+88h] [rbp+1Fh]
  int v11; // [rsp+98h] [rbp+2Fh]
  int v12; // [rsp+9Ch] [rbp+33h]
  int v13; // [rsp+A0h] [rbp+37h]
  char v14; // [rsp+A4h] [rbp+3Bh]

  v4 = gptCursorAsync;
  CMouseProcessor::EventTime::Now(&v6);
  CMouseProcessor::GetMouseCoordinateRelative(this, v2, v3, &v4, (struct _SUBPIXELS *)v5, 0, 0LL, 0);
  v8 = 0;
  v9 = 0LL;
  v12 = 0;
  v13 = 0;
  v10 = v6;
  v11 = 256;
  v14 = 1;
  memset(v7, 0, sizeof(v7));
  CMouseProcessor::CommitMousePosAndMoveCursor(this, (struct CMouseProcessor::MouseInputDataEx *)v7, v4);
  CMouseProcessor::QueueMouseEvent(this, (const struct CMouseProcessor::MouseInputDataEx *)v7, 0LL, 0LL);
}
