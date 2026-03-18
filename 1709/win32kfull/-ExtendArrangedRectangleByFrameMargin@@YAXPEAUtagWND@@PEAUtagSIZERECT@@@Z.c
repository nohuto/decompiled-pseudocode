/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01AAB10
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     GetMaxTrackSizeForWindow @ 0x1C005D45C (GetMaxTrackSizeForWindow.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     RECTFromSIZERECT @ 0x1C007332C (RECTFromSIZERECT.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(struct tagWND *a1, LONG *a2)
{
  __int64 v4; // rax
  struct tagRECT *MonitorWorkRectForWindow; // rax
  LONG v6; // ecx
  LONG v7; // edx
  LONG v8; // r10d
  LONG v9; // esi
  LONG v10; // r14d
  __int64 v11; // r10
  char v12; // di
  int v13; // eax
  LONG v14; // eax
  char v15; // dl
  struct tagSIZE MaxTrackSizeForWindow; // rax
  LONG v17; // edx
  LONG v18; // r8d
  unsigned __int16 v19; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 v20; // [rsp+22h] [rbp-1Eh]
  unsigned __int16 v21; // [rsp+26h] [rbp-1Ah]
  struct tagRECT v22; // [rsp+28h] [rbp-18h] BYREF

  if ( (unsigned int)GetWindowExtendedMargin((__int64)a1, (__int64)&v19) )
  {
    RECTFromSIZERECT(&v22, a2);
    v4 = MonitorFromRect(&v22, 1u, *((_DWORD *)a1 + 92));
    if ( v4 )
    {
      MonitorWorkRectForWindow = (struct tagRECT *)GetMonitorWorkRectForWindow(&v22, v4, a1);
      v6 = *a2;
      v22 = *MonitorWorkRectForWindow;
      if ( v22.left > v6
        || (v7 = a2[2], v22.right < v7 + v6)
        || (v8 = a2[1], v22.top > v8)
        || (v9 = a2[3], v10 = v9 + v8, v11 = HIDWORD(*(_QWORD *)&v22.right), v22.bottom < v10) )
      {
        if ( v22.top == a2[1] )
        {
          if ( (v15 = *((_BYTE *)a1 + 305), (v15 & 3) == 3)
            || (v15 & 1) != 0 && v6 + v19 == v22.left
            || (v15 & 2) != 0 && v6 + a2[2] - v20 == v22.right )
          {
            MaxTrackSizeForWindow = GetMaxTrackSizeForWindow((__int64)a1);
            v17 = a2[3];
            v18 = a2[1];
            if ( v17 - v18 <= MaxTrackSizeForWindow.cy && v22.bottom == v17 + v18 )
            {
              v14 = v17 + v21;
LABEL_26:
              a2[3] = v14;
            }
          }
        }
      }
      else
      {
        v12 = *((_BYTE *)a1 + 305);
        if ( (v12 & 3) == 3 )
        {
LABEL_15:
          if ( (_DWORD)v11 != v10 )
            return;
          v14 = v9 + v21;
          goto LABEL_26;
        }
        if ( (v12 & 1) != 0 && v22.left == v6 )
        {
          v13 = v19;
LABEL_14:
          a2[2] = v7 + 2 * v13;
          *a2 = v6 - v13;
          goto LABEL_15;
        }
        if ( (v12 & 2) != 0 && v22.right == v7 + v6 )
        {
          v13 = v20;
          goto LABEL_14;
        }
      }
    }
  }
}
