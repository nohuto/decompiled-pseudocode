/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C029D830
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C029DD14 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0026EE4 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z @ 0x1C029D7C0 (-TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C029DA40 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  struct REGION **v5; // rsi
  struct REGION **v6; // rax
  struct REGION *v7; // rsi
  int v8; // eax
  _QWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v14; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+90h] [rbp+20h] BYREF
  struct REGION *v16; // [rsp+A0h] [rbp+30h] BYREF

  v2 = 1;
  if ( *((_DWORD *)this + 10) == 1 )
  {
    v5 = (struct REGION **)((char *)this + 8);
    if ( *((_QWORD *)this + 1) || *(_QWORD *)this )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
      v15 = *((_QWORD *)this + 4);
      if ( !v10[0] || !v12[0] || !v11[0] )
        goto LABEL_21;
      v6 = (struct REGION **)this;
      if ( *v5 )
        v6 = v5;
      v7 = *v6;
      v16 = *v6;
      RGNOBJ::vSet((RGNOBJ *)v12);
      if ( RGNOBJ::iCombine((RGNOBJ *)v10, (struct RGNOBJ *)&v15, (struct RGNOBJ *)v12, 2)
        && RGNOBJ::bOffset((RGNOBJ *)v10, (struct _POINTL *)this + 3)
        && v15
        && v10[0]
        && v11[0]
        && v13[0]
        && RGNOBJ::iCombine((RGNOBJ *)v13, (struct RGNOBJ *)&v15, (struct RGNOBJ *)v10, 2)
        && (v8 = RGNOBJ::iCombine((RGNOBJ *)v11, (struct RGNOBJ *)v13, (struct RGNOBJ *)&v16, 1)) != 0 )
      {
        if ( v8 != 1 )
        {
          v14 = *(_OWORD *)(v11[0] + 88LL);
          if ( !ERECTL::bEmpty((ERECTL *)&v14) )
          {
            v2 = METAREGION::bTrimMoveWithRegion(this, v7, 0);
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
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
    }
  }
  return v2;
}
