/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXPEAUPTPInput@@UtagPOINT@@_KPEAUCContactState@@@Z @ 0x1C013BC80
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@PEAH@Z @ 0x1C013C224 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C013649C (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z.c)
 *     ?PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z @ 0x1C0139210 (-PointInsideCurtainRegion@CPTPEngine@@AEAAHUtagPOINT@@@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z @ 0x1C013B6F0 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@H@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        __int64 a4,
        struct CContactState *a5)
{
  __int64 v6; // r11
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r12
  int v10; // eax
  __int64 v11; // r13
  __int64 v12; // r10
  int v13; // r14d
  bool v14; // cl
  unsigned __int64 v15; // rcx
  unsigned __int128 v16; // rax
  LONG v17; // r15d
  int v18; // ebp
  const struct CContactState *v19; // r9
  int v20; // eax
  int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int i; // r8d
  struct CContactState *v25; // rax
  int v26; // edx
  unsigned __int64 v27; // r11
  struct CContactState *v28; // rcx
  int v29; // r9d
  unsigned __int64 v30; // r8
  struct CContactState *v31; // r10
  struct CContactState *j; // r11
  int v33; // r9d
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rax
  CPTPEngine *v39; // rcx
  struct CContactState *v40; // r10
  LONG y; // [rsp+74h] [rbp+1Ch]

  y = a3.y;
  v6 = a4;
  v8 = a4 - *((_QWORD *)a5 + 11);
  v9 = *((_QWORD *)a5 + 8);
  v10 = *(_DWORD *)a5;
  v11 = 6LL;
  v12 = a4 - v9;
  v13 = -__CFSHR__(*(_DWORD *)a5, 8);
  v14 = *((_DWORD *)this + 751) == 6 && !__CFSHR__(*(_DWORD *)a5, 8);
  if ( (v10 & 0x200) == 0 && !v14 )
  {
    if ( (v10 & 0x100) == 0 && v12 && !*((_DWORD *)a5 + 35) )
      *(_DWORD *)a5 = v10 | 0x100;
    v15 = *((_QWORD *)this + 12) * (*((_DWORD *)this + 44) / 0xAu);
    v16 = v15 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    if ( v8 >= v15 / 0x3E8 || !v12 )
    {
      v17 = *((_DWORD *)this + 807);
      BYTE8(v16) = a3.y >= v17 || (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, a3);
      if ( v12 )
      {
        v18 = 0;
        if ( *((_DWORD *)this + 751) == 2
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
        if ( y >= v17
          || (unsigned int)CPTPEngine::PointInsideCurtainRegion(this, a3) && v13
          || v9 <= *((_QWORD *)this + 388) )
        {
          v22 = (*(_DWORD *)a5 & 0x100) != 0 ? *((unsigned int *)a5 + 35) : 0LL;
          if ( (int)((HIDWORD(*(_QWORD *)((char *)a5 + 8 * v22 + 148)) - y)
                   * (HIDWORD(*(_QWORD *)((char *)a5 + 8 * v22 + 148)) - y)
                   + (*(_QWORD *)((char *)a5 + 8 * v22 + 148) - a3.x) * (*(_QWORD *)((char *)a5 + 8 * v22 + 148) - a3.x)) <= (unsigned __int64)*((unsigned int *)this + 43) )
            v18 = v21;
        }
      }
      else
      {
        v18 = BYTE8(v16);
      }
      CPTPEngine::SetContactRestingState(this, a5, v18);
      *(struct tagPOINT *)((char *)a5 + 8 * *((unsigned int *)a5 + 35) + 148) = a3;
      v23 = *((_DWORD *)a5 + 35) + 1;
      *((_QWORD *)a5 + 11) = v6;
      *((_DWORD *)a5 + 35) = v23 % 0xA;
    }
  }
  if ( *((_DWORD *)this + 751) == 1 )
  {
    if ( v13 && (*(_DWORD *)a5 & 4) != 0 && *(int *)a5 < 0 )
    {
      for ( i = 0; i < 6; ++i )
      {
        v25 = (CPTPEngine *)((char *)this + 296 * i + 1192);
        if ( a5 != v25 )
        {
          v26 = *(_DWORD *)v25;
          if ( (*(_DWORD *)v25 & 1) != 0 )
          {
            v27 = v6 - *((_QWORD *)v25 + 8);
            if ( (v26 & 0x80u) == 0
              || v27 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 44) / 0x3E8
              && __CFSHR__(v26, 3)
              && v26 < 0 )
            {
              goto LABEL_62;
            }
            v6 = a4;
          }
        }
      }
      v28 = (CPTPEngine *)((char *)this + 1192);
      do
      {
        if ( a5 != v28 && (*(_DWORD *)v28 & 1) != 0 )
        {
          v29 = *(_DWORD *)v28 & 0x7FFFFFFF;
          *(_DWORD *)v28 = v29;
          v30 = *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 44) / 0x3E8;
          if ( v6 - *((_QWORD *)v28 + 8) >= v30 && v6 - *((_QWORD *)a5 + 8) < v30 )
            *(_DWORD *)v28 = v29 & 0xBFFFFFFF;
        }
        v28 = (struct CContactState *)((char *)v28 + 296);
        --v11;
      }
      while ( v11 );
      CPTPEngine::SetContactRestingState(this, a5, 0);
    }
LABEL_62:
    if ( *((_DWORD *)this + 751) == 1 )
    {
      v31 = (CPTPEngine *)((char *)this + 1192);
      for ( j = (CPTPEngine *)((char *)this + 2968); v31 != j; v31 = (struct CContactState *)((char *)v31 + 296) )
      {
        v33 = *(_DWORD *)v31;
        if ( (*(_DWORD *)v31 & 1) != 0 && v31 != a5 && ((v33 & 0x80u) != 0 || (*(_DWORD *)a5 & 0x80u) != 0) )
        {
          v34 = *((_QWORD *)v31 + 8);
          v35 = *((_QWORD *)a5 + 8);
          if ( v34 <= v35 )
            v36 = v35 - v34;
          else
            v36 = v34 - v35;
          if ( v36 < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 87) / 0x3E8 )
          {
            v37 = *((_DWORD *)this + 807);
            if ( *((_DWORD *)a5 + 3) >= v37
              && *((_DWORD *)v31 + 3) >= v37
              && (*(_DWORD *)a5 & 0x40000000) != 0
              && (v33 & 0x40000000) != 0
              && (*(_DWORD *)a5 & 0x20000) != 0
              && (v33 & 0x20000) != 0 )
            {
              v38 = *((_QWORD *)v31 + 1);
              if ( (int)((*((_QWORD *)a5 + 1) - v38) * (*((_QWORD *)a5 + 1) - v38)
                       + (HIDWORD(*((_QWORD *)a5 + 1)) - HIDWORD(v38)) * (HIDWORD(*((_QWORD *)a5 + 1)) - HIDWORD(v38))) <= (unsigned __int64)*((unsigned int *)this + 73) )
              {
                CPTPEngine::SetContactRestingState(this, a5, 0);
                CPTPEngine::SetContactRestingState(v39, v40, 0);
                *(_DWORD *)a5 |= 0x200u;
                *(_DWORD *)v31 |= 0x200u;
              }
            }
          }
        }
      }
    }
  }
}
