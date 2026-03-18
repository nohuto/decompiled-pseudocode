/*
 * XREFs of ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0138BE4
 * Callers:
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C0136CA0 (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1C007268C (PtInRect.c)
 *     ?CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z @ 0x1C01336F8 (-CrossedTPDragThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@H@Z.c)
 *     ?CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z @ 0x1C0133900 (-CrossedTPTapWarpBackThreshold@CPTPEngine@@AEAAHPEAUCContactState@@UtagPOINT@@@Z.c)
 *     ?PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z @ 0x1C0136444 (-PassedCurtainMoveThresholds@CPTPEngine@@AEAAH_K0PEAUCContactState@@@Z.c)
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C013810C (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C0138208 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C0138634 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
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
  int v13; // edx
  int v14; // r9d
  int v15; // r8d
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // r14d
  int v21; // r14d
  int v22; // r14d
  unsigned int v23; // ecx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // edx

  v5 = *((_QWORD *)a4 + 5);
  v6 = 0;
  v8 = *((_QWORD *)a4 + 10);
  if ( *((_DWORD *)a4 + 3) )
  {
    if ( !*((_DWORD *)this + 5)
      || !*((_DWORD *)this + 97)
      || !*((_DWORD *)this + 6)
      || PtInRect((_DWORD *)this + 12, v5) )
    {
      *(_DWORD *)a3 |= 0x1000u;
      CPTPEngine::TPAAPSetCurtainState(this, 0);
    }
    v13 = *((_DWORD *)this + 805);
    v14 = -67108865;
    if ( (v13 & 0x4000000) != 0
      && (unsigned int)(*((_DWORD *)a2 + 6) - *((_DWORD *)this + 758)) > *((_DWORD *)this + 90) )
    {
      *((_DWORD *)this + 805) = v13 & 0xFBFFFFFF;
    }
    if ( (*(_DWORD *)a3 & 0x40) == 0 && !PtInRect((_DWORD *)this + 786, v5) )
      *(_DWORD *)a3 = v15 | 0x40;
    if ( (*(_DWORD *)a3 & 1) != 0 )
    {
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v5, v8, a3);
      v20 = *(_DWORD *)a3 & 0xFFFFFFFD;
      *(_DWORD *)a3 = v20;
      if ( (*((_DWORD *)a4 + 3) & 0x40000) == 0 )
      {
        if ( (v20 & 4) == 0 && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 0) )
        {
          *(_QWORD *)((char *)a3 + 36) = v5;
          *(_DWORD *)a3 = v20 | 4;
          *a5 = 1;
        }
        v21 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & 8) == 0
          && (unsigned int)CPTPEngine::CrossedTPDragThreshold(this, a3, (struct tagPOINT)v5, 1) )
        {
          *(_DWORD *)a3 = v21 | 8;
        }
        if ( (*(_DWORD *)a3 & 0x80000) == 0
          && *((unsigned int *)this + 89)
           * (__int64)(int)((*(_QWORD *)((char *)a3 + 44) - v5) * (*(_QWORD *)((char *)a3 + 44) - v5))
           + (unsigned __int64)*((unsigned int *)this + 88)
           * (int)((HIDWORD(*(_QWORD *)((char *)a3 + 44)) - HIDWORD(v5))
                 * (HIDWORD(*(_QWORD *)((char *)a3 + 44)) - HIDWORD(v5))) >= *((unsigned int *)this + 89)
                                                                           * (unsigned __int64)*((unsigned int *)this
                                                                                               + 88) )
        {
          *(_DWORD *)a3 |= 0x80000u;
        }
        v22 = *(_DWORD *)a3;
        if ( (*(_DWORD *)a3 & 0x800000) == 0 && CPTPEngine::CrossedTPTapWarpBackThreshold(this, a3, (struct tagPOINT)v5) )
          *(_DWORD *)a3 = v22 | 0x800000;
        if ( (*(_DWORD *)a3 & 0x8000000) == 0 )
        {
          v23 = *((_DWORD *)this + 83) * *((_DWORD *)this + 83);
          v24 = (unsigned int)(*((_DWORD *)this + 82) * *((_DWORD *)this + 82));
          if ( (unsigned __int64)v23 * (int)((*(_QWORD *)((char *)a3 + 4) - v5) * (*(_QWORD *)((char *)a3 + 4) - v5))
             + v24
             * (int)((HIDWORD(*(_QWORD *)((char *)a3 + 4)) - HIDWORD(v5))
                   * (HIDWORD(*(_QWORD *)((char *)a3 + 4)) - HIDWORD(v5))) >= (unsigned __int64)v23 * v24 )
            *(_DWORD *)a3 |= 0x8000000u;
        }
      }
      v25 = *((_QWORD *)this + 380);
      v26 = v8 - *((_QWORD *)a3 + 9);
      v27 = *(_DWORD *)a3 & 0xFFFFFFDF | (*((_QWORD *)this + 382) < v26 ? 0x20 : 0);
      *(_DWORD *)a3 = v27;
      v28 = v27 & 0xFFEFFFFF | ((v26 > *((_QWORD *)this + 383)) << 20);
      *(_DWORD *)a3 = v28;
      v29 = v28 & 0xFFDFFFFF | ((v26 > *((_QWORD *)this + 384)) << 21);
      *(_DWORD *)a3 = v29;
      v30 = v29 & 0xFFBFFFFF | (((unsigned __int64)(v8 - v25) > *((_QWORD *)this + 383)) << 22);
      *(_DWORD *)a3 = v30;
      if ( (v30 & 0x10) == 0 && (unsigned __int64)(v8 - *((_QWORD *)a3 + 10)) > *((_QWORD *)this + 381) )
      {
        *a5 = 1;
        *(_DWORD *)a3 = v30 | 0x10;
      }
      if ( (*(_DWORD *)a3 & 0x1000000) == 0 && v26 > *((_QWORD *)this + 385) )
        *(_DWORD *)a3 |= 0x1000000u;
      if ( (*(_DWORD *)a3 & 0x100) == 0
        && (*((_DWORD *)this + 805) & 0x10000) != 0
        && CPTPEngine::PassedCurtainMoveThresholds(this, *((_QWORD *)a3 + 13), v8, a3) )
      {
        CPTPEngine::TPAAPSetCurtainState(this, 0);
      }
    }
    else
    {
      v16 = *(_DWORD *)a3 & 0xFFFFFFFB;
      *((_DWORD *)a3 + 38) = *((_DWORD *)a4 + 1);
      *((_QWORD *)a3 + 9) = v8;
      *((_QWORD *)a3 + 12) = v8;
      *((_QWORD *)a3 + 14) = v8;
      *((_QWORD *)a3 + 16) = v8;
      v16 &= 0xFFC7FFE7;
      *(_DWORD *)a3 = v16;
      *((_DWORD *)a3 + 34) = *((_DWORD *)a4 + 16);
      *(_QWORD *)((char *)a3 + 4) = v5;
      *(_QWORD *)((char *)a3 + 44) = v5;
      *(_QWORD *)((char *)a3 + 52) = v5;
      v17 = v14 & v16 & 0xFDFFFFFF & 0xF7FFCBFC | 3;
      *(_QWORD *)((char *)a3 + 60) = *(_QWORD *)((char *)a2 + 28);
      *(_DWORD *)a3 = v17;
      *((_DWORD *)a3 + 35) = 0;
      if ( !*((_DWORD *)this + 726) || (v18 = 0x4000, *((_DWORD *)this + 733) == 1) )
        v18 = 0;
      v19 = v18 & 0xFE7877FF | v17 & 0xFE7837FF;
      *(_DWORD *)a3 = v19;
      LOBYTE(v6) = *((_DWORD *)this + 733) == 1;
      *(_DWORD *)a3 = v19 & 0xDFFFFFFF | (v6 << 29);
      CPTPEngine::SetupDragRectsForContact(this, a3);
      CPTPEngine::UpdateContactRestingState(this, (struct tagPOINT)v5, v8, a3);
    }
  }
}
