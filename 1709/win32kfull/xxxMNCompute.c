/*
 * XREFs of xxxMNCompute @ 0x1C007D6E8
 * Callers:
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C007D214 (xxxSendUAHInitMenuMessage.c)
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C (-xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0218794 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 */

__int64 __fastcall xxxMNCompute(
        struct tagWND **a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v7; // esi
  unsigned int WindowDpiLastNotify; // r15d
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *DPIMETRICSForDpi; // rax
  __int64 v17; // r8
  signed int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r14d
  unsigned int v23; // r12d
  int v24; // eax
  unsigned int v25; // esi
  __int64 v26; // rdi
  BOOL v27; // eax
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // ecx
  _WORD *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // ebp
  int v35; // eax
  int v37; // esi
  unsigned int v38; // ecx
  unsigned int v39; // ebp
  int v40; // r9d
  int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // eax
  int v44; // eax
  int v45; // eax
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int *v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rcx
  unsigned int *v52; // rcx
  struct tagWND *v53; // rdx
  _DWORD *v54; // rdx
  signed int v55; // [rsp+40h] [rbp-A8h]
  unsigned int v56; // [rsp+44h] [rbp-A4h]
  unsigned int v57; // [rsp+48h] [rbp-A0h]
  unsigned int v58; // [rsp+4Ch] [rbp-9Ch]
  int v59; // [rsp+50h] [rbp-98h]
  int v60; // [rsp+54h] [rbp-94h]
  HDC DCEx; // [rsp+58h] [rbp-90h]
  struct tagPOINT v62; // [rsp+60h] [rbp-88h] BYREF
  __int64 v63; // [rsp+68h] [rbp-80h]
  __int64 v64; // [rsp+70h] [rbp-78h]
  __int128 v65; // [rsp+80h] [rbp-68h]
  __int128 v66[5]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v67; // [rsp+F0h] [rbp+8h]
  unsigned int v68; // [rsp+F8h] [rbp+10h]
  unsigned int v69; // [rsp+100h] [rbp+18h]

  v56 = 0;
  v7 = a4;
  v68 = 0;
  v63 = gptiCurrent;
  WindowDpiLastNotify = 96;
  if ( a3 )
  {
    if ( (*(_DWORD *)(a3 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a3);
    }
    else if ( (*(_DWORD *)(a3 + 368) & 0xF) != 0
           || (v12 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 432LL)) == 0
           || (v13 = **(_QWORD **)(v12 + 8), (*(_DWORD *)(v13 + 52) & 1) == 0) )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 400LL);
      WindowDpiLastNotify = *(unsigned __int16 *)(v13 + 284);
    }
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF) != 0 )
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v13) + 284);
  }
  if ( a2 != a1[11] )
  {
    *(_QWORD *)&v65 = a1 + 11;
    *((_QWORD *)&v65 + 1) = a2;
    v66[0] = v65;
    HMAssignmentLock(v66);
  }
  if ( a7 )
  {
    v68 = *a7;
    v7 = a4;
  }
  if ( !*((_DWORD *)a1 + 17) )
    return 0LL;
  v67 = (_DWORD)a1[7] & 1;
  if ( v67 )
  {
    v68 = 0;
  }
  else if ( a2 )
  {
    *((_DWORD *)a1 + 18) = a6;
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext(v13, a2) & 0xF) == 2
    || a3 && (unsigned int)IsPWNDEligibleForGDIScaling(a3) )
  {
    v15 = 65539LL;
    v14 = a3;
  }
  else
  {
    v14 = 0LL;
    v15 = 3LL;
  }
  DCEx = (HDC)_GetDCEx(v14, 0LL, v15);
  DPIMETRICSForDpi = (_QWORD *)GetDPIMETRICSForDpi(WindowDpiLastNotify);
  v58 = 0;
  v18 = 0;
  v57 = 0;
  v64 = GreSelectFont(DCEx, *DPIMETRICSForDpi, v17);
  v55 = 0;
  if ( gihmodUserApiHook >= 0 && a2 )
    xxxSendUAHInitMenuMessage((__int64)a2, (__int64)a1, (__int64)DCEx);
  v60 = 0;
  v22 = 0;
  *((_DWORD *)a1 + 20) = 0;
  v23 = v7;
  v59 = 0;
  v24 = *((_DWORD *)a1 + 17);
  v25 = a5;
  v69 = a5;
  if ( v24 )
    v26 = (__int64)a1[12];
  else
    v26 = 0LL;
  if ( !v24 )
  {
    v34 = 0;
    goto LABEL_56;
  }
  v21 = v67;
  while ( v26 )
  {
    if ( (*(_DWORD *)v26 & 0x800) != 0
      && (!(unsigned int)MNIsOwnerDrawItem(a1, v26, v21) || *(_WORD *)(v63 + 608) < 0x400u) )
    {
      *(_DWORD *)(v26 + 80) = 0;
      *(_DWORD *)(v26 + 84) = (int)GetDpiDependentMetric(26LL, WindowDpiLastNotify) / 2;
LABEL_36:
      v30 = v67;
      goto LABEL_37;
    }
    v27 = *(_QWORD *)(v26 + 104) && *(_QWORD *)(v26 + 40);
    v60 |= v27;
    v28 = xxxMNItemSize((struct tagMENU *)a1, a2, WindowDpiLastNotify, DCEx, (struct tagITEM *)v26, v21, &v62);
    v29 = v59;
    if ( v28 )
      v29 = 1;
    v59 = v29;
    if ( (unsigned int)MNGetpItemIndex(a1, v26) == -1 )
      break;
    v30 = v67;
    *(struct tagPOINT *)(v26 + 80) = v62;
    if ( !v67 && (!*(_QWORD *)(v26 + 104) || *(_QWORD *)(v26 + 40)) )
    {
      if ( !(unsigned int)MNIsUAHMenu(a1) )
        *(_DWORD *)(v26 + 80) += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
      goto LABEL_36;
    }
LABEL_37:
    if ( v68 && *(_DWORD *)(v26 + 84) < v68 )
      *(_DWORD *)(v26 + 84) = v68;
    if ( !v22 )
      v56 = *(_DWORD *)(v26 + 84);
    if ( v30 )
    {
      v37 = *(_DWORD *)v26 & 0x60;
      if ( v37 || *((_DWORD *)a1 + 17) == v22 + 1 )
      {
        v38 = v18;
        v39 = v22 + 1;
        if ( *((_DWORD *)a1 + 17) == v22 + 1 && *(_DWORD *)(v26 + 80) > v55 )
          v38 = *(_DWORD *)(v26 + 80);
        xxxMNRecalcTabStrings(DCEx, (struct tagMENU *)a1, v57, v22 + (v37 == 0), v38, v69);
        if ( (unsigned int)MNGetpItemIndex(a1, v26) == -1 )
          break;
        if ( v37 )
        {
          if ( !v59 || !a2 || (v41 = 1, (*((_BYTE *)a2 + 61) & 2) != 0) )
            v41 = 4;
          v42 = v41 + v40;
          v23 = a4;
          v69 = v41 + v40;
          v55 = *(_DWORD *)(v26 + 80);
          v57 = v22;
          if ( *((_DWORD *)a1 + 17) == v39 )
          {
            xxxMNRecalcTabStrings(DCEx, (struct tagMENU *)a1, v22, v39, *(_DWORD *)(v26 + 80), v42);
            v69 = v42;
            if ( (unsigned int)MNGetpItemIndex(a1, v26) == -1 )
              break;
            goto LABEL_94;
          }
        }
        else
        {
LABEL_94:
          if ( *((_DWORD *)a1 + 17) == v39 )
            *((_DWORD *)a1 + 18) = v40;
        }
        v18 = v55;
      }
      v25 = v69;
      *(_DWORD *)(v26 + 76) = v23;
      v23 += *(_DWORD *)(v26 + 84);
      v19 = v23;
      *(_DWORD *)(v26 + 72) = v69;
      if ( v58 >= v23 )
        v19 = v58;
      goto LABEL_46;
    }
    v31 = *(_WORD **)(v26 + 40);
    if ( v31 && *v31 == 8 && !(unsigned int)MNIsUAHMenu(a1) )
      *(_DWORD *)(v26 + 80) -= *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8);
    if ( (*(_DWORD *)v26 & 0x60) != 0
      || v25 + *(_DWORD *)(v26 + 80) + *(_DWORD *)(GetDPIMETRICSForDpi(WindowDpiLastNotify) + 8) > *((_DWORD *)a1 + 18)
                                                                                                 + a5
      && v22 )
    {
      v23 += v56;
      v25 = a5;
      v56 = *(_DWORD *)(v26 + 84);
    }
    v19 = v58;
    *(_DWORD *)(v26 + 72) = v25;
    v25 += *(_DWORD *)(v26 + 80);
    v69 = v25;
    *(_DWORD *)(v26 + 76) = v23;
