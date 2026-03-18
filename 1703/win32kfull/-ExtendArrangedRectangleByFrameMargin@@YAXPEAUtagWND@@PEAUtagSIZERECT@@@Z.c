/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01A3358
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     GetDwmDependentMetric @ 0x1C003E228 (GetDwmDependentMetric.c)
 *     RECTFromSIZERECT @ 0x1C00EC384 (RECTFromSIZERECT.c)
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, struct tagSIZERECT *a2)
{
  int MonitorFlagsFromWindow; // eax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // edx
  int v12; // ecx
  int v13; // r10d
  signed int v14; // eax
  int v15; // r14d
  int v16; // ebp
  char v17; // r11
  int v18; // eax
  bool v19; // zf
  char v20; // cl
  int v21; // ebp
  __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  int v23[4]; // [rsp+28h] [rbp-30h] BYREF

  if ( (unsigned int)GetWindowExtendedMargin((__int64)a1, &v22) )
  {
    RECTFromSIZERECT(v23, a2);
    MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a1);
    v5 = MonitorFromRect(v23, MonitorFlagsFromWindow | 1u);
    if ( v5 )
    {
      if ( (*((_DWORD *)a1 + 92) & 0xF) == 0
        && (v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
        && (*(_DWORD *)(**(_QWORD **)(v7 + 8) + 52LL) & 1) != 0 )
      {
        v8 = (unsigned int *)(*(_QWORD *)(v5 + 40) + 92LL);
      }
      else if ( (*((_DWORD *)a1 + 92) & 0xF) == 1
             && (v9 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v9 + 8) + 52LL) & 1) != 0 )
      {
        v8 = (unsigned int *)(*(_QWORD *)(v5 + 40) + 108LL);
      }
      else
      {
        v8 = (unsigned int *)(*(_QWORD *)(v5 + 40) + 76LL);
      }
      v10 = *v8;
      v11 = *(_DWORD *)a2;
      if ( (int)v10 > *(_DWORD *)a2
        || (v12 = *((_DWORD *)a2 + 2), v13 = v8[2], v6 = (unsigned int)(v12 + v11), v13 < (int)v6)
        || (v14 = *((_DWORD *)a2 + 1), (int)v8[1] > v14)
        || (v15 = *((_DWORD *)a2 + 3), v16 = v15 + v14, (int)v8[3] < v15 + v14) )
      {
        if ( v8[1] == *((_DWORD *)a2 + 1) )
        {
          if ( (v20 = *((_BYTE *)a1 + 305), (v20 & 3) == 3)
            || (v20 & 1) != 0 && v11 + (unsigned __int16)v22 == (_DWORD)v10
            || (v20 & 2) != 0 && v11 + *((_DWORD *)a2 + 2) - WORD1(v22) == v8[2] )
          {
            v15 = *((_DWORD *)a2 + 3);
            v21 = *((_DWORD *)a2 + 1);
            if ( v15 - v21 <= (int)GetDwmDependentMetric(60LL, (__int64)a1, v10, v6) )
            {
              v19 = v8[3] == v15 + v21;
LABEL_33:
              if ( v19 )
                *((_DWORD *)a2 + 3) = v15 + HIWORD(v22);
            }
          }
        }
      }
      else
      {
        v17 = *((_BYTE *)a1 + 305);
        if ( (v17 & 3) == 3 )
        {
LABEL_24:
          v19 = v8[3] == v16;
          goto LABEL_33;
        }
        if ( (v17 & 1) != 0 && (_DWORD)v10 == v11 )
        {
          v18 = (unsigned __int16)v22;
LABEL_23:
          *((_DWORD *)a2 + 2) = v12 + 2 * v18;
          *(_DWORD *)a2 = v11 - v18;
          goto LABEL_24;
        }
        if ( (v17 & 2) != 0 && v13 == (_DWORD)v6 )
        {
          v18 = WORD1(v22);
          goto LABEL_23;
        }
      }
    }
  }
}
