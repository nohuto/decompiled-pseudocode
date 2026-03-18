/*
 * XREFs of TouchTargetChildTree @ 0x1C01D1850
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D214C (xxxPointerSpeedHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C0062A4C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C0196680 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01CF1D8 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAI@Z @ 0x1C01CFDC0 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        struct tagPOINT a3,
        _DWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        int *a8,
        int *a9)
{
  struct tagWND *v11; // rdi
  struct tagWND *v12; // r13
  LONG x; // ebx
  int v14; // r9d
  LONG y; // r15d
  unsigned __int64 v16; // r8
  int v17; // r14d
  int v18; // r10d
  int v19; // eax
  char v20; // r11
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // r10d
  int v26; // ecx
  char v27; // r10
  int v28; // ecx
  int v29; // r9d
  char v30; // al
  int v31; // r10d
  int v32; // r9d
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // ecx
  int v38; // ecx
  LONG v39; // r15d
  unsigned __int64 v40; // rbx
  int v41; // r8d
  int *v42; // r15
  int *v43; // r14
  unsigned __int64 v44; // r13
  struct tagWND *v45; // r12
  __int64 v46; // rax
  char v48; // [rsp+40h] [rbp-20h]
  char v49[4]; // [rsp+40h] [rbp-20h]
  int v50; // [rsp+44h] [rbp-1Ch]
  __int64 v51; // [rsp+48h] [rbp-18h]
  __int64 v52; // [rsp+48h] [rbp-18h]
  __int64 v53; // [rsp+50h] [rbp-10h]
  __int64 v54; // [rsp+50h] [rbp-10h]
  int v56; // [rsp+A0h] [rbp+40h] BYREF
  struct tagPOINT v57; // [rsp+B0h] [rbp+50h]

  v57 = a3;
  v11 = a1;
  v12 = a1;
  if ( !a1 )
    return v12;
  x = v57.x;
  v14 = v57.x - *((_DWORD *)a1 + 36);
  y = v57.y;
  v16 = HIDWORD(*(unsigned __int64 *)&a3);
  v17 = *((_DWORD *)a1 + 39) - v16;
  v18 = v16 - *((_DWORD *)a1 + 37);
  v19 = *((_DWORD *)a1 + 38) - v57.x;
  if ( v19 < 0 || v14 < 0 || v18 < 0 || v17 < 0 )
  {
    v31 = *((_DWORD *)a1 + 35) - v57.y;
    v54 = *((int *)a2 + 46);
    v20 = -1;
    v32 = v57.y - *((_DWORD *)a1 + 33);
    v33 = v54 * (*((_DWORD *)a1 + 34) - v57.x) / 1000;
    v34 = 0x7FFFFFFF;
    v35 = v57.x - *((_DWORD *)a1 + 32);
    if ( (unsigned __int64)(v33 + 0x80000000LL) <= 0xFFFFFFFF )
      v34 = v33;
    v56 = v34;
    v36 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v54 * v35 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v36 = v54 * v35 / 1000;
    a5 = v36;
    v52 = *((int *)a2 + 47);
    v37 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v52 * v32 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v37 = v52 * v32 / 1000;
    *(_DWORD *)v49 = v37;
    v38 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v52 * v31 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v38 = v52 * v31 / 1000;
    if ( v56 < 500 || a5 < 500 || *(int *)v49 < 500 || v38 < 500 )
    {
      v27 = -1;
      if ( (unsigned __int64)(v52 * (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v27 = v52 * (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000;
      v30 = v38;
      v29 = *(_DWORD *)v49;
      if ( (unsigned __int64)(v54 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v20 = v54 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000;
      v28 = 0;
      goto LABEL_40;
    }
  }
  else
  {
    v20 = -1;
    v53 = *((int *)a2 + 46);
    v21 = v53 * v19 / 1000;
    v22 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v21 + 0x80000000LL) <= 0xFFFFFFFF )
      v22 = v21;
    v56 = v22;
    v23 = v18;
    v24 = 0x7FFFFFFF;
    v25 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v53 * v14 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v24 = v53 * v14 / 1000;
    a5 = v24;
    v51 = *((int *)a2 + 47);
    if ( (unsigned __int64)(v51 * v23 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v25 = v51 * v23 / 1000;
    v50 = v25;
    v26 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v51 * v17 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v26 = v51 * v17 / 1000;
    v48 = v26;
    if ( v56 < 500 || a5 < 500 || v25 < 500 || v26 < 500 )
    {
      v27 = -1;
      if ( (unsigned __int64)(v51 * (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v27 = v51 * (*((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 5)) / 1000;
      v28 = 1;
      v29 = v50;
      v30 = v48;
      if ( (unsigned __int64)(v53 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v20 = v53 * (*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 4)) / 1000;
LABEL_40:
      TraceLoggingHitTestWindowTargeting(v28, v56, a5, v29, v30, v20, v27);
    }
  }
  v39 = a4[1] + y;
  v57.x = *a4 + x;
  v57.y = v39;
  if ( *((_QWORD *)v11 + 14) )
  {
    v40 = (unsigned __int64)v57;
    if ( PtInRect((_DWORD *)v11 + 36, *(_QWORD *)&v57) )
    {
      v42 = a8;
      if ( a8 )
        a5 = *a8;
      else
        a5 = v41;
      v43 = a9;
      if ( a9 )
        v56 = *a9;
      else
        v56 = v41;
      if ( a6 == v41 )
      {
        v45 = ClassicChildTreeSpeedHitTest(v11, (struct tagPOINT)v40);
      }
      else
      {
        v44 = *(_QWORD *)v11;
        v45 = (struct tagWND *)xxxClassicChildTreeSpeedHitTestWithDComp(
                                 (__int64)v11,
                                 2u,
                                 v41,
                                 a7,
                                 v40,
                                 *((_QWORD *)a2 + 4),
                                 (__int64)&a5,
                                 (__int64)&v56);
        v46 = HMValidateHandleNoSecure(v44, 1);
        v11 = (struct tagWND *)v46;
        if ( !v46 || *(char *)(v46 + 59) < 0 )
        {
          EtwTraceDITSpeedHitTestFailedRevalidation(v44);
          return 0LL;
        }
        v12 = a1;
      }
      if ( v45 && !(unsigned int)DoesPointSnapToTopLevelWindow(v11, v45, a2, (struct tagPOINT)v40) )
      {
        v12 = v45;
        if ( v42 )
          *v42 = a5;
        if ( v43 )
          *v43 = v56;
      }
    }
  }
  return v12;
}
