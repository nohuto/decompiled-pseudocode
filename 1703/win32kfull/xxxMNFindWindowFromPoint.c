/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C0205474
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C02018C8 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0205008 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     _HasCaptionIcon @ 0x1C001D908 (_HasCaptionIcon.c)
 *     GetWindowDpiLastNotify @ 0x1C003D960 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C004258C (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C005D060 (safe_cast_fnid_to_PMENUWND.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     GetWindowBordersForDpi @ 0x1C00C3088 (GetWindowBordersForDpi.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDpiDepSysMetCachePlateauSlot @ 0x1C01C4174 (GetDpiDepSysMetCachePlateauSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01C41D0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01C4300 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     IsMFMWFPWindow @ 0x1C0203CDC (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0203EA8 (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(int **a1, _DWORD *a2, int a3)
{
  __int64 v3; // rdi
  __int16 v5; // bx
  int *v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  int *v18; // r9
  int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // r8d
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // r11
  int WindowDpiLastNotify; // ebx
  __int64 v26; // rax
  __int64 v27; // r14
  int v28; // r15d
  int DpiDepSysMetCachePlateauSlot; // eax
  int v30; // eax
  __int64 v31; // r11
  int v32; // r14d
  int v33; // eax
  __int64 v34; // r11
  int WindowBordersForDpi; // eax
  int v36; // r9d
  bool v37; // zf
  unsigned __int64 v38; // r8
  __int64 v39; // rcx
  int *v40; // rcx
  int v41; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+38h] [rbp-38h]
  __int64 v43; // [rsp+40h] [rbp-30h] BYREF
  int v44; // [rsp+48h] [rbp-28h]
  int v45; // [rsp+4Ch] [rbp-24h]
  _QWORD v46[3]; // [rsp+50h] [rbp-20h] BYREF
  __int16 v47; // [rsp+B2h] [rbp+42h]

  v47 = HIWORD(a3);
  v3 = 0LL;
  *a2 = 0;
  v5 = a3;
  v6 = *a1;
  v41 = 0;
  v8 = *((_QWORD *)v6 + 3);
  if ( !v8 )
    goto LABEL_12;
  v46[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v46;
  v46[1] = v8;
  ++*(_DWORD *)(v8 + 8);
  v9 = xxxSendMessage(*((_QWORD *)*a1 + 3), 491, (int)&v41, a3);
  ThreadUnlock1(v11, v10);
  if ( !IsMFMWFPWindow(v9) )
    goto LABEL_7;
  v13 = HMValidateHandleNoSecure(v12, 1);
  v9 = v13;
  if ( !v13 )
    goto LABEL_12;
  v14 = safe_cast_fnid_to_PMENUWND(v13);
  if ( v14 )
  {
    v15 = *(_QWORD *)(v14 + 8);
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 40) )
      {
LABEL_7:
        if ( v9 )
        {
          v16 = v41;
LABEL_9:
          v3 = v9;
LABEL_10:
          *a2 = v16;
          goto LABEL_11;
        }
LABEL_12:
        v18 = *a1;
        v19 = **a1;
        if ( (v19 & 1) != 0 )
        {
          v9 = *((_QWORD *)v18 + 1);
          if ( !v9 )
            goto LABEL_11;
          v20 = v47;
          v21 = v5;
          LODWORD(v42) = v5;
          HIDWORD(v42) = v47;
          if ( (v19 & 4) != 0 )
          {
            if ( !(unsigned int)HasCaptionIcon(v9) )
              goto LABEL_11;
            if ( (*(_BYTE *)(v9 + 71) & 0x20) != 0 )
            {
              if ( !PtInRect((_DWORD *)(v9 + 128), v42) )
                goto LABEL_11;
LABEL_18:
              v3 = 0xFFFFFFFFLL;
              goto LABEL_11;
            }
            v24 = (__int64 *)gpsi;
            if ( (*(_DWORD *)(v9 + 304) & 0x10000000) != 0 )
            {
              WindowDpiLastNotify = GetWindowDpiLastNotify(v9);
            }
            else if ( (*(_DWORD *)(v9 + 368) & 0xF) == 0
                   && (v26 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 408LL)) != 0
                   && (*(_DWORD *)(**(_QWORD **)(v26 + 8) + 52LL) & 1) != 0 )
            {
              WindowDpiLastNotify = 96;
            }
            else
            {
              WindowDpiLastNotify = *(unsigned __int16 *)(gpsi + 8678LL);
            }
            v27 = *v24;
            if ( WindowDpiLastNotify == *(unsigned __int16 *)(*v24 + 8678) )
            {
              v28 = *(_DWORD *)(v27 + 2000);
            }
            else if ( WindowDpiLastNotify == 96 )
            {
              v28 = *(_DWORD *)(v27 + 2388);
            }
            else
            {
              DpiDepSysMetCachePlateauSlot = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
              if ( DpiDepSysMetCachePlateauSlot == -1 )
              {
                v30 = ScaleSystemMetricForDPIWithoutCache(30, WindowDpiLastNotify);
                v24 = (__int64 *)gpsi;
                v28 = v30;
              }
              else
              {
                v43 = 112LL * DpiDepSysMetCachePlateauSlot;
                v28 = *(_DWORD *)(v43 + v27 + 3092);
                if ( v28 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
                  v24 = (__int64 *)gpsi;
                  v28 = *(_DWORD *)(v43 + gpsi + 3092);
                  if ( v28 == -1 )
                    v28 = 0;
                }
              }
            }
            v31 = *v24;
            if ( WindowDpiLastNotify == *(unsigned __int16 *)(v31 + 8678) )
            {
              v32 = *(_DWORD *)(v31 + 2004);
            }
            else if ( WindowDpiLastNotify == 96 )
            {
              v32 = *(_DWORD *)(v31 + 2392);
            }
            else
            {
              v33 = GetDpiDepSysMetCachePlateauSlot(WindowDpiLastNotify);
              if ( v33 == -1 )
              {
                v32 = ScaleSystemMetricForDPIWithoutCache(31, WindowDpiLastNotify);
              }
              else
              {
                v43 = 112LL * v33;
                v32 = *(_DWORD *)(v43 + v34 + 3096);
                if ( v32 == -1 )
                {
                  EnsureDpiDepSysMetCacheForPlateau(WindowDpiLastNotify);
                  v32 = *(_DWORD *)(v43 + gpsi + 3096);
                  if ( v32 == -1 )
                    v32 = 0;
                }
              }
            }
            WindowBordersForDpi = GetWindowBordersForDpi(
                                    *(_DWORD *)(v9 + 68),
                                    *(_DWORD *)(v9 + 64),
                                    v22,
                                    v23,
                                    WindowDpiLastNotify);
            v36 = *(_DWORD *)(v9 + 128);
            v37 = (*(_BYTE *)(v9 + 66) & 0x40) == 0;
            HIDWORD(v43) = WindowBordersForDpi + *(_DWORD *)(v9 + 132);
            LODWORD(v43) = v36 + WindowBordersForDpi;
            v44 = v28 + v36 + WindowBordersForDpi;
            v45 = v32 + HIDWORD(v43);
            if ( !v37 )
            {
              v44 = *(_DWORD *)(v9 + 136) - WindowBordersForDpi;
              LODWORD(v43) = v44 - v28;
            }
            if ( PtInRect(&v43, v42) )
            {
              *a2 = 0;
              goto LABEL_18;
            }
            if ( !*((_QWORD *)*a1 + 6) )
              goto LABEL_11;
            v16 = MNItemHitTest(*((_QWORD *)*a1 + 6), v9, v38);
LABEL_52:
            v41 = v16;
            if ( v16 == -1 )
              goto LABEL_11;
            v3 = 4294967291LL;
            goto LABEL_10;
          }
          if ( (*(_BYTE *)(v9 + 71) & 0x20) != 0 )
            goto LABEL_11;
        }
        else
        {
          v9 = *((_QWORD *)v18 + 2);
          LODWORD(v42) = v5;
          HIDWORD(v42) = v47;
          if ( !PtInRect((_DWORD *)(v9 + 128), v42) )
            goto LABEL_11;
        }
        v39 = *((_QWORD *)v18 + 5);
        v42 = __PAIR64__(v20, v21);
        v16 = MNItemHitTest(v39, v9, __PAIR64__(v20, v21));
        v40 = *a1;
        v41 = v16;
        if ( (*v40 & 1) == 0 )
          goto LABEL_9;
        if ( v16 != -1 )
        {
          v3 = 0xFFFFFFFFLL;
          goto LABEL_10;
        }
        if ( !*((_QWORD *)v40 + 6) )
          goto LABEL_11;
        v16 = MNItemHitTest(*((_QWORD *)v40 + 6), v9, v42);
        goto LABEL_52;
      }
    }
  }
LABEL_11:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a1);
  return v3;
}
