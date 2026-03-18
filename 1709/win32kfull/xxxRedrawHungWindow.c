/*
 * XREFs of xxxRedrawHungWindow @ 0x1C0134058
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxHungAppDemon @ 0x1C0088D20 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C01DCC84 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C0069E5C (PhysicalToLogicalInPlaceRgn.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C006C3F0 (IntersectRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C0096048 (xxxCalcClientRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxInternalPaintDesktop @ 0x1C00DFAEC (xxxInternalPaintDesktop.c)
 *     ProcessHungWindow @ 0x1C013431C (ProcessHungWindow.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GreWatchVisRgnChange @ 0x1C027A824 (GreWatchVisRgnChange.c)
 */

void __fastcall xxxRedrawHungWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 EmptyRgn; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 ThreadWin32Thread; // rax
  HDC DCEx; // rax
  HDC v15; // rbx
  __int16 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 i; // r14
  int v20; // ebx
  __int64 v21; // r8
  HDC v22; // rsi
  __int64 DesktopWindow; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  RECT v30; // xmm0
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  unsigned __int64 v34; // rbx
  int ObjectOwner; // r14d
  unsigned int BrushColor; // eax
  HBRUSH v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  HRGN v40; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v41[8]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v42[3]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v43[3]; // [rsp+48h] [rbp-11h] BYREF
  _DWORD v44[4]; // [rsp+60h] [rbp+7h] BYREF
  RECT v45; // [rsp+70h] [rbp+17h] BYREF

  if ( *((_QWORD *)a1 + 22) && (*((_BYTE *)a1 + 71) & 0x10) != 0 )
  {
    if ( !a2 || (unsigned int)IsHungWindow((__int64)a1) )
    {
      ProcessHungWindow(a1);
      return;
    }
    if ( !GetStyleWindow((__int64)a1, 2568) )
    {
      if ( *((_QWORD *)a1 + 22) <= 1uLL )
      {
        v45 = (RECT)*((_OWORD *)a1 + 8);
        v12 = GreCreateRectRgnIndirect(&v45);
        if ( !v12 )
          v12 = 1LL;
      }
      else
      {
        EmptyRgn = CreateEmptyRgn(v5, v4, v6, v7);
        v12 = EmptyRgn;
        if ( !EmptyRgn )
        {
          v12 = 1LL;
          goto LABEL_11;
        }
        if ( !(unsigned int)GreCombineRgn(EmptyRgn, *((_QWORD *)a1 + 22), 0LL, 5LL) )
        {
          GreDeleteObject(v12);
          v12 = 1LL;
        }
      }
      if ( v12 != 1 && (unsigned int)GreCombineRgn(v12, v12, a2, 1LL) == 1 )
      {
        GreDeleteObject(v12);
        return;
      }
LABEL_11:
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11);
      v42[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v42;
      v42[1] = a1;
      _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
      if ( gihmodUserApiHook < 0 )
      {
        DCEx = (HDC)_GetDCEx(a1, v12, 328833LL);
        v15 = DCEx;
        if ( (*((_BYTE *)a1 + 56) & 0x40) == 0
          || (v16 = 8193, *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL) != gpqForeground) )
        {
          v16 = 0x2000;
        }
        xxxDrawWindowFrame(a1, DCEx, v16);
        _ReleaseDC(v15);
      }
      xxxInternalInvalidate(a1, (HRGN)v12, 0x485u);
      v45 = (RECT)*((_OWORD *)a1 + 8);
      xxxCalcClientRect((__int64)a1, &v45, 1);
      SetRectRgnIndirect(ghrgnInv2, &v45);
      if ( v12 > 1 )
      {
        v17 = GreCombineRgn(v12, v12, ghrgnInv2, 1LL);
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            GreDeleteObject(v12);
            v12 = 0LL;
LABEL_42:
            v21 = (4 * (*((_BYTE *)a1 + 71) & 4)) | 0x8Bu;
            if ( (*((_BYTE *)a1 + 71) & 2) == 0 )
              v21 = (4 * (*((_BYTE *)a1 + 71) & 4)) | 0x83u;
            v22 = (HDC)_GetDCEx(a1, v12, v21);
            GreWatchVisRgnChange(v22);
            if ( a1 == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 176LL) )
            {
              DesktopWindow = GetDesktopWindow((__int64)a1);
              v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
              v43[0] = *(_QWORD *)(v27 + 392);
              *(_QWORD *)(v27 + 392) = v43;
              v43[1] = DesktopWindow;
              if ( DesktopWindow )
                _InterlockedAdd((volatile signed __int32 *)(DesktopWindow + 8), 1u);
              xxxInternalPaintDesktop(DesktopWindow, v22, 1);
              ThreadUnlock1(v29, v28);
            }
            else
            {
              v31 = *((_DWORD *)a1 + 33);
              v32 = -*((_DWORD *)a1 + 32);
              v45 = (RECT)*((_OWORD *)a1 + 8);
              v30 = v45;
              v45.right += v32;
              v33 = -v31;
              v45.bottom += v33;
              v45.top += v33;
              v45.left = v32 + _mm_cvtsi128_si32((__m128i)v30);
              v34 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 144LL);
              if ( v34 )
              {
                if ( v34 <= 0x1F )
                  v34 = *(_QWORD *)(gpsi + 8 * v34 + 4672);
              }
              else if ( (*((_BYTE *)a1 + 58) & 1) != 0 && (*((_BYTE *)a1 + 61) & 2) != 0 )
              {
                v34 = *(_QWORD *)(gpsi + 4800LL);
              }
              else
              {
                v34 = *(_QWORD *)(gpsi + 4720LL);
              }
              ObjectOwner = GreGetObjectOwner(v34, 16LL);
              if ( !ObjectOwner || ObjectOwner == (unsigned int)PsGetCurrentProcessId() )
              {
                v37 = (HBRUSH)v34;
              }
              else
              {
                BrushColor = GreGetBrushColor(v34);
                if ( BrushColor == -1 )
                  BrushColor = GreGetBrushColor(*(_QWORD *)(gpsi + 4720LL));
                GreSetSolidBrush(ghbrHungApp, BrushColor);
                v37 = (HBRUSH)ghbrHungApp;
              }
              FillRect(v22, &v45, v37);
            }
            GreWatchVisRgnChange(v22);
            _ReleaseDC(v22);
            SetOrClrWF(1, a1, 0x108u, 1);
            SetOrClrWF(1, a1, 0x102u, 1);
            SetOrClrWF(1, a1, 0x120u, 1);
            ThreadUnlock1(v39, v38);
            return;
          }
        }
        else
        {
          GreDeleteObject(v12);
          v12 = 1LL;
        }
      }
      if ( v12 && (*((_BYTE *)a1 + 71) & 2) == 0 )
      {
        v18 = *((_QWORD *)a1 + 22);
        if ( v18 == 1 || !(unsigned int)GreGetRgnBox(v18, &v45) )
          v45 = (RECT)*((_OWORD *)a1 + 8);
        for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
        {
          if ( (*(_BYTE *)(i + 71) & 0x10) != 0 && ((*(_BYTE *)(i + 60) & 4) != 0 || !*(_QWORD *)(i + 176)) )
          {
            if ( (unsigned int)IntersectRect(v44, &v45.left, (int *)(i + 128)) )
            {
              v40 = (HRGN)v12;
              v20 = PhysicalToLogicalInPlaceRgn(i, &v40);
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v41);
              xxxInternalInvalidate((struct tagWND *)i, v40, 0x485u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v41);
              if ( v20 )
                GreDeleteObject(v40);
            }
          }
        }
      }
      goto LABEL_42;
    }
  }
}
