/*
 * XREFs of ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01B1800
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     TraceLoggingPTPWarpBack @ 0x1C01A3C00 (TraceLoggingPTPWarpBack.c)
 *     ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AD9E0 (-CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01ADFB0 (-CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AE1B4 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01AEF48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AF160 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AF348 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01B34E4 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3DAC (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B40E4 (IsFirstActionAfterKey.c)
 *     TPAAPShouldAllowMoveNow @ 0x1C01B4420 (TPAAPShouldAllowMoveNow.c)
 *     TPAAPShouldAllowNow @ 0x1C01B4574 (TPAAPShouldAllowNow.c)
 *     xxxSendMouseDownAtPoint @ 0x1C01B4B64 (xxxSendMouseDownAtPoint.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B4C2C (xxxSendMouseUpIfPending.c)
 */

__int64 __fastcall xxxDoTPMouseProcessing(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // r13
  int v5; // r15d
  int v7; // ebp
  LARGE_INTEGER PerformanceCounter; // r12
  __int64 v9; // r10
  unsigned int v10; // r14d
  int v11; // r8d
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rdx
  bool v19; // zf
  int v20; // r14d
  int v21; // r15d
  int v23; // eax
  int v24; // eax
  __int64 v25; // r14
  struct tagPOINT v26; // rbx
  unsigned __int128 v27; // rax
  BOOL v28; // r13d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // r8d
  unsigned __int16 *v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // r11
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // ecx
  LARGE_INTEGER *v44; // r8
  __int64 v45; // r9
  int v46; // ecx
  int v47; // ecx
  __int64 LowPart; // rcx
  int v49; // ecx
  int v50; // r14d
  int y; // ebp
  __int64 v52; // rcx
  __int64 v53; // [rsp+40h] [rbp-68h]
  __int64 v54; // [rsp+48h] [rbp-60h]
  __int64 v55; // [rsp+50h] [rbp-58h]
  __int64 v56; // [rsp+58h] [rbp-50h]
  struct tagPOINT v58; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v60; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a1;
  v5 = 0;
  v53 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *(_QWORD *)(v4 + 88);
  v56 = v9;
  if ( !*(_DWORD *)(v4 + 40) )
    return 1LL;
  v10 = 0;
  do
  {
    v11 = *(_DWORD *)(v9 + 68);
    if ( !v11 )
      goto LABEL_27;
    v12 = a3 + 272LL * ((unsigned int)*(unsigned __int16 *)(v9 + 48) % *(_DWORD *)(a3 + 1644));
    if ( (v11 & 0x40000) == 0 )
    {
      v13 = *(_DWORD *)(v12 + 264);
      if ( (v13 & 4) != 0 && ((v13 & 0x80u) == 0 || a2 == 1) )
      {
        if ( *(_DWORD *)(a3 + 1664) != 2 )
        {
          v14 = *(_DWORD *)(a3 + 1920);
          if ( (v14 & 0x80000) == 0 && (v14 & 0x40000) != 0 )
          {
            *(LARGE_INTEGER *)(a3 + 1840) = PerformanceCounter;
            *(_DWORD *)(a3 + 1920) = v14 | 0x80000;
          }
        }
        v15 = *(_DWORD *)(a3 + 1920);
        if ( (v15 & 0x8000000) == 0 && (v15 & 0x4000000) != 0 && a2 == 1 )
        {
          *(LARGE_INTEGER *)(a3 + 1856) = PerformanceCounter;
          *(_DWORD *)(a3 + 1920) = v15 | 0x8000000;
        }
        v16 = *(_DWORD *)(a3 + 1920);
        if ( (v16 & 0x40000) != 0
          && PerformanceCounter.QuadPart - *(_QWORD *)(a3 + 1840) <= (unsigned __int64)(gliQpcFreq
                                                                                      * (unsigned int)gTPThresholds[19]
                                                                                      / 1000LL)
          || (v16 & 0x4000000) != 0
          && PerformanceCounter.QuadPart - *(_QWORD *)(a3 + 1856) <= (unsigned __int64)(33LL * gliQpcFreq / 1000) )
        {
          goto LABEL_27;
        }
        LODWORD(v60) = 0;
        if ( (unsigned int)TPAAPShouldAllowMoveNow(a3, v12, &v60) )
        {
          v9 = v56;
          v5 = 1;
          v17 = v56;
          v54 = v12;
          v53 = v56;
LABEL_28:
          v18 = v55;
          goto LABEL_29;
        }
        if ( (_DWORD)v60 )
        {
          if ( (*(_DWORD *)(v12 + 264) & 2) == 0 )
          {
            *(_QWORD *)v12 = *(_QWORD *)(v12 + 8);
            SetupDragRectsForContact((struct tagTPCONTACTSTATE *)v12);
          }
          *(_DWORD *)(v12 + 264) &= ~4u;
          *(_DWORD *)(a3 + 1664) = 1;
        }
        goto LABEL_26;
      }
    }
    if ( (*(_DWORD *)(a3 + 1920) & 0x20000) != 0
      || *(_DWORD *)(a3 + 1664) == 2
      || (v11 & 0x48000) != 0x40000
      || (v23 = *(_DWORD *)(v12 + 264), (v23 & 0x10) == 0)
      || (v23 & 8) != 0
      || (v23 & 0x400000) != 0 && (v23 & 4) != 0 )
    {
      if ( (v11 & 0x48000) != 0x40000 || (gTPThresholds[28] & 0x100) == 0 )
        goto LABEL_27;
      v60 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 88);
      if ( v60 > gliQpcFreq * (unsigned __int64)gTPThresholds[0] / 0x3E8 )
      {
        v4 = a1;
        goto LABEL_27;
      }
      if ( !CrossedTPLiftWarpBackThreshold((struct tagTPCONTACTSTATE *)v12, *(struct tagPOINT *)(v12 + 8))
        && !*(_DWORD *)(a3 + 1660) )
      {
        if ( gliQpcFreq )
          TraceLoggingPTPWarpBack(14);
        zzzInternalSetCursorPos(*(_DWORD *)(v12 + 24), *(_DWORD *)(v12 + 28), 2, 0);
      }
      v4 = a1;
LABEL_26:
      v9 = v56;
LABEL_27:
      v12 = v54;
      v17 = v53;
      goto LABEL_28;
    }
    v17 = v53;
    v18 = v9;
    v12 = v54;
    v7 = 1;
    v55 = v9;
LABEL_29:
    v9 += 216LL;
    ++v10;
    v56 = v9;
  }
  while ( v10 < *(_DWORD *)(v4 + 40) );
  v19 = v5 == 0;
  v20 = 0;
  v21 = 0;
  if ( v19 )
  {
    if ( !v7 )
      return 1LL;
LABEL_55:
    v25 = a3 + 272LL * ((unsigned int)*(unsigned __int16 *)(v18 + 48) % *(_DWORD *)(a3 + 1644));
    if ( *(_QWORD *)(a3 + 1776) <= *(_QWORD *)(v25 + 104) )
    {
      v26 = *(struct tagPOINT *)gptCursorAsync;
      if ( (unsigned int)TPAAPShouldAllowNow(10LL, 1LL, 1LL, a3) )
      {
        if ( *(_DWORD *)(v4 + 40) == 2
          && (gTouchPadParameters[3] & 0x400) != 0
          && xxxProcess2FingerTap(*(struct tagPOINTERINFONODE **)(v4 + 88), (struct tagTPSTATE *)a3, 0, 2u) )
        {
          return 2LL;
        }
        if ( (gTouchPadParameters[3] & 0x200) != 0 )
        {
          v28 = CheckDoubleTap((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v25);
          if ( v28 )
          {
            v26 = *(struct tagPOINT *)(a3 + 1712);
          }
          else
          {
            *(_QWORD *)(a3 + 1712) = *(_QWORD *)gptCursorAsync;
            *(_QWORD *)(a3 + 1720) = *(_QWORD *)v25;
            v27 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
            *(_QWORD *)(a3 + 1768) = *((_QWORD *)&v27 + 1);
          }
          if ( (*(_DWORD *)(a3 + 1920) & 0x200000) != 0 )
            zzzSendEndInertia((struct tagTPSTATE *)a3, SDWORD2(v27));
          if ( ShouldSuppressClicks((const struct tagTPSTATE *)a3) )
            return 2LL;
          if ( (unsigned int)IsFirstActionAfterKey(v30, v29, v31, v32) )
            *((_DWORD *)&gTPTelemTimings + 10) = 1;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 1;
          ++*((_DWORD *)&gTPTelemState + 5);
          ++*((_DWORD *)&gTPTelemState + 13);
          *((_QWORD *)&gTPTelemState + 7) += PerformanceCounter.QuadPart - *(_QWORD *)(v25 + 56);
          v33 = PerformanceCounter.QuadPart - *(_QWORD *)(v25 + 56);
          *((_QWORD *)&gTPTelemState + 7) += v33;
          if ( v33 > *((_QWORD *)&gTPTelemState + 8) )
            *((_QWORD *)&gTPTelemState + 8) = v33;
          v34 = *((_QWORD *)&gTPTelemState + 9);
          if ( !v34 || v33 < v34 )
            *((_QWORD *)&gTPTelemState + 9) = v33;
          *(LARGE_INTEGER *)(a3 + 2088) = PerformanceCounter;
          v35 = *(_DWORD *)(a3 + 1640);
          if ( v35 == 4 )
          {
            *(_DWORD *)(a3 + 1920) &= ~0x10u;
          }
          else if ( v35 == 16 )
          {
            *(_DWORD *)(a3 + 1920) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(a3 + 1640, *(_QWORD *)(a3 + 1768));
          if ( (*(_DWORD *)(a3 + 1920) & 0x10) == 0 )
          {
            if ( v28 )
            {
              *(_QWORD *)(a3 + 1768) = 0LL;
              if ( gdwInAtomicOperation )
              {
                v36 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v36, gdwInAtomicOperation);
              QueuePTPMouseEvent(0LL, v26, 2, *(_QWORD *)(v25 + 104));
              v37 = 4;
              goto LABEL_128;
            }
            if ( (*(_DWORD *)(v25 + 264) & 4) != 0 )
            {
              if ( (gTPThresholds[28] & 0x400) != 0 && !*(_DWORD *)(a3 + 1660) )
              {
                v36 = *(_QWORD *)gptCursorAsync;
                if ( *(_DWORD *)(v25 + 24) != gptCursorAsync[0] || *(_DWORD *)(v25 + 28) != gptCursorAsync[1] )
                {
                  if ( gliQpcFreq )
                    TraceLoggingPTPWarpBack(15);
                  zzzInternalSetCursorPos(*(_DWORD *)(v25 + 24), *(_DWORD *)(v25 + 28), 2, 0);
                }
              }
              xxxSendMouseDownAtPoint(v36, *(_QWORD *)(v25 + 104), *(_QWORD *)(a3 + 1768), *(_QWORD *)(v25 + 24));
              *(_DWORD *)(v25 + 264) &= ~4u;
            }
            else
            {
              xxxSendMouseDownAtPoint(v36, *(_QWORD *)(v25 + 104), *(_QWORD *)(a3 + 1768), *(_QWORD *)gptCursorAsync);
            }
            *(_DWORD *)(a3 + 1920) |= 0x10u;
            if ( *(_DWORD *)(a1 + 40) )
            {
              v38 = (unsigned __int16 *)(*(_QWORD *)(a1 + 88) + 48LL);
              do
              {
                v39 = (unsigned int)*v38 % *(_DWORD *)(a3 + 1644);
                v40 = a3 + 272 * v39;
                if ( (*(_DWORD *)(v40 + 264) & 2) == 0 )
                {
                  *(_QWORD *)v40 = *(_QWORD *)(v40 + 8);
                  SetupDragRectsForContact((struct tagTPCONTACTSTATE *)(a3 + 272 * v39));
                }
                *(_DWORD *)(v40 + 264) &= ~4u;
                v38 += 108;
                ++v3;
              }
              while ( v3 < *(_DWORD *)(a1 + 40) );
            }
            return 2LL;
          }
        }
      }
    }
    return 1LL;
  }
  if ( v7 )
  {
    v24 = *(_DWORD *)(v12 + 264);
    if ( (v24 & 0x80u) == 0 && (v24 & 8) != 0 )
      v7 = 0;
    if ( v7 )
      goto LABEL_55;
  }
  v41 = (unsigned int)*(unsigned __int16 *)(v17 + 48) % *(_DWORD *)(a3 + 1644);
  v42 = *(_QWORD *)(v17 + 96);
  v43 = *(_DWORD *)(a3 + 1920);
  v44 = (LARGE_INTEGER *)(a3 + 272LL * (unsigned int)v41);
  if ( (v43 & 0x8000000) != 0 )
    *(_DWORD *)(a3 + 1920) = v43 & 0xF3FFFFFF;
  if ( *(_DWORD *)(a3 + 1664) == 2 )
  {
    v45 = 0LL;
  }
  else
  {
    v45 = 1LL;
    v46 = *(_DWORD *)(a3 + 1920) | 0x10000;
    *(_DWORD *)(a3 + 1664) = 2;
    *(_DWORD *)(a3 + 1632) = v41;
    *(_DWORD *)(a3 + 1920) = v46 & 0xFFF3FFFF;
    v44[10] = PerformanceCounter;
  }
  v47 = *(_DWORD *)(a3 + 1920);
  if ( (v47 & 0x100000) != 0 )
  {
    v45 = 1LL;
    *(_DWORD *)(a3 + 1920) = v47 & 0xFFEFFFFF;
    goto LABEL_111;
  }
  if ( (_DWORD)v45 )
  {
    *(_DWORD *)(a3 + 1920) = v47 & 0x7FFFFFFF;
    *((_QWORD *)&gTPTelemState + 10) += PerformanceCounter.QuadPart - v44[7].QuadPart;
LABEL_111:
    LowPart = v44[33].LowPart;
    if ( (LowPart & 2) == 0 )
    {
      v20 = v42 - v44[1].LowPart;
      v21 = HIDWORD(v42) - v44[1].HighPart;
    }
    *(LARGE_INTEGER *)(a3 + 1728) = v44[1];
    if ( (unsigned int)IsFirstActionAfterKey(LowPart, v41, v44, v45) )
      *((_DWORD *)&gTPTelemTimings + 10) = 10;
    else
      *((_DWORD *)&gTPTelemTimings + 11) = 10;
    ++*((_DWORD *)&gTPTelemState + 11);
  }
  else
  {
    v20 = v42 - *(_DWORD *)(a3 + 1728);
    v21 = HIDWORD(v42) - *(_DWORD *)(a3 + 1732);
  }
  v49 = gTPThresholds[10];
  v50 = 100 * v20 / v49;
  v58.x = v50;
  v58.y = 100 * v21 / v49;
  y = v58.y;
  v26 = v58;
  if ( !(_DWORD)v45 )
  {
    v50 -= *(_DWORD *)(a3 + 1736);
    y = v58.y - *(_DWORD *)(a3 + 1740);
    v26 = (struct tagPOINT)__PAIR64__(y, v50);
  }
  *(struct tagPOINT *)(a3 + 1736) = v58;
  if ( !(unsigned int)FilterMoveForStableContact(v26, (struct tagTPSTATE *)a3, v44) && (v50 || y) )
  {
    *(_DWORD *)(a3 + 1920) |= 0x80000000;
    if ( gdwInAtomicOperation )
    {
      v52 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v52, gdwInAtomicOperation);
    v37 = 1;
LABEL_128:
    QueuePTPMouseEvent(
      0LL,
      v26,
      v37,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(0LL, 1LL);
  }
  return 2LL;
}
