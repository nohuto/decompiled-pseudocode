/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200
 * Callers:
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     GetDPIServerInfo @ 0x1C0108F94 (GetDPIServerInfo.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01CF594 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01CF66C (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagBWL *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagBWL *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v28; // rcx
  int v29; // edi
  INT v30; // eax
  int v31; // edx
  __int64 PrevTaskIndex; // r9
  char *v33; // rdx
  int v34; // ebp
  int v35; // eax
  bool v36; // zf
  int v37; // r14d
  __int64 v38; // rcx
  int v39; // r12d
  int v40; // eax
  int v41; // r13d
  __int64 v42; // r8
  __int64 v43; // rdx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v46; // edi
  __int64 v47; // r8
  int v48; // r14d
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // xmm0_8
  int v51; // r11d
  int v52; // eax
  __int64 v53; // r9
  int v54; // edx
  int v55; // ecx
  __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-58h] BYREF
  int v58; // [rsp+24h] [rbp-54h]
  __int128 v59[5]; // [rsp+28h] [rbp-50h] BYREF
  HWND *v61; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 440LL);
  v9 = *(_QWORD *)(GetDispInfo() + 88);
  *a1 = 0LL;
  v10 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)&v59[0] = v9;
  v11 = BuildHwndList(*(_QWORD *)(v10 + 112), (struct tagWND *)2, 0LL);
  v15 = v11;
  if ( !v11 )
  {
LABEL_28:
    LOBYTE(v3) = (GetKeyState(0x10u, v12, v13, v14) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v19 = _RemoveNonTaskWindows(v11, a2, &v57, &v61);
  if ( v19 < 2 )
  {
    if ( v19 != 1
      || (LOBYTE(v16) = 1, v20 = HMValidateHandleNoSecure(*((_QWORD *)v15 + 4), v16, v17, v18), (v7 = v20) != 0)
      && (*(_BYTE *)(v20 + 63) & 7) == 1
      && a2 == (struct tagWND *)v20 )
    {
      v7 = *(_QWORD *)(v8 + 160);
    }
LABEL_9:
    FreeHwndList(v15);
    if ( v7 )
      return (struct tagWND *)v7;
    goto LABEL_28;
  }
  v21 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v24 = v21;
  if ( !v21 )
    goto LABEL_9;
  *(_QWORD *)(v21 + 8) = gptiCurrent;
  *(_QWORD *)(v21 + 16) = v15;
  *(_QWORD *)(v21 + 24) = v61;
  *(_DWORD *)(v21 + 40) = v19;
  *(_DWORD *)(v21 + 44) = v19;
  DpiForSystem = GetDpiForSystem(v23, v22);
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v28 = *(_QWORD *)(gptiCurrent + 400LL);
  v29 = DpiDependentMetric;
  LODWORD(v61) = DpiDependentMetric;
  v30 = EngMulDiv(11, *(unsigned __int16 *)(v28 + 284), 96);
  v31 = v57;
  *(_DWORD *)(v24 + 112) = v29;
  v58 = v29 + v30;
  *(_DWORD *)(v24 + 116) = v29 + v30;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v24, v31, 1, a3 == 0);
  v33 = (char *)v15 + 8 * PrevTaskIndex + 32;
  v34 = v19;
  *(_QWORD *)(v24 + 32) = v33;
  if ( gnFastAltTabColumns < v19 )
    v34 = gnFastAltTabColumns;
  v35 = v19 / v34;
  v36 = v19 == v34 * (v19 / v34);
  v37 = v19 % v34;
  v38 = !v36;
  v39 = v38 + v35;
  v40 = gnFastAltTabRows;
  if ( v39 <= gnFastAltTabRows )
  {
    *(_DWORD *)(v24 + 48) = 0;
  }
  else
  {
    v39 = gnFastAltTabRows;
    *(_DWORD *)(v24 + 48) = 1;
    v37 = v34;
    *(_DWORD *)(v24 + 44) = v34 * v40;
  }
  *(_DWORD *)(v24 + 56) = v34;
  v41 = v34;
  *(_DWORD *)(v24 + 60) = v39;
  if ( v37 )
    v41 = v37;
  *(_DWORD *)(v24 + 64) = v41;
  if ( (int)PrevTaskIndex < v34 * v39 )
  {
    v42 = (unsigned int)((int)PrevTaskIndex / v34);
    v38 = (unsigned int)(v34 * ((int)PrevTaskIndex / v34));
    v43 = (unsigned int)((int)PrevTaskIndex % v34);
  }
  else
  {
    v42 = (unsigned int)((v39 >> 2) + 1);
    v43 = (unsigned int)((v34 >> 2) + 1);
    PrevTaskIndex = (unsigned int)(PrevTaskIndex - v34 * ((v39 >> 2) + 1) - v43);
    v3 = PrevTaskIndex;
  }
  *(_DWORD *)(v24 + 52) = v3;
  *(_DWORD *)(v24 + 72) = v42;
  *(_DWORD *)(v24 + 68) = v43;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v38, v43, v42, PrevTaskIndex);
  MonitorRect = (__m128i *)GetMonitorRect(v59, *(__int64 *)&v59[0]);
  v46 = DPIServerInfo[1];
  v47 = (unsigned int)DPIServerInfo[5];
  v48 = v58;
  v49 = MonitorRect->m128i_i64[0];
  v50 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v51 = (int)v61 / 2 + DPIServerInfo[4] + v58 * gnFastAltTabColumns + 6 * v46;
  v52 = v50 - *(_OWORD *)MonitorRect;
  if ( v52 < v51 )
    v51 = v52;
  *(_DWORD *)(v24 + 76) = v51;
  v53 = HIDWORD(v49);
  v54 = (int)v61;
  v55 = v48 * v39 + (_DWORD)v61 + (int)v47 / 2 + 2 * v47;
  if ( HIDWORD(v50) - (int)v53 < v55 )
    v55 = HIDWORD(v50) - v53;
  *(_DWORD *)(v24 + 80) = v55;
  if ( v39 == 1 )
    v34 = v41;
  v56 = (unsigned int)(v54 >> 1);
  *(_DWORD *)(v24 + 88) = v56;
  LOBYTE(v56) = 1;
  *(_DWORD *)(v24 + 84) = (v51 + -4 * v46 - v48 * v34) >> 1;
  *(_QWORD *)v24 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v24;
  *a1 = (struct tagSwitchWndInfo *)v24;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v24 + 32), v56, v47, v53);
}
