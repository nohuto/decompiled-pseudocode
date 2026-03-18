/*
 * XREFs of ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01AD9CC
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01AF180 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01ABB48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01ABF24 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B09C4 (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B0CF4 (IsFirstActionAfterKey.c)
 *     TPAAPSetCurtainState @ 0x1C01B0FC8 (TPAAPSetCurtainState.c)
 */

_BOOL8 __fastcall xxxDoTPDiscreteButtonProcessing(
        const struct tagPOINTERINPUTFRAME *a1,
        LARGE_INTEGER *a2,
        int *a3,
        int *a4)
{
  int v4; // esi
  int v5; // r12d
  int v6; // r15d
  int v10; // r8d
  DWORD LowPart; // ecx
  int v12; // edi
  int v13; // edx
  int v14; // r8d
  int v15; // ebp
  DWORD v16; // eax
  unsigned int v17; // ecx
  DWORD v18; // ecx
  __int64 v19; // rdx
  DWORD v20; // eax
  unsigned int v21; // ecx
  int v22; // r14d
  DWORD v23; // eax
  DWORD v24; // eax
  LARGE_INTEGER v25; // rcx
  LARGE_INTEGER v26; // r8
  LARGE_INTEGER v27; // r9
  unsigned __int64 v28; // rdi
  LARGE_INTEGER v30; // rcx
  LARGE_INTEGER v31; // r8
  LARGE_INTEGER v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  DWORD v36; // eax
  LARGE_INTEGER v37; // rcx
  LARGE_INTEGER v38; // r8
  LARGE_INTEGER v39; // r9
  DWORD v40; // eax
  int v41; // edx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  DWORD v45; // eax
  int v46; // eax
  LARGE_INTEGER v47; // rcx
  LARGE_INTEGER v48; // r8
  LARGE_INTEGER v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  DWORD v53; // eax
  int v54; // edx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  DWORD v58; // eax
  int v59; // eax
  unsigned __int64 v60; // [rsp+30h] [rbp-48h]
  int v61; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  v60 = *((_QWORD *)a1 + 7);
  v6 = 0;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 11) + 68LL);
  LowPart = a2[240].LowPart;
  v12 = v10 & 0x20;
  v13 = v12 != 0;
  v14 = v10 & 0x40;
  v61 = v14;
  v15 = v14 != 0;
  if ( (unsigned __int8)(LowPart & 4) >> 2 == v13 )
    goto LABEL_11;
  v16 = a2[208].LowPart;
  if ( v16 == 3 || v16 == 6 )
  {
    if ( v12 )
    {
      v17 = LowPart | 0x80;
      goto LABEL_7;
    }
  }
  else if ( v12 )
  {
    goto LABEL_8;
  }
  if ( (LowPart & 0x80u) != 0 )
  {
    v5 = 1;
    v17 = LowPart & 0xFFFFFF7F;
LABEL_7:
    a2[240].LowPart = v17;
  }
LABEL_8:
  v4 = 1;
  a2[240].LowPart = a2[240].LowPart & 0xFFFFFFFB | (4 * v13);
  if ( v12 )
  {
    TPAAPSetCurtainState(a2, 0LL);
    v14 = v61;
  }
  *a3 = 1;
LABEL_11:
  v18 = a2[240].LowPart;
  LODWORD(v19) = 256;
  if ( (unsigned __int8)(v18 & 8) >> 3 == v15 )
  {
    v22 = 0;
    goto LABEL_26;
  }
  v20 = a2[208].LowPart;
  if ( v20 == 3 || v20 == 6 )
  {
    if ( v14 )
    {
      v21 = v18 | 0x100;
LABEL_21:
      a2[240].LowPart = v21;
      goto LABEL_22;
    }
  }
  else if ( v14 )
  {
    goto LABEL_22;
  }
  if ( (v18 & 0x100) != 0 )
  {
    v6 = 1;
    v21 = v18 & 0xFFFFFEFF;
    goto LABEL_21;
  }
