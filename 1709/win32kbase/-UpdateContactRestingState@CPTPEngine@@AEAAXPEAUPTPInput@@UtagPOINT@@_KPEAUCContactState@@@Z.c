/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C01378D0
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C0137E8C (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C0132468 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C0135060 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013732C (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        __int64 a4,
        struct CContactState *a5)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r11
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r10
  int v13; // ebp
  bool v14; // cl
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  LONG v17; // r15d
  int v18; // r14d
  const struct CContactState *v19; // r9
  int v20; // eax
  int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int i; // r8d
  struct CContactState *v25; // rax
  int v26; // r9d
  struct CContactState *v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // rcx
  struct CContactState *v30; // r10
  struct CContactState *j; // r11
  int v32; // r9d
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rax
  CPTPEngine *v38; // rcx
  struct CContactState *v39; // r10
  LONG y; // [rsp+64h] [rbp+1Ch]

  y = a3.y;
  v8 = a4 - *((_QWORD *)a5 + 11);
  v9 = *((_QWORD *)a5 + 8);
  v10 = *(_DWORD *)a5;
  v11 = 6LL;
  v12 = a4 - v9;
  v13 = -__CFSHR__(*(_DWORD *)a5, 8);
  v14 = *((_DWORD *)this + 750) == 6 && !__CFSHR__(*(_DWORD *)a5, 8);
  if ( (v10 & 0x200) == 0 && !v14 )
  {
    if ( (v10 & 0x100) == 0 && v12 && !*((_DWORD *)a5 + 35) )
      *(_DWORD *)a5 = v10 | 0x100;
    v15 = *((_QWORD *)this + 12) * (*((_DWORD *)this + 44) / 0xAu);
    v16 = v15 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    if ( v8 >= v15 / 0x3E8 || !v12 )
    {
      v17 = *((_DWORD *)this + 805);
      BYTE8(v16) = a3.y >= v17 || (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, a3);
      if ( v12 )
      {
        v18 = 0;
        if ( *((_DWORD *)this + 750) == 2
          && v13
          && (v19 = (CPTPEngine *)((char *)this + 296 * *((unsigned int *)this + 742) + 1192), a5 != v19)
          && (*(_DWORD *)v19 & 0x80u) == 0
          && (BYTE8(v16) || v9 < *((_QWORD *)v19 + 12)) )
        {
          v20 = CPTPEngine::AreTheseTwoContactsAPan(this, *((const struct PTPInput **)&v16 + 1), a5, v19);
          v21 = 1;
          if ( !v20 )
            v18 = 1;
        }
        else
        {
          v21 = 1;
        }
        if ( y >= v17 || (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, a3) && v13 )
        {
          v22 = (*(_DWORD *)a5 & 0x100) != 0 ? *((unsigned int *)a5 + 35) : 0LL;
          if ( (int)((HIDWORD(*(_QWORD *)((char *)a5 + 8 * v22 + 148)) - y)
                   * (HIDWORD(*(_QWORD *)((char *)a5 + 8 * v22 + 148)) - y)
                   + (*(_QWORD *)((char *)a5 + 8 * v22 + 148) - a3.x) * (*(_QWORD *)((char *)a5 + 8 * v22 + 148) - a3.x)) <= (unsigned __int64)*((unsigned int *)this + 43) )
            v18 = v21;
        }
        CPTPEngine::SetContactRestingState(this, a5, v18);
      }
      else
      {
        CPTPEngine::SetContactRestingState(this, a5, BYTE8(v16));
      }
      *(struct tagPOINT *)((char *)a5 + 8 * *((unsigned int *)a5 + 35) + 148) = a3;
      v23 = *((_DWORD *)a5 + 35) + 1;
      *((_QWORD *)a5 + 11) = a4;
      *((_DWORD *)a5 + 35) = v23 % 0xA;
    }
  }
  if ( *((_DWORD *)this + 750) == 1 )
  {
    if ( v13 && (*(_DWORD *)a5 & 4) != 0 && *(int *)a5 < 0 )
    {
      for ( i = 0; i < 6; ++i )
      {
        v25 = (CPTPEngine *)((char *)this + 296 * i + 1192);
        if ( a5 != v25 )
        {
          v26 = *(_DWORD *)v25;
          if ( (*(_DWORD *)v25 & 1) != 0
            && ((v26 & 0x80u) == 0
             || a4 - *((_QWORD *)v25 + 8) < *((_QWORD *)this + 12)
                                          * (unsigned __int64)*((unsigned int *)this + 44)
                                          / 0x3E8
             && __CFSHR__(v26, 3)
             && v26 < 0) )
          {
            goto LABEL_60;
          }
        }
      }
      v27 = (CPTPEngine *)((char *)this + 1192);
      do
      {
        if ( a5 != v27 && (*(_DWORD *)v27 & 1) != 0 )
        {
          v28 = *(_DWORD *)v27 & 0x7FFFFFFF;
          *(_DWORD *)v27 = v28;
          v29 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 44) / 0x3E8;
          if ( a4 - *((_QWORD *)v27 + 8) >= v29 && a4 - *((_QWORD *)a5 + 8) < v29 )
            *(_DWORD *)v27 = v28 & 0xBFFFFFFF;
        }
        v27 = (struct CContactState *)((char *)v27 + 296);
        --v11;
      }
      while ( v11 );
      CPTPEngine::SetContactRestingState(this, a5, 0);
    }
LABEL_60:
    if ( *((_DWORD *)this + 750) == 1 )
    {
      v30 = (CPTPEngine *)((char *)this + 1192);
      for ( j = (CPTPEngine *)((char *)this + 2968); v30 != j; v30 = (struct CContactState *)((char *)v30 + 296) )
      {
        v32 = *(_DWORD *)v30;
        if ( (*(_DWORD *)v30 & 1) != 0 && v30 != a5 && ((v32 & 0x80u) != 0 || (*(_DWORD *)a5 & 0x80u) != 0) )
        {
          v33 = *((_QWORD *)v30 + 8);
          v34 = *((_QWORD *)a5 + 8);
          if ( v33 <= v34 )
            v35 = v34 - v33;
          else
            v35 = v33 - v34;
          if ( v35 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 87) / 0x3E8 )
          {
            v36 = *((_DWORD *)this + 805);
            if ( *((_DWORD *)a5 + 2) >= v36
              && *((_DWORD *)v30 + 2) >= v36
              && (*(_DWORD *)a5 & 0x40000000) != 0
              && (v32 & 0x40000000) != 0
              && (*(_DWORD *)a5 & 0x20000) != 0
              && (v32 & 0x20000) != 0 )
            {
              v37 = *(_QWORD *)((char *)v30 + 4);
              if ( (int)((*(_QWORD *)((char *)a5 + 4) - v37) * (*(_QWORD *)((char *)a5 + 4) - v37)
                       + (HIDWORD(*(_QWORD *)((char *)a5 + 4)) - HIDWORD(v37))
                       * (HIDWORD(*(_QWORD *)((char *)a5 + 4)) - HIDWORD(v37))) <= (unsigned __int64)*((unsigned int *)this + 73) )
              {
                CPTPEngine::SetContactRestingState(this, a5, 0);
                CPTPEngine::SetContactRestingState(v38, v39, 0);
                *(_DWORD *)a5 |= 0x200u;
                *(_DWORD *)v30 |= 0x200u;
              }
            }
          }
        }
      }
    }
  }
}
