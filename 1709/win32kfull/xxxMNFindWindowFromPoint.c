/*
 * XREFs of xxxMNFindWindowFromPoint @ 0x1C02070B4
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0203214 (xxxHandleMenuMessages.c)
 *     xxxMNDismissIfOffMenu @ 0x1C0206C98 (xxxMNDismissIfOffMenu.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00601F8 (safe_cast_fnid_to_PMENUWND.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetWindowBordersForDpi @ 0x1C007C2E0 (GetWindowBordersForDpi.c)
 *     _HasCaptionIcon @ 0x1C008B3E0 (_HasCaptionIcon.c)
 *     GetWindowDpiLastNotify @ 0x1C00930B4 (GetWindowDpiLastNotify.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0097364 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsMFMWFPWindow @ 0x1C0205788 (IsMFMWFPWindow.c)
 *     MNItemHitTest @ 0x1C0205964 (MNItemHitTest.c)
 */

__int64 __fastcall xxxMNFindWindowFromPoint(__int64 **a1, _DWORD *a2, int a3, __int64 a4)
{
  __int16 v4; // r12
  __int64 v5; // rsi
  __int16 v6; // bx
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // r9d
  unsigned int WindowDpiLastNotify; // r12d
  __int64 v25; // rax
  int DpiDependentMetric; // r13d
  int v27; // ebx
  __int64 v28; // r8
  __int64 v29; // r9
  int WindowBordersForDpi; // eax
  int v31; // r8d
  int v32; // ebx
  int v33; // r13d
  bool v34; // zf
  unsigned __int64 v35; // r8
  int v36; // eax
  int v38; // [rsp+30h] [rbp-40h]
  unsigned __int64 v39; // [rsp+38h] [rbp-38h]
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  unsigned __int64 v41; // [rsp+38h] [rbp-38h]
  _DWORD v42[2]; // [rsp+40h] [rbp-30h] BYREF
  int v43; // [rsp+48h] [rbp-28h]
  int v44; // [rsp+4Ch] [rbp-24h]
  _QWORD v45[3]; // [rsp+50h] [rbp-20h] BYREF

  v4 = HIWORD(a3);
  v5 = 0LL;
  *a2 = 0;
  v6 = a3;
  v38 = 0;
  if ( *(_QWORD *)(**a1 + 24) )
  {
    v9 = *(_QWORD *)(**a1 + 24);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), **a1, **a1, a4);
    v45[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v45;
    v45[1] = v9;
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v11 = xxxSendMessage(*(_QWORD *)(**a1 + 24));
    ThreadUnlock1(v13, v12);
    if ( IsMFMWFPWindow(v11) )
    {
      LOBYTE(v14) = 1;
      v18 = HMValidateHandleNoSecure(v15, v14, v16, v17);
      v11 = v18;
      if ( !v18 )
        goto LABEL_8;
      v19 = safe_cast_fnid_to_PMENUWND(v18);
      if ( !v19 )
        goto LABEL_41;
      v20 = *(_QWORD *)(v19 + 8);
      if ( !v20 || !*(_QWORD *)(v20 + 40) )
        goto LABEL_41;
    }
    if ( v11 )
      goto LABEL_39;
  }
LABEL_8:
  v21 = **a1;
  if ( (*(_DWORD *)v21 & 1) == 0 )
  {
    v11 = *(_QWORD *)(v21 + 16);
    LODWORD(v40) = v6;
    HIDWORD(v40) = v4;
    if ( !PtInRect((_DWORD *)(v11 + 128), v40) )
      goto LABEL_41;
    goto LABEL_34;
  }
  v11 = *(_QWORD *)(v21 + 8);
  if ( !v11 )
    goto LABEL_41;
  v22 = v6;
  v23 = v4;
  LODWORD(v39) = v6;
  HIDWORD(v39) = v4;
  if ( (*(_DWORD *)**a1 & 4) == 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(**a1 + 8) + 71LL) & 0x20) != 0 )
      goto LABEL_41;
LABEL_34:
    v41 = __PAIR64__(v23, v22);
    v38 = MNItemHitTest(*(_QWORD *)(**a1 + 40), v11, __PAIR64__(v23, v22));
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      v36 = v38;
      if ( v38 != -1 )
      {
        v5 = 0xFFFFFFFFLL;
        goto LABEL_40;
      }
      if ( !*(_QWORD *)(**a1 + 48) )
        goto LABEL_41;
      v36 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v11, v41);
LABEL_28:
      if ( v36 == -1 )
        goto LABEL_41;
      v5 = 4294967291LL;
LABEL_40:
      *a2 = v36;
      goto LABEL_41;
    }
LABEL_39:
    v36 = v38;
    v5 = v11;
    goto LABEL_40;
  }
  if ( !(unsigned int)HasCaptionIcon(v11) )
    goto LABEL_41;
  if ( (*(_BYTE *)(v11 + 71) & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(v11 + 304) & 0x10000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(v11);
    }
    else if ( (*(_DWORD *)(v11 + 368) & 0xF) == 0
           && (v25 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 432LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v25 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 400LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(12LL, WindowDpiLastNotify);
    v27 = GetDpiDependentMetric(13LL, WindowDpiLastNotify);
    WindowBordersForDpi = GetWindowBordersForDpi(
                            *(_DWORD *)(v11 + 68),
                            *(_DWORD *)(v11 + 64),
                            v28,
                            v29,
                            WindowDpiLastNotify);
    v31 = *(_DWORD *)(v11 + 128);
    v32 = WindowBordersForDpi + *(_DWORD *)(v11 + 132) + v27;
    v42[1] = WindowBordersForDpi + *(_DWORD *)(v11 + 132);
    v44 = v32;
    v33 = v31 + WindowBordersForDpi + DpiDependentMetric;
    v42[0] = v31 + WindowBordersForDpi;
    v34 = (*(_BYTE *)(v11 + 66) & 0x40) == 0;
    v43 = v33;
    if ( !v34 )
    {
      v43 = *(_DWORD *)(v11 + 136) - WindowBordersForDpi;
      v42[0] = v43 - (v33 - (v31 + WindowBordersForDpi));
    }
    if ( PtInRect(v42, v39) )
    {
      *a2 = 0;
      goto LABEL_14;
    }
    if ( !*(_QWORD *)(**a1 + 48) )
      goto LABEL_41;
    v36 = MNItemHitTest(*(_QWORD *)(**a1 + 48), v11, v35);
    goto LABEL_28;
  }
  if ( PtInRect((_DWORD *)(v11 + 128), v39) )
LABEL_14:
    v5 = 0xFFFFFFFFLL;
LABEL_41:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)a1);
  return v5;
}