LABEL_22:
  a2[240].LowPart = a2[240].LowPart & 0xFFFFFFF7 | (8 * v15);
  v22 = 1;
  if ( v14 )
    TPAAPSetCurtainState(a2, 0LL);
  *a4 = 1;
LABEL_26:
  v23 = a2[208].LowPart;
  if ( v23 != 3 && v23 != 6 && !v5 && !v6 )
  {
    if ( !v4 )
      goto LABEL_59;
    if ( !v12 )
    {
      v24 = a2[240].LowPart;
      if ( !__CFSHR__(v24, 16) )
        goto LABEL_47;
      if ( (v24 & 0x20) != 0 && ((v24 & 1) == 0 || (v24 & 0x1000) != 0 || (v24 & 2) == 0) )
      {
        a2[261] = KeQueryPerformanceCounter(0LL);
        if ( gdwInAtomicOperation )
        {
          v25.QuadPart = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
          (LARGE_INTEGER)v25.QuadPart,
          gdwInAtomicOperation,
          (LARGE_INTEGER)v26.QuadPart,
          (LARGE_INTEGER)v27.QuadPart);
        QueuePTPMouseEvent(
          0LL,
          *(struct tagPOINT *)gptCursorAsync,
          16,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].LowPart &= ~0x20u;
        goto LABEL_41;
      }
      if ( !__CFSHR__(a2[240].LowPart, 16) )
      {
LABEL_47:
        if ( (v24 & 0x10) != 0 && ((v24 & 1) == 0 || (v24 & 0x1000) != 0 || (v24 & 2) != 0) )
        {
          a2[261] = KeQueryPerformanceCounter(0LL);
          if ( gdwInAtomicOperation )
          {
            v30.QuadPart = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
            (LARGE_INTEGER)v30.QuadPart,
            gdwInAtomicOperation,
            (LARGE_INTEGER)v31.QuadPart,
            (LARGE_INTEGER)v32.QuadPart);
          QueuePTPMouseEvent(
            0LL,
            *(struct tagPOINT *)gptCursorAsync,
            4,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          a2[240].LowPart &= ~0x10u;
          goto LABEL_41;
        }
      }
LABEL_59:
      v28 = v60;
      goto LABEL_60;
    }
    if ( a2[205].LowPart && (a2[240].LowPart & 0x8000) == 0 )
      a2[205].LowPart = 0;
    if ( (a2[240].LowPart & 0x200000) != 0 )
      zzzSendEndInertia((struct tagTPSTATE *)a2, v19);
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[240].LowPart |= 0x80u;
      goto LABEL_59;
    }
    v40 = a2[240].LowPart;
    v19 = (unsigned int)-__CFSHR__(v40, 16);
    if ( !__CFSHR__(v40, 16) )
    {
      if ( (v40 & 0x10) == 0 )
        goto LABEL_74;
      if ( !__CFSHR__(v40, 16) )
        goto LABEL_59;
    }
    if ( (v40 & 0x20) != 0 )
      goto LABEL_59;
LABEL_74:
    if ( (unsigned int)IsFirstActionAfterKey(v33, v19, v34, v35) )
    {
      v44 = (unsigned int)(v41 != 0) + 5;
      *((_DWORD *)&gTPTelemTimings + 10) = v44;
    }
    else
    {
      v44 = (unsigned int)(v41 != 0) + 5;
      *((_DWORD *)&gTPTelemTimings + 11) = v44;
    }
    ++*((_DWORD *)&gTPTelemState + 3);
    ++*((_DWORD *)&gTPTelemState + 13);
    if ( gdwInAtomicOperation )
    {
      v44 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v44, gdwInAtomicOperation, v42, v43);
    QueuePTPMouseEvent(
      0LL,
      *(struct tagPOINT *)gptCursorAsync,
      (a2[240].LowPart & 0x8000) != 0 ? 8 : 2,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(0LL, 1LL);
    v45 = a2[240].LowPart;
    if ( (v45 & 0x8000) != 0 )
      v46 = v45 | 0x20;
    else
      v46 = v45 | 0x10;
    a2[240].LowPart = v46;
LABEL_41:
    v28 = v60;
    if ( !HMValidateHandleNoSecure(v60, 19) )
      return 0LL;
LABEL_60:
    if ( !v22 )
      return 1LL;
    if ( !v61 )
    {
      v36 = a2[240].LowPart;
      if ( !__CFSHR__(v36, 16) )
        goto LABEL_91;
      if ( (v36 & 0x10) != 0 && ((v36 & 1) == 0 || (v36 & 0x1000) != 0 || (v36 & 2) != 0) )
      {
        a2[261] = KeQueryPerformanceCounter(0LL);
        if ( gdwInAtomicOperation )
        {
          v37.QuadPart = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
          (LARGE_INTEGER)v37.QuadPart,
          gdwInAtomicOperation,
          (LARGE_INTEGER)v38.QuadPart,
          (LARGE_INTEGER)v39.QuadPart);
        QueuePTPMouseEvent(
          0LL,
          *(struct tagPOINT *)gptCursorAsync,
          4,
          (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
        EnterCrit(0LL, 1LL);
        a2[240].LowPart &= ~0x10u;
        return HMValidateHandleNoSecure(v28, 19) != 0;
      }
      if ( !__CFSHR__(a2[240].LowPart, 16) )
      {
LABEL_91:
        if ( (v36 & 0x20) != 0 && ((v36 & 1) == 0 || (v36 & 0x1000) != 0 || (v36 & 2) == 0) )
        {
          a2[261] = KeQueryPerformanceCounter(0LL);
          if ( gdwInAtomicOperation )
          {
            v47.QuadPart = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
            (LARGE_INTEGER)v47.QuadPart,
            gdwInAtomicOperation,
            (LARGE_INTEGER)v48.QuadPart,
            (LARGE_INTEGER)v49.QuadPart);
          QueuePTPMouseEvent(
            0LL,
            *(struct tagPOINT *)gptCursorAsync,
            16,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          a2[240].LowPart &= ~0x20u;
          return HMValidateHandleNoSecure(v28, 19) != 0;
        }
      }
      return 1LL;
    }
    if ( a2[205].LowPart && (a2[240].LowPart & 0x8000) != 0 )
      a2[205].LowPart = 0;
    if ( (a2[240].LowPart & 0x200000) != 0 )
      zzzSendEndInertia((struct tagTPSTATE *)a2, v19);
    if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
    {
      a2[240].LowPart |= 0x100u;
      return 1LL;
    }
    v53 = a2[240].LowPart;
    if ( !__CFSHR__(v53, 16) )
    {
      if ( (v53 & 0x20) == 0 )
        goto LABEL_107;
      if ( !__CFSHR__(v53, 16) )
        return 1LL;
    }
    if ( (v53 & 0x10) != 0 )
      return 1LL;
LABEL_107:
    if ( (unsigned int)IsFirstActionAfterKey(v50, (unsigned int)-__CFSHR__(v53, 16), v51, v52) )
    {
      v57 = 6 - (unsigned int)(v54 != 0);
      *((_DWORD *)&gTPTelemTimings + 10) = v57;
    }
    else
    {
      v57 = 6 - (unsigned int)(v54 != 0);
      *((_DWORD *)&gTPTelemTimings + 11) = v57;
    }
    ++*((_DWORD *)&gTPTelemState + 3);
    ++*((_DWORD *)&gTPTelemState + 13);
    if ( gdwInAtomicOperation )
    {
      v57 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v57, gdwInAtomicOperation, v55, v56);
    QueuePTPMouseEvent(
      0LL,
      *(struct tagPOINT *)gptCursorAsync,
      (a2[240].LowPart & 0x8000) != 0 ? 2 : 8,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
    EnterCrit(0LL, 1LL);
    v58 = a2[240].LowPart;
    if ( (v58 & 0x8000) != 0 )
      v59 = v58 | 0x10;
    else
      v59 = v58 | 0x20;
    a2[240].LowPart = v59;
    return HMValidateHandleNoSecure(v28, 19) != 0;
  }
  return 1LL;
}
