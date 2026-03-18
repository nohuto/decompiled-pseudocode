/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01D46C0
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01D426C (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01D4344 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D4AF0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 */

void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPNTRWINDOWHITTTESTARGS *a2,
        struct tagRECT *a3,
        unsigned int a4)
{
  LONG v4; // r13d
  LONG v6; // r15d
  LONG v7; // r12d
  LONG v9; // eax
  LONG v10; // ecx
  unsigned int v11; // r14d
  unsigned int v12; // r9d
  __int64 v13; // r9
  int v14; // esi
  int v15; // r10d
  __int64 v16; // rax
  int v17; // ecx
  struct tagRECT v18; // xmm7
  int v19; // r14d
  struct tagRECT v20; // xmm6
  int v21; // ecx
  int v22; // ecx
  struct tagRECT *v23; // r13
  int v24; // ecx
  struct tagPOINT *v25; // rdx
  int v26; // esi
  int v27; // eax
  unsigned __int16 v28; // [rsp+48h] [rbp-79h] BYREF
  struct tagPOINT v29; // [rsp+50h] [rbp-71h] BYREF
  struct tagRECT v30; // [rsp+58h] [rbp-69h]
  struct tagRECT *v31; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v32; // [rsp+78h] [rbp-49h] BYREF
  struct tagRECT v33; // [rsp+88h] [rbp-39h] BYREF
  __int64 v34; // [rsp+98h] [rbp-29h]
  struct tagRECT v35; // [rsp+A8h] [rbp-19h] BYREF

  v4 = *((_DWORD *)a1 + 39);
  v6 = *((_DWORD *)a1 + 36);
  v28 = 4095;
  v31 = a3;
  v7 = *((_DWORD *)a1 + 38);
  v29 = 0LL;
  v30 = (struct tagRECT)0LL;
  *(_QWORD *)&v35.left = 0LL;
  *(_QWORD *)&v35.right = 0LL;
  v9 = *((_DWORD *)a1 + 32);
  v10 = *((_DWORD *)a1 + 35);
  v32.left = v9;
  v33.right = *((_DWORD *)a1 + 34);
  v32.top = v4;
  v32.right = v6;
  v32.bottom = v10;
  v33.left = v7;
  v11 = 120;
  v33.top = v4;
  v33.bottom = v10;
  if ( (_WORD)a4 == 3 )
  {
    v12 = HIWORD(a4);
    if ( (unsigned __int16)v12 >= 0x78u )
      v11 = v12;
  }
  v13 = *((_QWORD *)a2 + 5);
  v14 = 0x7FFFFFFF;
  v15 = 0x7FFFFFFF;
  v34 = 1000LL * v11 / *(int *)(v13 + 184);
  if ( (unsigned __int64)(v34 + 0x80000000LL) <= 0xFFFFFFFF )
    v15 = v34;
  v16 = 1000LL * v11 / *(int *)(v13 + 188);
  v17 = 0x7FFFFFFF;
  if ( (unsigned __int64)(v16 + 0x80000000LL) <= 0xFFFFFFFF )
    v17 = 1000LL * v11 / *(int *)(v13 + 188);
  if ( v15 <= v17 )
  {
    if ( (unsigned __int64)(v16 + 0x80000000LL) <= 0xFFFFFFFF )
      v14 = 1000LL * v11 / *(int *)(v13 + 188);
  }
  else if ( (unsigned __int64)(v34 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v14 = v34;
  }
  v18 = v33;
  v19 = (v11 << 16) + 3;
  _TTCheckNCTarget(&v33, a1, a2, a3, &v28, &v29, &v35, v19);
  v20 = v32;
  _TTCheckNCTarget(&v32, a1, a2, v31, &v28, &v29, &v35, v19);
  v30.left = *((_DWORD *)a1 + 38);
  *(_QWORD *)&v30.top = *(_QWORD *)((char *)a1 + 132);
  v30.bottom = *((_DWORD *)a1 + 39) - 1;
  v32 = v30;
  if ( (unsigned int)_TTCheckNCTarget(&v32, a1, a2, v31, &v28, &v29, &v35, v19) )
  {
    v21 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL);
    if ( v21 + v14 >= v4 )
    {
      v35 = v18;
      v29.y = v18.top - v21 + 1;
    }
  }
  *(_QWORD *)&v30.left = *((_QWORD *)a1 + 16);
  v30.right = *((_DWORD *)a1 + 36);
  v30.bottom = *((_DWORD *)a1 + 39) - 1;
  v32 = v30;
  if ( (unsigned int)_TTCheckNCTarget(&v32, a1, a2, v31, &v28, &v29, &v35, v19) )
  {
    v22 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL);
    if ( v22 + v14 >= v4 )
    {
      v35 = v20;
      v29.y = v20.top - v22 + 1;
    }
  }
  v23 = v31;
  v30.left = *((_DWORD *)a1 + 36) + 1;
  v30.top = *((_DWORD *)a1 + 39);
  v30.right = *((_DWORD *)a1 + 38) - 1;
  v30.bottom = *((_DWORD *)a1 + 35);
  v32 = v30;
  if ( (unsigned int)_TTCheckNCTarget(&v32, a1, a2, v31, &v28, &v29, &v35, v19) )
  {
    v24 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 32LL);
    if ( v24 + v14 < v7 )
    {
      if ( v24 - v14 <= v6 )
      {
        v35 = v20;
        v29.x = v6 - v24 - 1;
      }
    }
    else
    {
      v35 = v18;
      v29.x = v7 - v24 + 1;
    }
  }
  if ( v28 < 0xFFDu )
  {
    v25 = (struct tagPOINT *)*((_QWORD *)a2 + 5);
    LODWORD(v31) = 0;
    xxxSendNCHitTest((ULONG_PTR)a1, v25[4], v25[4], &v29, (int *)&v31, a2);
    v26 = (int)v31;
    if ( (unsigned int)v31 <= 0x11 )
    {
      v27 = 232656;
      if ( _bittest(&v27, (unsigned int)v31) )
      {
        v32 = *v23;
        _TTUpdateBestTarget(a2, a1, v28, &v29, &v35, 0, &v32, v19);
        *((_DWORD *)a2 + 8) = v26;
      }
    }
  }
}
