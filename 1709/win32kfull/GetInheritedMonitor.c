/*
 * XREFs of GetInheritedMonitor @ 0x1C00646EC
 * Callers:
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     DetectNewMonitor @ 0x1C01C3688 (DetectNewMonitor.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0097514 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F8C7C (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C00F8DD4 (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C00F8E28 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     UnionRect @ 0x1C00F8EC0 (UnionRect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // r14
  __int64 DesktopWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 Prop; // rax
  unsigned int v8; // r10d
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 i; // rdi
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r10d
  _QWORD *v20; // r15
  int v21; // eax
  int v22; // r12d
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // r15
  int v26; // eax
  int v27; // r12d
  __int64 v28; // rcx
  int v29; // [rsp+20h] [rbp-50h]
  int v30; // [rsp+20h] [rbp-50h]
  int v31; // [rsp+24h] [rbp-4Ch]
  int v32; // [rsp+24h] [rbp-4Ch]
  _QWORD v33[2]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v34[16]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v36[2]; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !*((_QWORD *)a1 + 13) )
    return v1;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v4 != DesktopWindow )
  {
    if ( !v4 )
      return v1;
    v5 = *(_QWORD *)(v4 + 360);
    return ValidateHmonitorNoRip(v5);
  }
  Prop = GetProp(a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v1;
    v24 = ValidateHwnd(Prop);
    if ( !v24 )
      return v1;
    v5 = *(_QWORD *)(v24 + 360);
    return ValidateHmonitorNoRip(v5);
  }
  if ( (*((_DWORD *)a1 + 92) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*((_BYTE *)a1 + 60) & 0x40) != 0
    || (*((_DWORD *)a1 + 76) & 0x8000) != 0 )
  {
    return v1;
  }
  v9 = *((_QWORD *)a1 + 15);
  if ( !v9 )
  {
LABEL_13:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 21) + 34LL) & 1) != 0 && (*((_WORD *)a1 + 41) & 0x3FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v33);
      if ( *(_QWORD *)v33[0] )
      {
        if ( v9 || (v9 = *(_QWORD *)(*(_QWORD *)v33[0] + 8LL)) != 0 )
          v9 &= -(__int64)((unsigned int)IntersectRect(v34, (char *)a1 + 128, v9 + 128) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v33);
    }
    if ( v9 )
    {
      v1 = ValidateHmonitorNoRip(*(_QWORD *)(v9 + 360));
      if ( v1 )
        return v1;
    }
    v10 = *((_QWORD *)a1 + 12);
    for ( i = *((_QWORD *)a1 + 11); ; i = *(_QWORD *)(i + 88) )
    {
      do
      {
        if ( v10 )
        {
          v29 = *((_BYTE *)a1 + 67) & 8;
          v31 = (*((_BYTE *)a1 + 66) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 67) >> 5) & 1;
          if ( (*(_BYTE *)(v10 + 71) & 0x10) != 0
            && ((*(_BYTE *)(v10 + 56) & 8) != 0 || (*(_BYTE *)(v10 + 70) & 3) != 0)
            && !IsRectEmptyInl((const struct tagRECT *)(v10 + 144))
            && ((*(_BYTE *)(v10 + 66) & 8) == 0 || (*(_BYTE *)(v10 + 67) & 0x20) != 0)
            && (*(_QWORD *)(v13 + 408) == *(_QWORD *)(v14 + 408) || *(_QWORD *)(v13 + 400) == *(_QWORD *)(v14 + 400))
            && (((unsigned __int16)(*((_DWORD *)a1 + 92) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v10 + 368) >> 8)) & 0x1FF) == 0 )
          {
            if ( !v15 && !v12 )
              goto LABEL_34;
            v25 = (_QWORD *)((char *)a1 + 128);
            v26 = IsAdjacentRect((const struct tagRECT *)a1 + 8, (const struct tagRECT *)(v10 + 128));
            v27 = v26;
            if ( !v29 || v26 || (unsigned int)IntersectRect(v35, (char *)a1 + 128, v10 + 128) )
            {
              if ( !v31 || v27 )
                goto LABEL_34;
              if ( (unsigned int)UnionRect(v35, (char *)a1 + 128, v10 + 128) )
              {
                v28 = v35[0] - *v25;
                if ( v35[0] == *v25 )
                  v28 = v35[1] - *((_QWORD *)a1 + 17);
                if ( !v28 )
                {
LABEL_34:
                  v5 = *(_QWORD *)(v10 + 360);
                  return ValidateHmonitorNoRip(v5);
                }
              }
            }
          }
          v10 = *(_QWORD *)(v10 + 96);
        }
        else if ( !i )
        {
          return v1;
        }
      }
      while ( !i );
      v32 = *((_BYTE *)a1 + 67) & 8;
      v30 = (*((_BYTE *)a1 + 66) >> 3) & (unsigned __int8)~(*((_BYTE *)a1 + 67) >> 5) & 1;
      if ( (*(_BYTE *)(i + 71) & 0x10) != 0
        && ((*(_BYTE *)(i + 56) & 8) != 0 || (*(_BYTE *)(i + 70) & 3) != 0)
        && !IsRectEmptyInl((const struct tagRECT *)(i + 144))
        && ((*(_BYTE *)(i + 66) & 8) == 0 || (*(_BYTE *)(i + 67) & 0x20) != 0)
        && (*(_QWORD *)(v17 + 408) == *(_QWORD *)(v18 + 408) || *(_QWORD *)(v17 + 400) == *(_QWORD *)(v18 + 400))
        && (((unsigned __int16)(*((_DWORD *)a1 + 92) >> 8) ^ (unsigned __int16)(*(_DWORD *)(i + 368) >> 8)) & 0x1FF) == 0 )
      {
        if ( !v19 && !v16 )
          break;
        v20 = (_QWORD *)((char *)a1 + 128);
        v21 = IsAdjacentRect((const struct tagRECT *)a1 + 8, (const struct tagRECT *)(i + 128));
        v22 = v21;
        if ( !v32 || v21 || (unsigned int)IntersectRect(v36, (char *)a1 + 128, i + 128) )
        {
          if ( !v30 || v22 )
            break;
          if ( (unsigned int)UnionRect(v36, (char *)a1 + 128, i + 128) )
          {
            v23 = v36[0] - *v20;
            if ( v36[0] == *v20 )
              v23 = v36[1] - *((_QWORD *)a1 + 17);
            if ( !v23 )
              break;
          }
        }
      }
    }
    v5 = *(_QWORD *)(i + 360);
    return ValidateHmonitorNoRip(v5);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v9 + 16) + 400LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL)
    || (((unsigned __int16)(v8 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v9 + 368) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v9, a1) )
        break;
      v9 = *(_QWORD *)(v9 + 120);
    }
    while ( v9 );
    goto LABEL_13;
  }
  return 0LL;
}
