/*
 * XREFs of Pdcv2ActivationClientActivate @ 0x180029C80
 * Callers:
 *     ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x180060130 (--0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z.c)
 * Callees:
 *     McTemplateU0qqzr1qzr3qqqqpqqzr11 @ 0x180005E50 (McTemplateU0qqzr1qzr3qqqqpqqzr11.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE @ 0x18010CB68 (Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE.c)
 */

__int64 __fastcall Pdcv2ActivationClientActivate(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        struct _FILETIME pftDueTime,
        int a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v11; // r13
  int v12; // r9d
  unsigned __int64 *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  _QWORD *v16; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rdi
  DWORD v19; // eax
  _QWORD *Heap; // rax
  _QWORD *v21; // r15
  ULONGLONG TickCount64; // rax
  __int64 v23; // rdx
  _WORD *v24; // rcx
  __int16 v25; // ax
  _WORD *v26; // rdx
  _WORD *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  _WORD *v30; // rax
  __int16 v31; // cx
  __int64 v32; // rdx
  __int64 v33; // rdx
  _WORD *v34; // rcx
  __int16 v35; // ax
  _QWORD *v36; // rcx
  unsigned int v37; // edx
  _QWORD *v38; // r8
  __int64 v39; // rdi
  int v40; // ebx
  int v41; // eax
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r9
  _QWORD *v48; // rax
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *v50; // rax
  int v51; // [rsp+60h] [rbp-A0h]
  PTP_TIMER pv; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h]
  const char *v54; // [rsp+90h] [rbp-70h]
  DWORD CurrentProcessId; // [rsp+98h] [rbp-68h]
  DWORD v56; // [rsp+9Ch] [rbp-64h]
  int v57; // [rsp+A0h] [rbp-60h]
  __int64 v58; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v59[5]; // [rsp+B0h] [rbp-50h] BYREF
  int v60; // [rsp+D8h] [rbp-28h]
  int v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E4h] [rbp-1Ch]
  __int64 v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+F0h] [rbp-10h]
  __int64 v65; // [rsp+F8h] [rbp-8h]
  int v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+104h] [rbp+4h]
  _BYTE v68[256]; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v69[280]; // [rsp+208h] [rbp+108h] BYREF
  unsigned int v70; // [rsp+320h] [rbp+220h] BYREF
  _BYTE v71[168]; // [rsp+328h] [rbp+228h] BYREF
  char v72; // [rsp+418h] [rbp+318h]

  v72 = 0;
  v11 = 0LL;
  if ( !a8 )
  {
    v40 = -1073741578;
    goto LABEL_91;
  }
  *a8 = 1;
  if ( !a7 )
  {
    v40 = -1073741579;
    goto LABEL_91;
  }
  *a7 = 0LL;
  if ( !a1 )
  {
    v40 = -1073741585;
    goto LABEL_91;
  }
  v11 = a1;
  if ( *(_DWORD *)a1 != 843138128 )
  {
    v11 = 0LL;
    v40 = -1073741585;
    goto LABEL_91;
  }
  if ( !a2 )
    goto LABEL_90;
  v12 = *a2;
  if ( (unsigned int)(*a2 - 1) > 1 || *((_QWORD *)a2 + 1) || (unsigned int)(a2[1] - 10) > 0x122 )
    goto LABEL_90;
  v13 = (unsigned __int64 *)*((_QWORD *)a2 + 3);
  if ( v13 )
  {
    v14 = *v13;
    if ( *v13 > 0xA )
    {
LABEL_90:
      v40 = -1073741584;
      goto LABEL_91;
    }
    v15 = 0LL;
    if ( v14 )
    {
      v16 = v13 + 1;
      while ( *v16 && v16[1] )
      {
        ++v15;
        v16 += 2;
        if ( v15 >= v14 )
          goto LABEL_16;
      }
      goto LABEL_90;
    }
LABEL_16:
    if ( v14 < 0xA )
    {
      v17 = &v13[2 * v14 + 1];
      while ( !*v17 && !v17[1] )
      {
        ++v14;
        v17 += 2;
        if ( v14 >= 0xA )
          goto LABEL_21;
      }
      goto LABEL_90;
    }
  }
