/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C0299F20
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C029A400 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008F200 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z @ 0x1C0299EB0 (-TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C029A12C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  METAREGION *v5; // rsi
  struct REGION *v6; // rsi
  int v7; // eax
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v13; // [rsp+60h] [rbp-10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+20h] BYREF
  struct REGION *v15; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 1;
  if ( *((_DWORD *)this + 10) == 1 )
  {
    v5 = (METAREGION *)((char *)this + 8);
    if ( *((_QWORD *)this + 1) || *(_QWORD *)this )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
      v14 = *((_QWORD *)this + 4);
      if ( !v9[0] || !v11[0] || !v10[0] )
        goto LABEL_21;
      if ( !*(_QWORD *)v5 )
        v5 = this;
      v6 = *(struct REGION **)v5;
      v15 = v6;
      RGNOBJ::vSet((RGNOBJ *)v11);
      if ( RGNOBJ::iCombine((RGNOBJ *)v9, (struct RGNOBJ *)&v14, (struct RGNOBJ *)v11, 2)
        && RGNOBJ::bOffset((RGNOBJ *)v9, (struct _POINTL *)this + 3)
        && v14
        && v9[0]
        && v10[0]
        && v12[0]
        && RGNOBJ::iCombine((RGNOBJ *)v12, (struct RGNOBJ *)&v14, (struct RGNOBJ *)v9, 2)
        && (v7 = RGNOBJ::iCombine((RGNOBJ *)v10, (struct RGNOBJ *)v12, (struct RGNOBJ *)&v15, 1)) != 0 )
      {
        if ( v7 != 1 )
        {
          v13 = *(_OWORD *)(v10[0] + 88LL);
          if ( !ERECTL::bEmpty((ERECTL *)&v13) )
          {
            v2 = METAREGION::bTrimMoveWithRegion(this, v6, 0);
            if ( !v2 )
              METAREGION::TraceMoveRemovedMoveRegions(this, a2);
          }
        }
      }
      else
      {
LABEL_21:
        METAREGION::vClearMoveData(this, 1);
        v2 = 0;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
    }
  }
  return v2;
}
