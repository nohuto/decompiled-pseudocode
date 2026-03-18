/*
 * XREFs of ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0214860
 * Callers:
 *     FindBestPos @ 0x1C021494C (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 */

__int64 __fastcall TryRect(
        int a1,
        int right,
        LONG bottom,
        int a4,
        int a5,
        struct tagRECT *a6,
        struct tagPOINT *a7,
        struct tagMONITOR *a8)
{
  unsigned int v12; // r15d
  int v13; // edi
  int v14; // edi
  bool v15; // cc
  bool v17; // cc
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF

  v12 = 0;
  v18 = *GetMonitorWorkRect(&v18, (__int64)a8);
  if ( !a1 )
  {
    right = a6->left - a4;
    v17 = right < (int)v18;
LABEL_11:
    if ( v17 )
      return 0LL;
    goto LABEL_12;
  }
  v13 = a1 - 1;
  if ( !v13 )
  {
    bottom = a6->top - a5;
    v17 = bottom < SDWORD1(v18);
    goto LABEL_11;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_12;
    bottom = a6->bottom;
    v15 = bottom + a5 <= SHIDWORD(v18);
  }
  else
  {
    right = a6->right;
    v15 = right + a4 <= SDWORD2(v18);
  }
  if ( !v15 )
    return 0LL;
LABEL_12:
  DWORD2(v18) = right + a4;
  HIDWORD(v18) = bottom + a5;
  LODWORD(v18) = right;
  a7->x = right;
  a7->y = bottom;
  DWORD1(v18) = bottom;
  LOBYTE(v12) = (unsigned int)IntersectRect(&v18, (int *)&v18, &a6->left) == 0;
  return v12;
}
