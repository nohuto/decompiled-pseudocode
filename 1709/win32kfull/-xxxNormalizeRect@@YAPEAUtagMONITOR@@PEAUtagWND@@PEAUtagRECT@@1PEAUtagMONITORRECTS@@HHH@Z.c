/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C00C9794 (xxxComputeProposedPerMonRect.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C00CA2B4 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C005EC88 (ScaleDPIRect.c)
 *     GetMonitorRectForWindow @ 0x1C005EF48 (GetMonitorRectForWindow.c)
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005F4A0 (GetMonitorWorkRectForWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00964C4 (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C00CA23C (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     IsValidMonitor @ 0x1C00CA8C4 (IsValidMonitor.c)
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01B735C (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01C444C (xxxAppAdjustDpiCandidateRect.c)
 */

struct tagMONITOR *__fastcall xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        __m128i *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  __m128i v8; // xmm0
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned __int16 v17; // di
  unsigned __int16 v18; // bx
  INT v19; // eax
  __int32 v20; // r12d
  INT v21; // eax
  __int32 v22; // r8d
  __int32 v23; // edi
  __int128 v24; // xmm0
  __m128i *v25; // rax
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  INT v34; // eax
  INT v35; // eax
  BOOL v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int128 v40; // xmm0
  __m128i v41; // xmm6
  int WindowBordersWithDpiAwareness; // eax
  int v43; // eax
  _DWORD *v44; // rdx
  int v45; // ecx
  int v46; // r10d
  int v47; // eax
  int v48; // r11d
  int v49; // ebx
  int v50; // r15d
  _DWORD *v51; // rbx
  LONG right; // ecx
  LONG v53; // edx
  int v54; // eax
  LONG left; // edx
  LONG v56; // ecx
  LONG v57; // ecx
  LONG bottom; // eax
  LONG v59; // edx
  int v60; // ecx
  LONG v61; // eax
  LONG top; // edx
  LONG v63; // ecx
  int v64; // ecx
  int v65; // r8d
  int v66; // r8d
  unsigned __int16 v67; // [rsp+38h] [rbp-D0h]
  int v68; // [rsp+38h] [rbp-D0h]
  struct tagMONITOR *NewMonitor; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v70; // [rsp+48h] [rbp-C0h] BYREF
  int v71; // [rsp+58h] [rbp-B0h]
  int v72; // [rsp+5Ch] [rbp-ACh]
  struct tagRECT *v73; // [rsp+60h] [rbp-A8h]
  int v74; // [rsp+68h] [rbp-A0h]
  __m128i v75; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v76[3]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v77[3]; // [rsp+98h] [rbp-70h] BYREF
  __m128i v78; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v79; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v80; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v81; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v82; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v83[72]; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v84[77]; // [rsp+150h] [rbp+48h] BYREF

  v8 = *a3;
  v72 = 0;
  v73 = (struct tagRECT *)a3;
  v12 = 48LL * a5;
  v70 = v8;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v12 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v12 + 8));
    v15 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v15 = *(_QWORD *)(GetDispInfo() + 88);
      NewMonitor = (struct tagMONITOR *)v15;
    }
  }
  v16 = *(unsigned __int16 *)((char *)a4 + v12 + 40);
  v67 = *(_WORD *)((char *)a4 + v12 + 40);
  v17 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL);
  if ( (*((_DWORD *)a1 + 92) & 0xF) == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 624LL) & 0x2000000) == 0 && !a6 && v17 != (_WORD)v16 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v14, v15);
      v76[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v76;
      v76[1] = a1;
      _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
      v27 = NewMonitor;
      v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30);
      v77[0] = *(_QWORD *)(v31 + 392);
      *(_QWORD *)(v31 + 392) = v77;
      v77[1] = v27;
      _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v17, &v70, &v70) )
      {
        v23 = v70.m128i_i32[3];
        v20 = v70.m128i_i32[2];
      }
      else
      {
        v34 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v17, v67);
        v20 = v70.m128i_i32[0] + v34;
        v35 = EngMulDiv(v73->bottom - v73->top, v17, v67);
        v23 = v70.m128i_i32[1] + v35;
      }
      v36 = ThreadUnlock1(v33, v32) == 0;
      if ( v36 | (ThreadUnlock1(v38, v37) == 0) )
        return 0LL;
      v15 = (__int64)NewMonitor;
      goto LABEL_13;
    }
LABEL_12:
    v20 = v70.m128i_i32[2];
    v23 = v70.m128i_i32[3];
