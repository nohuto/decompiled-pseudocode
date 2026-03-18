/*
 * XREFs of ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0081ED8
 * Callers:
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 * Callees:
 *     GreExtTextOutWInternal @ 0x1C001D2B0 (GreExtTextOutWInternal.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 */

__int64 __fastcall DrawGrip(HDC a1, struct tagRECT *a2, __int16 a3)
{
  LONG bottom; // ebp
  LONG top; // r8d
  LONG right; // esi
  int v7; // r9d
  LONG left; // r10d
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  __int64 v14; // rax
  _DWORD v16[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+60h] [rbp-38h]

  bottom = a2->bottom;
  top = a2->top;
  right = a2->right;
  v7 = bottom - top;
  left = a2->left;
  v10 = right - a2->left;
  v11 = v10;
  if ( v10 >= bottom - top )
    v11 = bottom - top;
  v12 = right - v11;
  v13 = bottom - v11;
  if ( (a3 & 0xC000) != 0 )
    v14 = *(_QWORD *)(gpsi + 4720LL);
  else
    v14 = *(_QWORD *)(gpsi + 4800LL);
  v16[1] = top;
  v16[2] = v10;
  v16[3] = v7;
  v16[0] = left;
  v17 = v14;
  GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v16, 1);
  GreSetTextColor(a1);
  if ( (a3 & 0x10) != 0 )
  {
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"x", 1u, 0LL, 0LL, 0);
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"y", 1u, 0LL, 0LL, 0);
  }
  else
  {
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"o", 1u, 0LL, 0LL, 0);
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, v12, v13, 0, 0LL, L"p", 1u, 0LL, 0LL, 0);
  }
  GreSetTextColor(a1);
  return 1LL;
}
