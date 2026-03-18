/*
 * XREFs of xxxMenuBarDraw @ 0x1C02175E0
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C007B494 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 * Callees:
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     ThreadLockMenuNoModify @ 0x1C007CAD4 (ThreadLockMenuNoModify.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C021605C (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall xxxMenuBarDraw(__int64 a1, HDC a2, int a3, int a4)
{
  __int64 v5; // rdi
  int CaptionHeight; // eax
  unsigned int v11; // esi
  unsigned int v12; // r14d
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // [rsp+30h] [rbp-50h] BYREF
  __int64 v24; // [rsp+38h] [rbp-48h]
  _DWORD v25[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  int v27; // [rsp+60h] [rbp-20h]
  int v28; // [rsp+64h] [rbp-1Ch]
  int v29; // [rsp+68h] [rbp-18h]
  int v30; // [rsp+6Ch] [rbp-14h]
  __int64 v31; // [rsp+70h] [rbp-10h]
  int v32; // [rsp+B0h] [rbp+30h]

  v32 = 0;
  v5 = *(_QWORD *)(a1 + 208);
  if ( !v5 )
    return 1LL;
  if ( (*(_BYTE *)(a1 + 56) & 0x40) != 0 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) == gpqForeground
    || (GetAppCompatFlags2(0x400u) & 0x80u) != 0LL )
  {
    *(_DWORD *)(v5 + 56) &= ~0x10u;
  }
  else
  {
    *(_DWORD *)(v5 + 56) |= 0x10u;
  }
  ThreadLockMenuNoModify(v5, &v23);
  CaptionHeight = GetCaptionHeight(a1);
  v11 = *(_DWORD *)(a1 + 136) - 2 * a3 - *(_DWORD *)(a1 + 128);
  v12 = CaptionHeight + a4;
  if ( a1 != *(_QWORD *)(v5 + 88) || !*(_DWORD *)(v5 + 72) || !*(_DWORD *)(v5 + 76) )
    xxxMenuBarCompute((struct tagMENU *)v5, a1, v12, a3, *(_DWORD *)(a1 + 136) - 2 * a3 - *(_DWORD *)(a1 + 128));
  if ( *(_DWORD *)(v5 + 72) > v11
    || (int)(v12 + *(_DWORD *)(v5 + 76)) > *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 132) - a4 )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
    v32 = 1;
    GreIntersectVisRect(
      a2,
      (unsigned int)(*(_DWORD *)(a1 + 128) + a3),
      *(unsigned int *)(a1 + 132),
      a3 + *(_DWORD *)(a1 + 128) + v11,
      *(_DWORD *)(a1 + 140) - a4);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32LL));
  }
  v13 = *(_DWORD *)(v5 + 72);
  v14 = *(_DWORD *)(v5 + 76);
  v25[0] = a3;
  v15 = *(_QWORD *)(v5 + 128);
  v25[1] = v12;
  v25[2] = v13;
  v25[3] = v14;
  if ( !v15 )
  {
    if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
      v15 = *(_QWORD *)(gpsi + 4920LL);
    else
      v15 = *(_QWORD *)(gpsi + 4712LL);
  }
  v16 = (*(_BYTE *)(a1 + 65) & 3) == 0;
  v26 = v15;
  v28 = v14 + v12;
  v27 = a3;
  v29 = v13;
  v30 = 1;
  if ( v16 || (*(_BYTE *)(a1 + 60) & 8) != 0 )
    v17 = *(_QWORD *)(gpsi + 4728LL);
  else
    v17 = *(_QWORD *)(gpsi + 4800LL);
  v31 = v17;
  GrePolyPatBlt(a2, 15728673, (struct _POLYPATBLT *)v25, 2);
  if ( (*(_BYTE *)(a1 + 65) & 3) == 0 || (*(_BYTE *)(a1 + 60) & 8) != 0 )
    v18 = *(_QWORD *)(gpsi + 4728LL);
  else
    v18 = *(_QWORD *)(gpsi + 4800LL);
  v19 = GreSelectBrush(a2, v18);
  xxxMenuDraw(a2, v5, 0LL);
  GreSelectBrush(a2, v19);
  if ( v32 )
    RecalcDCVisRgn(a2);
  v21 = v24;
  v22 = *(_DWORD *)(v5 + 76);
  *(_DWORD *)(v24 + 56) &= ~0x200u;
  ThreadUnlock1(v21, v20);
  return (unsigned int)(v22 + 1);
}
