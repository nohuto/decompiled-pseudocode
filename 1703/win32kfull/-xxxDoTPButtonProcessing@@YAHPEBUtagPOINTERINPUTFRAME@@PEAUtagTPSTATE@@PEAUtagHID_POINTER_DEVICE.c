/*
 * XREFs of ?xxxDoTPButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@HKPEAH@Z @ 0x1C01ACC8C
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1C01AA12C (-ApplyElasticDragModeDeltas@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagTPCONTACTSTATE@@PEAUtagPO.c)
 *     ?DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z @ 0x1C01AAD10 (-DoTPButtonWarpBack@@YAXPEAUtagTPSTATE@@K@Z.c)
 *     ?FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01AAE00 (-FilterMoveForStableContact@@YAHUtagPOINT@@PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z @ 0x1C01AB79C (-IsTPRightClick@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@HPEAUtagPOINT@@@Z.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01ABB48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     ?SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z @ 0x1C01ABD3C (-SetupDragRectsForContact@@YAXPEAUtagTPCONTACTSTATE@@@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01ABF24 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B09C4 (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 *     TPAAPSetCurtainState @ 0x1C01B0FC8 (TPAAPSetCurtainState.c)
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
  LARGE_INTEGER v13; // r8
  unsigned __int128 v14; // rax
  tagPOINT v15; // r13
  LONG x; // eax
  LONG v17; // eax
  int v18; // ecx
  unsigned int v19; // r14d
  LONG v20; // eax
  unsigned __int16 *v21; // rsi
  __int64 v22; // rcx
  tagPOINT *v23; // r11
  BOOL v25; // esi
  int v26; // r10d
  _QWORD *v27; // r11
  unsigned __int128 v28; // rax
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  LONG v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // r9
  struct tagPOINT v43; // rcx
  struct tagPOINT v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  LONG v47; // eax
  unsigned int v48; // esi
  unsigned __int16 *v49; // r14
  __int64 v50; // rcx
  tagPOINT *v51; // r11
  __int64 v52; // rdx
  __int64 v53; // r8
  int v54; // r11d
  struct tagTPCONTACTSTATE *v55; // r10
  LONG v56; // eax
  unsigned int v57; // eax
  unsigned int y; // r12d
  __int64 v59; // rsi
  tagPOINT v60; // rcx
  __int64 v61; // r15
  signed int v62; // r13d
  int v63; // eax
  struct tagTPCONTACTSTATE *v64; // rdx
  int v65; // r14d
  signed int v66; // r9d
  __int64 v67; // rcx
  int v68; // r9d
  LONG v69; // eax
  LONG v70; // eax
  LONG v71; // eax
  LONG v72; // eax
  int v73; // eax
  LONG v74; // r8d
  int v75; // ecx
  int v76; // esi
  int v77; // eax
  LARGE_INTEGER *v78; // r8
  int v79; // r14d
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  tagPOINT v83; // [rsp+30h] [rbp-38h] BYREF
  struct tagTPCONTACTSTATE *v84; // [rsp+38h] [rbp-30h]
  struct tagPOINT v85; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v86; // [rsp+48h] [rbp-20h]
  tagPOINT v87; // [rsp+50h] [rbp-18h]
  int v88; // [rsp+B0h] [rbp+48h]
  tagPOINT v89; // [rsp+B0h] [rbp+48h]
  int v90; // [rsp+B8h] [rbp+50h]
  struct tagPOINTER_INFO *v91; // [rsp+B8h] [rbp+50h]
  struct tagPOINT v94; // [rsp+D8h] [rbp+70h]

  v6 = 0;
  v86 = *((_QWORD *)a1 + 7);
  v8 = *((_QWORD *)a1 + 11);
  v88 = 0;
  v10 = 0;
  v90 = 0;
  v84 = 0LL;
  v11 = *(_DWORD *)(v8 + 68) & 0x10;
  v12 = v11 != 0;
  *(LARGE_INTEGER *)&v14 = KeQueryPerformanceCounter(0LL);
  DWORD2(v14) = a2[240].x;
  v15 = (tagPOINT)v14;
  v87 = (tagPOINT)v14;
  *a6 = 0;
  if ( (BYTE8(v14) & 1) == v12 )
    goto LABEL_13;
  x = a2[208].x;
  if ( x == 3 || x == 6 )
  {
    if ( v11 )
    {
      DWORD2(v14) |= 0x40u;
LABEL_9:
      a2[240].x = DWORD2(v14);
      goto LABEL_10;
    }
  }
  else if ( v11 )
  {
    goto LABEL_10;
  }
  if ( (BYTE8(v14) & 0x40) != 0 )
  {
    v10 = 1;
    DWORD2(v14) &= ~0x40u;
    goto LABEL_9;
  }
LABEL_10:
  v88 = 1;
  a2[240].x = v12 | a2[240].x & 0xFFFFFFFE;
  if ( v11 )
  {
    TPAAPSetCurtainState(a2, 0LL);
    v14 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
    a2[224] = v15;
    a2[223] = *(tagPOINT *)((char *)&v14 + 8);
  }
  *a6 = 1;
LABEL_13:
  v17 = a2[208].x;
  if ( v17 == 3 || v17 == 6 || v10 )
    return 1LL;
  v18 = v88;
  v19 = a5;
  if ( v88 )
  {
    if ( v11 )
    {
      if ( a5 == 2 )
      {
        v20 = a2[240].x;
        if ( (v20 & 0x10000) == 0 )
        {
          a2[240].x = v20 | 0x1000;
          if ( *((_DWORD *)a1 + 10) )
          {
            v21 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
            do
            {
              v22 = (unsigned int)*v21 % a2[205].y;
              v23 = &a2[34 * v22];
              if ( (v23[33].x & 2) == 0 )
              {
                *v23 = v23[1];
                SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[34 * v22]);
              }
              v23[33].x &= ~4u;
              v21 += 108;
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
    v25 = 0;
    if ( v11 )
    {
      v25 = a5 != 2;
      v90 = v25;
    }
    v26 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v27 = (_QWORD *)(*((_QWORD *)a1 + 11) + 96LL);
      while ( 1 )
      {
        *(_QWORD *)&v14 = *v27;
        *((_QWORD *)&v14 + 1) = HIDWORD(*v27);
        v84 = (struct tagTPCONTACTSTATE *)&a2[34 * ((unsigned int)*((unsigned __int16 *)v27 - 24) % a2[205].y)];
        v13.QuadPart = (unsigned int)(gTPThresholds[9] * gTPThresholds[9]);
        *((_QWORD *)&v14 + 1) = (int)((HIDWORD(*(_QWORD *)v84) - DWORD2(v14)) * (HIDWORD(*(_QWORD *)v84) - DWORD2(v14))
                                    + (*(_QWORD *)v84 - v14) * (*(_QWORD *)v84 - v14));
        if ( *((_QWORD *)&v14 + 1) > v13.QuadPart )
          break;
        *((_QWORD *)&v14 + 1) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                              - *(_QWORD *)&a2[223];
        if ( *((_QWORD *)&v14 + 1) > (unsigned __int64)(unsigned int)gTPThresholds[8] )
          break;
        v27 += 27;
        if ( (unsigned int)++v26 >= *((_DWORD *)a1 + 10) )
          goto LABEL_36;
      }
      v25 = 1;
      v90 = 1;
LABEL_36:
      v18 = v88;
    }
    if ( !v25 )
    {
      if ( v18 && !v11 )
      {
        a2[240].x &= ~0x1000u;
        v28 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        v29 = (a2[240].x & 0x200000) == 0;
        a2[222] = *(tagPOINT *)((char *)&v28 + 8);
        if ( !v29 )
          zzzSendEndInertia((struct tagTPSTATE *)a2, SDWORD2(v28));
        if ( !ShouldSuppressClicks((const struct tagTPSTATE *)a2) && (a2[240].x & 0x20) == 0 )
        {
          a2[261] = v87;
          if ( gdwInAtomicOperation )
          {
            v30 = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          UserSessionSwitchLeaveCrit(v30, gdwInAtomicOperation, v31, v32);
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
          if ( (unsigned int)IsFirstActionAfterKey(v34, v33, v35, v36) )
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
    v88 = 1;
  }
  else
  {
    if ( !v88 )
      goto LABEL_118;
    v25 = 0;
  }
  if ( v11 )
  {
    if ( v25 )
    {
      v40 = (__int64)a2[223];
    }
    else
    {
      v14 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
          * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      v40 = *((_QWORD *)&v14 + 1);
    }
    if ( (a2[240].x & 0x200000) != 0 )
      zzzSendEndInertia((struct tagTPSTATE *)a2, SDWORD2(v14));
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[240].x |= 0x40u;
      goto LABEL_85;
    }
    v85 = 0LL;
    if ( v90 || !(unsigned int)IsTPRightClick(a1, (struct tagTPSTATE *)a2, a4, &v85) )
    {
      if ( (a2[240].x & 0x10) != 0 )
        goto LABEL_85;
      if ( (unsigned int)((__int64 (*)(void))IsFirstActionAfterKey)() )
        *((_DWORD *)&gTPTelemTimings + 10) = 5;
      else
        *((_DWORD *)&gTPTelemTimings + 11) = 5;
      if ( a5 == 1 )
      {
        v44 = v85;
        *((struct tagPOINT *)&gTPTelemState + 9) = v85;
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
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
        v44,
        gdwInAtomicOperation,
        v45,
        v46);
      QueuePTPMouseEvent(0LL, *(struct tagPOINT *)gptCursorAsync, 2, v40);
      EnterCrit(0LL, 1LL);
      a2[240].x = a2[240].x & 0xFFFFFFED | 0x10;
    }
    else
    {
      if ( (a2[240].x & 0x20) != 0 )
        goto LABEL_85;
      if ( (unsigned int)((__int64 (*)(void))IsFirstActionAfterKey)() )
        *((_DWORD *)&gTPTelemTimings + 10) = 6;
      else
        *((_DWORD *)&gTPTelemTimings + 11) = 6;
      v43 = v85;
      *((struct tagPOINT *)&gTPTelemState + 10) = v85;
      ++*((_DWORD *)&gTPTelemState + 4);
      ++*((_DWORD *)&gTPTelemState + 13);
      if ( (gTPThresholds[28] & 0x200) != 0 )
        DoTPButtonWarpBack((struct tagTPSTATE *)a2, a5);
      if ( gdwInAtomicOperation )
      {
        v43 = (struct tagPOINT)gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
        v43,
        gdwInAtomicOperation,
        v41,
        v42);
      QueuePTPMouseEvent(0LL, *(struct tagPOINT *)gptCursorAsync, 8, v40);
      EnterCrit(0LL, 1LL);
      a2[240].x |= 0x22u;
    }
    if ( !HMValidateHandleNoSecure(v86, 19) )
      return 0LL;
    goto LABEL_85;
  }
  v37 = a2[240].x;
  if ( (v37 & 0x20) != 0 && (v37 & 2) != 0 )
  {
    v38 = (unsigned int)-__CFSHR__(v37, 16);
    if ( !__CFSHR__(v37, 16) )
      goto LABEL_61;
    if ( (v37 & 4) == 0 )
      goto LABEL_62;
    if ( !__CFSHR__(v37, 16) )
    {
LABEL_61:
      if ( (v37 & 8) == 0 )
      {
LABEL_62:
        a2[261] = v87;
        if ( gdwInAtomicOperation )
        {
          v38 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
          v38,
          gdwInAtomicOperation,
          (LARGE_INTEGER)v13.QuadPart,
          1LL);
        QueuePTPMouseEvent(
          0LL,
          *(struct tagPOINT *)gptCursorAsync,
          16,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].x &= ~0x20u;
        goto LABEL_66;
      }
    }
  }
  if ( (v37 & 0x10) != 0 && (v37 & 2) == 0 )
  {
    v39 = (unsigned int)-__CFSHR__(v37, 16);
    if ( !__CFSHR__(v37, 16) )
      goto LABEL_73;
    if ( (v37 & 8) == 0 )
      goto LABEL_74;
    if ( !__CFSHR__(v37, 16) )
    {
LABEL_73:
      if ( (v37 & 4) == 0 )
      {
LABEL_74:
        a2[261] = v87;
        if ( gdwInAtomicOperation )
        {
          v39 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
          v39,
          gdwInAtomicOperation,
          (LARGE_INTEGER)v13.QuadPart,
          1LL);
        QueuePTPMouseEvent(
          0LL,
          *(struct tagPOINT *)gptCursorAsync,
          4,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].x &= ~0x10u;
LABEL_66:
        if ( !HMValidateHandleNoSecure(v86, 19) )
          return 0LL;
      }
    }
  }
LABEL_85:
  if ( v11 )
  {
    v18 = v88;
  }
  else
  {
    a2[222] = (tagPOINT)((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    if ( (gTPThresholds[28] & 8) != 0 )
      a2[240].x |= 0x4000000u;
    v18 = v88;
    if ( (unsigned int)(a2[208].x - 4) <= 1 )
      a2[208].x = 1;
  }
LABEL_118:
  if ( a5 > 2 )
  {
    if ( v11 )
      return 0LL;
    v47 = a2[240].x;
    if ( (v47 & 4) != 0 || (v47 & 8) != 0 || a2[205].x )
      return 0LL;
  }
  if ( a4 )
    return 1LL;
  if ( v18 && !v90 )
  {
    v48 = 0;
    if ( *((_DWORD *)a1 + 10) )
    {
      v49 = (unsigned __int16 *)(*((_QWORD *)a1 + 11) + 48LL);
      do
      {
        v50 = (unsigned int)*v49 % a2[205].y;
        v51 = &a2[34 * v50];
        if ( (v51[33].x & 2) == 0 )
        {
          *v51 = v51[1];
          SetupDragRectsForContact((struct tagTPCONTACTSTATE *)&a2[34 * v50]);
        }
        v51[33].x &= ~4u;
        v49 += 108;
        ++v48;
      }
      while ( v48 < *((_DWORD *)a1 + 10) );
    }
    if ( a2[208].x == 2 && !v11 )
      a2[240].x |= 0x100000u;
    *a6 = 1;
    return 1LL;
  }
  v91 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v83 = 0LL;
  v54 = 0;
  v55 = 0LL;
  if ( v11 || (v56 = a2[240].x, (v56 & 4) != 0) || (v56 & 8) != 0 || a2[205].x )
  {
    v57 = *((_DWORD *)a1 + 10);
    if ( v57 )
    {
      y = a2[205].y;
      v59 = *((_QWORD *)a1 + 11) + 68LL;
      v60 = v83;
      v61 = v57;
      v62 = 0;
      do
      {
        v63 = *(_DWORD *)v59;
        v64 = (struct tagTPCONTACTSTATE *)&a2[34 * (*(unsigned __int16 *)(v59 - 20) % y)];
        v84 = v64;
        if ( (v63 & 0x40000) == 0 && v63 )
        {
          v65 = *((_DWORD *)v64 + 66);
          if ( (v65 & 4) != 0 )
          {
            v55 = v84;
            v89.y = HIDWORD(*(_QWORD *)(v59 + 28)) - *((_DWORD *)v64 + 3);
            v89.x = *(_QWORD *)(v59 + 28) - *((_DWORD *)v64 + 2);
            v66 = abs32(v89.x) + abs32(v89.y);
            v91 = (struct tagPOINTER_INFO *)(v59 - 12);
            if ( v66 < v62 )
              v66 = v62;
            else
              v60 = v89;
            v62 = v66;
            v83 = v60;
            if ( (v65 & 0x4000) == 0 )
              v54 = 1;
          }
          else if ( (v65 & 0x2000) != 0 )
          {
            v54 = 1;
          }
        }
        v59 += 216LL;
        --v61;
      }
      while ( v61 );
      v53 = (unsigned int)v83.y;
      v52 = (unsigned int)v83.x;
      v19 = a5;
    }
    v67 = (unsigned int)a2[208].x;
    v68 = 0;
    if ( (_DWORD)v67 != 5 )
    {
      if ( v19 == 2 || (v69 = a2[240].x, (v69 & 4) != 0) || (v69 & 8) != 0 )
      {
        v70 = a2[205].x;
        if ( (!v70 || v55) && ((_DWORD)v67 != 2 || v55) )
        {
          a2[208].x = 5;
          if ( v70 && !v54 )
            *((_DWORD *)v84 + 30) = 0;
          if ( (unsigned int)IsFirstActionAfterKey(v67, v52, v53, 1LL) )
            *((_DWORD *)&gTPTelemTimings + 10) = 8;
          else
            *((_DWORD *)&gTPTelemTimings + 11) = 8;
          ++*((_DWORD *)&gTPTelemState + 2);
          ++*((_DWORD *)&gTPTelemState + 13);
        }
      }
    }
    if ( a2[208].x != 4 && v19 == 1 )
    {
      v71 = a2[240].x;
      if ( (v71 & 4) == 0 && (v71 & 8) == 0 && v55 )
      {
        a2[208].x = 4;
        *((_DWORD *)v55 + 30) = 0;
        if ( (unsigned int)IsFirstActionAfterKey(v67, v52, v53, 1LL) )
          *((_DWORD *)&gTPTelemTimings + 10) = 7;
        else
          *((_DWORD *)&gTPTelemTimings + 11) = 7;
        ++HIDWORD(gTPTelemState);
        ++*((_DWORD *)&gTPTelemState + 13);
      }
    }
    if ( v68 )
    {
      a2[240].x &= ~0x80000000;
      a2[218] = 0LL;
      a2[219] = 0LL;
    }
    if ( v19 == 1 && (v72 = a2[240].x, (v72 & 4) == 0) && (v72 & 8) == 0 || a2[205].x && !v54 )
    {
      if ( v55 )
      {
        v73 = ApplyElasticDragModeDeltas(a3, v55, v91, &v83);
        LODWORD(v53) = v83.y;
        LODWORD(v52) = v83.x;
        a2[240].x ^= (a2[240].x ^ (v73 << 14)) & 0x4000;
      }
    }
    v74 = a2[218].y + v53;
    v83.x = a2[218].x + v52;
    v83.y = v74;
    v75 = gTPThresholds[10];
    v94.x = 100 * v83.x / v75;
    v76 = v94.x - a2[219].x;
    v77 = 100 * v74;
    v78 = (LARGE_INTEGER *)v84;
    v94.y = v77 / v75;
    v79 = v77 / v75 - a2[219].y;
    a2[219] = v94;
    a2[218] = v83;
    if ( !(unsigned int)FilterMoveForStableContact((struct tagPOINT)__PAIR64__(v79, v76), (struct tagTPSTATE *)a2, v78)
      && (v76 || v79) )
    {
      a2[240].x |= 0x80000000;
      if ( gdwInAtomicOperation )
      {
        v80 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v80, gdwInAtomicOperation, v81, v82);
      QueuePTPMouseEvent(
        0LL,
        (struct tagPOINT)__PAIR64__(v79, v76),
        1,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
    }
  }
  return 1LL;
}
