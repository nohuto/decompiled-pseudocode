/*
 * XREFs of GetInheritedMonitor @ 0x1C0060FE8
 * Callers:
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 * Callees:
 *     UnionRect @ 0x1C0020BD4 (UnionRect.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00425E4 (-Init@-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F6DB8 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C00F6F04 (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C00F6F58 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r14
  __int64 DesktopWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 Prop; // rax
  int v10; // r10d
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 i; // rdi
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r10d
  int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r10d
  _QWORD *v22; // r15
  int v23; // eax
  int v24; // r12d
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r15
  int v28; // eax
  int v29; // r12d
  __int64 v30; // rcx
  int v31; // [rsp+20h] [rbp-40h]
  int v32; // [rsp+20h] [rbp-40h]
  int v33; // [rsp+24h] [rbp-3Ch]
  int v34; // [rsp+24h] [rbp-3Ch]
  _QWORD v35[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v36[4]; // [rsp+38h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 13);
  v2 = 0LL;
  if ( !v1 )
    return v2;
  DesktopWindow = GetDesktopWindow(a1, v1);
  if ( v5 != DesktopWindow )
  {
    if ( !v5 )
      return v2;
    v7 = *(_QWORD *)(v5 + 360);
    return ValidateHmonitorNoRip(v7);
  }
  Prop = GetProp(v6, (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v2;
    v26 = ValidateHwnd(Prop);
    if ( !v26 )
      return v2;
    v7 = *(_QWORD *)(v26 + 360);
    return ValidateHmonitorNoRip(v7);
  }
  if ( (*((_DWORD *)a1 + 92) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*((_BYTE *)a1 + 60) & 0x40) != 0
    || (*((_DWORD *)a1 + 76) & 0x8000) != 0 )
  {
    return v2;
  }
  v11 = *((_QWORD *)a1 + 15);
  if ( !v11 )
  {
LABEL_13:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 34LL) & 1) != 0 && (*((_WORD *)a1 + 41) & 0x3FFF) == 0x29C )
    {
      SmartObjStackRef<tagPOPUPMENU>::Init(v36, *(_QWORD *)(*((_QWORD *)a1 + 49) + 8LL));
      if ( v36[0] )
      {
        if ( v11 || (v11 = *(_QWORD *)(v36[0] + 8LL)) != 0 )
          v11 &= -(__int64)((unsigned int)IntersectRect(v35, (char *)a1 + 128, v11 + 128) != 0);
      }
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v36);
    }
    if ( v11 )
    {
      v2 = ValidateHmonitorNoRip(*(_QWORD *)(v11 + 360));
      if ( v2 )
        return v2;
    }
    v12 = *((_QWORD *)a1 + 12);
    for ( i = *((_QWORD *)a1 + 11); ; i = *(_QWORD *)(i + 88) )
    {
      do
      {
        if ( v12 )
        {
          v31 = *((_BYTE *)a1 + 67) & 8;
          v33 = (*((_BYTE *)a1 + 66) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 67) >> 5) & 1;
          if ( (*(_BYTE *)(v12 + 71) & 0x10) != 0
            && ((*(_BYTE *)(v12 + 56) & 8) != 0 || (*(_BYTE *)(v12 + 70) & 3) != 0)
            && !IsRectEmptyInl((const struct tagRECT *)(v12 + 144))
            && ((*(_BYTE *)(v12 + 66) & 8) == 0 || (*(_BYTE *)(v12 + 67) & 0x20) != 0)
            && (*(_QWORD *)(v15 + 384) == *(_QWORD *)(v16 + 384) || *(_QWORD *)(v15 + 376) == *(_QWORD *)(v16 + 376))
            && ((*((_BYTE *)a1 + 368) ^ *(_BYTE *)(v12 + 368)) & 0xF) == 0 )
          {
            if ( !v17 && !v14 )
              goto LABEL_33;
            v27 = (_QWORD *)((char *)a1 + 128);
            v28 = IsAdjacentRect((const struct tagRECT *)a1 + 8, (const struct tagRECT *)(v12 + 128));
            v29 = v28;
            if ( !v31 || v28 || (unsigned int)IntersectRect(v36, (char *)a1 + 128, v12 + 128) )
            {
              if ( !v33 || v29 )
                goto LABEL_33;
              if ( (unsigned int)UnionRect(v36, (_DWORD *)a1 + 32, (_DWORD *)(v12 + 128)) )
              {
                v30 = v36[0] - *v27;
                if ( v36[0] == *v27 )
                  v30 = v36[1] - *((_QWORD *)a1 + 17);
                if ( !v30 )
                {
LABEL_33:
                  v7 = *(_QWORD *)(v12 + 360);
                  return ValidateHmonitorNoRip(v7);
                }
              }
            }
          }
          v12 = *(_QWORD *)(v12 + 96);
        }
        else if ( !i )
        {
          return v2;
        }
      }
      while ( !i );
      v34 = *((_BYTE *)a1 + 67) & 8;
      v32 = (*((_BYTE *)a1 + 66) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 67) >> 5) & 1;
      if ( (*(_BYTE *)(i + 71) & 0x10) != 0
        && ((*(_BYTE *)(i + 56) & 8) != 0 || (*(_BYTE *)(i + 70) & 3) != 0)
        && !IsRectEmptyInl((const struct tagRECT *)(i + 144))
        && ((*(_BYTE *)(i + 66) & 8) == 0 || (*(_BYTE *)(i + 67) & 0x20) != 0)
        && (*(_QWORD *)(v19 + 384) == *(_QWORD *)(v20 + 384) || *(_QWORD *)(v19 + 376) == *(_QWORD *)(v20 + 376))
        && ((*((_BYTE *)a1 + 368) ^ *(_BYTE *)(i + 368)) & 0xF) == 0 )
      {
        if ( !v21 && !v18 )
          break;
        v22 = (_QWORD *)((char *)a1 + 128);
        v23 = IsAdjacentRect((const struct tagRECT *)a1 + 8, (const struct tagRECT *)(i + 128));
        v24 = v23;
        if ( !v34 || v23 || (unsigned int)IntersectRect(v35, (char *)a1 + 128, i + 128) )
        {
          if ( !v32 || v24 )
            break;
          if ( (unsigned int)UnionRect(v35, (_DWORD *)a1 + 32, (_DWORD *)(i + 128)) )
          {
            v25 = v35[0] - *v22;
            if ( v35[0] == *v22 )
              v25 = v35[1] - *((_QWORD *)a1 + 17);
            if ( !v25 )
              break;
          }
        }
      }
    }
    v7 = *(_QWORD *)(i + 360);
    return ValidateHmonitorNoRip(v7);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 376LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL)
    || (*(_DWORD *)(v11 + 368) & 0xF) == v10 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v11, a1) )
        break;
      v11 = *(_QWORD *)(v11 + 120);
    }
    while ( v11 );
    goto LABEL_13;
  }
  return 0LL;
}
