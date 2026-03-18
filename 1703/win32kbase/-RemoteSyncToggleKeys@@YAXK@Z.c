/*
 * XREFs of ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C012F65C
 * Callers:
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     ApiSetEditionGetActiveHKL @ 0x1C004DE9C (ApiSetEditionGetActiveHKL.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall RemoteSyncToggleKeys(int a1)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  char v3; // r8
  _BYTE v4[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 v5; // [rsp+32h] [rbp-2Eh]
  __int64 v6; // [rsp+38h] [rbp-28h]

  v6 = 0LL;
  v1 = a1 | 0x8000;
  gSetLedReceived = a1 | 0x8000;
  if ( gpqForeground )
  {
    v2 = (v1 >> 14) & 1;
    if ( ((a1 & 4) == 0) != ((~byte_1C018A9C5 & 2) != 0) )
    {
      v4[0] = 58;
      v5 = 20;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 58;
      v5 = -32748;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      LOBYTE(v1) = gSetLedReceived;
    }
    v3 = byte_1C018A9E4;
    if ( ((v1 & 2) == 0) != ((~byte_1C018A9E4 & 2) != 0) )
    {
      v4[0] = 69;
      v5 = 144;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 69;
      v5 = -32624;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      LOBYTE(v1) = gSetLedReceived;
      v3 = byte_1C018A9E4;
    }
    if ( ((v1 & 1) == 0) != ((~v3 & 8) != 0) )
    {
      v4[0] = 70;
      v5 = 145;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 70;
      v5 = -32623;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
    }
    if ( (ApiSetEditionGetActiveHKL() & 0x3FF) == 0x11 && ((gSetLedReceived & 8) == 0) != ((~byte_1C018A9C5 & 8) != 0) )
    {
      v4[0] = 112;
      v5 = 21;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
      v4[0] = 112;
      v5 = -32747;
      xxxProcessKeyEvent((struct tagKE *)v4, 0LL, v2, 0, 0LL);
    }
    gSetLedReceived = 0;
  }
}
