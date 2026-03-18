/*
 * XREFs of ?xxxMNItemSize@@YAHPEAUtagMENU@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C009853C
 * Callers:
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C001AC58 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDPIMETRICSForDpi @ 0x1C007DADC (GetDPIMETRICSForDpi.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     ?xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0082310 (-xxxMNGetBitmapSize@@YAHPEAUtagMENU@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z.c)
 *     GetDPIServerInfoForDpi @ 0x1C00825C8 (GetDPIServerInfoForDpi.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0097A28 (MNIsUAHMenu.c)
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     FindCharPosition @ 0x1C023B144 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C0294E2C (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C0294E74 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU *a1,
        struct tagWND *a2,
        unsigned int a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        struct tagPOINT *a7)
{
  unsigned int cx; // esi
  LONG DpiDependentMetric; // ebp
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  HBRUSH v22; // r9
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  unsigned int v26; // eax
  __int64 DPIMETRICSForDpi; // rbx
  __int64 v28; // rbx
  int CharPosition; // eax
  unsigned __int16 *v30; // r10
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  struct tagSIZE v33; // [rsp+38h] [rbp-60h] BYREF
  __int64 v34; // [rsp+40h] [rbp-58h]
  char v35[4]; // [rsp+48h] [rbp-50h] BYREF
  int v36; // [rsp+4Ch] [rbp-4Ch]
  int v37; // [rsp+50h] [rbp-48h]
  unsigned int v38; // [rsp+C0h] [rbp+28h]

  cx = 0;
  DpiDependentMetric = 0;
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v34 = 0LL;
  if ( (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    v18 = *(_QWORD *)(GetDPIMETRICSForDpi(a3) + 48);
    if ( v18 )
    {
      v34 = GreSelectFont((__int64)a4, v18);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3, v19, v20);
      GetDPIMETRICSForDpi(a3);
      GreSetTextCharacterExtra(a4);
    }
  }
  v16 = MNIsOwnerDrawItem((__int64)a1, a5);
  v38 = v16;
  if ( !*((_QWORD *)a5 + 13)
    || (v21 = MNIsUAHMenu((__int64)a1)) != 0
    && (v15 = (unsigned int)v22, (_DWORD)v22)
    && ((unsigned int)v22 <= 3 || (v15 = (unsigned int)((_DWORD)v22 - 5), (unsigned int)v15 <= 6)) )
  {
    if ( !v16 )
    {
LABEL_39:
      if ( *((_QWORD *)a5 + 5) )
      {
        v33 = 0LL;
        if ( a6 )
        {
          DPIMETRICSForDpi = GetDPIMETRICSForDpi(a3);
          if ( DpiDependentMetric <= *(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 12) + 2 )
          {
            v28 = GetDPIMETRICSForDpi(a3);
            DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 12) + *(_DWORD *)(v28 + 20) + 2;
          }
          v16 = v38;
        }
        CharPosition = FindCharPosition(*((_QWORD *)a5 + 5), 9LL);
        xxxPSMGetTextExtent(a4, v30, CharPosition, &v33);
        if ( cx )
          cx += v33.cx + 2;
        else
          cx = v33.cx;
      }
      if ( a6 )
      {
        if ( (*((_DWORD *)a1 + 14) & 0x84000000) != 0x80000000 )
        {
          if ( (W32GetCurrentThreadDpiAwarenessContext(v15, v14) & 0xF) != 0
            || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432)
            || (v31 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432) + 8LL),
                (*(_DWORD *)(v31 + 52) & 1) == 0)
            || *(_WORD *)(PsGetCurrentProcessWin32Process(v31) + 284) == 96 )
          {
            v32 = (_DWORD *)(gpsi + 8012LL);
          }
          else
          {
            v32 = (_DWORD *)(gpsi + 9500LL);
          }
          cx += *v32;
        }
        cx += 6;
        DpiDependentMetric += 2;
      }
      goto LABEL_11;
    }
    xxxMNGetBitmapSize(a1, a5, a2, a3, a4);
    if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a5) == -1 )
      goto LABEL_13;
    cx = *((_DWORD *)a5 + 28);
    if ( a6 )
    {
      DpiDependentMetric = *((_DWORD *)a5 + 29);
      v15 = *(unsigned int *)(GetDPIMETRICSForDpi(a3) + 8);
      cx += 2 * v15;
      goto LABEL_10;
    }
    if ( !(unsigned int)MNIsUAHMenu((__int64)a1) )
      goto LABEL_10;
LABEL_9:
    DpiDependentMetric = *((_DWORD *)a5 + 29);
    goto LABEL_10;
  }
  if ( v22 != (HBRUSH)-1LL )
  {
    if ( *((_DWORD *)a5 + 28) != -1 )
      goto LABEL_33;
    if ( (*((_DWORD *)a5 + 1) & 0x20000000) != 0 )
    {
      *((_DWORD *)a5 + 28) = GetDpiDependentMetric(25LL, a3);
      v23 = GetDpiDependentMetric(26LL, a3);
      v24 = *((_QWORD *)a5 + 13) == 1LL;
      *((_DWORD *)a5 + 29) = v23;
      if ( v24 )
        *((_DWORD *)a5 + 28) += 2;
      goto LABEL_33;
    }
    if ( !v21 )
    {
      if ( (unsigned int)GreExtGetObjectW(v22, 32LL, v35) )
      {
        *((_DWORD *)a5 + 28) = v36;
        v25 = v37;
      }
      else
      {
        *((_DWORD *)a5 + 28) = GetDpiDependentMetric(25LL, a3);
        v25 = GetDpiDependentMetric(26LL, a3);
      }
      *((_DWORD *)a5 + 29) = v25;
      goto LABEL_33;
    }
  }
  xxxMNGetBitmapSize(a1, a5, a2, a3, a4);
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a5) == -1 )
    goto LABEL_13;
LABEL_33:
  cx = *((_DWORD *)a5 + 28);
  v15 = cx;
  v26 = *((_DWORD *)a1 + 20);
  if ( v26 > cx )
    v15 = v26;
  *((_DWORD *)a1 + 20) = v15;
  if ( a6 )
    goto LABEL_9;
  if ( *((_DWORD *)a5 + 29) > DpiDependentMetric )
    DpiDependentMetric = *((_DWORD *)a5 + 29);
LABEL_10:
  if ( !v16 )
    goto LABEL_39;
LABEL_11:
  if ( (unsigned int)MNGetpItemIndex((__int64)a1, (__int64)a5) != -1 && (*((_DWORD *)a5 + 1) & 0x1000) != 0 )
  {
    if ( v34 )
      GreSelectFont((__int64)a4, v34);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_13:
  a7->x = cx;
  a7->y = DpiDependentMetric;
  return v16;
}
