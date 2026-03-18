/*
 * XREFs of ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D54AC
 * Callers:
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C01D3978 (-OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01D4344 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 */

__int64 __fastcall xxxWindowHitTestFromTargetingProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        int a5,
        struct tagRECT *a6)
{
  __int64 v9; // r12
  int v10; // esi
  __int64 ThreadWin32Thread; // rax
  __int128 *v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  BOOL v17; // eax
  __int64 v18; // rbx
  LONG v19; // r15d
  __int64 v20; // r8
  _DWORD *v21; // rbx
  __int64 v22; // rax
  struct tagWND *v23; // r15
  int v24; // eax
  unsigned __int16 v25; // r11
  unsigned __int16 left; // cx
  int v27; // ebx
  struct tagPOINT v29; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v30; // [rsp+58h] [rbp-A8h] BYREF
  struct tagPOINT v31; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v32; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT *v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  __int64 v39; // [rsp+ACh] [rbp-54h]
  __int64 v40; // [rsp+B4h] [rbp-4Ch]
  int v41; // [rsp+BCh] [rbp-44h]
  _QWORD v42[4]; // [rsp+C0h] [rbp-40h] BYREF
  struct tagRECT v43; // [rsp+E0h] [rbp-20h] BYREF
  int v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+F4h] [rbp-Ch]
  __int128 v46; // [rsp+FCh] [rbp-4h]
  __int128 v47; // [rsp+10Ch] [rbp+Ch]
  int v48; // [rsp+11Ch] [rbp+1Ch]

  v29 = (struct tagPOINT)a2;
  v33 = a6;
  v9 = 0LL;
  v10 = 1;
  *a4 = 1;
  if ( a5 == 1 && (*(_QWORD *)(a1 + 16) == gptiCurrent || *(_QWORD *)(a1 + 328) == gptiCurrent) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
    v42[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v42;
    v42[1] = a1;
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    EtwTraceTouchTargetingPointerTargetStart();
    v12 = *(__int128 **)(a3 + 40);
    v44 = *(unsigned __int16 *)(a3 + 8);
    v45 = *((_QWORD *)v12 + 4);
    v46 = v12[1];
    v47 = *v12;
    v48 = *((_DWORD *)v12 + 10);
    _InterlockedAdd(&glSendMessage, 1u);
    v13 = xxxSendTransformableMessageTimeout((__int64 *)a1, 589LL, 0LL, (struct _LARGE_STRING *)&v44, 0, 0, 0LL, 1u, 0);
    EtwTraceTouchTargetingPointerTargetStop();
    ThreadUnlock1(v15, v14);
    v16 = v13 >> 20;
    LOWORD(v16) = (v13 >> 20) & 0xFFF;
    *(_QWORD *)&v32.left = v16;
    if ( (unsigned __int16)v16 <= 0xFFDu )
    {
      if ( (unsigned int)((v13 >> 20) & 0xFFF) >= *(_DWORD *)(a3 + 64) && *(_QWORD *)(a3 + 56) )
      {
        if ( (*(_DWORD *)(a3 + 176) & 1) == 0 )
          return v9;
        v30.x = v29.x + *(_DWORD *)(a3 + 48);
        v30.y = v29.y + *(_DWORD *)(a3 + 52);
        v17 = PtInRect((_DWORD *)(a1 + 128), *(_QWORD *)&v30);
      }
      else
      {
        v17 = 1;
      }
      if ( v17 )
      {
        v18 = (v13 >> 10) & 0x3FF;
        v30.x = (v13 >> 10) & 0x3FF;
        if ( v30.x > 0x1FFu )
        {
          LODWORD(v18) = v18 - 1024;
          v30.x = v18;
        }
        v19 = v13 & 0x3FF;
        v30.y = v19;
        if ( v19 > 511 )
        {
          v19 -= 1024;
          v30.y = v19;
        }
        if ( (unsigned int)OffsetInContact(v29, *(const struct tagTOUCHTARGETINGCONTACT **)(a3 + 40), v30) )
        {
          v29.x += v18;
          v29.y += v19;
          if ( *(_DWORD *)(a3 + 84) )
          {
            v20 = *(unsigned int *)(a1 + 368);
            v31 = v29;
            LogicalToPhysicalDPIPoint(&v31, &v29, v20, 0LL);
            v21 = (_DWORD *)(a3 + 32);
            v34 = *(_DWORD *)a3;
            v35 = *(_QWORD *)(a3 + 8);
            v36 = *(_QWORD *)(a3 + 16);
            v38 = *(_DWORD *)(a3 + 36);
            v39 = 0LL;
            v40 = 0LL;
            v41 = 0;
            v37 = a3 + 32;
            v22 = (__int64)xxxDCEWindowHitTest2Internal((struct tagWND *)a1, v31, (unsigned __int64)&v34);
          }
          else
          {
            v21 = (_DWORD *)(a3 + 32);
            v22 = xxxWindowHitTest2((struct tagWND *)a1, *(_QWORD *)&v29, (int *)(a3 + 32), *(_DWORD *)(a3 + 36));
          }
          v9 = v22;
          if ( v22 )
          {
            v23 = (struct tagWND *)ValidateHwnd(v22);
            if ( v23 )
            {
              v24 = IsCompositionInputWindow((struct tagWND *)a1);
              if ( !v24 )
                *v21 = 1;
              left = v25;
              if ( !v24 )
                left = v32.left;
              v27 = left;
              v43 = *v33;
              TransformRectBetweenCoordinateSpaces(&v43, v33, v23, a1);
              v32 = v43;
              _TTUpdateBestTarget((struct tagPNTRWINDOWHITTTESTARGS *)a3, v23, v27, &v30, 0LL, 1, &v32, 1);
              if ( !(_WORD)v27 || !*(_QWORD *)(a1 + 112) )
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
