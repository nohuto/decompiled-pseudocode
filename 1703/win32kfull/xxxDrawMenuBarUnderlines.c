/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C0118F78
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0201780 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxPSMGetTextExtent @ 0x1C000CBA8 (xxxPSMGetTextExtent.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C000DEB4 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     GreSetViewportOrg @ 0x1C000E26C (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C000E3CC (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     CALL_LPK @ 0x1C000EAB4 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C000EAF0 (GetPrefixCount.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C004231C (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0042E88 (MNIsOwnerDrawItem.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDPIMetrics @ 0x1C00BBA28 (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C00C3100 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GreSelectFontInternal @ 0x1C013F298 (GreSelectFontInternal.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0215194 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C021BCC8 (xxxPSMTextOut.c)
 */

__int64 __fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  __int64 result; // rax
  struct tagWND *v5; // r13
  __int64 v6; // rbx
  BOOL v7; // esi
  int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 DCEx; // rax
  unsigned int v13; // r15d
  HDC v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // esi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // esi
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // esi
  _QWORD *v42; // r8
  _DWORD *v43; // rax
  _QWORD *v44; // r8
  _DWORD *v45; // rax
  int v46; // edx
  int v47; // esi
  unsigned int v48; // eax
  __int64 v49; // rax
  unsigned __int16 *v50; // rsi
  unsigned __int16 PrefixCount; // ax
  __int64 v52; // [rsp+28h] [rbp-E0h]
  __int64 v53; // [rsp+28h] [rbp-E0h]
  __int64 v54; // [rsp+28h] [rbp-E0h]
  __int64 v55; // [rsp+28h] [rbp-E0h]
  int v56; // [rsp+48h] [rbp-C0h]
  int v57; // [rsp+4Ch] [rbp-BCh]
  unsigned __int16 *SourceString; // [rsp+58h] [rbp-B0h]
  struct tagSIZE v60; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+68h] [rbp-A0h]
  __int64 ThreadWin32Thread; // [rsp+70h] [rbp-98h]
  _BOOL8 v63; // [rsp+78h] [rbp-90h]
  __int64 v64; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h]
  _QWORD v66[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v67[512]; // [rsp+B8h] [rbp-50h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = 0LL;
  v60 = 0LL;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    result = GetAppCompatFlags2(0x400u);
    if ( (result & 2) == 0 )
    {
      result = GetNonChildAncestor(a1);
      v5 = (struct tagWND *)result;
      if ( result )
      {
        if ( (*(_BYTE *)(result + 56) & 1) != 0 )
        {
          v6 = *(_QWORD *)(result + 208);
          if ( v6 )
          {
            result = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
            v7 = (_DWORD)result == -2147352576 && (*(_DWORD *)(v6 + 56) & 1) == 0;
            v8 = *(_DWORD *)(v6 + 56);
            if ( a2 )
            {
              if ( (v8 & 4) != 0 )
                return result;
              v9 = v8 | 4;
              v10 = *(_QWORD *)(gpsi + 5144LL);
            }
            else
            {
              if ( (v8 & 4) == 0 )
                return result;
              v10 = *(_QWORD *)(v6 + 128);
              if ( !v10 )
              {
                if ( v7 )
                  v10 = *(_QWORD *)(gpsi + 5328LL);
                else
                  v10 = *(_QWORD *)(gpsi + 5120LL);
              }
              v9 = v8 & 0xFFFFFFFB;
            }
            v11 = *(_QWORD *)(v6 + 96);
            *(_DWORD *)(v6 + 56) = v9;
            DCEx = _GetDCEx(v5, 0LL, 65539LL);
            *(_DWORD *)(v6 + 56) |= 0x200u;
            v13 = 0;
            v14 = (HDC)DCEx;
            v15 = gptiCurrent;
            v16 = *(_QWORD *)(gptiCurrent + 368LL);
            v64 = v16;
            *(_QWORD *)(gptiCurrent + 368LL) = &v64;
            v65 = v6;
            ++*(_DWORD *)(v6 + 8);
            if ( *(_DWORD *)(v6 + 68) )
            {
              v63 = v7;
              do
              {
                if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 )
                  break;
                v17 = MNIsOwnerDrawItem(v6, (_DWORD *)v11);
                v61 = *(_QWORD *)(v11 + 56);
                SourceString = *(unsigned __int16 **)(v11 + 40);
                if ( SourceString || v17 )
                {
                  if ( v17 )
                  {
                    GetDPIMETRICS(v5);
                    GreSelectFontInternal(v14);
                    v20 = 0;
                    v21 = 0;
                  }
                  else
                  {
                    GetDPIMetrics(v16, v15, v18, v19, v52);
                    GreSelectFontInternal(v14);
                    v20 = *(_DWORD *)(v11 + 76);
                    v21 = *(_DWORD *)(v11 + 72);
                  }
                  GreSetViewportOrg(v14, v21, v20);
                  if ( a2 && (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
                    v22 = *(_QWORD *)(gpsi + 5296LL);
                  else
                    v22 = v10;
                  GreSelectBrush(v14, v22);
                  if ( !v17 )
                  {
                    v56 = *(_DWORD *)(GetDPIMetrics(v24, v23, v25, v26, v52) + 20);
                    v31 = *(_DWORD *)(v11 + 84) - *(_DWORD *)(GetDPIMetrics(v28, v27, v29, v30, v53) + 20);
                    v38 = v31 - *(_DWORD *)(GetDPIMetrics(v33, v32, v34, v35, v54) + 12) - 1;
                    if ( v38 )
                      v56 += v38 >> 1;
                    v41 = *(_DWORD *)(GetDPIMetrics(v37, v36, v39, v40, v55) + 8);
                    v57 = v41;
                    if ( (*(_DWORD *)v11 & 0x2000) != 0 )
                    {
                      xxxPSMGetTextExtent(v14, SourceString, *(unsigned int *)(v11 + 48), &v60);
                      if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 || v61 != *(_QWORD *)(v11 + 56) )
                        break;
                      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                + 408)
                                                    + 8LL)
                                      + 52LL) & 1) != 0 )
                      {
                        v42 = (_QWORD *)gpsi;
                        if ( *(_WORD *)(gpsi + 8678LL) != 96 )
                        {
                          v43 = (_DWORD *)(gpsi + 8204LL);
                          goto LABEL_45;
                        }
                      }
                      else
                      {
                        v42 = (_QWORD *)gpsi;
                      }
                      v43 = (_DWORD *)(*v42 + 6716LL);
LABEL_45:
                      v57 = *(_DWORD *)(v11 + 80) - *v43 - v60.cx + v41 - 2;
                    }
                    if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                    {
                      v45 = (_DWORD *)*v44;
                      if ( a2 )
                      {
                        v46 = v45[1247];
                      }
                      else if ( v63 )
                      {
                        v46 = v45[1270];
                      }
                      else
                      {
                        v46 = v45[1244];
                      }
                      v47 = GreSetTextColor(v14, v46);
                      xxxPSMTextOut(v14, v57, v56, SourceString, *(_DWORD *)(v11 + 48), 0x200000);
                      if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 || v61 != *(_QWORD *)(v11 + 56) )
                        break;
                      GreSetTextColor(v14, v47);
                    }
                    else
                    {
                      v48 = *(_DWORD *)(v11 + 48);
                      if ( v48 < 0xFF )
                      {
                        v50 = (unsigned __int16 *)v67;
                      }
                      else
                      {
                        v49 = Win32AllocPool(2LL * (v48 + 1), 1953657685LL);
                        v50 = (unsigned __int16 *)v49;
                        if ( !v49 )
                          break;
                        PushW32ThreadLock(v49, v66, (__int64)Win32FreePool);
                      }
                      PrefixCount = GetPrefixCount(
                                      (__int16 *)SourceString,
                                      *(_DWORD *)(v11 + 48),
                                      (__int64)v50,
                                      *(_DWORD *)(v11 + 48));
                      xxxDrawItemUnderline((struct tagMENU *)v6, (struct tagITEM *)v11, v14, v57, v56, v50, PrefixCount);
                      if ( v50 != (unsigned __int16 *)v67 )
                        PopAndFreeAlwaysW32ThreadLock((__int64)v66);
                    }
                    goto LABEL_61;
                  }
                  xxxSendMenuDrawItemMessage(v14, 1u, (struct tagMENU *)v6, (struct tagITEM *)v11, 0, 0, 0LL);
                }
LABEL_61:
                if ( ++v13 == -1 || v13 >= *(_DWORD *)(v6 + 68) )
                  v11 = 0LL;
                else
                  v11 = *(_QWORD *)(v6 + 96) + 152LL * v13;
              }
              while ( v13 < *(_DWORD *)(v6 + 68) );
            }
            *(_DWORD *)(v65 + 56) &= ~0x200u;
            ThreadUnlock1(v16, v15);
            return _ReleaseDC(v14);
          }
        }
      }
    }
  }
  return result;
}