LABEL_13:
    v22 = v70.m128i_i32[1];
    goto LABEL_14;
  }
  memset(v83, 0, sizeof(v83));
  memset(v84, 0, 0x260uLL);
  v84[5] = v83;
  PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v83, (struct tagMONITORRECTS *)((char *)a4 + v12 + 8));
  if ( (*((_DWORD *)a1 + 92) & 0xF) != 0 )
    v18 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL) + 284LL);
  else
    v18 = 96;
  v75 = *GetMonitorRectForDpi(&v78, (__int64)v84, v18);
  ScaleDPIRect(&v70, &v70, v67, v18, *(_QWORD *)((char *)a4 + v12 + 8), v75.m128i_i64[0]);
  v72 = 1;
  if ( a6 )
  {
    v15 = (__int64)NewMonitor;
    goto LABEL_12;
  }
  v19 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v17, v18);
  v20 = v70.m128i_i32[0] + v19;
  v21 = EngMulDiv(v73->bottom - v73->top, v17, v18);
  v22 = v70.m128i_i32[1];
  v15 = (__int64)NewMonitor;
  v23 = v70.m128i_i32[1] + v21;
LABEL_14:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v24 = *GetMonitorWorkRectForWindow(&v79, v15, a1);
      v25 = (__m128i *)&v81;
      v81 = v24;
    }
    else
    {
      v40 = *GetMonitorRectForWindow(&v80, v15, a1);
      v25 = (__m128i *)&v82;
      v82 = v40;
    }
    v41 = *v25;
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
    a2->left = _mm_cvtsi128_si32(v41) - WindowBordersWithDpiAwareness;
    a2->top = _mm_cvtsi128_si32(_mm_srli_si128(v41, 4)) - WindowBordersWithDpiAwareness;
    a2->right = _mm_cvtsi128_si32(_mm_srli_si128(v41, 8)) + WindowBordersWithDpiAwareness;
    a2->bottom = _mm_cvtsi128_si32(_mm_srli_si128(v41, 12)) + WindowBordersWithDpiAwareness;
  }
  else
  {
    v43 = *(_DWORD *)((char *)a4 + v12 + 8);
    v44 = *(_DWORD **)(v15 + 40);
    v71 = *(_DWORD *)((char *)a4 + v12 + 12);
    v68 = v43;
    v45 = v44[7];
    v46 = v45 - v43;
    v47 = v44[8];
    v48 = v47 - v71;
    v74 = *(_DWORD *)((char *)a4 + v12 + 16) - v68;
    v49 = *(_DWORD *)((char *)a4 + v12 + 20) - v71;
    LODWORD(v73) = v44[9] - v45;
    v50 = v44[10] - v47;
    if ( (_DWORD)v73 != v74 || v50 != v49 )
    {
      v46 += (((int)v73 - v74) * (v70.m128i_i32[0] - v68) + v74 / 2) / v74;
      v48 += ((v50 - v49) * (v22 - v71) + v49 / 2) / v49;
    }
    a2->left = v46 + v70.m128i_i32[0];
    a2->right = v46 + v20;
    a2->top = v48 + v22;
    a2->bottom = v48 + v23;
    v51 = *(_DWORD **)(v15 + 40);
    GetWindowExtendedMargin(a1, &v75);
    right = a2->right;
    v53 = v51[13];
    if ( right > v53 )
    {
      v54 = v53 + v75.m128i_u16[1] - right;
      a2->left += v54;
      a2->right = right + v54;
    }
    left = a2->left;
    v56 = v51[11];
    if ( a2->left < v56 )
    {
      v57 = v56 - v75.m128i_u16[0];
      a2->left = v57;
      a2->right += v57 - left;
    }
    bottom = a2->bottom;
    v59 = v51[14];
    if ( bottom > v59 )
    {
      v60 = v59 + v75.m128i_u16[3] - bottom;
      v61 = v59 + v75.m128i_u16[3];
      a2->top += v60;
      a2->bottom = v61;
    }
    top = a2->top;
    v63 = v51[12];
    if ( top < v63 )
    {
      a2->top = v63;
      a2->bottom += v63 - top;
    }
    if ( (*((_BYTE *)a1 + 70) & 4) != 0 )
    {
      v64 = 0;
      v65 = v51[13];
      if ( a2->right - v75.m128i_u16[1] > v65 )
      {
        v64 = 1;
        a2->right = v75.m128i_u16[1] + v65;
      }
      v66 = v51[14];
      if ( a2->bottom - v75.m128i_u16[3] > v66 )
      {
        ++v64;
        a2->bottom = v75.m128i_u16[3] + v66;
      }
      if ( v64 == 2 )
      {
        ++a2->left;
        --a2->right;
        ++a2->top;
        --a2->bottom;
      }
    }
    if ( v72 )
      PhysicalToLogicalDPIRect(a2, a2, *((unsigned int *)a1 + 92), &NewMonitor);
  }
  return NewMonitor;
}
