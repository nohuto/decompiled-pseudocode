/*
 * XREFs of RestoreSpb @ 0x1C01EFD48
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C001EE10 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C006D048 (IsVisible.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     FindSpb @ 0x1C01EFB5C (FindSpb.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     GreSaveScreenBits @ 0x1C027A0D8 (GreSaveScreenBits.c)
 */

__int64 __fastcall RestoreSpb(__int64 *a1, __int64 a2, HDC *a3)
{
  unsigned int v6; // esi
  __int64 **Spb; // rbx
  __int64 v8; // r14
  __int64 *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  __int128 v13; // xmm0
  __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  HDC v17; // r12
  __int64 v18; // rdi
  __int128 v20; // [rsp+60h] [rbp-58h] BYREF

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
  v12 = *((_DWORD *)Spb + 12);
  if ( (v12 & 1) != 0 )
  {
    v13 = *(_OWORD *)(Spb + 3);
    v14 = Spb[7];
    *((_DWORD *)Spb + 12) = v12 & 0xFFFFFFFE;
    v20 = v13;
    if ( GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 32LL), 1LL, v14, &v20) )
    {
      SetRectRgnIndirect(ghrgnSPB2, Spb + 3);
      if ( (unsigned int)GreCombineRgn(a2, ghrgnSPB2, v8, 4LL) != 1 )
        v6 = 2;
      goto LABEL_12;
    }
LABEL_10:
    FreeSpb((__int64)Spb, v10, v11);
    return 1LL;
  }
  if ( !*a3 )
    *a3 = *(HDC *)(gpDispInfo + 48LL);
  v17 = *a3;
  v18 = GreSelectBitmap(*(_QWORD *)ghdcMem, Spb[2]);
  if ( !v18 )
    goto LABEL_10;
  GreSelectVisRgn(v17, v8, 2LL);
  NtGdiBitBltInternal(
    v17,
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
  GreSelectBitmap(*(_QWORD *)ghdcMem, v18);
  GreCombineRgn(a2, a2, v8, 4LL);
LABEL_12:
  if ( !a1[27] || !(unsigned int)IsVisible((__int64)a1) )
    FreeSpb((__int64)Spb, v15, v16);
  return v6;
}
