/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01C0FF8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     LogicalQmsgCursorPos @ 0x1C004D238 (LogicalQmsgCursorPos.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@@YA?AUtagPOINT@@K@Z @ 0x1C004D288 (-LogicalCursorPosFromDpiAwarenessContext@@YA-AUtagPOINT@@K@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzInternalSetCursorPos @ 0x1C00BBC30 (zzzInternalSetCursorPos.c)
 *     PhkFirstGlobalValid @ 0x1C00CC1D8 (PhkFirstGlobalValid.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER v3; // r15
  LARGE_INTEGER v4; // r12
  LARGE_INTEGER *v5; // rsi
  __int64 GlobalValid; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v26; // edi
  unsigned int v27; // r14d
  char CurrentThreadDpiAwarenessContext; // al
  struct tagPOINT v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h]
  __int64 v34; // [rsp+80h] [rbp-80h]
  _QWORD v35[29]; // [rsp+88h] [rbp-78h] BYREF
  int v36; // [rsp+188h] [rbp+88h] BYREF
  DWORD v37; // [rsp+190h] [rbp+90h] BYREF

  v3.QuadPart = 0LL;
  v36 = 0;
  v4.QuadPart = 0LL;
  v5 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  while ( 1 )
  {
    HIDWORD(v33) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1, a3);
    v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v35;
    v35[1] = GlobalValid;
    if ( GlobalValid )
      ++*(_DWORD *)(GlobalValid + 8);
    v10 = xxxCallHook2(GlobalValid, 1u, 0LL, (int *)&v32, &v36);
    if ( v10 == -1 )
      break;
    memset(&v35[3], 0, 0xA0uLL);
    v9 = (unsigned int)v32;
    v8 = 128LL;
    v12 = 0LL;
    v13 = *(_OWORD *)&v35[5];
    *(_OWORD *)a1 = *(_OWORD *)&v35[3];
    v14 = *(_OWORD *)&v35[7];
    *(_OWORD *)(a1 + 16) = v13;
    v15 = *(_OWORD *)&v35[9];
    *(_OWORD *)(a1 + 32) = v14;
    v16 = *(_OWORD *)&v35[11];
    *(_OWORD *)(a1 + 48) = v15;
    v17 = *(_OWORD *)&v35[13];
    *(_OWORD *)(a1 + 64) = v16;
    v18 = *(_OWORD *)&v35[15];
    *(_OWORD *)(a1 + 80) = v17;
    v19 = *(_OWORD *)&v35[17];
    *(_OWORD *)(a1 + 96) = v18;
    v20 = *(_OWORD *)&v35[19];
    *(_OWORD *)(a1 + 112) = v19;
    v21 = *(_OWORD *)&v35[21];
    *(_OWORD *)(a1 + 128) = v20;
    *(_OWORD *)(a1 + 144) = v21;
    *(_DWORD *)(a1 + 24) = v9;
    if ( v10 > 0 )
    {
      v22 = *(_DWORD *)(gptiCurrent + 440LL);
      if ( (v22 & 0x200000) == 0 )
        goto LABEL_39;
      *(_DWORD *)(gptiCurrent + 440LL) = v22 & 0xFFDFFFFF;
      v9 = (unsigned int)v32;
    }
    if ( (unsigned int)(v9 - 512) <= 0xE )
    {
      v26 = v33;
      v27 = HIDWORD(v32);
      v4.QuadPart = WORD2(v32) | ((unsigned __int16)v33 << 16);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      if ( __PAIR64__(v26, v27) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
        zzzInternalSetCursorPos(v27, v26, 1);
      goto LABEL_37;
    }
    if ( (unsigned int)(v9 - 256) <= 8 )
    {
      v11 = 0LL;
      v8 = 0x8000LL;
      if ( (((_DWORD)v9 - 257) & 0xFFFFFFFB) == 0 && (v11 = 0x8000LL, (_DWORD)v9 == 261) || (_DWORD)v9 == 260 )
        LODWORD(v11) = v11 | 0x2000;
      if ( (v33 & 0x8000) != 0 )
        LODWORD(v11) = v11 | 0x100;
      LOBYTE(v8) = *(_BYTE *)(((unsigned __int64)BYTE4(v32) >> 2) + *(_QWORD *)(gptiCurrent + 384LL) + 192);
      if ( ((unsigned __int8)v8 & (unsigned __int8)(1 << (2 * (BYTE4(v32) & 3)))) != 0 )
        LODWORD(v11) = v11 | 0x4000;
      v4.QuadPart = (((unsigned __int16)v11 | (unsigned __int8)v33) << 16) | 1;
      if ( WORD2(v32) != 231 || (_BYTE)v33 )
      {
        v8 = 255LL;
        if ( (!v36 || (*gpsi & 2) != 0) && (v32 & 2) != 0 )
          v8 = 0xFFFFLL;
        v3.QuadPart = (unsigned int)v8 & HIDWORD(v32);
      }
      else
      {
        *(_WORD *)(gptiCurrent + 762LL) = HIWORD(v32);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v9 == 35 )
    {
      if ( !HIDWORD(v32) || (v5 = (LARGE_INTEGER *)HMValidateHandleNoSecure(SHIDWORD(v32), 1)) == 0LL )
        v5 = *(LARGE_INTEGER **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
LABEL_37:
      SetHardwareInputSource(&v37, v8, v11, v12);
      v29 = LogicalQmsgCursorPos((__int64)v5, *(_QWORD *)(gptiCurrent + 384LL));
      StoreQMessage((LARGE_INTEGER *)a1, v5, v32, v3, v4, 0, 0, 0, 0LL, 0, &v37, *(_QWORD *)&v29, 0LL, 0LL);
      ThreadUnlock1(v31, v30);
      return 0LL;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
    {
      ThreadUnlock1(v9, 128LL);
      return 0xFFFFFFFFLL;
    }
    xxxCallHook(2, 0, 0LL, 1u);
    ThreadUnlock1(v24, v23);
  }
  v10 = -1;
LABEL_39:
  ThreadUnlock1(v9, v8);
  return (unsigned int)v10;
}
