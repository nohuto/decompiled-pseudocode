/*
 * XREFs of ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01E393C
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01E3A04 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01E3734 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 */

__int64 __fastcall SpbCheckRect2(struct tagSPB *a1, struct tagWND *a2, struct tagRECT *a3)
{
  bool v3; // zf
  struct tagRECT v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_QWORD *)a1 + 1) == 0LL;
  v6 = *a3;
  if ( !v3
    && (!(unsigned int)FBitsTouch(a2, &v6, a1)
     || (*((_QWORD *)a1 + 5) || (unsigned int)SetOrCreateRectRgnIndirectPublic((char *)a1 + 40, (char *)a1 + 24))
     && (unsigned int)SetRectRgnIndirect(ghrgnSCR, &v6)
     && (unsigned int)GreCombineRgn(*((_QWORD *)a1 + 5), *((_QWORD *)a1 + 5), ghrgnSCR, 4LL) > 1) )
  {
    return 1LL;
  }
  FreeSpb(a1);
  return 0LL;
}