LABEL_46:
    v20 = v56;
    v21 = v67;
    if ( v18 < *(_DWORD *)(v26 + 80) )
      v18 = *(_DWORD *)(v26 + 80);
    v32 = *(_DWORD *)(v26 + 84);
    v55 = v18;
    if ( v56 != v32 )
    {
      if ( v56 < v32 )
        v20 = v32;
      v43 = v68;
      v56 = v20;
      if ( !v67 )
        v43 = v20;
      v68 = v43;
    }
    v33 = v23 + v20;
    if ( v67 )
      v33 = v19;
    ++v22;
    v58 = v33;
    if ( v22 == -1 || v22 >= *((_DWORD *)a1 + 17) )
      v26 = 0LL;
    else
      v26 = (__int64)a1[12] + 152 * v22;
    if ( v22 >= *((_DWORD *)a1 + 17) )
      break;
  }
  v34 = v57;
  if ( !v60 || v57 )
  {
LABEL_56:
    *((_DWORD *)a1 + 20) = 0;
    goto LABEL_57;
  }
  v44 = *((_DWORD *)a1 + 14);
  if ( v44 < 0 )
  {
    v45 = 2;
    goto LABEL_114;
  }
  if ( (v44 & 0x4000000) != 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19) & 0xF) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
      || (v48 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
          (*(_DWORD *)(v48 + 52) & 1) == 0)
      || *(_WORD *)(PsGetCurrentProcessWin32Process(v48) + 284) == 96 )
    {
      v49 = (unsigned int *)(gpsi + 8012LL);
    }
    else
    {
      v49 = (unsigned int *)(gpsi + 9500LL);
    }
    v50 = *((_DWORD *)a1 + 20);
    if ( v50 <= *v49 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v49, v47) & 0xF) != 0
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
        || (v51 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
            (*(_DWORD *)(v51 + 52) & 1) == 0)
        || *(_WORD *)(PsGetCurrentProcessWin32Process(v51) + 284) == 96 )
      {
        v52 = (unsigned int *)(gpsi + 8012LL);
      }
      else
      {
        v52 = (unsigned int *)(gpsi + 9500LL);
      }
      v50 = *v52;
    }
    *((_DWORD *)a1 + 20) = v50 + 2;
  }
  else
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19) & 0xF) != 0
      || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
      || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL) + 52LL) & 1) == 0
      || *(_WORD *)(PsGetCurrentProcessWin32Process(1LL) + 284) == 96 )
    {
      v46 = (_DWORD *)(gpsi + 8012LL);
    }
    else
    {
      v46 = (_DWORD *)(gpsi + 9500LL);
    }
    v45 = *v46 + 2;
LABEL_114:
    *((_DWORD *)a1 + 20) += v45;
  }
LABEL_57:
  v35 = *((_DWORD *)a1 + 20);
  if ( v35 )
    *((_DWORD *)a1 + 20) = v35 + 2;
  if ( v34 )
  {
    if ( *((_DWORD *)a1 + 17) )
    {
      v53 = a1[12];
      if ( (*(_DWORD *)v53 & 0x4000) != 0 )
      {
        LODWORD(v21) = 0;
        v54 = (_DWORD *)((char *)v53 + 72);
        do
        {
          v21 = (unsigned int)(v21 + 1);
          *v54 = *((_DWORD *)a1 + 18) - v54[2] - *v54;
          v54 += 38;
        }
        while ( (unsigned int)v21 < *((_DWORD *)a1 + 17) );
      }
    }
  }
  GreSelectFont(DCEx, v64, v21);
  _ReleaseDC(DCEx);
  *((_DWORD *)a1 + 19) = v58 - a4;
  if ( a7 )
    *a7 = v68;
  return *((unsigned int *)a1 + 19);
}
