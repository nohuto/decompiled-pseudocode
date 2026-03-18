/*
 * XREFs of xxxMenuBarDraw @ 0x1C021640C
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C003BC28 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 * Callees:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C000E5E4 (xxxMenuBarCompute.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     GetCaptionHeight @ 0x1C0043588 (GetCaptionHeight.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C021513C (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(__int64 a1, HDC a2, int a3, int a4)
{
  __int64 v5; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  _DWORD v24[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-28h]
  int v26; // [rsp+60h] [rbp-20h]
  int v27; // [rsp+64h] [rbp-1Ch]
  int v28; // [rsp+68h] [rbp-18h]
  int v29; // [rsp+6Ch] [rbp-14h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  int v31; // [rsp+B0h] [rbp+30h]

  v31 = 0;
  v5 = *(_QWORD *)(a1 + 208);
  if ( !v5 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 56) & 0x40) != 0 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) == gpqForeground
    || (GetAppCompatFlags2(0x400u) & 0x80u) != 0LL )
  {
    *(_DWORD *)(v5 + 56) &= ~0x10u;
  }
  else
  {
    *(_DWORD *)(v5 + 56) |= 0x10u;
  }
  *(_DWORD *)(v5 + 56) |= 0x200u;
  v22 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v22;
  v23 = v5;
  ++*(_DWORD *)(v5 + 8);
  v10 = a4 + GetCaptionHeight(a1);
  v11 = *(_DWORD *)(a1 + 136) - 2 * a3 - *(_DWORD *)(a1 + 128);
  if ( a1 != *(_QWORD *)(v5 + 88) || !*(_DWORD *)(v5 + 72) || !*(_DWORD *)(v5 + 76) )
    xxxMenuBarCompute((struct tagMENU *)v5, a1, v10, a3, *(_DWORD *)(a1 + 136) - 2 * a3 - *(_DWORD *)(a1 + 128));
  if ( *(_DWORD *)(v5 + 72) > v11
    || (int)(v10 + *(_DWORD *)(v5 + 76)) > *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132) - a4 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    v31 = 1;
    GreIntersectVisRect(
      a2,
      (unsigned int)(*(_DWORD *)(a1 + 128) + a3),
      *(unsigned int *)(a1 + 132),
      a3 + *(_DWORD *)(a1 + 128) + v11,
      *(_DWORD *)(a1 + 140) - a4);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  }
  v12 = *(_DWORD *)(v5 + 72);
  v13 = *(_DWORD *)(v5 + 76);
  v14 = *(_QWORD *)(v5 + 128);
  v24[0] = a3;
  v24[1] = v10;
  v24[2] = v12;
  v24[3] = v13;
  if ( !v14 )
  {
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      v14 = *(_QWORD *)(gpsi + 5328LL);
    else
      v14 = *(_QWORD *)(gpsi + 5120LL);
  }
  v15 = (*(_BYTE *)(a1 + 65) & 3) == 0;
  v25 = v14;
  v27 = v13 + v10;
  v26 = a3;
  v28 = v12;
  v29 = 1;
  if ( v15 || (*(_BYTE *)(a1 + 60) & 8) != 0 )
    v16 = *(_QWORD *)(gpsi + 5136LL);
  else
    v16 = *(_QWORD *)(gpsi + 5208LL);
  v30 = v16;
  GrePolyPatBlt(a2, 0xF00021u, (struct _POLYPATBLT *)v24, 2u);
  if ( (*(_BYTE *)(a1 + 65) & 3) == 0 || (*(_BYTE *)(a1 + 60) & 8) != 0 )
    v17 = *(_QWORD *)(gpsi + 5136LL);
  else
    v17 = *(_QWORD *)(gpsi + 5208LL);
  v18 = GreSelectBrush(a2, v17);
  xxxMenuDraw(a2, v5, 0LL);
  GreSelectBrush(a2, v18);
  if ( v31 )
    RecalcDCVisRgn(a2);
  v20 = v23;
  v21 = *(_DWORD *)(v5 + 76);
  *(_DWORD *)(v23 + 56) &= ~0x200u;
  ThreadUnlock1(v20, v19);
  return (unsigned int)(v21 + 1);
}
