/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0137E8C
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0135CC0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C005DDC8 (PtInRect.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01327C4 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C01329E0 (-CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C0134FDC (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C013741C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0137568 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01378D0 (-UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::UpdateTPStateIndicator(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct PTPEnginePointerNode *a4,
        int *a5)
{
  unsigned __int64 v5; // rbx
  int v6; // ebp
  __int64 v8; // r12
  struct PTPInput *v13; // rdx
  int v14; // r10d
  int v15; // r8d
  int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // r9d
  struct PTPInput *v22; // rdx
  unsigned int v23; // r14d
  int v24; // r14d
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // r8
  unsigned int v30; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // ecx

  v5 = *((_QWORD *)a4 + 5);
  v6 = 0;
  v8 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    if ( !*((_DWORD *)this + 5)
      || !*((_DWORD *)this + 102)
      || !*((_DWORD *)this + 6)
      || PtInRect((_DWORD *)this + 12, v5) )
    {
      *(_DWORD *)a3 |= 0x800u;
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    v13 = (struct PTPInput *)*((unsigned int *)this + 820);
    v14 = -33554433;
    if ( ((unsigned int)v13 & 0x2000000) != 0
      && (unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)this + 773)) > *((_DWORD *)this + 90) )
    {
      v13 = (struct PTPInput *)((unsigned int)v13 & 0xFDFFFFFF);
      *((_DWORD *)this + 820) = (_DWORD)v13;
    }
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 804, v5) )
      *(_DWORD *)a3 = v15 | 0x40;
    v16 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 1) != 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, v13, (struct tagPOINT)v5, v8, a3);
      v23 = *(_DWORD *)a3 & 0xFFFFFFFD;
      *(_DWORD *)a3 = v23;
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        if ( (v23 & 4) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
        {
          *(_QWORD *)((char *)a3 + 28) = v5;
          *(_DWORD *)a3 = v23 | 4;
          *a5 = 1;
        }
        v24 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & 8) == 0
          && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
        {
          *(_DWORD *)a3 = v24 | 8;
        }
        if ( (*(_DWORD *)a3 & 0x20000) == 0
          && *((unsigned int *)this + 89)
           * (__int64)(int)((*(_QWORD *)((char *)a3 + 36) - v5) * (*(_QWORD *)((char *)a3 + 36) - v5))
           + (unsigned __int64)*((unsigned int *)this + 88)
           * (int)((HIDWORD(*(_QWORD *)((char *)a3 + 36)) - HIDWORD(v5))
                 * (HIDWORD(*(_QWORD *)((char *)a3 + 36)) - HIDWORD(v5))) >= *((unsigned int *)this + 89)
                                                                           * (unsigned __int64)*((unsigned int *)this
                                                                                               + 88) )
        {
          *(_DWORD *)a3 |= 0x20000u;
        }
        v25 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & 0x400000) == 0 && CPTPEngine::CrossedTPTapWarpBackThreshold(this, a3, (struct tagPOINT)v5) )
          *(_DWORD *)a3 = v25 | 0x400000;
        if ( (*(_DWORD *)a3 & 0x4000000) == 0 )
        {
          v26 = (unsigned int)(*((_DWORD *)this + 82) * *((_DWORD *)this + 82));
          v27 = (unsigned int)(*((_DWORD *)this + 83) * *((_DWORD *)this + 83));
          if ( v27 * (int)((*(_QWORD *)((char *)a3 + 4) - v5) * (*(_QWORD *)((char *)a3 + 4) - v5))
             + v26
             * (int)((HIDWORD(*(_QWORD *)((char *)a3 + 4)) - HIDWORD(v5))
                   * (HIDWORD(*(_QWORD *)((char *)a3 + 4)) - HIDWORD(v5))) >= (unsigned __int64)(v27 * v26) )
            *(_DWORD *)a3 |= 0x4000000u;
        }
      }
      v28 = v8 - *((_QWORD *)a3 + 8);
      v29 = *((_QWORD *)this + 387);
      v30 = *(_DWORD *)a3 & 0xFFFFFFDF | (*((_QWORD *)this + 389) < v28 ? 0x20 : 0);
      *(_DWORD *)a3 = v30;
      v31 = v30 & 0xFFFBFFFF | ((v28 > *((_QWORD *)this + 390)) << 18);
      *(_DWORD *)a3 = v31;
      v32 = v31 & 0xFFF7FFFF | ((v28 > *((_QWORD *)this + 391)) << 19);
      *(_DWORD *)a3 = v32;
      v33 = v32 & 0xFFEFFFFF | ((v28 > *((_QWORD *)this + 392)) << 20);
      *(_DWORD *)a3 = v33;
      v34 = v33 & 0xFFDFFFFF | (((unsigned __int64)(v8 - v29) > *((_QWORD *)this + 390)) << 21);
      *(_DWORD *)a3 = v34;
      if ( (v34 & 0x10) == 0 && (unsigned __int64)(v8 - *((_QWORD *)a3 + 9)) > *((_QWORD *)this + 388) )
      {
        *a5 = 1;
        *(_DWORD *)a3 = v34 | 0x10;
      }
      if ( (*(_DWORD *)a3 & 0x800000) == 0 && v28 > *((_QWORD *)this + 393) )
        *(_DWORD *)a3 |= 0x800000u;
      if ( (*(_DWORD *)a3 & 0x80u) == 0
        && (*((_DWORD *)this + 820) & 0x10000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 12), v8, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
    }
    else
    {
      *((_QWORD *)a3 + 8) = v8;
      *((_QWORD *)a3 + 11) = v8;
      *((_QWORD *)a3 + 13) = v8;
      *((_QWORD *)a3 + 15) = v8;
      v17 = v16 & 0xFFE1FFE3;
      *(_DWORD *)a3 = v17;
      *((_DWORD *)a3 + 33) = *((_DWORD *)a4 + 16);
      *((_DWORD *)a3 + 32) = *((_DWORD *)a4 + 16);
      *(_QWORD *)((char *)a3 + 4) = v5;
      *(_QWORD *)((char *)a3 + 36) = v5;
      *(_QWORD *)((char *)a3 + 44) = v5;
      v18 = v14 & v17 & 0xFEFFFFFF & 0xFBFFE5FC | 3;
      v19 = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v18;
      *(_QWORD *)((char *)a3 + 52) = v19;
      *((_DWORD *)a3 + 34) = 0;
      if ( !*((_DWORD *)this + 743) || (v20 = 0x2000, *((_DWORD *)this + 750) == 1) )
        v20 = 0;
      *((_DWORD *)a3 + 35) = 0;
      v21 = v20 & 0xDF3E3A3F | v18 & 0xDF3E1A3F | 0xC0000000;
      *(_DWORD *)a3 = v21;
      if ( (unsigned int)(*((_DWORD *)this + 750) - 1) <= 1
        && *(_QWORD *)a2 - *((_QWORD *)this + 400) >= *((_QWORD *)this + 12)
                                                    * (unsigned __int64)*((unsigned int *)this + 98)
                                                    / 0x3E8 )
      {
        v6 = 0x10000000;
      }
      *(_DWORD *)a3 = v6 | v21 & 0xEFFFFFFF;
      CPTPEngine::SetupDragRectsForContact(this, a3);
      CPTPEngine::UpdateContactRestingState(this, v22, (struct tagPOINT)v5, v8, a3);
    }
  }
}