LABEL_21:
  if ( v12 != 1 )
  {
    if ( v12 != 2 )
      goto LABEL_90;
    v48 = (_QWORD *)*((_QWORD *)a2 + 4);
    if ( v48 )
    {
      if ( *v48 >= 2uLL )
        goto LABEL_90;
    }
  }
  if ( ClientCallWatchdogEnabled )
  {
    memset_0(&pv, 0, 0x28uLL);
    v53 = *(_DWORD *)(a1 + 24);
    CurrentProcessId = GetCurrentProcessId();
    CurrentThreadId = GetCurrentThreadId();
    v57 = 1200000;
    v56 = CurrentThreadId;
    v54 = "Pdcv2ActivationClientActivate";
    v50 = CreateThreadpoolTimer(PdcpFireClientCallWatchdog, &pv, 0LL);
    pv = v50;
    if ( v50 )
    {
      pftDueTime.dwHighDateTime = -3;
      pftDueTime.dwLowDateTime = 884901888;
      SetThreadpoolTimer(v50, &pftDueTime, 0, 0x3E8u);
    }
    else
    {
      GetLastError();
    }
  }
  v18 = 128LL;
  while ( 1 )
  {
    v19 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 8), 0xEA60u, 0);
    if ( !v19 )
      break;
    if ( v19 == 128 )
      __fastfail(0x24u);
    if ( v19 != 258 )
      __fastfail(5u);
  }
  v72 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 20)) == 1 )
    *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  if ( *(_DWORD *)(a1 + 16) != GetCurrentThreadId() )
    __fastfail(5u);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x258uLL);
  v21 = Heap;
  if ( !Heap )
  {
    v40 = -1073741801;
    goto LABEL_91;
  }
  memset_0(Heap, 0, 0x258uLL);
  *((_DWORD *)v21 + 4) = 1094927440;
  *((_DWORD *)v21 + 5) = 1;
  v21[3] = a1;
  TickCount64 = GetTickCount64();
  v21[4] = a3;
  v21[5] = TickCount64;
  *((_DWORD *)v21 + 12) = 2;
  *((_DWORD *)v21 + 13) = a2[1];
  v23 = 128LL;
  v24 = v21 + 9;
  while ( v23 != -2147483518 )
  {
    v25 = *(_WORD *)((char *)v24 + (char *)L"TimerForAudioPlayback" - (char *)(v21 + 9));
    if ( !v25 )
      break;
    *v24++ = v25;
    if ( !--v23 )
    {
      --v24;
      break;
    }
  }
  *v24 = 0;
  v26 = (_WORD *)*((_QWORD *)a2 + 2);
  if ( v26 )
  {
    v27 = v21 + 41;
    v28 = 128LL;
    while ( v28 != -2147483518 && *v26 )
    {
      *v27++ = *v26++;
      if ( !--v28 )
      {
        --v27;
        break;
      }
    }
    *v27 = 0;
  }
  memset_0(v59, 0, 0x318uLL);
  v65 = *((_QWORD *)a2 + 1);
  v29 = 128LL;
  v67 = a2[1];
  v30 = v68;
  v60 = 10;
  v64 = 2;
  v66 = 0;
  while ( v29 != -2147483518 )
  {
    v31 = *(_WORD *)((char *)v30 + (char *)L"TimerForAudioPlayback" - v68);
    if ( !v31 )
      break;
    *v30++ = v31;
    if ( !--v29 )
    {
      --v30;
      break;
    }
  }
  v32 = *((_QWORD *)a2 + 2);
  *v30 = 0;
  if ( v32 )
  {
    v33 = v32 - (_QWORD)v69;
    v34 = v69;
    while ( v18 != -2147483518 )
    {
      v35 = *(_WORD *)((char *)v34 + v33);
      if ( !v35 )
        break;
      *v34++ = v35;
      if ( !--v18 )
      {
        --v34;
        break;
      }
    }
    *v34 = 0;
  }
  v36 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( v36 )
  {
    v37 = 0;
    v38 = v36 + 1;
    do
    {
      if ( (unsigned __int64)v37 >= *v36 )
        break;
      ++v37;
      *(_QWORD *)((char *)v38 + v71 - (_BYTE *)v36) = v38[1];
      *(_QWORD *)((char *)v38 + (char *)&v70 - (char *)v36) = *v38;
      v38 += 2;
    }
    while ( v37 < 0xA );
    v70 = v37;
  }
  v39 = *(_QWORD *)(a1 + 32);
  AcquireSRWLockShared((PSRWLOCK)(v39 + 16));
  if ( *(_QWORD *)(v39 + 8) )
  {
    memset(&v59[1], 0, 32);
    v58 = 792LL;
    v59[0] = 51905264LL;
    v40 = ZwAlpcSendWaitReceivePort(*(_QWORD *)(v39 + 8), 0x20000LL, v59, 0LL, v59, &v58, 0LL, 0LL);
    if ( v40 >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v39 + 124));
  }
  else
  {
    v40 = -1073741816;
  }
  ReleaseSRWLockShared((PSRWLOCK)(v39 + 16));
  if ( v40 < 0 || (v40 = v61, v41 = v62, *a8 = v62, v40 < 0) || v41 == 300 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
  }
  else
  {
    v21[74] = v63;
    *((_BYTE *)v21 + 60) = 0;
    *((_DWORD *)v21 + 14) = v62;
    ++*(_DWORD *)(a1 + 220);
    ++*(_DWORD *)(a1 + 224);
    ++*(_DWORD *)(a1 + 236);
    v42 = *(_QWORD **)(a1 + 80);
    if ( *v42 != a1 + 72 )
      __fastfail(3u);
    *v21 = a1 + 72;
    v43 = a1 + 92;
    v21[1] = v42;
    *v42 = v21;
    *(_QWORD *)(a1 + 80) = v21;
    *a7 = v21;
    if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
    {
      v45 = -1LL;
      do
        ++v45;
      while ( *(_WORD *)(v43 + 2 * v45) );
      v46 = -1LL;
      do
        ++v46;
      while ( *((_WORD *)v21 + v46 + 164) );
      v47 = -1LL;
      do
        ++v47;
      while ( *((_WORD *)v21 + v47 + 36) );
      McTemplateU0qqzr1qzr3qqqqpqqzr11(
        v45,
        v43,
        *(_DWORD *)(a1 + 24),
        v47,
        (__int64)(v21 + 9),
        v46,
        (__int64)(v21 + 41),
        *(_DWORD *)(a1 + 224),
        *(_DWORD *)(a1 + 220),
        *((_DWORD *)v21 + 13),
        v40,
        (char)v21,
        v51,
        v45,
        a1 + 92);
    }
  }
  if ( v40 < 0 )
  {
LABEL_91:
    Pdcv2EventWrite_ACTIVATION_CLIENT_ACTIVATE(0LL, v11, (unsigned int)v40);
    if ( !v72 )
      goto LABEL_73;
  }
  if ( !*(_QWORD *)(v11 + 8) || *(_DWORD *)(v11 + 16) != GetCurrentThreadId() || *(int *)(v11 + 20) <= 0 )
    __fastfail(5u);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 20), 0xFFFFFFFF) == 1 )
    *(_DWORD *)(v11 + 16) = 0;
  if ( !ReleaseMutex(*(HANDLE *)(v11 + 8)) )
  {
    GetLastError();
    __fastfail(0x24u);
  }
LABEL_73:
  if ( ClientCallWatchdogEnabled )
  {
    SetThreadpoolTimer(pv, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(pv, 0);
    CloseThreadpoolTimer(pv);
  }
  return (unsigned int)v40;
}
