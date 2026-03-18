/*
 * XREFs of ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01B000C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01AD458 (-ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPO.c)
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AE0C4 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AE1B4 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z @ 0x1C01AEBA4 (-IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01AEF48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AF160 (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AF348 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3DAC (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B40E4 (IsFirstActionAfterKey.c)
 *     TPAAPSetCurtainState @ 0x1C01B43D0 (TPAAPSetCurtainState.c)
 */

__int64 __fastcall xxxDoTPButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        tagPOINT *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        int a4,
        unsigned int a5,
        int *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  int v10; // r14d
  int v11; // r12d
  BOOL v12; // esi
  unsigned __int128 v13; // rax
  tagPOINT v14; // r11
  LONG x; // eax
  LONG v16; // eax
  int v17; // ecx
  unsigned int v18; // r14d
  LONG v19; // eax
  unsigned __int16 *v20; // rsi
  __int64 v21; // rcx
  tagPOINT *v22; // r11
  BOOL v24; // esi
  int v25; // r9d
  _QWORD *v26; // r10
  unsigned __int128 v27; // rax
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  LONG v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  struct tagPOINT v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  struct tagPOINT v44; // rcx
  LONG v45; // eax
  unsigned int v46; // esi
  unsigned __int16 *v47; // r14
  __int64 v48; // rcx
  tagPOINT *v49; // r11
  __int64 v50; // rdx
  __int64 v51; // r8
  int v52; // r11d
  struct tagTPCONTACTSTATE *v53; // r10
  LONG v54; // eax
  unsigned int v55; // eax
  unsigned int y; // r12d
  __int64 v57; // rsi
  tagPOINT v58; // rcx
  __int64 v59; // r15
  signed int v60; // r13d
  int v61; // eax
  struct tagTPCONTACTSTATE *v62; // rdx
  int v63; // r14d
  signed int v64; // r9d
  __int64 v65; // rcx
  int v66; // r9d
  LONG v67; // eax
  LONG v68; // eax
  LONG v69; // eax
  LONG v70; // eax
  int v71; // eax
  LONG v72; // r8d
  int v73; // ecx
  int v74; // esi
  int v75; // eax
  LARGE_INTEGER *v76; // r8
  int v77; // r14d
  __int64 v78; // rcx
  tagPOINT v79; // [rsp+30h] [rbp-38h] BYREF
  struct tagTPCONTACTSTATE *v80; // [rsp+38h] [rbp-30h]
  struct tagPOINT v81; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v82; // [rsp+48h] [rbp-20h]
  tagPOINT v83; // [rsp+50h] [rbp-18h]
  int v84; // [rsp+B0h] [rbp+48h]
  tagPOINT v85; // [rsp+B0h] [rbp+48h]
  int v86; // [rsp+B8h] [rbp+50h]
  struct tagPOINTER_INFO *v87; // [rsp+B8h] [rbp+50h]
  struct tagPOINT v90; // [rsp+D8h] [rbp+70h]

  v6 = 0;
  v82 = *((_QWORD *)a1 + 7);
  v8 = *((_QWORD *)a1 + 11);
  v84 = 0;
  v10 = 0;
  v86 = 0;
  v80 = 0LL;
  v11 = *(_DWORD *)(v8 + 68) & 0x10;
  v12 = v11 != 0;
  *(LARGE_INTEGER *)&v13 = KeQueryPerformanceCounter(0LL);
  DWORD2(v13) = a2[240].x;
  v83 = (tagPOINT)v13;
  v14 = (tagPOINT)v13;
  *a6 = 0;
  if ( (BYTE8(v13) & 1) == v12 )
    goto LABEL_13;
  x = a2[208].x;
  if ( x == 3 || x == 6 )
  {
    if ( v11 )
    {
      DWORD2(v13) |= 0x40u;
LABEL_9:
      a2[240].x = DWORD2(v13);
      goto LABEL_10;
    }
  }
  else if ( v11 )
  {
    goto LABEL_10;
  }
  if ( (BYTE8(v13) & 0x40) != 0 )
  {
    v10 = 1;
    DWORD2(v13) &= ~0x40u;
    goto LABEL_9;
  }
LABEL_10:
  v84 = 1;
  a2[240].x = v12 | a2[240].x & 0xFFFFFFFE;
  if ( v11 )
  {
    TPAAPSetCurtainState(a2, 0LL);
    v14 = v83;
    v13 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    a2[224] = v83;
    a2[223] = *(tagPOINT *)((char *)&v13 + 8);
  }
  *a6 = 1;
