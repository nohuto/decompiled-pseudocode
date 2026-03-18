/*
 * XREFs of _ScrollDC @ 0x1C006B7C0
 * Callers:
 *     NtUserScrollDC @ 0x1C006B660 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01CF95C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x1C006C460 (FastWindowFromDC.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     SpbCheckRect @ 0x1C01F0058 (SpbCheckRect.c)
 */

_BOOL8 __fastcall ScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, struct tagRECT *a7)
{
  HRGN v8; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  BOOL v14; // r12d
  __m128i v16; // xmm0
  int v17; // eax
  int v18; // ecx
  struct tagRECT v19; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0LL;
  v12 = FastWindowFromDC();
  v13 = v12;
  if ( v12 )
  {
    v8 = *(HRGN *)(v12 + 176);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v14 = InternalScrollDC((struct tagWND *)a7, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(gpDispInfo + 32LL), 0LL);
  if ( v13 && *(_QWORD *)(gpDispInfo + 24LL) )
  {
    if ( a4 )
    {
      v17 = *(_DWORD *)(v13 + 144);
      v18 = *(_DWORD *)(v13 + 148);
      v20 = *a4;
      v16 = (__m128i)v20;
      v20.right += v17;
      v20.bottom += v18;
      v20.top += v18;
      v20.left = v17 + _mm_cvtsi128_si32(v16);
      v19.right = a2 + v20.right;
      v19.bottom = a3 + v20.bottom;
      v19.top = a3 + v20.top;
      v19.left = v20.left + a2;
      UnionRect(&v19, &v19, &v20);
    }
    else
    {
      v19 = *(struct tagRECT *)(v13 + 144);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    SpbCheckRect((struct tagWND *)v13, &v19, 0);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  return v14;
}
