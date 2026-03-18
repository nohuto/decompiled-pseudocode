/*
 * XREFs of ?xxxDoTPDiscreteButtonProcessing@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagTPSTATE@@PEAH2@Z @ 0x1C01B0D34
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z @ 0x1C01AEF48 (-QueuePTPMouseEvent@@YAXPEAXUtagPOINT@@K_K@Z.c)
 *     ?ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z @ 0x1C01AF348 (-ShouldSuppressClicks@@YAHPEBUtagTPSTATE@@@Z.c)
 *     ?zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z @ 0x1C01B3DAC (-zzzSendEndInertia@@YAXPEAUtagTPSTATE@@H@Z.c)
 *     IsFirstActionAfterKey @ 0x1C01B40E4 (IsFirstActionAfterKey.c)
 *     TPAAPSetCurtainState @ 0x1C01B43D0 (TPAAPSetCurtainState.c)
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
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  LARGE_INTEGER v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  DWORD v35; // eax
  LARGE_INTEGER v36; // rcx
  DWORD v37; // eax
  int v38; // edx
  __int64 v39; // rcx
  DWORD v40; // eax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  LARGE_INTEGER v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  DWORD v49; // eax
  int v50; // edx
  __int64 v51; // rcx
  DWORD v52; // eax
  int v53; // eax
  unsigned __int64 v54; // [rsp+30h] [rbp-48h]
  int v55; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = 0;
  v54 = *((_QWORD *)a1 + 7);
  v6 = 0;
  v10 = *(_DWORD *)(*((_QWORD *)a1 + 11) + 68LL);
  LowPart = a2[240].LowPart;
  v12 = v10 & 0x20;
  v13 = v12 != 0;
  v14 = v10 & 0x40;
  v55 = v14;
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
    v14 = v55;
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
      goto LABEL_58;
    if ( v12 )
    {
      if ( a2[205].LowPart && (a2[240].LowPart & 0x8000) == 0 )
        a2[205].LowPart = 0;
      if ( (a2[240].LowPart & 0x200000) != 0 )
        zzzSendEndInertia((struct tagTPSTATE *)a2, v19);
      if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
      {
        a2[240].LowPart |= 0x80u;
        goto LABEL_58;
      }
      v37 = a2[240].LowPart;
      v19 = (unsigned int)-__CFSHR__(v37, 16);
      if ( __CFSHR__(v37, 16) )
      {
        if ( (v37 & 0x20) != 0 )
          goto LABEL_58;
      }
      else if ( (v37 & 0x10) != 0 )
      {
        goto LABEL_58;
      }
      if ( (unsigned int)IsFirstActionAfterKey(v32, v19, v33, v34) )
      {
        v39 = (unsigned int)(v38 != 0) + 5;
        *((_DWORD *)&gTPTelemTimings + 10) = v39;
      }
      else
      {
        v39 = (unsigned int)(v38 != 0) + 5;
        *((_DWORD *)&gTPTelemTimings + 11) = v39;
      }
      ++*((_DWORD *)&gTPTelemState + 3);
      ++*((_DWORD *)&gTPTelemState + 13);
      if ( gdwInAtomicOperation )
      {
        v39 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v39, gdwInAtomicOperation);
      QueuePTPMouseEvent(
        0LL,
        *(struct tagPOINT *)gptCursorAsync,
        (a2[240].LowPart & 0x8000) != 0 ? 8 : 2,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
      v40 = a2[240].LowPart;
      if ( (v40 & 0x8000) != 0 )
        v41 = v40 | 0x20;
      else
        v41 = v40 | 0x10;
      a2[240].LowPart = v41;
    }
    else
    {
      v24 = a2[240].LowPart;
      if ( (v24 & 0x8000) != 0 )
      {
        if ( (v24 & 0x20) != 0 && ((v24 & 1) == 0 || (v24 & 0x1000) != 0 || (v24 & 2) == 0) )
        {
          a2[261] = KeQueryPerformanceCounter(0LL);
          if ( gdwInAtomicOperation )
          {
            v25.QuadPart = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
            (LARGE_INTEGER)v25.QuadPart,
            gdwInAtomicOperation);
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
LABEL_58:
        v29 = v54;
        goto LABEL_59;
      }
      if ( (v24 & 0x10) == 0 || (v24 & 1) != 0 && (v24 & 0x1000) == 0 && (v24 & 2) == 0 )
        goto LABEL_58;
      a2[261] = KeQueryPerformanceCounter(0LL);
      if ( gdwInAtomicOperation )
      {
        v31.QuadPart = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
        (LARGE_INTEGER)v31.QuadPart,
        gdwInAtomicOperation);
      QueuePTPMouseEvent(
        0LL,
        *(struct tagPOINT *)gptCursorAsync,
        4,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
      a2[240].LowPart &= ~0x10u;
    }
LABEL_41:
    v29 = v54;
    LOBYTE(v26) = 19;
    if ( !HMValidateHandleNoSecure(v54, v26, v27, v28) )
      return 0LL;
LABEL_59:
    if ( !v22 )
      return 1LL;
    if ( v55 )
    {
      if ( a2[205].LowPart && (a2[240].LowPart & 0x8000) != 0 )
        a2[205].LowPart = 0;
      if ( (a2[240].LowPart & 0x200000) != 0 )
        zzzSendEndInertia((struct tagTPSTATE *)a2, v19);
      if ( ShouldSuppressClicks((const struct tagTPSTATE *)a2) )
      {
        a2[240].LowPart |= 0x100u;
        return 1LL;
      }
      v49 = a2[240].LowPart;
      if ( __CFSHR__(v49, 16) )
      {
        if ( (v49 & 0x10) != 0 )
          return 1LL;
      }
      else if ( (v49 & 0x20) != 0 )
      {
        return 1LL;
      }
      if ( (unsigned int)IsFirstActionAfterKey(v46, (unsigned int)-__CFSHR__(a2[240].LowPart, 16), v47, v48) )
      {
        v51 = 6 - (unsigned int)(v50 != 0);
        *((_DWORD *)&gTPTelemTimings + 10) = v51;
      }
      else
      {
        v51 = 6 - (unsigned int)(v50 != 0);
        *((_DWORD *)&gTPTelemTimings + 11) = v51;
      }
      ++*((_DWORD *)&gTPTelemState + 3);
      ++*((_DWORD *)&gTPTelemState + 13);
      if ( gdwInAtomicOperation )
      {
        v51 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v51, gdwInAtomicOperation);
      QueuePTPMouseEvent(
        0LL,
        *(struct tagPOINT *)gptCursorAsync,
        (a2[240].LowPart & 0x8000) != 0 ? 2 : 8,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
      v52 = a2[240].LowPart;
      if ( (v52 & 0x8000) != 0 )
        v53 = v52 | 0x10;
      else
        v53 = v52 | 0x20;
      a2[240].LowPart = v53;
    }
    else
    {
      v35 = a2[240].LowPart;
      if ( (v35 & 0x8000) != 0 )
      {
        if ( (v35 & 0x10) != 0 && ((v35 & 1) == 0 || (v35 & 0x1000) != 0 || (v35 & 2) != 0) )
        {
          a2[261] = KeQueryPerformanceCounter(0LL);
          if ( gdwInAtomicOperation )
          {
            v36.QuadPart = gdwExtraInstrumentations;
            if ( (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
          }
          ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
            (LARGE_INTEGER)v36.QuadPart,
            gdwInAtomicOperation);
          QueuePTPMouseEvent(
            0LL,
            *(struct tagPOINT *)gptCursorAsync,
            4,
            (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
          EnterCrit(0LL, 1LL);
          a2[240].LowPart &= ~0x10u;
          goto LABEL_84;
        }
        return 1LL;
      }
      if ( (v35 & 0x20) == 0 || (v35 & 1) != 0 && (v35 & 0x1000) == 0 && (v35 & 2) != 0 )
        return 1LL;
      a2[261] = KeQueryPerformanceCounter(0LL);
      if ( gdwInAtomicOperation )
      {
        v45.QuadPart = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      ((void (__fastcall *)(_QWORD, _QWORD))UserSessionSwitchLeaveCrit)(
        (LARGE_INTEGER)v45.QuadPart,
        gdwInAtomicOperation);
      QueuePTPMouseEvent(
        0LL,
        *(struct tagPOINT *)gptCursorAsync,
        16,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64);
      EnterCrit(0LL, 1LL);
      a2[240].LowPart &= ~0x20u;
    }
LABEL_84:
    LOBYTE(v42) = 19;
    return HMValidateHandleNoSecure(v29, v42, v43, v44) != 0;
  }
  return 1LL;
}