LABEL_13:
  v16 = a2[208].x;
  if ( v16 == 3 || v16 == 6 || v10 )
    return 1LL;
  v17 = v84;
  v18 = a5;
  if ( v84 )
  {
    if ( v11 )
    {
      if ( a5 == 2 )
      {
        v19 = a2[240].x;
        if ( (v19 & 0x10000) == 0 )
        {
          a2[240].x = v19 | 0x1000;
          if ( *((_DWORD *)a1 + 10) )
          {
            v20 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
            do
            {
              v21 = (unsigned int)*v20 % a2[205].y;
              v22 = &a2[34 * v21];
              if ( (v22[33].x & 2) == 0 )
              {
                *v22 = v22[1];
                SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[34 * v21]);
              }
              v22[33].x &= ~4u;
              v20 += 108;
              ++v6;
            }
            while ( v6 < *((_DWORD *)a1 + 10) );
          }
          return 1LL;
        }
      }
    }
  }
  if ( (a2[240].x & 0x1000) != 0 )
  {
    v24 = 0;
    if ( v11 )
    {
      v24 = a5 != 2;
      v86 = v24;
    }
    v25 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v26 = (_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
      while ( 1 )
      {
        *(_QWORD *)&v13 = *v26;
        *((_QWORD *)&v13 + 1) = HIDWORD(*v26);
        v80 = (struct tagTPCONTACTSTATE *)&a2[34 * ((unsigned int)*((unsigned __int16 *)v26 - 24) % a2[205].y)];
        *((_QWORD *)&v13 + 1) = (int)((HIDWORD(*(_QWORD *)v80) - DWORD2(v13)) * (HIDWORD(*(_QWORD *)v80) - DWORD2(v13))
                                    + (*(_QWORD *)v80 - v13) * (*(_QWORD *)v80 - v13));
        if ( *((_QWORD *)&v13 + 1) > (unsigned __int64)(unsigned int)(gTPThresholds[9] * gTPThresholds[9]) )
          break;
        *((_QWORD *)&v13 + 1) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - *(_QWORD *)&a2[223];
        if ( *((_QWORD *)&v13 + 1) > (unsigned __int64)(unsigned int)gTPThresholds[8] )
          break;
        v26 += 27;
        if ( (unsigned int)++v25 >= *((_DWORD *)a1 + 10) )
        {
          v17 = v84;
          goto LABEL_35;
        }
      }
      v17 = v84;
      v24 = 1;
      v86 = 1;
    }
LABEL_35:
    if ( !v24 )
    {
      if ( v17 && !v11 )
      {
        a2[240].x &= ~0x1000u;
        v27 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v28 = (a2[240].x & 0x200000) == 0;
        a2[222] = *(tagPOINT *)((char *)&v27 + 8);
        if ( !v28 )
          zzzSendEndInertia((struct tagTPSTATE *)a2, SDWORD2(v27));
        if ( !ShouldSuppressClicks((const struct tagTPSTATE *)a2) && (a2[240].x & 0x20) == 0 )
        {
          a2[261] = v83;
          if ( gdwInAtomicOperation )
          {
            v29 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v29, gdwInAtomicOperation);
          QueuePTPMouseEvent(
            0LL,
            *(struct tagPOINT *)gptCursorAsync,
            8,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          QueuePTPMouseEvent(
            0LL,
            *(struct tagPOINT *)gptCursorAsync,
            16,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          if ( (unsigned int)IsFirstActionAfterKey(v31, v30, v32, v33) )
            *((_DWORD *)&gTPTelemTimings + 10) = 2;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 2;
          ++*((_DWORD *)&gTPTelemState + 6);
          ++*((_DWORD *)&gTPTelemState + 13);
        }
        return 1LL;
      }
      return 1LL;
    }
    a2[240].x &= ~0x1000u;
    v84 = 1;
  }
  else
  {
    if ( !v84 )
      goto LABEL_114;
    v24 = 0;
  }
  if ( !v11 )
  {
    v34 = a2[240].x;
    v35 = 0x8000LL;
    if ( (v34 & 0x20) == 0 || (v34 & 2) == 0 )
      goto LABEL_59;
    if ( (v34 & 0x8000) != 0 )
    {
      if ( (v34 & 4) != 0 )
        goto LABEL_59;
    }
    else if ( (v34 & 8) != 0 )
    {
LABEL_59:
      if ( (v34 & 0x10) == 0 || (v34 & 2) != 0 )
        goto LABEL_63;
      if ( (v34 & 0x8000) != 0 )
      {
        if ( (v34 & 8) != 0 )
          goto LABEL_63;
      }
      else if ( (v34 & 4) != 0 )
      {
        goto LABEL_63;
      }
      a2[261] = v14;
      if ( gdwInAtomicOperation )
      {
        v35 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v35, gdwInAtomicOperation);
      QueuePTPMouseEvent(
        0LL,
        *(struct tagPOINT *)gptCursorAsync,
        4,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
      a2[240].x &= ~0x10u;
      goto LABEL_73;
    }
    a2[261] = v14;
    if ( gdwInAtomicOperation )
    {
      v35 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v35, gdwInAtomicOperation);
    QueuePTPMouseEvent(
      0LL,
      *(struct tagPOINT *)gptCursorAsync,
      16,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(0LL, 1LL);
    a2[240].x &= ~0x20u;
LABEL_73:
    LOBYTE(v36) = 19;
    if ( !HMValidateHandleNoSecure(v82, v36, v37, v38) )
      return 0LL;
    goto LABEL_63;
  }
  if ( v24 )
  {
    v39 = (__int64)a2[223];
  }
  else
  {
    v13 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    v39 = *((_QWORD *)&v13 + 1);
  }
  if ( (a2[240].x & 0x200000) != 0 )
    zzzSendEndInertia((struct tagTPSTATE *)a2, SDWORD2(v13));
  if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
  {
    a2[240].x |= 0x40u;
    goto LABEL_63;
  }
  v81 = 0LL;
  if ( v86 || !(unsigned int)IsTPRightClick(a1, (struct tagTPSTATE *)a2, a4, &v81) )
  {
    if ( (a2[240].x & 0x10) != 0 )
      goto LABEL_63;
    if ( (unsigned int)((__int64 (*)(void))IsFirstActionAfterKey)() )
      *((_DWORD *)&gTPTelemTimings + 10) = 5;
    else
      *((_DWORD *)&gTPTelemTimings + 11) = 5;
    if ( a5 == 1 )
    {
      v44 = v81;
      *((struct tagPOINT *)&gTPTelemState + 11) = v81;
    }
    ++*((_DWORD *)&gTPTelemState + 3);
    ++*((_DWORD *)&gTPTelemState + 13);
    if ( (gTPThresholds[28] & 0x200) != 0 )
      DoTPButtonWarpBack((struct tagTPSTATE *)a2, a5);
    if ( gdwInAtomicOperation )
    {
      v44 = (struct tagPOINT)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(v44, gdwInAtomicOperation);
    QueuePTPMouseEvent(0LL, *(struct tagPOINT *)gptCursorAsync, 2, v39);
    EnterCrit(0LL, 1LL);
    a2[240].x = a2[240].x & 0xFFFFFFED | 0x10;
  }
  else
  {
    if ( (a2[240].x & 0x20) != 0 )
      goto LABEL_63;
    if ( (unsigned int)((__int64 (*)(void))IsFirstActionAfterKey)() )
      *((_DWORD *)&gTPTelemTimings + 10) = 6;
    else
      *((_DWORD *)&gTPTelemTimings + 11) = 6;
    v40 = v81;
    *((struct tagPOINT *)&gTPTelemState + 12) = v81;
    ++*((_DWORD *)&gTPTelemState + 4);
    ++*((_DWORD *)&gTPTelemState + 13);
    if ( (gTPThresholds[28] & 0x200) != 0 )
      DoTPButtonWarpBack((struct tagTPSTATE *)a2, a5);
    if ( gdwInAtomicOperation )
    {
      v40 = (struct tagPOINT)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(v40, gdwInAtomicOperation);
    QueuePTPMouseEvent(0LL, *(struct tagPOINT *)gptCursorAsync, 8, v39);
    EnterCrit(0LL, 1LL);
    a2[240].x |= 0x22u;
  }
  LOBYTE(v41) = 19;
  if ( !HMValidateHandleNoSecure(v82, v41, v42, v43) )
    return 0LL;
LABEL_63:
  if ( v11 )
  {
    v17 = v84;
  }
  else
  {
    a2[222] = (tagPOINT)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    if ( (gTPThresholds[28] & 8) != 0 )
      a2[240].x |= 0x4000000u;
    v17 = v84;
    if ( (unsigned int)(a2[208].x - 4) <= 1 )
      a2[208].x = 1;
  }
LABEL_114:
  if ( a5 > 2 )
  {
    if ( v11 )
      return 0LL;
    v45 = a2[240].x;
    if ( (v45 & 4) != 0 || (v45 & 8) != 0 || a2[205].x )
      return 0LL;
  }
  if ( a4 )
    return 1LL;
  if ( v17 && !v86 )
  {
    v46 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v47 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
      do
      {
        v48 = (unsigned int)*v47 % a2[205].y;
        v49 = &a2[34 * v48];
        if ( (v49[33].x & 2) == 0 )
        {
          *v49 = v49[1];
          SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[34 * v48]);
        }
        v49[33].x &= ~4u;
        v47 += 108;
        ++v46;
      }
      while ( v46 < *((_DWORD *)a1 + 10) );
    }
    if ( a2[208].x == 2 && !v11 )
      a2[240].x |= 0x100000u;
    *a6 = 1;
    return 1LL;
  }
  v87 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v79 = 0LL;
  v52 = 0;
  v53 = 0LL;
  if ( v11 || (v54 = a2[240].x, (v54 & 4) != 0) || (v54 & 8) != 0 || a2[205].x )
  {
    v55 = *((_DWORD *)a1 + 10);
    if ( v55 )
    {
      y = a2[205].y;
      v57 = *((_QWORD *)a1 + 11) + 56LL;
      v58 = v79;
      v59 = v55;
      v60 = 0;
      do
      {
        v61 = *(_DWORD *)(v57 + 12);
        v62 = (struct tagTPCONTACTSTATE *)&a2[34 * (*(unsigned __int16 *)(v57 - 8) % y)];
        v80 = v62;
        if ( (v61 & 0x40000) == 0 && v61 )
        {
          v63 = *((_DWORD *)v62 + 66);
          if ( (v63 & 4) != 0 )
          {
            v53 = v80;
            v85.y = HIDWORD(*(_QWORD *)(v57 + 40)) - *((_DWORD *)v62 + 3);
            v85.x = *(_QWORD *)(v57 + 40) - *((_DWORD *)v62 + 2);
            v87 = (struct tagPOINTER_INFO *)v57;
            v64 = abs32(v85.x) + abs32(v85.y);
            if ( v64 < v60 )
              v64 = v60;
            else
              v58 = v85;
            v60 = v64;
            v79 = v58;
            if ( (v63 & 0x4000) == 0 )
              v52 = 1;
          }
          else if ( (v63 & 0x2000) != 0 )
          {
            v52 = 1;
          }
        }
        v57 += 216LL;
        --v59;
      }
      while ( v59 );
      v51 = (unsigned int)v79.y;
      v50 = (unsigned int)v79.x;
      v18 = a5;
    }
    v65 = (unsigned int)a2[208].x;
    v66 = 0;
    if ( (_DWORD)v65 != 5 )
    {
      if ( v18 == 2 || (v67 = a2[240].x, (v67 & 4) != 0) || (v67 & 8) != 0 )
      {
        v68 = a2[205].x;
        if ( (!v68 || v53) && ((_DWORD)v65 != 2 || v53) )
        {
          a2[208].x = 5;
          if ( v68 && !v52 )
            *((_DWORD *)v80 + 30) = 0;
          if ( (unsigned int)IsFirstActionAfterKey(v65, v50, v51, 1LL) )
            *((_DWORD *)&gTPTelemTimings + 10) = 8;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 8;
          ++*((_DWORD *)&gTPTelemState + 2);
          ++*((_DWORD *)&gTPTelemState + 13);
        }
      }
    }
    if ( a2[208].x != 4 && v18 == 1 )
    {
      v69 = a2[240].x;
      if ( (v69 & 4) == 0 && (v69 & 8) == 0 && v53 )
      {
        a2[208].x = 4;
        *((_DWORD *)v53 + 30) = 0;
        if ( (unsigned int)IsFirstActionAfterKey(v65, v50, v51, 1LL) )
          *((_DWORD *)&gTPTelemTimings + 10) = 7;
        else
          *((_DWORD *)&gTPTelemTimings + 11) = 7;
        ++HIDWORD(gTPTelemState);
        ++*((_DWORD *)&gTPTelemState + 13);
      }
    }
    if ( v66 )
    {
      a2[240].x &= ~0x80000000;
      a2[218] = 0LL;
      a2[219] = 0LL;
    }
    if ( v18 == 1 && (v70 = a2[240].x, (v70 & 4) == 0) && (v70 & 8) == 0 || a2[205].x && !v52 )
    {
      if ( v53 )
      {
        v71 = ApplyElasticDragModeDeltas(a3, v53, v87, &v79);
        LODWORD(v51) = v79.y;
        LODWORD(v50) = v79.x;
        a2[240].x ^= (a2[240].x ^ (v71 << 14)) & 0x4000;
      }
    }
    v72 = a2[218].y + v51;
    v79.x = a2[218].x + v50;
    v79.y = v72;
    v73 = gTPThresholds[10];
    v90.x = 100 * v79.x / v73;
    v74 = v90.x - a2[219].x;
    v75 = 100 * v72;
    v76 = (LARGE_INTEGER *)v80;
    v90.y = v75 / v73;
    v77 = v75 / v73 - a2[219].y;
    a2[219] = v90;
    a2[218] = v79;
    if ( !(unsigned int)FilterMoveForStableContact((struct tagPOINT)__PAIR64__(v77, v74), (struct tagTPSTATE *)a2, v76)
      && (v74 || v77) )
    {
      a2[240].x |= 0x80000000;
      if ( gdwInAtomicOperation )
      {
        v78 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v78, gdwInAtomicOperation);
      QueuePTPMouseEvent(
        0LL,
        (struct tagPOINT)__PAIR64__(v77, v74),
        1,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
    }
  }
  return 1LL;
}
