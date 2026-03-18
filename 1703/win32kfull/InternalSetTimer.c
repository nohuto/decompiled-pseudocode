/*
 * XREFs of InternalSetTimer @ 0x1C00B26E0
 * Callers:
 *     _SetSystemTimer @ 0x1C00B21F0 (_SetSystemTimer.c)
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C00B247C (SetDeepDelayableVisRITTimer.c)
 *     NtUserSetTimer @ 0x1C00B24E0 (NtUserSetTimer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C00F9FEC (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     xxxSoundSentry @ 0x1C0119A28 (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01C4F94 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0203034 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0203090 (-MNSetTimerToOpenHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02040A4 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0211884 (UserSetTimer.c)
 * Callees:
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C00B2BC4 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C00B2C1C (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  char v6; // bl
  unsigned int v8; // r15d
  __int64 v9; // r13
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbp
  unsigned int v14; // edi
  _QWORD *v15; // rsi
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  _DWORD *v20; // r14
  _QWORD *v21; // rdi
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // ecx
  int v26; // r10d
  unsigned int v27; // r11d
  int v28; // ecx
  unsigned int v29; // r10d
  unsigned int v30; // r8d
  unsigned int v31; // edx
  unsigned int v32; // ecx
  __int64 result; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  char *v36; // r8
  char *v37; // rdx
  char **v38; // rax
  signed int v39; // ecx
  int v40; // edx
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  _QWORD *v44; // [rsp+20h] [rbp-68h]
  _QWORD *v45; // [rsp+20h] [rbp-68h]
  __int128 v46; // [rsp+30h] [rbp-58h] BYREF
  __int128 v47; // [rsp+40h] [rbp-48h]

  v6 = a2;
  if ( gbCleanupInitiated )
    return 0LL;
  v8 = 10;
  if ( a3 >= 0xA )
    v8 = a3;
  if ( v8 > 0x7FFFFFFF )
    v8 = 0x7FFFFFFF;
  v9 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v9 = *ThreadWin32Thread;
  v13 = v9;
  if ( !v9 || (a6 & 4) != 0 )
  {
    v13 = gptiRit;
  }
  else if ( a1 )
  {
    v13 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v13 && (*(_QWORD *)(v13 + 568) & 0x800000000LL) != 0 )
    v14 = a6 & 0xFFFFFDFF;
  else
    v14 = a6 | 0x200;
  *(_QWORD *)&v46 = a1 >> 8;
  v15 = (_QWORD *)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + v6) & 0x3F));
  v16 = (_QWORD *)*v15;
  v44 = (_QWORD *)*v15;
  if ( (_QWORD *)*v15 == v15 )
  {
LABEL_53:
    LOBYTE(v12) = 16;
    v34 = (_QWORD *)HMAllocObject(v13, 0LL, v12, 136LL);
    v45 = v34;
    v17 = v34;
    if ( v34 )
    {
      v34[11] = 0LL;
      if ( a1 )
      {
        v34[12] = a2;
LABEL_56:
        v35 = v34 + 9;
        if ( *(_QWORD *)(gtmrListHead[0] + 8LL) != gtmrListHead[0] )
          __fastfail(3u);
        *v35 = gtmrListHead[0];
        v36 = (char *)(v34 + 14);
        v34[10] = gtmrListHead[0];
        *(_QWORD *)(gtmrListHead[0] + 8LL) = v35;
        gtmrListHead[0] = v34 + 9;
        v37 = (char *)&gTimerHashTable + 16 * ((*((_DWORD *)v34 + 24) + (int)v46) & 0x3F);
        v38 = (char **)*((_QWORD *)v37 + 1);
        if ( *v38 != v37 )
          __fastfail(3u);
        *(_QWORD *)v36 = v37;
        v17[15] = v38;
        *v38 = v36;
        *((_QWORD *)v37 + 1) = v36;
        goto LABEL_25;
      }
      v39 = g_cTimerId;
      v40 = g_cTimerId;
      do
      {
        g_cTimerId = --v39;
        if ( v39 < 0 )
        {
          v39 = 32511;
          g_cTimerId = 32511;
        }
        if ( !_bittestandset(gTimerId, v39) )
        {
          v34[12] = v39 + 256;
          goto LABEL_56;
        }
      }
      while ( v39 != v40 );
      HMFreeObject(v34);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v17 = v16 - 14;
    if ( v17[11] == a1 && v17[12] == a2 )
    {
      v18 = *((unsigned int *)v17 + 12);
      if ( (((unsigned __int8)v14 ^ *((_BYTE *)v17 + 48)) & 6) == 0
        && ((v18 & 0x40) != 0
         || PsGetCurrentProcessWin32Process(v18, v11) == *(_QWORD *)(v17[3] + 376LL)
         || !a1 && (((unsigned __int8)v14 ^ *((_BYTE *)v17 + 48)) & 4) == 0) )
      {
        break;
      }
    }
    v16 = (_QWORD *)*v44;
    v44 = v16;
    if ( v16 == v15 )
      goto LABEL_53;
  }
  v45 = v17;
  if ( (v17[6] & 1) != 0 )
    DecTimerCount((struct tagTIMER *)v17);
LABEL_25:
  *((_QWORD *)&v47 + 1) = a1;
  *(_QWORD *)&v47 = v17 + 11;
  v46 = v47;
  HMAssignmentLock(&v46);
  *((_DWORD *)v17 + 10) = v8;
  *((_DWORD *)v17 + 13) = v8;
  v17[4] = a4;
  v17[13] = 0LL;
  if ( (v14 & 0x200) != 0 )
    *((_DWORD *)v17 + 11) = a5;
  v19 = v45;
  *((_DWORD *)v45 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v14 & 0x80u) != 0 )
  {
    v14 &= ~0x80u;
  }
  else if ( (v14 & 0x100) != 0 )
  {
    v17[13] = v9;
  }
  v20 = v45 + 6;
  *((_DWORD *)v45 + 12) = v14 | 8;
  v21 = v45 + 3;
  v45[3] = v13;
  v22 = *(_DWORD *)(*(_QWORD *)(v13 + 376) + 980LL);
  if ( v22 )
  {
    v41 = *((_DWORD *)v17 + 13) + v22;
    v42 = 0x7FFFFFFF;
    if ( v41 < 0x7FFFFFFF )
      v42 = v41;
    *((_DWORD *)v17 + 13) = v42;
  }
  EtwTraceInternalSetTimer(v45);
  if ( gbRITAlerted )
    goto LABEL_49;
  if ( !gbTimersProcActive )
  {
    v19 = v45;
    v23 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
    if ( (*v20 & 0x200) != 0 )
    {
      v24 = *((_DWORD *)v45 + 11);
      if ( v24 > gCurrentTimerCoalescingTolerance )
        v25 = *((_DWORD *)v45 + 11);
      else
        v25 = gCurrentTimerCoalescingTolerance;
      v26 = *((_DWORD *)v17 + 13);
      if ( v26 + v25 >= 0x7FFFFFFF )
      {
        v27 = 0x7FFFFFFF;
      }
      else
      {
        if ( v24 <= gCurrentTimerCoalescingTolerance )
          v24 = gCurrentTimerCoalescingTolerance;
        v27 = v26 + v24;
      }
      v28 = *(_DWORD *)(*(_QWORD *)(*v21 + 376LL) + 984LL);
      if ( v28 )
      {
        v43 = v27 + v28;
        v27 = 0x7FFFFFFF;
        if ( v43 < 0x7FFFFFFF )
          v27 = v43;
      }
    }
    else
    {
      v27 = *((_DWORD *)v17 + 13);
    }
    v29 = gdmsNextTimer;
    if ( v23 > gdmsNextTimer )
      goto LABEL_47;
    v30 = guNextCoalescableTimerDue;
    if ( v23 > guNextCoalescableTimerDue )
      goto LABEL_47;
    if ( *(_DWORD *)(*(_QWORD *)(*v21 + 376LL) + 988LL) )
      goto LABEL_47;
    v31 = v27 + v23;
    if ( v27 + v23 < v27 )
      goto LABEL_47;
    *v20 &= ~8u;
    *((_DWORD *)v17 + 13) += v23;
    v32 = *((_DWORD *)v17 + 13);
    if ( v29 > v32 )
      goto LABEL_60;
    if ( v30 <= v31 )
    {
LABEL_47:
      if ( (*v20 & 8) != 0 )
      {
        gbRITAlerted = 1;
        KeAlertThread(gpkthreadRIT, 0LL);
      }
      goto LABEL_49;
    }
    if ( v32 < v29 )
    {
LABEL_60:
      v29 = *((_DWORD *)v17 + 13);
      gdmsNextTimer = v29;
    }
    if ( v30 >= v31 )
    {
      v30 = v27 + v23;
      guNextCoalescableTimerDue = v27 + v23;
    }
    SetDelayableTimer(v29 - v23, v30 - v23);
    goto LABEL_47;
  }
  gbRITRescan = 1;
LABEL_49:
  result = v19[12];
  if ( !result )
    return 1LL;
  return result;
}
