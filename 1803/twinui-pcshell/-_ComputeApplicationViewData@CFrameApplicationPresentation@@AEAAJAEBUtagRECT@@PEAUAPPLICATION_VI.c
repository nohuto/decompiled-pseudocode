/*
 * XREFs of ?_ComputeApplicationViewData@CFrameApplicationPresentation@@AEAAJAEBUtagRECT@@PEAUAPPLICATION_VIEW_DATA@@@Z @ 0x180014480
 * Callers:
 *     ?ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x180013FD0 (-ReconcileApplicationViewState@CFrameApplicationPresentation@@UEAAJPEAUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_ComputeApplicationViewData(
        HWND *this,
        const struct tagRECT *a2,
        struct APPLICATION_VIEW_DATA *a3)
{
  HMONITOR v5; // rax
  __int64 result; // rax
  int v7; // r10d
  bool v8; // al
  bool v9; // dl
  int v10; // edx
  bool v11; // al
  bool v12; // cl
  __int128 v13; // xmm1
  int v14; // edx
  int v15; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+28h] [rbp-D8h]
  __int128 v17; // [rsp+38h] [rbp-C8h]
  tagPOINT Points[2]; // [rsp+50h] [rbp-B0h] BYREF
  tagRECT Rect; // [rsp+60h] [rbp-A0h] BYREF
  tagMONITORINFO mi; // [rsp+70h] [rbp-90h] BYREF

  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 2) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_DWORD *)a3 + 8) = 0;
  *(struct tagRECT *)&Points[0].x = *a2;
  SetLastError(0);
  if ( MapWindowPoints(this[16], 0LL, Points, 2u)
    || !GetLastError()
    || (result = ResultFromKnownLastError(), (int)result >= 0) )
  {
    if ( GetWindowRect(this[16], &Rect) || (result = ResultFromKnownLastError(), (int)result >= 0) )
    {
      v5 = MonitorFromWindow(this[16], 1u);
      mi.cbSize = 104;
      if ( GetMonitorInfoW(v5, &mi) || (result = ResultFromKnownLastError(), (int)result >= 0) )
      {
        result = GetScaleFactorForWindow(*(_QWORD *)this[14], &v15);
        if ( (int)result >= 0 )
        {
          v7 = Points[1].x - Points[0].x;
          v17 = 0uLL;
          if ( Points[1].x - Points[0].x < 320 * v15 / 100 || v7 >= 5 * v15 )
          {
            if ( v7 < Points[1].y - Points[0].y )
            {
              LODWORD(v16) = 3;
            }
            else
            {
              v8 = Rect.left <= mi.rcWork.left && mi.rcWork.left <= Points[0].x;
              v9 = mi.rcWork.right <= Rect.right && Points[1].x <= mi.rcWork.right;
              LODWORD(v16) = !v8 || !v9;
            }
          }
          else
          {
            LODWORD(v16) = 2;
          }
          *(_QWORD *)((char *)&v16 + 4) = v7 < Points[1].y - Points[0].y;
          v10 = 0;
          v11 = Rect.left <= mi.rcWork.left && mi.rcWork.left <= Points[0].x;
          v12 = Points[1].x <= mi.rcWork.right && mi.rcWork.right <= Rect.right;
          if ( v11 )
          {
            if ( !v12 )
            {
              DWORD2(v16) = 1;
LABEL_24:
              v13 = v17;
              HIDWORD(v16) = 0;
              result = 0LL;
              *(_OWORD *)a3 = v16;
              *((_OWORD *)a3 + 1) = v13;
              *((_DWORD *)a3 + 8) = 3;
              return result;
            }
            v10 = 1;
          }
          else if ( v12 )
          {
            v10 = 3;
          }
          v14 = v10 - 1;
          if ( v14 )
          {
            if ( v14 == 2 )
              DWORD2(v16) = 2;
          }
          else
          {
            DWORD2(v16) = 3;
          }
          goto LABEL_24;
        }
      }
    }
  }
  return result;
}
