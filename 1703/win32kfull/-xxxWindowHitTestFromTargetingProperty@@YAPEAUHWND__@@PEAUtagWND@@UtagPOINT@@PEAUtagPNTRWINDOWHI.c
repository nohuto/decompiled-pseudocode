/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D0E14
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D1138 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0020B6C (GetMonitorFlagsFromWindow.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     xxxWindowHitTest2 @ 0x1C00FD4B0 (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01CF27C (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01CFC6C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

HWND __fastcall xxxWindowHitTestFromTargetingProperty(
        ULONG_PTR a1,
        struct tagPOINT a2,
        int *a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  HWND v9; // r12
  int v10; // esi
  __int128 *v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  BOOL v16; // eax
  __int64 v17; // rbx
  LONG v18; // r15d
  unsigned int MonitorFlagsFromWindow; // eax
  _DWORD *v20; // rbx
  HWND v21; // rax
  struct tagWND *v22; // r15
  BOOL v23; // eax
  unsigned __int16 left; // cx
  int v25; // ebx
  struct tagPOINT v27; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v28; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v29; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v30; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  int *v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+ACh] [rbp-54h]
  __int64 v38; // [rsp+B4h] [rbp-4Ch]
  int v39; // [rsp+BCh] [rbp-44h]
  _QWORD v40[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v41; // [rsp+E0h] [rbp-20h] BYREF
  int v42; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v43; // [rsp+F4h] [rbp-Ch]
  __int128 v44; // [rsp+FCh] [rbp-4h]
  __int128 v45; // [rsp+10Ch] [rbp+Ch]
  int v46; // [rsp+11Ch] [rbp+1Ch]

  v27 = a2;
  v31 = a6;
  v9 = 0LL;
  v10 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 328) == gptiCurrent) )
  {
    v40[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v40;
    ++*(_DWORD *)(a1 + 8);
    v40[1] = a1;
    EtwTraceTouchTargetingPointerTargetStart();
    v11 = (__int128 *)*((_QWORD *)a3 + 5);
    v42 = *((unsigned __int16 *)a3 + 4);
    v43 = *((_QWORD *)v11 + 4);
    v44 = v11[1];
    v45 = *v11;
    v46 = *((_DWORD *)v11 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (struct _LARGE_STRING *)&v42, 0, 0, 0LL, 1, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v14, v13);
    v15 = v12 >> 20;
    LOWORD(v15) = (v12 >> 20) & 0xFFF;
    *(_QWORD *)&v30.left = v15;
    if ( (unsigned __int16)v15 <= 0xFFDu )
    {
      if ( ((unsigned __int16)(v12 >> 20) & 0xFFFu) >= a3[16] && *((_QWORD *)a3 + 7) )
      {
        if ( (a3[44] & 1) == 0 )
          return v9;
        v28.x = v27.x + a3[12];
        v28.y = v27.y + a3[13];
        v16 = PtInRect((_DWORD *)(a1 + 128), *(_QWORD *)&v28);
      }
      else
      {
        v16 = 1;
      }
      if ( v16 )
      {
        v17 = (v12 >> 10) & 0x3FF;
        v28.x = (v12 >> 10) & 0x3FF;
        if ( v28.x > 0x1FFu )
        {
          LODWORD(v17) = v17 - 1024;
          v28.x = v17;
        }
        v18 = v12 & 0x3FF;
        v28.y = v18;
        if ( v18 > 511 )
        {
          v18 -= 1024;
          v28.y = v18;
        }
        if ( (unsigned int)OffsetInContact(v27, *((const struct tagTOUCHTARGETINGCONTACT **)a3 + 5), v28) )
        {
          v27.x += v17;
          v27.y += v18;
          if ( a3[21] )
          {
            v29 = v27;
            MonitorFlagsFromWindow = GetMonitorFlagsFromWindow(a1);
            LogicalToPhysicalDPIPoint(&v29, &v27, MonitorFlagsFromWindow, 0LL);
            v20 = a3 + 8;
            v32 = *a3;
            v33 = *((_QWORD *)a3 + 1);
            v34 = *((_QWORD *)a3 + 2);
            v36 = a3[9];
            v37 = 0LL;
            v38 = 0LL;
            v39 = 0;
            v35 = a3 + 8;
            v21 = xxxDCEWindowHitTest2Internal((struct tagWND *)a1, v29, (struct tagDCE_WINDOW_HIT_TEST_ARGS *)&v32);
          }
          else
          {
            v20 = a3 + 8;
            v21 = (HWND)xxxWindowHitTest2((struct tagWND *)a1, *(_QWORD *)&v27, a3 + 8, a3[9]);
          }
          v9 = v21;
          if ( v21 )
          {
            v22 = (struct tagWND *)ValidateHwnd(v21);
            if ( v22 )
            {
              v23 = IsCompositionInputWindow((struct tagWND *)a1);
              if ( !v23 )
                *v20 = 1;
              left = 0;
              if ( !v23 )
                left = v30.left;
              v25 = left;
              v41 = *v31;
              TransformRectBetweenCoordinateSpaces(&v41, v31, v22, a1);
              v30 = v41;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v22, v25, &v28, 0LL, 1, &v30, 1);
              if ( !(_WORD)v25 || !*(_QWORD *)(a1 + 112) )
                v10 = 0;
              *a4 = v10;
            }
          }
        }
      }
    }
  }
  return v9;
}
