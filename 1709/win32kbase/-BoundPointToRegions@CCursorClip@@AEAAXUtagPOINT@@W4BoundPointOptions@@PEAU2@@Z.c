/*
 * XREFs of ?BoundPointToRegions@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C005DBD8
 * Callers:
 *     ?BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C005DB40 (-BoundPoint@CCursorClip@@QEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 * Callees:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005DA28 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     ?ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z @ 0x1C005DEB8 (-ClipPointToRect@CCursorClip@@CAXUtagPOINT@@PEBUtagRECT@@PEAU2@@Z.c)
 *     ?ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x1C01299E0 (-ApplySpeedBumpAndCornerLock@CCursorClip@@AEAAXUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 */

void __fastcall CCursorClip::BoundPointToRegions(__int64 a1, struct tagPOINT a2, unsigned int a3, struct tagPOINT *a4)
{
  __int64 v4; // rbx
  struct CInpPushLock *v8; // rdx
  _QWORD *v9; // rsi
  __int64 v10; // r8
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _SINGLE_LIST_ENTRY *v12; // r10
  _QWORD *v13; // rcx
  int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  _BYTE v17[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+28h] [rbp-20h]
  char v19; // [rsp+30h] [rbp-18h]

  v4 = a1 + 48;
  *a4 = a2;
  if ( (unsigned int)PtInRect(a1 + 48) )
    return;
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v17, v8);
  v9 = 0LL;
  v10 = 0LL;
  Next = gpInputConfig[4].Next;
  if ( HIDWORD(Next[1].Next) )
  {
    v12 = Next[2].Next;
    while ( !(unsigned int)PtInRect(&v12[10 * v10]) )
    {
      v10 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v10 >= v15 )
        goto LABEL_7;
    }
    v9 = v13;
  }
LABEL_7:
  if ( IsRectEmptyInl((const struct tagRECT *)v4) )
    goto LABEL_8;
  if ( v9 )
  {
    v16 = *(_QWORD *)v4 - *v9;
    if ( *(_QWORD *)v4 == *v9 )
      v16 = *(_QWORD *)(v4 + 8) - v9[1];
    if ( v16 && a3 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CCursorClip::ApplySpeedBumpAndCornerLock)(a1, *a4, a3, a4);
LABEL_8:
    if ( v9 && !(unsigned int)PtInRect(v4) )
      *(_OWORD *)v4 = *(_OWORD *)v9;
  }
  if ( !(unsigned int)PtInRect(v4) )
    CCursorClip::ClipPointToRect(*a4, (const struct tagRECT *)v4, a4);
  if ( !v19 )
  {
    ExReleasePushLockSharedEx(v18, 0LL);
    KeLeaveCriticalRegion();
  }
}
