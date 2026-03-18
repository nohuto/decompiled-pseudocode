/*
 * XREFs of xxxRedrawHungWindow @ 0x1C0139BCC
 * Callers:
 *     xxxHungAppDemon @ 0x1C0049F40 (xxxHungAppDemon.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01F5984 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00659FC (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C0067F2C (IntersectRect.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalPaintDesktop @ 0x1C01112F4 (xxxInternalPaintDesktop.c)
 *     ProcessHungWindow @ 0x1C01321FC (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C027DD18 (GreWatchVisRgnChange.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 EmptyRgn; // rax
  unsigned __int64 v9; // rdi
  HDC DCEx; // rax
  HDC v11; // rsi
  __int16 v12; // r8
  int v13; // eax
  __int64 i; // rsi
  int v15; // r14d
  __int64 v16; // r8
  HDC v17; // rsi
  __int64 DesktopWindow; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  RECT v21; // xmm0
  int v22; // edx
  int v23; // ecx
  int v24; // edx
  unsigned __int64 v25; // rdi
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  HRGN v31; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v32[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v33[3]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v34[3]; // [rsp+48h] [rbp-11h] BYREF
  int v35[4]; // [rsp+60h] [rbp+7h] BYREF
  RECT v36; // [rsp+70h] [rbp+17h] BYREF

  if ( *((_QWORD *)a1 + 22) && (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    if ( !a2 || (unsigned int)IsHungWindow((__int64)a1) )
    {
      ProcessHungWindow((__int64)a1);
      return;
    }
    if ( !GetStyleWindow((__int64)a1, 2568) )
    {
      if ( *((_QWORD *)a1 + 22) <= 1uLL )
      {
        v36 = (RECT)*((_OWORD *)a1 + 8);
        v9 = GreCreateRectRgnIndirect(&v36);
        if ( !v9 )
          v9 = 1LL;
      }
      else
      {
        EmptyRgn = CreateEmptyRgn(v5, v4, v6, v7);
        v9 = EmptyRgn;
        if ( !EmptyRgn )
        {
          v9 = 1LL;
          goto LABEL_10;
        }
        if ( !(unsigned int)GreCombineRgn(EmptyRgn, *((_QWORD *)a1 + 22), 0LL, 5LL) )
        {
          GreDeleteObject(v9);
          v9 = 1LL;
        }
      }
      if ( v9 != 1 && (unsigned int)GreCombineRgn(v9, v9, a2, 1LL) == 1 )
      {
        GreDeleteObject(v9);
        return;
      }
LABEL_10:
      v33[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v33;
      ++*((_DWORD *)a1 + 2);
      v33[1] = a1;
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, v9, 328833LL);
        v11 = DCEx;
        if ( (*((_BYTE *)a1 + 56) & 0x40) == 0
          || (v12 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gpqForeground) )
        {
          v12 = 0x2000;
        }
        xxxDrawWindowFrame((__int64)a1, DCEx, v12);
        _ReleaseDC(v11);
      }
      xxxInternalInvalidate(a1, (HRGN)v9, 1157LL);
      v36 = (RECT)*((_OWORD *)a1 + 8);
      xxxCalcClientRect((__int64)a1, (__int128 *)&v36.left, 1);
      SetRectRgnIndirect(ghrgnInv2, &v36);
      if ( v9 > 1 )
      {
        v13 = GreCombineRgn(v9, v9, ghrgnInv2, 1LL);
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            GreDeleteObject(v9);
            v9 = 0LL;
LABEL_43:
            v16 = (4 * (*((_BYTE *)a1 + 71) & 4)) | 0x8Bu;
            if ( (*((_BYTE *)a1 + 71) & 2) == 0 )
              v16 = (4 * (*((_BYTE *)a1 + 71) & 4)) | 0x83u;
            v17 = (HDC)_GetDCEx(a1, v9, v16);
            GreWatchVisRgnChange(v17);
            if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 176LL) )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              v34[0] = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = v34;
              v34[1] = DesktopWindow;
              if ( DesktopWindow )
                ++*(_DWORD *)(DesktopWindow + 8);
              xxxInternalPaintDesktop(DesktopWindow, v17, 1);
              ThreadUnlock1(v20, v19);
            }
            else
            {
              v22 = *((_DWORD *)a1 + 33);
              v23 = -*((_DWORD *)a1 + 32);
              v36 = (RECT)*((_OWORD *)a1 + 8);
              v21 = v36;
              v36.right += v23;
              v24 = -v22;
              v36.bottom += v24;
              v36.top += v24;
              v36.left = v23 + _mm_cvtsi128_si32((__m128i)v21);
              v25 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 136LL);
              if ( v25 )
              {
                if ( v25 <= 0x1F )
                  v25 = *(_QWORD *)(gpsi + 8 * v25 + 5080);
              }
              else if ( (*((_BYTE *)a1 + 58) & 1) != 0 && (*((_BYTE *)a1 + 61) & 2) != 0 )
              {
                v25 = *(_QWORD *)(gpsi + 5208LL);
              }
              else
              {
                v25 = *(_QWORD *)(gpsi + 5128LL);
              }
              ObjectOwner = GreGetObjectOwner(v25, 16LL);
              if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
              {
                v28 = (HBRUSH)v25;
              }
              else
              {
                BrushColor = GreGetBrushColor(v25);
                if ( BrushColor == -1 )
                  BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 5128LL));
                GreSetSolidBrush(ghbrHungApp, BrushColor);
                v28 = (HBRUSH)ghbrHungApp;
              }
              FillRect(v17, &v36, v28);
            }
            GreWatchVisRgnChange(v17);
            _ReleaseDC(v17);
            SetOrClrWF(1, a1, 0x108u, 1);
            SetOrClrWF(1, a1, 0x102u, 1);
            SetOrClrWF(1, a1, 0x120u, 1);
            ThreadUnlock1(v30, v29);
            return;
          }
        }
        else
        {
          GreDeleteObject(v9);
          v9 = 1LL;
        }
      }
      if ( v9 && (*((_BYTE *)a1 + 71) & 2) == 0 )
      {
        if ( v9 == 1 )
          v36 = (RECT)*((_OWORD *)a1 + 8);
        else
          GreGetRgnBox(v9, &v36);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
        {
          if ( (*(_BYTE *)(i + 71) & 0x10) != 0
            && ((*(_BYTE *)(i + 60) & 4) != 0 || !*(_QWORD *)(i + 176))
            && (unsigned int)IntersectRect(v35, &v36.left, (int *)(i + 128)) )
          {
            v31 = (HRGN)v9;
            v15 = PhysicalToLogicalInPlaceRgn(i, &v31);
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v32);
            xxxInternalInvalidate((struct tagWND *)i, v31, 1157LL);
            if ( !v32[0] )
            {
              --gdwInAtomicOperation;
              UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v32);
            }
            if ( v15 )
              GreDeleteObject(v31);
          }
        }
      }
      goto LABEL_43;
    }
  }
}
