/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C00764D8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0084CFC (xxxEndGetWidnowTrackInfoAsync.c)
 *     xxxAdjustSize @ 0x1C009662C (xxxAdjustSize.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01DA938 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     _GetClientRect @ 0x1C00499C0 (_GetClientRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C005D45C (GetMaxTrackSizeForWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C005D868 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetMonitorMaxArea @ 0x1C0086F24 (GetMonitorMaxArea.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  __int128 v7; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v9; // r12
  struct tagMONITOR *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  int WindowBordersWithDpiAwareness; // esi
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  int v16; // r9d
  __int16 v17; // dx
  __int64 Prop; // rax
  unsigned __int8 v19; // r8
  __int64 v20; // rax
  int v21; // esi
  unsigned int v22; // r14d
  unsigned int WindowDpiLastNotify; // eax
  unsigned int v24; // eax
  int DpiDependentMetric; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r15d
  __int64 result; // rax
  int v32; // r12d
  signed int v33; // r13d
  __int64 v34; // rax
  unsigned int v35; // eax
  int v36; // r15d
  __int64 v37; // rcx
  unsigned int v38; // eax
  char v39; // al
  unsigned int v40; // eax
  int v41; // eax
  int v42; // r8d
  int v43; // ecx
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int128 v55; // [rsp+28h] [rbp-89h] BYREF
  __int128 v56; // [rsp+38h] [rbp-79h]
  __int128 v57; // [rsp+48h] [rbp-69h]
  __int64 v58; // [rsp+58h] [rbp-59h]
  _QWORD v59[3]; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v60[3]; // [rsp+78h] [rbp-39h] BYREF
  __int128 v61; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v62[16]; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v63; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v64; // [rsp+120h] [rbp+6Fh]

  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2108LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2112LL);
  v58 = *(_QWORD *)(GetDispInfo() + 88);
  v7 = *GetMonitorRectForWindow(&v61, v58, a1);
  v57 = v7;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v9 = *((_QWORD *)a1 + 13);
  *(_QWORD *)&v56 = DesktopWindow;
  if ( v9 == DesktopWindow )
  {
    v55 = v7;
    v10 = _MonitorFromWindowInternal(a1, 1, 1);
    if ( a3 )
      v10 = a3;
    v64 = (__int64)v10;
  }
  else
  {
    v10 = 0LL;
    v64 = 0LL;
    GetClientRect(v9, (__int64)&v55);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v11, v12);
  v14 = DWORD1(v55) - WindowBordersWithDpiAwareness;
  v15 = v55 - WindowBordersWithDpiAwareness;
  HIDWORD(v55) = WindowBordersWithDpiAwareness + HIDWORD(v55) - (DWORD1(v55) - WindowBordersWithDpiAwareness);
  v16 = WindowBordersWithDpiAwareness + DWORD2(v55);
  *(_DWORD *)(a2 + 12) = HIDWORD(v55);
  v17 = atomCheckpointProp;
  *(_QWORD *)&v55 = __PAIR64__(v14, v15);
  DWORD2(v55) = v16 - v15;
  *(_DWORD *)(a2 + 8) = v16 - v15;
  Prop = GetProp((__int64)a1, v17, 1);
  if ( Prop && (*(_DWORD *)(Prop + 32) & 0x10) != 0 )
    v20 = *(_QWORD *)(Prop + 24);
  else
    v20 = v55;
  v21 = 2 * WindowBordersWithDpiAwareness;
  *(_QWORD *)(a2 + 16) = v20;
  v22 = 96;
  if ( (*((_BYTE *)a1 + 70) & 0xC0) != 0 && *((char *)a1 + 64) >= 0 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
           && (v45 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
           && ((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v45 + 8) + 52LL) & v19) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
    {
      v24 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
           && (v46 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 52LL) & 1) != 0 )
    {
      v24 = 96;
    }
    else
    {
      v24 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v24);
  }
  else
  {
    v48 = v21;
    if ( v21 < 2 )
      v48 = 2;
    *(_DWORD *)(a2 + 24) = v48;
    DpiDependentMetric = v21;
    if ( v21 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(struct tagSIZE *)(a2 + 32) = GetMaxTrackSizeForWindow((__int64)a1);
  v59[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v59;
  v59[1] = v10;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  v60[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v60;
  v60[1] = v58;
  _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v26 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2108LL);
  v27 = *(unsigned int *)(gpsi + 2112LL);
  *(_DWORD *)(a2 + 4) = v27;
  if ( v9 == (_QWORD)v56 )
  {
    v56 = *(_OWORD *)GetMonitorMaxArea(v62, a1, v10);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v57) - (int)v57
      || (v32 = HIDWORD(v57), v33 = DWORD1(v57), *(_DWORD *)(a2 + 12) < HIDWORD(v57) - DWORD1(v57)) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v26 = v56;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v34 = GetProp((__int64)a1, atomCheckpointProp, 1);
      if ( v34 )
      {
        v42 = *(_DWORD *)(v34 + 32);
        if ( (((v42 & 0x10) != 0) & (*((_BYTE *)a1 + 70) >> 2)) != 0 )
        {
          v43 = *(_DWORD *)(a2 + 16);
          v44 = v55;
          if ( v43 != (_DWORD)v55 && *(_DWORD *)(v34 + 24) == v43 )
          {
            *(_DWORD *)(v34 + 32) = v42 & 0xFFFFFFEF;
            *(_DWORD *)(a2 + 20) = DWORD1(v55);
            *(_DWORD *)(a2 + 16) = v44;
          }
        }
      }
      if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
      {
        v35 = GetWindowDpiLastNotify(a1);
      }
      else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
             && (v47 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v47 + 8) + 52LL) & 1) != 0 )
      {
        v35 = 96;
      }
      else
      {
        v35 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
      }
      v36 = *(_DWORD *)(a2 + 20);
      if ( (int)(v36 + GetDpiDependentMetric(2LL, v35)) <= v33 && v36 + *(_DWORD *)(a2 + 12) >= v32 )
        v56 = *GetMonitorRectForWindow(&v63, v64, a1);
      v26 = v56;
      v37 = HIDWORD(*((_QWORD *)&v56 + 1));
      *(_DWORD *)(a2 + 8) += v57 + DWORD2(v56) - v56 - DWORD2(v57);
      v27 = (unsigned int)(v33 + v37 - HIDWORD(v26) - v32);
      *(_DWORD *)(a2 + 12) += v27;
    }
    *(_DWORD *)(a2 + 16) += v26;
    *(_DWORD *)(a2 + 20) += DWORD1(v56);
  }
  ThreadUnlock1(v27, v26);
  ThreadUnlock1(v29, v28);
  if ( (*((_BYTE *)a1 + 56) & 8) != 0 )
  {
    if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
    {
      v38 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
           && (v49 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v49 + 8) + 52LL) & 1) != 0 )
    {
      v38 = 96;
    }
    else
    {
      v38 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
    }
    v30 = GetDpiDependentMetric(17LL, v38);
    if ( *((char *)a1 + 64) < 0 )
    {
      if ( (*((_BYTE *)a1 + 70) & 8) != 0 )
      {
        if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
        {
          v22 = GetWindowDpiLastNotify(a1);
        }
        else if ( (*((_DWORD *)a1 + 92) & 0xF) != 0
               || (v53 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 52LL) & 1) == 0 )
        {
          v22 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
        }
        v21 += GetDpiDependentMetric(23LL, v22);
      }
    }
    else
    {
      v39 = *((_BYTE *)a1 + 70);
      if ( (v39 & 8) != 0 )
      {
        if ( (v39 & 3) != 0 )
        {
          if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
          {
            v40 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
                 && (v50 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v50 + 8) + 52LL) & 1) != 0 )
          {
            v40 = 96;
          }
          else
          {
            v40 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
          }
          v41 = GetDpiDependentMetric(12LL, v40);
          v21 += v41 + 2 * v41;
        }
        else if ( (*((_BYTE *)a1 + 65) & 4) != 0 )
        {
          if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
          {
            v52 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
                 && (v54 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v54 + 8) + 52LL) & 1) != 0 )
          {
            v52 = 96;
          }
          else
          {
            v52 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
          }
          v21 += 2 * GetDpiDependentMetric(12LL, v52);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          if ( (*((_DWORD *)a1 + 76) & 0x10000000) != 0 )
          {
            v22 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*((_DWORD *)a1 + 92) & 0xF) != 0
                 || (v51 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL)) == 0
                 || (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 52LL) & 1) == 0 )
          {
            v22 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
          }
          v21 += GetDpiDependentMetric(13LL, v22);
        }
      }
      v21 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v21 += 4;
  }
  else
  {
    v30 = v21;
  }
  if ( *(_DWORD *)(a2 + 24) > v21 )
    v21 = *(_DWORD *)(a2 + 24);
  result = *(unsigned int *)(a2 + 28);
  *(_DWORD *)(a2 + 24) = v21;
  if ( (int)result > v30 )
    v30 = result;
  *(_DWORD *)(a2 + 28) = v30;
  return result;
}
