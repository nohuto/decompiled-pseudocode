/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C0122820
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0203090 (xxxEndMenuLoop.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C004C99C (GetDPIMetrics.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetAppCompatFlags2 @ 0x1C007C450 (GetAppCompatFlags2.c)
 *     ThreadLockMenuNoModify @ 0x1C007CAD4 (ThreadLockMenuNoModify.c)
 *     GreSelectFont @ 0x1C007E920 (GreSelectFont.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C007FD30 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0080D90 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetViewportOrg @ 0x1C0080E74 (GreSetViewportOrg.c)
 *     MNGetpItemIndex @ 0x1C0097670 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0098288 (MNIsOwnerDrawItem.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     CALL_LPK @ 0x1C013C798 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C02160B4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C021CF78 (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C023BD70 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C023D948 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxDrawMenuBarUnderlines(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 result; // rax
  struct tagWND *v7; // r13
  __int64 v8; // rbx
  BOOL v9; // r14d
  int v10; // edx
  unsigned int v11; // edx
  __int64 v12; // r12
  __int64 v13; // rdi
  HDC DCEx; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r15d
  int v18; // ebp
  __int64 *DPIMETRICS; // rax
  int v20; // r8d
  int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // ebp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // ebp
  int v34; // ebp
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  _DWORD *v44; // rcx
  int v45; // edx
  int v46; // ebp
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r9
  unsigned __int16 *v50; // rbp
  unsigned __int16 PrefixCount; // ax
  __int64 v52; // r8
  __int64 v53; // r9
  int v54; // [rsp+40h] [rbp-298h]
  int v55; // [rsp+44h] [rbp-294h]
  int v56; // [rsp+48h] [rbp-290h]
  unsigned __int16 *v57; // [rsp+50h] [rbp-288h]
  struct tagSIZE v58; // [rsp+58h] [rbp-280h] BYREF
  __int64 v59; // [rsp+60h] [rbp-278h]
  __int64 ThreadWin32Thread; // [rsp+68h] [rbp-270h]
  _QWORD v61[3]; // [rsp+70h] [rbp-268h] BYREF
  __int64 v62; // [rsp+88h] [rbp-250h] BYREF
  __int64 v63; // [rsp+90h] [rbp-248h]
  _BYTE v64[512]; // [rsp+A0h] [rbp-238h] BYREF

  v56 = a2;
  v5 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  result = 0LL;
  v58 = 0LL;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    result = GetAppCompatFlags2(0x400u);
    if ( (result & 2) == 0 )
    {
      result = GetNonChildAncestor(a1);
      v7 = (struct tagWND *)result;
      if ( result )
      {
        if ( (*(_BYTE *)(result + 56) & 1) != 0 )
        {
          v8 = *(_QWORD *)(result + 208);
          if ( v8 )
          {
            result = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
            v9 = (_DWORD)result == -2147352576 && (*(_DWORD *)(v8 + 56) & 1) == 0;
            v10 = *(_DWORD *)(v8 + 56);
            if ( v5 )
            {
              if ( (v10 & 4) != 0 )
                return result;
              v11 = v10 | 4;
              v12 = *(_QWORD *)(gpsi + 4736LL);
            }
            else
            {
              if ( (v10 & 4) == 0 )
                return result;
              v12 = *(_QWORD *)(v8 + 128);
              if ( !v12 )
              {
                if ( v9 )
                  v12 = *(_QWORD *)(gpsi + 4920LL);
                else
                  v12 = *(_QWORD *)(gpsi + 4712LL);
              }
              v11 = v10 & 0xFFFFFFFB;
            }
            v13 = *(_QWORD *)(v8 + 96);
            *(_DWORD *)(v8 + 56) = v11;
            DCEx = (HDC)_GetDCEx(v7, 0LL, 65539LL);
            ThreadLockMenuNoModify(v8, &v62);
            v17 = 0;
            while ( v17 < *(_DWORD *)(v8 + 68) )
            {
              if ( (unsigned int)MNGetpItemIndex(v8, v13) == -1 )
                break;
              v18 = MNIsOwnerDrawItem(v8, (_DWORD *)v13);
              v59 = *(_QWORD *)(v13 + 56);
              v57 = *(unsigned __int16 **)(v13 + 40);
              if ( v57 || v18 )
              {
                if ( v18 )
                {
                  DPIMETRICS = (__int64 *)GetDPIMETRICS(v7);
                  GreSelectFont((__int64)DCEx, *DPIMETRICS);
                  v20 = 0;
                  v21 = 0;
                }
                else
                {
                  v22 = (__int64 *)GetDPIMetrics(v16, v15);
                  GreSelectFont((__int64)DCEx, *v22);
                  v20 = *(_DWORD *)(v13 + 76);
                  v21 = *(_DWORD *)(v13 + 72);
                }
                GreSetViewportOrg(DCEx, v21, v20);
                if ( v56 && (*(_DWORD *)(v13 + 4) & 0x100) != 0 )
                  v23 = *(_QWORD *)(gpsi + 4888LL);
                else
                  v23 = v12;
                GreSelectBrush(DCEx, v23);
                if ( v18 )
                {
                  xxxSendMenuDrawItemMessage(DCEx, 1u, (struct tagMENU *)v8, (struct tagITEM *)v13, 0, 0, 0LL);
                }
                else
                {
                  v54 = *(_DWORD *)(GetDPIMetrics(v25, v24) + 20);
                  v28 = *(_DWORD *)(v13 + 84) - *(_DWORD *)(GetDPIMetrics(v27, v26) + 20);
                  v33 = v28 - *(_DWORD *)(GetDPIMetrics(v30, v29) + 12) - 1;
                  if ( v33 )
                    v54 += v33 >> 1;
                  v34 = *(_DWORD *)(GetDPIMetrics(v32, v31) + 8);
                  v55 = v34;
                  if ( (*(_DWORD *)v13 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(DCEx, v57, *(_DWORD *)(v13 + 48), &v58);
                    if ( (unsigned int)MNGetpItemIndex(v8, v13) == -1 || v59 != *(_QWORD *)(v13 + 56) )
                      break;
                    if ( (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v35, v36) & 0xF) != 0
                      || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 432)
                      || (v43 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                            (__int64)KeGetCurrentThread(),
                                                            v40,
                                                            v41,
                                                            v42)
                                                        + 432)
                                            + 8LL),
                          (*(_DWORD *)(v43 + 52) & 1) == 0)
                      || *(_WORD *)(PsGetCurrentProcessWin32Process(v43) + 284) == 96 )
                    {
                      v44 = (_DWORD *)(gpsi + 8012LL);
                    }
                    else
                    {
                      v44 = (_DWORD *)(gpsi + 9500LL);
                    }
                    v55 = *(_DWORD *)(v13 + 80) - v58.cx - *v44 + v34 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                  {
                    if ( v56 )
                    {
                      v45 = *(_DWORD *)(gpsi + 4580LL);
                    }
                    else if ( v9 )
                    {
                      v45 = *(_DWORD *)(gpsi + 4672LL);
                    }
                    else
                    {
                      v45 = *(_DWORD *)(gpsi + 4568LL);
                    }
                    v46 = GreSetTextColor(DCEx, v45);
                    xxxPSMTextOut(DCEx, *(_DWORD *)(v13 + 48), 0x200000);
                    if ( (unsigned int)MNGetpItemIndex(v8, v13) == -1 || v59 != *(_QWORD *)(v13 + 56) )
                      break;
                    GreSetTextColor(DCEx, v46);
                  }
                  else
                  {
                    v47 = *(_DWORD *)(v13 + 48);
                    if ( v47 < 0xFF )
                    {
                      v50 = (unsigned __int16 *)v64;
                    }
                    else
                    {
                      v48 = Win32AllocPool(2LL * (v47 + 1), 1953657685LL);
                      v50 = (unsigned __int16 *)v48;
                      if ( !v48 )
                        break;
                      PushW32ThreadLock(v48, v61, (__int64)Win32FreePool, v49);
                    }
                    PrefixCount = GetPrefixCount(v57, *(unsigned int *)(v13 + 48), v50, *(unsigned int *)(v13 + 48));
                    xxxDrawItemUnderline((struct tagMENU *)v8, (struct tagITEM *)v13, DCEx, v55, v54, v50, PrefixCount);
                    if ( v50 != (unsigned __int16 *)v64 )
                      PopAndFreeAlwaysW32ThreadLock((__int64)v61, v15, v52, v53);
                  }
                }
              }
              if ( ++v17 == -1 || v17 >= *(_DWORD *)(v8 + 68) )
                v13 = 0LL;
              else
                v13 = *(_QWORD *)(v8 + 96) + 152LL * v17;
            }
            *(_DWORD *)(v63 + 56) &= ~0x200u;
            ThreadUnlock1(v16, v15);
            return _ReleaseDC(DCEx);
          }
        }
      }
    }
  }
  return result;
}
