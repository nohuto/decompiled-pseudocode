/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012D260
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C0078DC0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C012D16C (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2)
{
  struct tagTHREADINFO *v2; // rsi
  __int64 v3; // rbx
  __int64 v6; // rax
  unsigned __int8 v7[32]; // [rsp+50h] [rbp-48h] BYREF

  v2 = gptiCurrent;
  v3 = 0LL;
  if ( *((_QWORD *)gptiCurrent + 48) )
  {
    if ( a1 )
    {
      memset(v7, 0, sizeof(v7));
      xxxAdjustPushStateForKL(gptiCurrent, v7, a1, a1, a2);
      xxxAdjustPushStateForKL(v2, v7, a2, a1, a2);
      v6 = *((_QWORD *)a1 + 6);
      if ( v6 && (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 80LL) & 1) != 0 && (byte_1C018A9C4 & 4) == 0 )
        xxxKeyEvent(0x80A2u, 0x21Du, 0, 0LL, 0LL, 0LL, 0, 0, 0LL);
    }
    else
    {
      do
      {
        *(_BYTE *)(v3 + *((_QWORD *)v2 + 48) + 192) &= 0xAAu;
        *((_BYTE *)&gafAsyncKeyState + v3) &= 0xAAu;
        gafRawKeyState[v3++] &= 0xAAu;
      }
      while ( v3 < 64 );
    }
  }
}
