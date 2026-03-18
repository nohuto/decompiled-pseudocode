/*
 * XREFs of ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C013DFA4
 * Callers:
 *     zzzShowFade @ 0x1C013DE64 (zzzShowFade.c)
 *     zzzAnimateFade @ 0x1C013DECC (zzzAnimateFade.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C008D65C (zzzUpdateLayeredWindow.c)
 *     GreUpdateSprite @ 0x1C0092518 (GreUpdateSprite.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall zzzUpdateFade(
        struct tagPOINT *a1,
        struct tagSIZE *a2,
        HDC a3,
        struct tagPOINT *a4,
        struct _BLENDFUNCTION *a5)
{
  struct tagSIZE *v7; // r14
  int v9; // eax
  __int64 v10; // rdx
  __m128i *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v17[4]; // [rsp+80h] [rbp-28h] BYREF

  v7 = a2;
  v9 = gfade[6];
  if ( (v9 & 8) != 0 )
  {
    LOBYTE(a2) = 1;
    v11 = (__m128i *)HMValidateHandleNoSecure(gfade[0], (__int64)a2, gfade[0], (__int64)a4);
    if ( v11 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v12, v13);
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v17;
      v17[1] = v11;
      _InterlockedIncrement(&v11->m128i_i32[2]);
      zzzUpdateLayeredWindow(v11, 0LL, a1, v7, a3, a4, 0, a5, 2u, 0LL);
      ThreadUnlock1(v16, v15);
    }
  }
  else
  {
    GreUpdateSprite(
      *(HDEV *)(gpDispInfo + 32LL),
      0LL,
      (SFMLOGICALSURFACE *)gfade[0],
      0LL,
      a1,
      a2,
      a3,
      (struct _POINTL *)a4,
      HIDWORD(gfade[6]),
      a5,
      2 - ((v9 & 0x40) != 0),
      0LL,
      0LL,
      1,
      0);
  }
}
