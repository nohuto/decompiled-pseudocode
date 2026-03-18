/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0055A4C
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0055BF0 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     PtInRect @ 0x1C0055DE4 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C0055E0C (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C0120148 (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToRegions(
        struct tagRECT *a1,
        struct tagPOINT a2,
        unsigned int a3,
        struct tagPOINT *a4)
{
  struct tagRECT *v4; // rbx
  struct tagRECT *v8; // rsi
  __int64 v9; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _SINGLE_LIST_ENTRY *v11; // r10
  struct tagRECT *v12; // rcx
  int v13; // r8d
  unsigned int v14; // r9d
  __int64 v15; // rcx
  char v16[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+30h] [rbp-18h]

  v4 = a1 + 3;
  *a4 = a2;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(&a1[3], a2) )
    return;
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v16);
  v8 = 0LL;
  v9 = 0LL;
  Next = gpInputConfig[4].Next;
  if ( HIDWORD(Next[1].Next) )
  {
    v11 = Next[2].Next;
    while ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(&v11[10 * v9], *a4) )
    {
      v9 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v9 >= v14 )
        goto LABEL_7;
    }
    v8 = v12;
  }
LABEL_7:
  if ( v4->left >= v4->right || v4->top >= v4->bottom )
    goto LABEL_9;
  if ( v8 )
  {
    v15 = *(_QWORD *)&v4->left - *(_QWORD *)&v8->left;
    if ( *(_QWORD *)&v4->left == *(_QWORD *)&v8->left )
      v15 = *(_QWORD *)&v4->right - *(_QWORD *)&v8->right;
    if ( v15 && (a3 & 3) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::ApplySpeedBumpAndCornerLock)(a1, *a4, a3, a4);
LABEL_9:
    if ( v8 && !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v4, *a4) )
      *v4 = *v8;
  }
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v4, *a4) )
    CCursorClip::ClipPointToRect(*a4, v4, a4);
  if ( !v18 )
  {
    ExReleasePushLockSharedEx(v17, 0LL);
    KeLeaveCriticalRegion();
  }
}
