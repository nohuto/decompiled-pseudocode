/*
 * XREFs of xxxCalcClientRect @ 0x1C0096048
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxRedrawHungWindow @ 0x1C0134058 (xxxRedrawHungWindow.c)
 *     xxxUpdateClientRect @ 0x1C020D2F0 (xxxUpdateClientRect.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     xxxMenuBarCompute @ 0x1C007CD78 (xxxMenuBarCompute.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     GetCaptionHeight @ 0x1C00930D4 (GetCaptionHeight.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

void __fastcall xxxCalcClientRect(__int64 a1, _DWORD *a2, int a3)
{
  int v5; // esi
  int v6; // r14d
  int v7; // r12d
  int v8; // r15d
  int v9; // edi
  __int64 v10; // rcx
  int v11; // edx
  int v12; // r14d
  int v13; // esi
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // edi
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // r13
  int v21; // esi
  int WindowBordersWithDpiAwareness; // eax
  signed int v23; // r15d
  int v24; // edi
  int v25; // esi
  int v26; // r14d
  __int64 v27; // r12
  int v28; // ecx
  unsigned int v29; // r12d
  int v30; // esi
  unsigned int WindowDpiLastNotify; // eax
  int DpiDependentMetric; // r13d
  __int64 v33; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // esi
  void *v39; // rax
  void *v40; // rax
  __int128 v41; // [rsp+30h] [rbp-38h]
  __int64 v42; // [rsp+40h] [rbp-28h] BYREF
  __int64 v43; // [rsp+48h] [rbp-20h]
  char v44; // [rsp+B0h] [rbp+48h]
  int v47; // [rsp+C8h] [rbp+60h]

  v44 = *(_BYTE *)(a1 + 56) & 0xF;
  v5 = *(_DWORD *)(a1 + 68);
  v6 = *(_DWORD *)(a1 + 64);
  v7 = *(_DWORD *)(a1 + 304);
  *(_BYTE *)(a1 + 56) &= 0xF0u;
  v8 = -16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v9 = *(_DWORD *)(a1 + 68);
    v10 = *(unsigned int *)(a1 + 64);
    v11 = *(_DWORD *)(a1 + 304);
    if ( v5 != v9 )
      goto LABEL_60;
    if ( v6 == (_DWORD)v10 && v7 == v11 )
      goto LABEL_5;
    if ( v5 == v9 )
    {
      if ( v6 == (_DWORD)v10 )
      {
        if ( ((v7 ^ v11) & 0x5C00300) == 0 )
          goto LABEL_5;
        v38 = -268435456;
        v9 = *(_DWORD *)(a1 + 304);
      }
      else
      {
        if ( ((v6 ^ (unsigned int)v10) & 0x4E27A9) == 0 )
          goto LABEL_5;
        v38 = -20;
        v9 = *(_DWORD *)(a1 + 64);
      }
    }
    else
    {
LABEL_60:
      if ( ((v5 ^ v9) & 0xB9CF0000) == 0 )
        goto LABEL_5;
      v38 = -16;
    }
    v39 = (void *)ReferenceDwmApiPort(v10);
    DwmAsyncChildStyleChange(v39, *(_QWORD *)a1, v38, v9);
  }
LABEL_5:
  v12 = *(_DWORD *)(a1 + 68);
  v13 = *(_DWORD *)(a1 + 64);
  v14 = *(_DWORD *)(a1 + 304);
  *(_BYTE *)(a1 + 60) &= ~0x10u;
  if ( !(unsigned int)IsWindowDesktopComposed(a1) )
    goto LABEL_9;
  v17 = *(_DWORD *)(a1 + 68);
  v18 = *(unsigned int *)(a1 + 64);
  v15 = *(unsigned int *)(a1 + 304);
  if ( v12 != v17 )
    goto LABEL_69;
  if ( v13 != (_DWORD)v18 || v14 != (_DWORD)v15 )
  {
    if ( v12 == v17 )
    {
      if ( v13 == (_DWORD)v18 )
      {
        if ( ((v14 ^ (unsigned int)v15) & 0x5C00300) == 0 )
          goto LABEL_9;
        v8 = -268435456;
        v17 = *(_DWORD *)(a1 + 304);
      }
      else
      {
        if ( ((v13 ^ (unsigned int)v18) & 0x4E27A9) == 0 )
          goto LABEL_9;
        v8 = -20;
        v17 = *(_DWORD *)(a1 + 64);
      }
      goto LABEL_73;
    }
LABEL_69:
    if ( ((v12 ^ v17) & 0xB9CF0000) == 0 )
      goto LABEL_9;
LABEL_73:
    v40 = (void *)ReferenceDwmApiPort(v18);
    DwmAsyncChildStyleChange(v40, *(_QWORD *)a1, v8, v17);
  }
LABEL_9:
  if ( (*(_BYTE *)(a1 + 71) & 0x20) != 0 )
  {
    a2[2] = *a2;
    a2[3] = a2[1];
  }
  else
  {
    v19 = *(_OWORD *)a2;
    v20 = HIDWORD(*(_QWORD *)a2);
    if ( (*(_BYTE *)(a1 + 70) & 0xC0) == 0xC0 )
    {
      SetOrClrWF(1, (_DWORD *)a1, 8u, 1);
      v21 = GetCaptionHeight(a1) + DWORD1(v19);
    }
    else
    {
      v21 = DWORD1(v19);
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v15, v16);
    v23 = v19 + WindowBordersWithDpiAwareness;
    v47 = WindowBordersWithDpiAwareness;
    v24 = DWORD2(v19) - WindowBordersWithDpiAwareness;
    v25 = v21 + WindowBordersWithDpiAwareness;
    v26 = HIDWORD(v19) - WindowBordersWithDpiAwareness;
    LODWORD(v41) = v19 + WindowBordersWithDpiAwareness;
    DWORD2(v41) = DWORD2(v19) - WindowBordersWithDpiAwareness;
    DWORD1(v41) = v25;
    HIDWORD(v41) = HIDWORD(v19) - WindowBordersWithDpiAwareness;
    if ( (*(_BYTE *)(a1 + 71) & 0xC0) != 0x40 )
    {
      v27 = *(_QWORD *)(a1 + 208);
      if ( v27 )
      {
        SetOrClrWF(1, (_DWORD *)a1, 1u, 1);
        if ( !a3 )
        {
          *(_DWORD *)(v27 + 56) |= 0x200u;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v42 = *(_QWORD *)(ThreadWin32Thread + 392);
          *(_QWORD *)(ThreadWin32Thread + 392) = &v42;
          v43 = v27;
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
          v25 += xxxMenuBarCompute((struct tagMENU *)v27, a1, (unsigned int)(v25 - v20), v47, v24 - v23);
          DWORD1(v41) = v25;
          *(_DWORD *)(v43 + 56) &= ~0x200u;
          ThreadUnlock1(v36, v35);
        }
      }
    }
    v28 = 0;
    if ( v25 >= v26 )
    {
      v26 = v25;
      HIDWORD(v41) = v25;
      v28 = 1;
    }
    if ( (*(_BYTE *)(a1 + 61) & 2) != 0 && v23 >= v24 )
    {
      v24 = v23;
      DWORD2(v41) = v23;
      v28 = 1;
    }
    if ( !v28 )
    {
      if ( (*(_BYTE *)(a1 + 65) & 2) != 0 && v24 - v23 >= 4 && v26 - v25 >= 4 )
      {
        SetOrClrWF(1, (_DWORD *)a1, 0x410u, 1);
        v23 += 2;
        v24 -= 2;
        v25 += 2;
        *(_QWORD *)&v41 = __PAIR64__(v25, v23);
        v26 -= 2;
        *((_QWORD *)&v41 + 1) = __PAIR64__(v26, v24);
      }
      v29 = 96;
      if ( (*(_BYTE *)(a1 + 70) & 0x10) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
        }
        else if ( (*(_DWORD *)(a1 + 368) & 0xF) == 0
               && (v33 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v33 + 8) + 52LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(1LL, WindowDpiLastNotify);
        if ( v26 - v25 > DpiDependentMetric )
        {
          SetOrClrWF(1, (_DWORD *)a1, 4u, 1);
          if ( !a3 )
            HIDWORD(v41) = v26 - DpiDependentMetric;
        }
      }
      if ( (*(_BYTE *)(a1 + 70) & 0x20) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 304) & 0x10000000) != 0 )
        {
          v29 = GetWindowDpiLastNotify(a1);
        }
        else if ( (*(_DWORD *)(a1 + 368) & 0xF) != 0
               || (v37 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v37 + 8) + 52LL) & 1) == 0 )
        {
          v29 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL) + 284LL);
        }
        v30 = GetDpiDependentMetric(0LL, v29);
        if ( v24 - v23 >= v30 )
        {
          SetOrClrWF(1, (_DWORD *)a1, 2u, 1);
          if ( !a3 )
          {
            if ( ((*(_BYTE *)(a1 + 65) ^ *(_BYTE *)(a1 + 66)) & 0x40) != 0 )
              LODWORD(v41) = v30 + v23;
            else
              DWORD2(v41) = v24 - v30;
          }
        }
      }
    }
    *(_OWORD *)a2 = v41;
  }
  if ( v44 != (*(_BYTE *)(a1 + 56) & 0xF) && *(char *)(a1 + 63) < 0 )
    xxxWindowEvent(0x8004u, (volatile signed __int32 *)a1, 0LL, 0LL, 1);
}
