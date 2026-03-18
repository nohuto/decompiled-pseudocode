/*
 * XREFs of ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C009C3DC
 * Callers:
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0080088 (-DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 */

__int64 __fastcall DrawIt(HDC a1, struct tagRECT *a2, __int16 a3, __int16 a4)
{
  LONG top; // r11d
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // edi
  int v12; // esi
  int v13; // r15d
  int v14; // edx
  int v15; // r14d
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  LOWORD(v17) = a4;
  top = a2->top;
  v8 = a2->right - a2->left;
  v9 = v8;
  v10 = a2->bottom - top;
  if ( v8 >= v10 )
    v9 = a2->bottom - top;
  v11 = a2->left + (v8 - v9) / 2;
  v12 = top + (v10 - v9) / 2;
  v13 = a3 & 0x100;
  if ( v13 )
  {
    v14 = *(_DWORD *)(gpsi + 4632LL);
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v14 = *(_DWORD *)(gpsi + 4656LL);
  }
  else
  {
    v14 = *(_DWORD *)(gpsi + 4624LL);
  }
  v15 = GreSetTextColor(a1, v14);
  if ( (a3 & 0x300) != 0 )
  {
    ++v11;
    ++v12;
  }
  GreExtTextOutWInternal(a1, v11, v12, 0, 0LL, (unsigned __int16 *)&v17, 1u, 0LL, 0LL, 0);
  if ( v13 )
  {
    GreSetTextColor(a1, *(_DWORD *)(gpsi + 4616LL));
    GreExtTextOutWInternal(a1, v11 - 1, v12 - 1, 0, 0LL, (unsigned __int16 *)&v17, 1u, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1, v15);
  return 1LL;
}
