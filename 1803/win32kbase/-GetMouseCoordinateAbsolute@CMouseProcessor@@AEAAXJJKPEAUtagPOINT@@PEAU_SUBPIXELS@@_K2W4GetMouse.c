/*
 * XREFs of ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00391F0
 * Callers:
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00393F8 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0134FB4 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     ?VirtualizedUnionRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C00559E8 (-VirtualizedUnionRect@COutputConfig@@QEBA-AUtagRECT@@XZ.c)
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C0058030 (LogicalToPhysicalDPIPoint.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?VirtualizedPrimaryRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C0131E20 (-VirtualizedPrimaryRect@COutputConfig@@QEBA-AUtagRECT@@XZ.c)
 */

void __fastcall CMouseProcessor::GetMouseCoordinateAbsolute(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        __int64 a8,
        char a9)
{
  struct _SINGLE_LIST_ENTRY *Next; // rsi
  int v14; // r14d
  struct tagRECT *v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // xmm1_8
  int v18; // r8d
  int v19; // ecx
  unsigned int v20; // r8d
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int16 v25; // di
  char v26; // dl
  __int64 v27; // rcx
  _BYTE v29[8]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v30; // [rsp+30h] [rbp-40h]
  char v31; // [rsp+38h] [rbp-38h]
  struct tagRECT v32; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v33; // [rsp+50h] [rbp-20h] BYREF

  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v29);
  Next = gpInputConfig[4].Next;
  v14 = a4 & 2;
  if ( v14 )
    v15 = COutputConfig::VirtualizedUnionRect((COutputConfig *)Next, &v32);
  else
    v15 = COutputConfig::VirtualizedPrimaryRect((COutputConfig *)Next, &v33);
  v16 = *(_QWORD *)&v15->left;
  v17 = _mm_srli_si128(*(__m128i *)v15, 8).m128i_u64[0];
  v18 = a2 * (v17 - *(_QWORD *)&v15->left);
  v19 = HIDWORD(v17) - HIDWORD(*(_QWORD *)&v15->left);
  v32 = *(struct tagRECT *)&Next[3].Next;
  *a5 = v18;
  if ( v18 < 0 )
  {
    *a6 = -(unsigned __int16)-(__int16)v18;
    v20 = -((unsigned int)-*a5 >> 16);
  }
  else
  {
    *a6 = (unsigned __int16)v18;
    v20 = (unsigned __int16)HIWORD(*a5);
  }
  v21 = a3 * v19;
  *a5 = v20;
  a5[1] = v21;
  if ( v21 < 0 )
  {
    a6[1] = -(unsigned __int16)-(__int16)v21;
    v22 = -((unsigned int)-a5[1] >> 16);
  }
  else
  {
    a6[1] = (unsigned __int16)v21;
    v22 = (unsigned __int16)HIWORD(a5[1]);
  }
  a5[1] = v22;
  if ( v14 )
  {
    *a5 += v16;
    a5[1] = v22 + HIDWORD(v16);
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v25 = a2;
  }
  else
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    LogicalToPhysicalDPIPoint(a5, a5, CurrentThreadDpiAwarenessContext, 0LL);
    v25 = EngMulDiv(*a5 - v32.left, 0xFFFF, v32.right - v32.left);
    LOWORD(a3) = EngMulDiv(a5[1] - v32.top, 0xFFFF, v32.bottom - v32.top);
  }
  *(_QWORD *)(a1 + 92) = 0LL;
  if ( ((a9 & 1) == 0 || (a4 & 0x20) != 0) && (int)IsEditionMagnificationMousePositionSupported(v23) >= 0 )
    EditionMagnificationMousePosition(a5);
  if ( (a9 & 4) == 0 )
  {
    v26 = gptInd;
    v27 = 3LL * (unsigned int)gptInd;
    *((_DWORD *)&gaptMouse + 2 * v27) = v25 | 0xFFFF0000;
    *((_DWORD *)&gaptMouse + 2 * v27 + 1) = a3 | 0xFFFF0000;
    *((_DWORD *)&gaptMouse + 2 * v27 + 2) = a7;
    *((_QWORD *)&gaptMouse + v27 + 2) = a8;
    gptInd = (v26 + 1) & 0x3F;
  }
  if ( !v31 )
  {
    ExReleasePushLockSharedEx(v30, 0LL);
    KeLeaveCriticalRegion();
  }
}
