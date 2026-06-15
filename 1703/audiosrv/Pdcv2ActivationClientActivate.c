/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x1800279B0
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800276B4 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     PdcAcquireRwLockExclusive2 @ 0x180028268 (PdcAcquireRwLockExclusive2.c)
 *     Pdcv2pValidateActivationParameters @ 0x1800282D8 (Pdcv2pValidateActivationParameters.c)
 *     memset @ 0x180049B8A (memset.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x1800D1F3C (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 *     Template_qqzr1qzr3qqqqpqqzr11 @ 0x1800D2534 (Template_qqzr1qzr3qqqqpqqzr11.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v11; // r13
  _QWORD *Heap; // rax
  _QWORD *v13; // r12
  ULONGLONG TickCount64; // rax
  int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rdx
  _WORD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rsi
  _WORD *v21; // rcx
  __int64 v22; // rdx
  __int16 v23; // ax
  __int64 v24; // rdx
  _WORD *v25; // rax
  __int16 v26; // cx
  __int64 v27; // rsi
  _WORD *v28; // rcx
  __int16 v29; // ax
  _QWORD *v30; // rcx
  unsigned int v31; // edx
  _QWORD *v32; // r8
  __int64 v33; // rdi
  int v34; // ebx
  int v35; // eax
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  __int64 v39; // rsi
  __int64 v40; // r11
  __int64 v41; // r9
  _QWORD v42[102]; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+3D8h] [rbp+2D8h] BYREF

  v44 = a4;
  LOBYTE(v44) = 0;
  v11 = 0LL;
  if ( !a8 )
  {
    v34 = -1073741578;
LABEL_55:
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, v11, (unsigned int)v34);
    goto LABEL_45;
  }
  *a8 = 1;
  if ( !a7 )
  {
    v34 = -1073741579;
    goto LABEL_55;
  }
  *a7 = 0LL;
  if ( !a1 )
  {
    v34 = -1073741585;
    goto LABEL_55;
  }
  v11 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v11 = 0LL;
    v34 = -1073741585;
    goto LABEL_55;
  }
  if ( !(unsigned __int8)Pdcv2pValidateActivationParameters(a2) )
  {
    v34 = -1073741584;
    goto LABEL_55;
  }
  PdcAcquireRwLockExclusive2(v11 + 8, &v44);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x258uLL);
  v13 = Heap;
  if ( !Heap )
  {
    v34 = -1073741801;
    goto LABEL_55;
  }
  memset(Heap, 0, 0x258uLL);
  *((_DWORD *)v13 + 4) = 1094927440;
  *((_DWORD *)v13 + 5) = 1;
  v13[3] = v11;
  TickCount64 = GetTickCount64();
  v15 = *(_DWORD *)(a2 + 4);
  v16 = 128LL;
  v13[4] = a3;
  v17 = 128LL;
  v13[5] = TickCount64;
  *((_DWORD *)v13 + 12) = 2;
  *((_DWORD *)v13 + 13) = v15;
  v18 = v13 + 9;
  while ( v17 != -2147483518 )
  {
    v19 = *(_WORD *)((char *)v18 + (char *)L"TimerForAudioPlayback" - (char *)(v13 + 9));
    if ( !v19 )
      break;
    *v18++ = v19;
    if ( !--v17 )
    {
      --v18;
      break;
    }
  }
  v20 = *(_QWORD *)(a2 + 16);
  *v18 = 0;
  if ( v20 )
  {
    v21 = v13 + 41;
    v22 = 128LL;
    while ( v22 != -2147483518 )
    {
      v23 = *(_WORD *)((char *)v21 + v20 - (_QWORD)(v13 + 41));
      if ( !v23 )
        break;
      *v21++ = v23;
      if ( !--v22 )
      {
        --v21;
        break;
      }
    }
    *v21 = 0;
  }
  memset(v42, 0, 0x300uLL);
  LODWORD(v42[5]) = 10;
  v24 = 128LL;
  LODWORD(v42[8]) = 2;
  LODWORD(v42[10]) = 0;
  v42[9] = *(_QWORD *)(a2 + 8);
  v25 = &v42[11];
  HIDWORD(v42[10]) = v15;
  while ( v24 != -2147483518 )
  {
    v26 = *(_WORD *)((char *)v25 + (char *)L"TimerForAudioPlayback" - (char *)&v42[11]);
    if ( !v26 )
      break;
    *v25++ = v26;
    if ( !--v24 )
    {
      --v25;
      break;
    }
  }
  *v25 = 0;
  if ( v20 )
  {
    v27 = v20 - (_QWORD)&v42[43];
    v28 = &v42[43];
    while ( v16 != -2147483518 )
    {
      v29 = *(_WORD *)((char *)v28 + v27);
      if ( !v29 )
        break;
      *v28++ = v29;
      if ( !--v16 )
      {
        --v28;
        break;
      }
    }
    *v28 = 0;
  }
  v30 = *(_QWORD **)(a2 + 24);
  if ( v30 )
  {
    v31 = 0;
    v32 = v30 + 1;
    do
    {
      if ( (unsigned __int64)v31 >= *v30 )
        break;
      ++v31;
      *(_QWORD *)((char *)v32 + (char *)&v42[76] - (char *)v30) = v32[1];
      *(_QWORD *)((char *)v32 + (char *)&v42[75] - (char *)v30) = *v32;
      v32 += 2;
    }
    while ( v31 < 0xA );
    LODWORD(v42[75]) = v31;
  }
  v33 = *(_QWORD *)(a1 + 32);
  AcquireSRWLockShared((PSRWLOCK)(v33 + 16));
  if ( *(_QWORD *)(v33 + 8) )
  {
    memset(v42, 0, 0x28uLL);
    a5 = 768LL;
    LODWORD(v42[0]) = 50332376;
    v34 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(v33 + 8), 0x20000LL, v42, 0LL, v42, &a5, 0LL, 0LL);
    if ( v34 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v33 + 124));
  }
  else
  {
    v34 = -1073741816;
  }
  ReleaseSRWLockShared((PSRWLOCK)(v33 + 16));
  if ( v34 < 0 || (v34 = v42[6], v35 = HIDWORD(v42[6]), *a8 = HIDWORD(v42[6]), v34 < 0) || v35 == 300 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
  }
  else
  {
    v13[74] = v42[7];
    *((_BYTE *)v13 + 60) = 0;
    *((_DWORD *)v13 + 14) = HIDWORD(v42[6]);
    ++*(_DWORD *)(a1 + 220);
    ++*(_DWORD *)(a1 + 224);
    ++*(_DWORD *)(a1 + 236);
    v36 = *(_QWORD **)(a1 + 80);
    if ( *v36 != a1 + 72 )
      __fastfail(3u);
    *v13 = a1 + 72;
    v13[1] = v36;
    *v36 = v13;
    v37 = v13 + 41;
    *(_QWORD *)(a1 + 80) = v13;
    *a7 = v13;
    if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
    {
      v39 = -1LL;
      do
        ++v39;
      while ( *(_WORD *)(a1 + 92 + 2 * v39) );
      v40 = -1LL;
      do
        ++v40;
      while ( *((_WORD *)v37 + v40) );
      v41 = -1LL;
      do
        ++v41;
      while ( *((_WORD *)v13 + v41 + 36) );
      Template_qqzr1qzr3qqqqpqqzr11(
        (_DWORD)v37,
        *(_DWORD *)(a1 + 220),
        *(_DWORD *)(a1 + 24),
        v41,
        (__int64)(v13 + 9),
        v40,
        (__int64)(v13 + 41),
        *(_DWORD *)(a1 + 224),
        *(_DWORD *)(a1 + 220),
        *((_DWORD *)v13 + 13),
        v34,
        (char)v13);
    }
  }
  if ( v34 < 0 )
    goto LABEL_55;
LABEL_45:
  if ( (_BYTE)v44 )
  {
    if ( !*(_QWORD *)(v11 + 8) || *(_DWORD *)(v11 + 16) != GetCurrentThreadId() || *(int *)(v11 + 20) <= 0 )
      __fastfail(5u);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 20), 0xFFFFFFFF) == 1 )
      *(_DWORD *)(v11 + 16) = 0;
    if ( !ReleaseMutex(*(HANDLE *)(v11 + 8)) )
    {
      GetLastError();
      __fastfail(0x24u);
    }
  }
  return (unsigned int)v34;
}
