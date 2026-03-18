/*
 * XREFs of RestoreSpb @ 0x1C01E3D2C
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsVisible @ 0x1C0069E24 (IsVisible.c)
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01E3B40 (FindSpb.c)
 *     FreeSpb @ 0x1C01E3B70 (FreeSpb.c)
 *     GreSaveScreenBits @ 0x1C027D6D8 (GreSaveScreenBits.c)
 */

__int64 __fastcall RestoreSpb(__int64 *a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // esi
  __int64 **Spb; // rbx
  __int64 v8; // r14
  __int64 *v9; // r8
  int v10; // eax
  __int128 v11; // xmm0
  __int64 *v12; // r8
  HDC v13; // r12
  __int64 v14; // rdi
  __int128 v16; // [rsp+60h] [rbp-58h] BYREF

  v6 = 0;
  Spb = FindSpb(a1);
  v8 = a2;
  v9 = Spb[5];
  if ( v9 )
  {
    v6 = 1;
    v8 = ghrgnSPB1;
    if ( (unsigned int)GreCombineRgn(ghrgnSPB1, a2, v9, 1LL) < 2 )
      goto LABEL_10;
  }
  v10 = *((_DWORD *)Spb + 12);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(_OWORD *)(Spb + 3);
    v12 = Spb[7];
    *((_DWORD *)Spb + 12) = v10 & 0xFFFFFFFE;
    v16 = v11;
    if ( GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 32LL), 1LL, v12, &v16) )
    {
      SetRectRgnIndirect(ghrgnSPB2, Spb + 3);
      if ( (unsigned int)GreCombineRgn(a2, ghrgnSPB2, v8, 4LL) != 1 )
        v6 = 2;
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((__int64)Spb);
    return 1LL;
  }
  if ( !*a3 )
    *a3 = *(HDC *)(gpDispInfo + 48LL);
  v13 = *a3;
  v14 = GreSelectBitmap(*(_QWORD *)ghdcMem, Spb[2]);
  if ( !v14 )
    goto LABEL_10;
  GreSelectVisRgn(v13, v8, 2LL);
  NtGdiBitBltInternal(
    v13,
    *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 7),
    *((_DWORD *)Spb + 8) - *((_DWORD *)Spb + 6),
    *((_DWORD *)Spb + 9) - *((_DWORD *)Spb + 7),
    *(HDC *)ghdcMem,
    (_DWORD)Spb[3] & 7,
    0,
    13369376,
    0,
    0);
  GreSelectBitmap(*(_QWORD *)ghdcMem, v14);
  GreCombineRgn(a2, a2, v8, 4LL);
LABEL_12:
  if ( !a1[27] || !(unsigned int)IsVisible((__int64)a1) )
    FreeSpb((__int64)Spb);
  return v6;
}
