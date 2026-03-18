/*
 * XREFs of ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1C01D0008
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOINT@@3K@Z @ 0x1C01CFB94 (-_TTCheckNCTarget@@YAHUtagRECT@@PEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAU1@PEAGPEAUtagPOIN.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01CFC6C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C01D043C (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 */

void __fastcall xxxPointerInsideNCTargeting(
        struct tagWND *a1,
        struct tagPNTRWINDOWHITTTESTARGS *a2,
        struct tagRECT *a3,
        unsigned int a4)
{
  LONG v4; // r13d
  LONG v6; // r15d
  LONG v8; // r12d
  LONG v10; // eax
  LONG v11; // ecx
  unsigned int v12; // r14d
  unsigned int v13; // r9d
  __int64 v14; // r9
  int v15; // esi
  int v16; // r10d
  int v17; // edx
  __int64 v18; // r8
  struct tagRECT v19; // xmm7
  int v20; // r14d
  struct tagRECT v21; // xmm6
  int v22; // ecx
  int v23; // ecx
  struct tagRECT *v24; // r13
  int v25; // ecx
  struct tagPOINT *v26; // rdx
  int v27; // esi
  int v28; // eax
  unsigned __int16 v29; // [rsp+48h] [rbp-79h] BYREF
  struct tagPOINT v30; // [rsp+50h] [rbp-71h] BYREF
  struct tagRECT v31; // [rsp+58h] [rbp-69h]
  struct tagRECT *v32; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v33; // [rsp+78h] [rbp-49h] BYREF
  struct tagRECT v34; // [rsp+88h] [rbp-39h] BYREF
  __int64 v35; // [rsp+98h] [rbp-29h]
  struct tagRECT v36; // [rsp+A8h] [rbp-19h] BYREF

  v4 = *((_DWORD *)a1 + 39);
  v6 = *((_DWORD *)a1 + 36);
  v29 = 4095;
  v32 = a3;
  v8 = *((_DWORD *)a1 + 38);
  v30 = 0LL;
  v31 = (struct tagRECT)0LL;
  *(_QWORD *)&v36.left = 0LL;
  *(_QWORD *)&v36.right = 0LL;
  v10 = *((_DWORD *)a1 + 32);
  v11 = *((_DWORD *)a1 + 35);
  v33.left = v10;
  v34.right = *((_DWORD *)a1 + 34);
  v33.top = v4;
  v33.right = v6;
  v33.bottom = v11;
  v34.left = v8;
  v12 = 120;
  v34.top = v4;
  v34.bottom = v11;
  if ( (_WORD)a4 == 3 )
  {
    v13 = HIWORD(a4);
    if ( (unsigned __int16)v13 >= 0x78u )
      v12 = v13;
  }
  v14 = *((_QWORD *)a2 + 5);
  v15 = 0x7FFFFFFF;
  v16 = 0x7FFFFFFF;
  v35 = 1000LL * v12 / *(int *)(v14 + 184);
  if ( (unsigned __int64)(v35 + 0x80000000LL) <= 0xFFFFFFFF )
    v16 = v35;
  v17 = 0x7FFFFFFF;
  v18 = 1000LL * v12 / *(int *)(v14 + 188);
  if ( (unsigned __int64)(v18 + 0x80000000LL) <= 0xFFFFFFFF )
    v17 = 1000LL * v12 / *(int *)(v14 + 188);
  if ( v16 <= v17 )
  {
    if ( (unsigned __int64)(v18 + 0x80000000LL) <= 0xFFFFFFFF )
      v15 = 1000LL * v12 / *(int *)(v14 + 188);
  }
  else if ( (unsigned __int64)(v35 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v15 = v35;
  }
  v19 = v34;
  v20 = (v12 << 16) + 3;
  _TTCheckNCTarget(&v34, a1, a2, a3, &v29, &v30, &v36, v20);
  v21 = v33;
  _TTCheckNCTarget(&v33, a1, a2, v32, &v29, &v30, &v36, v20);
  v31.left = *((_DWORD *)a1 + 38);
  *(_QWORD *)&v31.top = *(_QWORD *)((char *)a1 + 132);
  v31.bottom = *((_DWORD *)a1 + 39) - 1;
  v33 = v31;
  if ( (unsigned int)_TTCheckNCTarget(&v33, a1, a2, v32, &v29, &v30, &v36, v20) )
  {
    v22 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL);
    if ( v22 + v15 >= v4 )
    {
      v36 = v19;
      v30.y = v19.top - v22 + 1;
    }
  }
  *(_QWORD *)&v31.left = *((_QWORD *)a1 + 16);
  v31.right = *((_DWORD *)a1 + 36);
  v31.bottom = *((_DWORD *)a1 + 39) - 1;
  v33 = v31;
  if ( (unsigned int)_TTCheckNCTarget(&v33, a1, a2, v32, &v29, &v30, &v36, v20) )
  {
    v23 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 36LL);
    if ( v23 + v15 >= v4 )
    {
      v36 = v21;
      v30.y = v21.top - v23 + 1;
    }
  }
  v24 = v32;
  v31.left = *((_DWORD *)a1 + 36) + 1;
  v31.top = *((_DWORD *)a1 + 39);
  v31.right = *((_DWORD *)a1 + 38) - 1;
  v31.bottom = *((_DWORD *)a1 + 35);
  v33 = v31;
  if ( (unsigned int)_TTCheckNCTarget(&v33, a1, a2, v32, &v29, &v30, &v36, v20) )
  {
    v25 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 32LL);
    if ( v25 + v15 < v8 )
    {
      if ( v25 - v15 <= v6 )
      {
        v36 = v21;
        v30.x = v6 - v25 - 1;
      }
    }
    else
    {
      v36 = v19;
      v30.x = v8 - v25 + 1;
    }
  }
  if ( v29 < 0xFFDu )
  {
    v26 = (struct tagPOINT *)*((_QWORD *)a2 + 5);
    LODWORD(v32) = 0;
    xxxSendNCHitTest(a1, v26[4], v26[4], &v30, (int *)&v32, a2);
    v27 = (int)v32;
    if ( (unsigned int)v32 <= 0x11 )
    {
      v28 = 232656;
      if ( _bittest(&v28, (unsigned int)v32) )
      {
        v33 = *v24;
        _TTUpdateBestTarget(a2, a1, v29, &v30, &v36, 0, &v33, v20);
        *((_DWORD *)a2 + 8) = v27;
      }
    }
  }
}
