/*
 * XREFs of xxxCallJournalPlaybackHook @ 0x1C01C47FC
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     zzzInternalSetCursorPos @ 0x1C0051D98 (zzzInternalSetCursorPos.c)
 *     PhkFirstGlobalValid @ 0x1C009EB9C (PhkFirstGlobalValid.c)
 *     LogicalQmsgCursorPos @ 0x1C00A072C (LogicalQmsgCursorPos.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00A077C (LogicalCursorPosFromDpiAwarenessContext.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall xxxCallJournalPlaybackHook(__int64 a1)
{
  LARGE_INTEGER v1; // r15
  LARGE_INTEGER v2; // r12
  InputTransform *v3; // rsi
  __int64 GlobalValid; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v24; // edi
  unsigned int v25; // r14d
  __int64 v26; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  LONGLONG v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  _QWORD v34[29]; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+188h] [rbp+88h] BYREF
  DWORD v36; // [rsp+190h] [rbp+90h] BYREF

  v1.QuadPart = 0LL;
  v35 = 0;
  v2.QuadPart = 0LL;
  v3 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  while ( 1 )
  {
    HIDWORD(v32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    GlobalValid = PhkFirstGlobalValid(gptiCurrent, 1);
    v34[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v34;
    v34[1] = GlobalValid;
    if ( GlobalValid )
      _InterlockedIncrement((volatile signed __int32 *)(GlobalValid + 8));
    v8 = xxxCallHook2(GlobalValid, 1u, 0LL, (int *)&v31, &v35);
    if ( v8 == -1 )
      break;
    memset(&v34[3], 0, 0xA0uLL);
    v7 = (unsigned int)v31;
    v6 = 128LL;
    v10 = 0LL;
    v11 = *(_OWORD *)&v34[5];
    *(_OWORD *)a1 = *(_OWORD *)&v34[3];
    v12 = *(_OWORD *)&v34[7];
    *(_OWORD *)(a1 + 16) = v11;
    v13 = *(_OWORD *)&v34[9];
    *(_OWORD *)(a1 + 32) = v12;
    v14 = *(_OWORD *)&v34[11];
    *(_OWORD *)(a1 + 48) = v13;
    v15 = *(_OWORD *)&v34[13];
    *(_OWORD *)(a1 + 64) = v14;
    v16 = *(_OWORD *)&v34[15];
    *(_OWORD *)(a1 + 80) = v15;
    v17 = *(_OWORD *)&v34[17];
    *(_OWORD *)(a1 + 96) = v16;
    v18 = *(_OWORD *)&v34[19];
    *(_OWORD *)(a1 + 112) = v17;
    v19 = *(_OWORD *)&v34[21];
    *(_OWORD *)(a1 + 128) = v18;
    *(_OWORD *)(a1 + 144) = v19;
    *(_DWORD *)(a1 + 24) = v7;
    if ( v8 > 0 )
    {
      v20 = *(_DWORD *)(gptiCurrent + 464LL);
      if ( (v20 & 0x200000) == 0 )
        goto LABEL_39;
      *(_DWORD *)(gptiCurrent + 464LL) = v20 & 0xFFDFFFFF;
      v7 = (unsigned int)v31;
    }
    if ( (unsigned int)(v7 - 512) <= 0xE )
    {
      v24 = v32;
      v25 = HIDWORD(v31);
      v26 = WORD2(v31) | ((unsigned __int16)v32 << 16);
      v2.QuadPart = (int)v26;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v26, 128LL, v9, 0LL);
      if ( __PAIR64__(v24, v25) != LogicalCursorPosFromDpiAwarenessContext(CurrentThreadDpiAwarenessContext) )
        zzzInternalSetCursorPos(v25, v24, 1, 0);
      goto LABEL_37;
    }
    if ( (unsigned int)(v7 - 256) <= 8 )
    {
      v9 = 0LL;
      v6 = 0x8000LL;
      if ( (((_DWORD)v7 - 257) & 0xFFFFFFFB) == 0 && (v9 = 0x8000LL, (_DWORD)v7 == 261) || (_DWORD)v7 == 260 )
        LODWORD(v9) = v9 | 0x2000;
      if ( (v32 & 0x8000) != 0 )
        LODWORD(v9) = v9 | 0x100;
      LOBYTE(v6) = *(_BYTE *)(((unsigned __int64)BYTE4(v31) >> 2) + *(_QWORD *)(gptiCurrent + 408LL) + 224);
      if ( ((unsigned __int8)v6 & (unsigned __int8)(1 << (2 * (BYTE4(v31) & 3)))) != 0 )
        LODWORD(v9) = v9 | 0x4000;
      v2.QuadPart = (((unsigned __int16)v9 | (unsigned __int8)v32) << 16) | 1;
      if ( WORD2(v31) != 231 || (_BYTE)v32 )
      {
        v6 = 255LL;
        if ( (!v35 || (*gpsi & 2) != 0) && (v31 & 2) != 0 )
          v6 = 0xFFFFLL;
        v1.QuadPart = HIDWORD(v31) & (unsigned int)v6;
      }
      else
      {
        *(_WORD *)(gptiCurrent + 850LL) = HIWORD(v31);
      }
      goto LABEL_37;
    }
    if ( (_DWORD)v7 == 35 )
    {
      if ( !HIDWORD(v31)
        || (LOBYTE(v6) = 1, (v3 = (InputTransform *)HMValidateHandleNoSecure(SHIDWORD(v31), v6, v9, 0LL)) == 0LL) )
      {
        v3 = *(InputTransform **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
      }
LABEL_37:
      SetHardwareInputSource(&v36, v6, v9, v10);
      v28 = LogicalQmsgCursorPos((__int64)v3, *(_QWORD *)(gptiCurrent + 408LL));
      StoreQMessage((LARGE_INTEGER *)a1, v3, v31, v1, v2, 0, 0LL, 0, 0LL, 0, &v36, v28, 0LL, 0LL);
      ThreadUnlock1(v30, v29);
      return 0LL;
    }
    if ( !GlobalValid || !*(_QWORD *)(GlobalValid + 56) )
    {
      ThreadUnlock1(v7, 128LL);
      return 0xFFFFFFFFLL;
    }
    xxxCallHook(2, 0, 0LL, 1u);
    ThreadUnlock1(v22, v21);
  }
  v8 = -1;
LABEL_39:
  ThreadUnlock1(v7, v6);
  return (unsigned int)v8;
}
