/*
 * XREFs of TouchTargetChildTree @ 0x1C01D5E48
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01D6750 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z @ 0x1C01A2104 (-TraceLoggingHitTestWindowTargeting@@YAXHHHHHHH@Z.c)
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D38D4 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 */

struct tagWND *__fastcall TouchTargetChildTree(
        struct tagWND *a1,
        struct tagPOINT *a2,
        struct tagPOINT a3,
        _DWORD *a4,
        int a5,
        int a6,
        unsigned __int64 a7,
        int *a8,
        int *a9,
        struct tagINPUTDEST *a10)
{
  struct tagWND *v12; // rdi
  struct tagWND *v13; // r13
  LONG x; // ebx
  int v15; // r9d
  LONG y; // r15d
  unsigned __int64 v17; // r8
  int v18; // r14d
  int v19; // r10d
  int v20; // eax
  char v21; // r11
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r10d
  int v27; // ecx
  char v28; // r10
  int v29; // ecx
  int v30; // r9d
  char v31; // al
  int v32; // r10d
  int v33; // r9d
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // ecx
  int v39; // ecx
  LONG v40; // r15d
  struct tagPOINT v41; // rbx
  int v42; // r8d
  int *v43; // r15
  int *v44; // r14
  unsigned __int64 v45; // r13
  struct tagWND *v46; // rax
  __int64 v47; // rdx
  struct tagWND *v48; // r12
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  char v53; // [rsp+50h] [rbp-20h]
  char v54[4]; // [rsp+50h] [rbp-20h]
  int v55; // [rsp+54h] [rbp-1Ch]
  __int64 v56; // [rsp+58h] [rbp-18h]
  __int64 v57; // [rsp+58h] [rbp-18h]
  __int64 v58; // [rsp+60h] [rbp-10h]
  __int64 v59; // [rsp+60h] [rbp-10h]
  int v61; // [rsp+B0h] [rbp+40h] BYREF
  struct tagPOINT v62; // [rsp+C0h] [rbp+50h]

  v62 = a3;
  v12 = a1;
  v13 = a1;
  if ( !a1 )
    return v13;
  x = v62.x;
  v15 = v62.x - *((_DWORD *)a1 + 36);
  y = v62.y;
  v17 = HIDWORD(*(unsigned __int64 *)&a3);
  v18 = *((_DWORD *)a1 + 39) - v17;
  v19 = v17 - *((_DWORD *)a1 + 37);
  v20 = *((_DWORD *)a1 + 38) - v62.x;
  if ( v20 < 0 || v15 < 0 || v19 < 0 || v18 < 0 )
  {
    v32 = *((_DWORD *)a1 + 35) - v62.y;
    v59 = a2[23].x;
    v21 = -1;
    v33 = v62.y - *((_DWORD *)a1 + 33);
    v34 = v59 * (*((_DWORD *)a1 + 34) - v62.x) / 1000;
    v35 = 0x7FFFFFFF;
    v36 = v62.x - *((_DWORD *)a1 + 32);
    if ( (unsigned __int64)(v34 + 0x80000000LL) <= 0xFFFFFFFF )
      v35 = v34;
    v61 = v35;
    v37 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v59 * v36 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v37 = v59 * v36 / 1000;
    a5 = v37;
    v57 = a2[23].y;
    v38 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v57 * v33 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v38 = v57 * v33 / 1000;
    *(_DWORD *)v54 = v38;
    v39 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v57 * v32 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v39 = v57 * v32 / 1000;
    if ( v61 < 500 || a5 < 500 || *(int *)v54 < 500 || v39 < 500 )
    {
      v28 = -1;
      if ( (unsigned __int64)(v57 * (a2[3].y - a2[2].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v28 = v57 * (a2[3].y - a2[2].y) / 1000;
      v31 = v39;
      v30 = *(_DWORD *)v54;
      if ( (unsigned __int64)(v59 * (a2[3].x - a2[2].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v21 = v59 * (a2[3].x - a2[2].x) / 1000;
      v29 = 0;
      goto LABEL_40;
    }
  }
  else
  {
    v21 = -1;
    v58 = a2[23].x;
    v22 = v58 * v20 / 1000;
    v23 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v22 + 0x80000000LL) <= 0xFFFFFFFF )
      v23 = v22;
    v61 = v23;
    v24 = v19;
    v25 = 0x7FFFFFFF;
    v26 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v58 * v15 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v25 = v58 * v15 / 1000;
    a5 = v25;
    v56 = a2[23].y;
    if ( (unsigned __int64)(v56 * v24 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v26 = v56 * v24 / 1000;
    v55 = v26;
    v27 = 0x7FFFFFFF;
    if ( (unsigned __int64)(v56 * v18 / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
      v27 = v56 * v18 / 1000;
    v53 = v27;
    if ( v61 < 500 || a5 < 500 || v26 < 500 || v27 < 500 )
    {
      v28 = -1;
      if ( (unsigned __int64)(v56 * (a2[3].y - a2[2].y) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v28 = v56 * (a2[3].y - a2[2].y) / 1000;
      v29 = 1;
      v30 = v55;
      v31 = v53;
      if ( (unsigned __int64)(v58 * (a2[3].x - a2[2].x) / 1000 + 0x80000000LL) <= 0xFFFFFFFF )
        v21 = v58 * (a2[3].x - a2[2].x) / 1000;
LABEL_40:
      TraceLoggingHitTestWindowTargeting(v29, v61, a5, v30, v31, v21, v28);
    }
  }
  v40 = a4[1] + y;
  v62.x = *a4 + x;
  v62.y = v40;
  if ( *((_QWORD *)v12 + 14) )
  {
    v41 = v62;
    if ( PtInRect((_DWORD *)v12 + 36, *(_QWORD *)&v62) )
    {
      v43 = a8;
      if ( a8 )
        a5 = *a8;
      else
        a5 = v42;
      v44 = a9;
      if ( a9 )
        v61 = *a9;
      else
        v61 = v42;
      if ( a6 == v42 )
      {
        v48 = ClassicChildTreeSpeedHitTest(v12, v41);
      }
      else
      {
        v45 = *(_QWORD *)v12;
        v46 = xxxClassicChildTreeSpeedHitTestWithDComp(
                (__int64)v12,
                2u,
                v42,
                a7,
                v41,
                a2[4],
                &a5,
                (unsigned int *)&v61,
                a10);
        LOBYTE(v47) = 1;
        v48 = v46;
        v51 = HMValidateHandleNoSecure(v45, v47, v49, v50);
        v12 = (struct tagWND *)v51;
        if ( !v51 || *(char *)(v51 + 59) < 0 )
        {
          EtwTraceDITSpeedHitTestFailedRevalidation(v45);
          return 0LL;
        }
        v13 = a1;
      }
      if ( v48 && !(unsigned int)DoesPointSnapToTopLevelWindow(v12, v48, (struct tagTOUCHTARGETINGCONTACT *)a2, v41) )
      {
        v13 = v48;
        if ( v43 )
          *v43 = a5;
        if ( v44 )
          *v44 = v61;
      }
    }
  }
  return v13;
}
