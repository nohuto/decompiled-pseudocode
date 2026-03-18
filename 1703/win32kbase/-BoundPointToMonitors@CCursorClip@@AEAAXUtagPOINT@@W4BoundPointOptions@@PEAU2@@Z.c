/*
 * XREFs of ?BoundPointToMonitors@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C00724B8
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0072420 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C0072788 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C012A090 (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToMonitors(__int64 a1, struct tagPOINT a2, unsigned int a3, struct tagPOINT *a4)
{
  unsigned int *v5; // r11
  struct tagPOINT v7; // r10
  unsigned int *v9; // r9
  unsigned int v10; // r14d
  unsigned int *v11; // rsi
  unsigned int v12; // r8d
  __int64 v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // rcx
  const struct tagRECT *v16; // rcx

  *a4 = a2;
  v5 = *(unsigned int **)(a1 + 48);
  v7 = a2;
  if ( !v5 )
    return;
  v9 = *(unsigned int **)(a1 + 56);
  if ( v9 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(*(_QWORD *)(a1 + 56), a2) )
      return;
  }
  v10 = *v5;
  v11 = 0LL;
  v12 = 0;
  if ( *v5 )
  {
    while ( 1 )
    {
      v13 = 30LL * v12;
      if ( !v5[v13 + 30] )
      {
        if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(&v5[v13 + 2], v7) )
          break;
      }
      if ( ++v12 >= v10 )
        goto LABEL_9;
    }
    v11 = &v5[v13 + 2];
  }
LABEL_9:
  if ( !v9 )
    goto LABEL_10;
  if ( v11 )
  {
    if ( v9 != v11 && a3 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::ApplySpeedBumpAndCornerLock)(a1, v7, a3, a4);
LABEL_10:
    if ( v11 )
    {
      v14 = *(_QWORD *)(a1 + 56);
      if ( !v14 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v14, *a4) )
        *(_QWORD *)(a1 + 56) = v11;
    }
  }
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
  {
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v15, *a4) )
      CCursorClip::ClipPointToRect(*a4, v16, a4);
  }
}
