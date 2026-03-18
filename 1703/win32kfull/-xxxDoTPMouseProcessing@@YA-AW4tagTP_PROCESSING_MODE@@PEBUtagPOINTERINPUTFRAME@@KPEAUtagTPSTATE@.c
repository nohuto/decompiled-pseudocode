/*
 * XREFs of ?xxxDoTPMouseProcessing@@YA?AW4tagTP_PROCESSING_MODE@@PEBUtagPOINTERINPUTFRAME@@KPEAUtagTPSTATE@@@Z @ 0x1C01AE4BC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     TraceLoggingPTPWarpBack @ 0x1C0198060 (TraceLoggingPTPWarpBack.c)
 *     ?CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AA6B0 (-CheckDoubleTap@@YAHPEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z @ 0x1C01AABFC (-CrossedTPLiftWarpBackThreshold@@YAHPEAUtagTPCONTACTSTATE@@UtagPOINT@@@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AAE00 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01ABB48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C01ABD3C (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01ABF24 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z @ 0x1C01B0108 (-xxxProcess2FingerTap@@YAHPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@HK@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B09C4 (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 *     TPAAPShouldAllowMoveNow @ 0x1C01B1018 (TPAAPShouldAllowMoveNow.c)
 *     TPAAPShouldAllowNow @ 0x1C01B116C (TPAAPShouldAllowNow.c)
 *     xxxSendMouseDownAtPoint @ 0x1C01B1910 (xxxSendMouseDownAtPoint.c)
 *     xxxSendMouseUpIfPending @ 0x1C01B19D8 (xxxSendMouseUpIfPending.c)
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
  int v18; // eax
  __int64 v19; // rdx
  bool v20; // zf
  int v21; // r14d
  int v22; // r15d
  int v24; // eax
  __int64 v25; // r14
  struct tagPOINT v26; // rbx
  __int64 v27; // rdx
  unsigned __int128 v28; // rax
  BOOL v29; // r13d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // r8d
  unsigned __int16 *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  LARGE_INTEGER *v45; // r8
  __int64 v46; // r9
  int v47; // ecx
  int v48; // ecx
  __int64 LowPart; // rcx
  int v50; // ecx
  int v51; // r14d
  int y; // ebp
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  __int64 v58; // [rsp+50h] [rbp-58h]
  __int64 v59; // [rsp+58h] [rbp-50h]
  struct tagPOINT v61; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v63; // [rsp+C8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a1;
  v5 = 0;
  v56 = 0LL;
  v58 = 0LL;
  v57 = 0LL;
  v7 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = *(_QWORD *)(v4 + 88);
  v59 = v9;
  if ( !*(_DWORD *)(v4 + 40) )
    return 1LL;
  v10 = 0;
  do
  {
    v11 = *(_DWORD *)(v9 + 68);
    if ( !v11 )
      goto LABEL_44;
    v12 = a3 + 272LL * ((unsigned int)*(unsigned __int16 *)(v9 + 48) % *(_DWORD *)(a3 + 1644));
    if ( (v11 & 0x40000) != 0 || (v13 = *(_DWORD *)(v12 + 264), (v13 & 4) == 0) || (v13 & 0x80u) != 0 && a2 != 1 )
    {
      if ( (*(_DWORD *)(a3 + 1920) & 0x20000) == 0 && *(_DWORD *)(a3 + 1664) != 2 && (v11 & 0x48000) == 0x40000 )
      {
        v18 = *(_DWORD *)(v12 + 264);
        if ( (v18 & 0x10) != 0 && (v18 & 8) == 0 && ((v18 & 0x400000) == 0 || (v18 & 4) == 0) )
        {
          v17 = v56;
          v19 = v9;
          v12 = v57;
          v7 = 1;
          v58 = v9;
          goto LABEL_46;
        }
      }
      if ( (v11 & 0x48000) == 0x40000 && (gTPThresholds[28] & 0x100) != 0 )
      {
        v63 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 88);
        if ( v63 > gliQpcFreq * (unsigned __int64)gTPThresholds[0] / 0x3E8 )
        {
          v4 = a1;
        }
        else
        {
          if ( !CrossedTPLiftWarpBackThreshold((struct tagTPCONTACTSTATE *)v12, *(struct tagPOINT *)(v12 + 8))
            && !*(_DWORD *)(a3 + 1660) )
          {
            if ( gliQpcFreq )
              TraceLoggingPTPWarpBack(14);
            zzzInternalSetCursorPos(*(_DWORD *)(v12 + 24), *(_DWORD *)(v12 + 28), 2);
          }
          v4 = a1;
LABEL_26:
          v9 = v59;
        }
      }
LABEL_44:
      v12 = v57;
      v17 = v56;
      goto LABEL_45;
    }
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
      goto LABEL_44;
    }
    LODWORD(v63) = 0;
    if ( !(unsigned int)TPAAPShouldAllowMoveNow(a3, v12, &v63) )
    {
      if ( (_DWORD)v63 )
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
    v9 = v59;
    v5 = 1;
    v17 = v59;
    v57 = v12;
    v56 = v59;
LABEL_45:
    v19 = v58;
LABEL_46:
    v9 += 216LL;
    ++v10;
    v59 = v9;
  }
  while ( v10 < *(_DWORD *)(v4 + 40) );
  v20 = v5 == 0;
  v21 = 0;
  v22 = 0;
  if ( v20 )
  {
    if ( !v7 )
      return 1LL;
LABEL_55:
    v25 = a3 + 272LL * ((unsigned int)*(unsigned __int16 *)(v19 + 48) % *(_DWORD *)(a3 + 1644));
    if ( *(_QWORD *)(a3 + 1776) <= *(_QWORD *)(v25 + 104) )
    {
      v26 = *(struct tagPOINT *)gptCursorAsync;
      if ( (unsigned int)TPAAPShouldAllowNow(10LL, 1LL, 1LL) )
      {
        if ( *(_DWORD *)(v4 + 40) != 2 )
          goto LABEL_61;
        v27 = *(_QWORD *)gTouchPadParameters;
        if ( (gTouchPadParameters[3] & 0x400) != 0 )
        {
          if ( xxxProcess2FingerTap(*(struct tagPOINTERINFONODE **)(v4 + 88), (struct tagTPSTATE *)a3, 0, 2u) )
            return 2LL;
LABEL_61:
          v27 = *(_QWORD *)gTouchPadParameters;
        }
        if ( (*(_DWORD *)(v27 + 12) & 0x200) != 0 )
        {
          v29 = CheckDoubleTap((struct tagTPSTATE *)a3, (struct tagTPCONTACTSTATE *)v25);
          if ( v29 )
          {
            v26 = *(struct tagPOINT *)(a3 + 1712);
          }
          else
          {
            *(_QWORD *)(a3 + 1712) = *(_QWORD *)gptCursorAsync;
            *(_QWORD *)(a3 + 1720) = *(_QWORD *)v25;
            v28 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
            *(_QWORD *)(a3 + 1768) = *((_QWORD *)&v28 + 1);
          }
          if ( (*(_DWORD *)(a3 + 1920) & 0x200000) != 0 )
            zzzSendEndInertia((struct tagTPSTATE *)a3, SDWORD2(v28));
          if ( ShouldSuppressClicks((const struct tagTPSTATE *)a3) )
            return 2LL;
          if ( (unsigned int)IsFirstActionAfterKey(v31, v30, v32, v33) )
            *((_DWORD *)&gTPTelemTimings + 10) = 1;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 1;
          ++*((_DWORD *)&gTPTelemState + 5);
          ++*((_DWORD *)&gTPTelemState + 13);
          *((_QWORD *)&gTPTelemState + 7) += PerformanceCounter.QuadPart - *(_QWORD *)(v25 + 56);
          v34 = *(_DWORD *)(a3 + 1640);
          *(LARGE_INTEGER *)(a3 + 2088) = PerformanceCounter;
          if ( v34 == 4 )
          {
            *(_DWORD *)(a3 + 1920) &= ~0x10u;
          }
          else if ( v34 == 16 )
          {
            *(_DWORD *)(a3 + 1920) &= ~0x20u;
          }
          xxxSendMouseUpIfPending(a3 + 1640, *(_QWORD *)(a3 + 1768));
          if ( (*(_DWORD *)(a3 + 1920) & 0x10) == 0 )
          {
            if ( v29 )
            {
              *(_QWORD *)(a3 + 1768) = 0LL;
              if ( gdwInAtomicOperation )
              {
                v35 = gdwExtraInstrumentations;
                if ( (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
              }
              UserSessionSwitchLeaveCrit(v35, gdwInAtomicOperation, v36, v37);
              QueuePTPMouseEvent(0LL, v26, 2, *(_QWORD *)(v25 + 104));
              v38 = 4;
              goto LABEL_124;
            }
            if ( (*(_DWORD *)(v25 + 264) & 4) != 0 )
            {
              if ( (gTPThresholds[28] & 0x400) != 0 && !*(_DWORD *)(a3 + 1660) )
              {
                v35 = *(_QWORD *)gptCursorAsync;
                if ( *(_DWORD *)(v25 + 24) != *(_DWORD *)gptCursorAsync
                  || *(_DWORD *)(v25 + 28) != *(_DWORD *)&gptCursorAsync[2] )
                {
                  if ( gliQpcFreq )
                    TraceLoggingPTPWarpBack(15);
                  zzzInternalSetCursorPos(*(_DWORD *)(v25 + 24), *(_DWORD *)(v25 + 28), 2);
                }
              }
              xxxSendMouseDownAtPoint(v35, *(_QWORD *)(v25 + 104), *(_QWORD *)(a3 + 1768), *(_QWORD *)(v25 + 24));
              *(_DWORD *)(v25 + 264) &= ~4u;
            }
            else
            {
              xxxSendMouseDownAtPoint(v35, *(_QWORD *)(v25 + 104), *(_QWORD *)(a3 + 1768), *(_QWORD *)gptCursorAsync);
            }
            *(_DWORD *)(a3 + 1920) |= 0x10u;
            if ( *(_DWORD *)(a1 + 40) )
            {
              v39 = (unsigned __int16 *)(*(_QWORD *)(a1 + 88) + 48LL);
              do
              {
                v40 = (unsigned int)*v39 % *(_DWORD *)(a3 + 1644);
                v41 = a3 + 272 * v40;
                if ( (*(_DWORD *)(v41 + 264) & 2) == 0 )
                {
                  *(_QWORD *)v41 = *(_QWORD *)(v41 + 8);
                  SetupDragRectsForContact((struct tagTPCONTACTSTATE *)(a3 + 272 * v40));
                }
                *(_DWORD *)(v41 + 264) &= ~4u;
                v39 += 108;
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
  v42 = (unsigned int)*(unsigned __int16 *)(v17 + 48) % *(_DWORD *)(a3 + 1644);
  v43 = *(_QWORD *)(v17 + 96);
  v44 = *(_DWORD *)(a3 + 1920);
  v45 = (LARGE_INTEGER *)(a3 + 272LL * (unsigned int)v42);
  if ( (v44 & 0x8000000) != 0 )
    *(_DWORD *)(a3 + 1920) = v44 & 0xF3FFFFFF;
  if ( *(_DWORD *)(a3 + 1664) == 2 )
  {
    v46 = 0LL;
  }
  else
  {
    v46 = 1LL;
    v47 = *(_DWORD *)(a3 + 1920) | 0x10000;
    *(_DWORD *)(a3 + 1664) = 2;
    *(_DWORD *)(a3 + 1632) = v42;
    *(_DWORD *)(a3 + 1920) = v47 & 0xFFF3FFFF;
    v45[10] = PerformanceCounter;
  }
  v48 = *(_DWORD *)(a3 + 1920);
  if ( (v48 & 0x100000) != 0 )
  {
    v46 = 1LL;
    *(_DWORD *)(a3 + 1920) = v48 & 0xFFEFFFFF;
    goto LABEL_107;
  }
  if ( (_DWORD)v46 )
  {
    *(_DWORD *)(a3 + 1920) = v48 & 0x7FFFFFFF;
    *((_QWORD *)&gTPTelemState + 8) += PerformanceCounter.QuadPart - v45[7].QuadPart;
LABEL_107:
    LowPart = v45[33].LowPart;
    if ( (LowPart & 2) == 0 )
    {
      v21 = v43 - v45[1].LowPart;
      v22 = HIDWORD(v43) - v45[1].HighPart;
    }
    *(LARGE_INTEGER *)(a3 + 1728) = v45[1];
    if ( (unsigned int)IsFirstActionAfterKey(LowPart, v42, v45, v46) )
      *((_DWORD *)&gTPTelemTimings + 10) = 10;
    else
      *((_DWORD *)&gTPTelemTimings + 11) = 10;
    ++*((_DWORD *)&gTPTelemState + 11);
  }
  else
  {
    v21 = v43 - *(_DWORD *)(a3 + 1728);
    v22 = HIDWORD(v43) - *(_DWORD *)(a3 + 1732);
  }
  v50 = gTPThresholds[10];
  v51 = 100 * v21 / v50;
  v61.x = v51;
  v61.y = 100 * v22 / v50;
  y = v61.y;
  v26 = v61;
  if ( !(_DWORD)v46 )
  {
    v51 -= *(_DWORD *)(a3 + 1736);
    y = v61.y - *(_DWORD *)(a3 + 1740);
    v26 = (struct tagPOINT)__PAIR64__(y, v51);
  }
  *(struct tagPOINT *)(a3 + 1736) = v61;
  if ( !(unsigned int)FilterMoveForStableContact(v26, (struct tagTPSTATE *)a3, v45) && (v51 || y) )
  {
    *(_DWORD *)(a3 + 1920) |= 0x80000000;
    if ( gdwInAtomicOperation )
    {
      v53 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v53, gdwInAtomicOperation, v54, v55);
    v38 = 1;
LABEL_124:
    QueuePTPMouseEvent(
      0LL,
      v26,
      v38,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(0LL, 1LL);
  }
  return 2LL;
}
