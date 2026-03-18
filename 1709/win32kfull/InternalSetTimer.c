/*
 * XREFs of InternalSetTimer @ 0x1C0087850
 * Callers:
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     SetDeepDelayableVisRITTimer @ 0x1C0087684 (SetDeepDelayableVisRITTimer.c)
 *     NtUserSetTimer @ 0x1C00876E0 (NtUserSetTimer.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?AdjustRITDelayableTimers@@YAXH@Z @ 0x1C0104EC0 (-AdjustRITDelayableTimers@@YAXH@Z.c)
 *     xxxSoundSentry @ 0x1C012362C (xxxSoundSentry.c)
 *     _SetTimer @ 0x1C01C7294 (_SetTimer.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C02049D4 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0204A30 (-MNSetTimerToOpenHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0205B60 (MNSetTimerToCloseHierarchy.c)
 *     UserSetTimer @ 0x1C0212D98 (UserSetTimer.c)
 * Callees:
 *     ?SetDelayableTimer@@YAXKK@Z @ 0x1C0087D08 (-SetDelayableTimer@@YAXKK@Z.c)
 *     ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C008A208 (-DecTimerCount@@YAXPEAUtagTIMER@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InternalSetTimer(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v10; // r12d
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // r13
  unsigned int v15; // edi
  _QWORD **v16; // r14
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  signed int v21; // ecx
  int v22; // edx
  _QWORD *v23; // rdx
  char *v24; // rdx
  char *v25; // rcx
  char **v26; // rax
  _QWORD *v27; // rsi
  _DWORD *v28; // r14
  _QWORD *v29; // rdi
  int v30; // ecx
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // r8d
  ULONG v34; // edx
  int v35; // ecx
  int v36; // eax
  int v37; // r9d
  unsigned int v38; // r10d
  int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // r9d
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned int v44; // ecx
  _QWORD *v45; // [rsp+20h] [rbp-58h]
  __int64 v46; // [rsp+28h] [rbp-50h]
  __int128 v47; // [rsp+30h] [rbp-48h] BYREF
  __int128 v48; // [rsp+40h] [rbp-38h]

  if ( gbCleanupInitiated )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 10;
  if ( (unsigned int)a3 >= 0xA )
    v10 = a3;
  if ( v10 > 0x7FFFFFFF )
    v10 = 0x7FFFFFFF;
  v11 = 0LL;
  v46 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      v11 = *ThreadWin32Thread;
      v46 = *ThreadWin32Thread;
    }
  }
  v14 = v11;
  if ( !v11 || (a6 & 4) != 0 )
  {
    v14 = gptiRit;
  }
  else if ( a1 )
  {
    v14 = *(_QWORD *)(a1 + 16);
  }
  if ( a5 == -1 || !a5 && v14 && (*(_QWORD *)(v14 + 624) & 0x800000000LL) != 0 )
    v15 = a6 & 0xFFFFFDFF;
  else
    v15 = a6 | 0x200;
  *(_QWORD *)&v47 = a1 >> 8;
  v16 = (_QWORD **)((char *)&gTimerHashTable + 16 * ((BYTE1(a1) + (unsigned __int8)a2) & 0x3F));
  v17 = *v16;
  if ( *v16 == v16 )
  {
LABEL_30:
    LOBYTE(v12) = 16;
    v20 = (_QWORD *)HMAllocObject(v14, 0LL, v12, 136LL);
    v45 = v20;
    v18 = v20;
    if ( !v20 )
      return 0LL;
    v20[11] = 0LL;
    if ( a1 )
    {
      v20[12] = a2;
    }
    else
    {
      v21 = g_cTimerId;
      v22 = g_cTimerId;
      while ( 1 )
      {
        g_cTimerId = --v21;
        if ( v21 < 0 )
        {
          v21 = 32511;
          g_cTimerId = 32511;
        }
        if ( !_bittestandset(gTimerId, v21) )
          break;
        if ( v21 == v22 )
        {
          HMFreeObject(v20);
          return 0LL;
        }
      }
      v20[12] = v21 + 256;
    }
    v23 = v20 + 9;
    if ( *(_QWORD *)(gtmrListHead + 8LL) != gtmrListHead )
      __fastfail(3u);
    *v23 = gtmrListHead;
    v20[10] = gtmrListHead;
    *(_QWORD *)(gtmrListHead + 8LL) = v23;
    gtmrListHead = v20 + 9;
    v24 = (char *)(v20 + 14);
    v25 = (char *)&gTimerHashTable + 16 * ((*((_DWORD *)v20 + 24) + (int)v47) & 0x3F);
    v26 = (char **)*((_QWORD *)v25 + 1);
    if ( *v26 != v25 )
      __fastfail(3u);
    *(_QWORD *)v24 = v25;
    v18[15] = v26;
    *v26 = v24;
    *((_QWORD *)v25 + 1) = v24;
  }
  else
  {
    while ( 1 )
    {
      v18 = v17 - 14;
      if ( *(v17 - 3) == a1 && v18[12] == a2 )
      {
        v19 = *((unsigned int *)v18 + 12);
        if ( (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 6) == 0
          && ((v19 & 0x40) != 0
           || PsGetCurrentProcessWin32Process(v19) == *(_QWORD *)(v18[3] + 400LL)
           || !a1 && (((unsigned __int8)v15 ^ *((_BYTE *)v18 + 48)) & 4) == 0) )
        {
          break;
        }
      }
      v17 = (_QWORD *)*v17;
      if ( v17 == v16 )
        goto LABEL_30;
    }
    v45 = v17 - 14;
    if ( (v18[6] & 1) != 0 )
      DecTimerCount((struct tagTIMER *)(v17 - 14));
  }
  *((_QWORD *)&v48 + 1) = a1;
  *(_QWORD *)&v48 = v18 + 11;
  v47 = v48;
  HMAssignmentLock(&v47);
  *((_DWORD *)v18 + 10) = v10;
  *((_DWORD *)v18 + 13) = v10;
  v18[4] = a4;
  v18[13] = 0LL;
  if ( (v15 & 0x200) != 0 )
    *((_DWORD *)v18 + 11) = a5;
  v27 = v45;
  *((_DWORD *)v45 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (v15 & 0x80u) == 0 )
  {
    if ( (v15 & 0x100) != 0 )
      v18[13] = v46;
  }
  else
  {
    v15 &= ~0x80u;
  }
  v28 = v45 + 6;
  *((_DWORD *)v45 + 12) = v15 | 8;
  v45[3] = v14;
  v29 = v45 + 3;
  v30 = *(_DWORD *)(*(_QWORD *)(v14 + 400) + 988LL);
  if ( v30 )
  {
    v31 = *((_DWORD *)v18 + 13) + v30;
    v32 = 0x7FFFFFFF;
    if ( v31 < 0x7FFFFFFF )
      v32 = v31;
    *((_DWORD *)v18 + 13) = v32;
  }
  EtwTraceInternalSetTimer(v45);
  if ( !BYTE4(WPP_MAIN_CB.DeviceObjectExtension) )
  {
    if ( !gbTimersProcActive )
    {
      v27 = v45;
      v33 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gcmsLastTimer;
      if ( (*v28 & 0x200) != 0 )
      {
        v34 = *((_DWORD *)v45 + 11);
        v35 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
        v36 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
        v37 = *((_DWORD *)v18 + 13);
        if ( v34 > *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
          v36 = *((_DWORD *)v45 + 11);
        if ( (unsigned int)(v37 + v36) >= 0x7FFFFFFF )
        {
          v38 = 0x7FFFFFFF;
        }
        else
        {
          if ( v34 > *(&WPP_MAIN_CB.AlignmentRequirement + 1) )
            v35 = *((_DWORD *)v45 + 11);
          v38 = v37 + v35;
        }
        v39 = *(_DWORD *)(*(_QWORD *)(*v29 + 400LL) + 992LL);
        if ( v39 )
        {
          v40 = v38 + v39;
          v38 = 0x7FFFFFFF;
          if ( v40 < 0x7FFFFFFF )
            v38 = v40;
        }
      }
      else
      {
        v38 = *((_DWORD *)v18 + 13);
      }
      v41 = gdmsNextTimer;
      if ( v33 > gdmsNextTimer )
        goto LABEL_84;
      v42 = guNextCoalescableTimerDue;
      if ( v33 > guNextCoalescableTimerDue )
        goto LABEL_84;
      if ( *(_DWORD *)(*(_QWORD *)(*v29 + 400LL) + 996LL) )
        goto LABEL_84;
      v43 = v38 + v33;
      if ( v38 + v33 < v38 )
        goto LABEL_84;
      *v28 &= ~8u;
      *((_DWORD *)v18 + 13) += v33;
      v44 = *((_DWORD *)v18 + 13);
      if ( v41 > v44 )
        goto LABEL_80;
      if ( v42 <= v43 )
      {
LABEL_84:
        if ( (*v28 & 8) != 0 )
        {
          BYTE4(WPP_MAIN_CB.DeviceObjectExtension) = 1;
          KeAlertThread(WPP_MAIN_CB.Reserved, 0LL);
        }
        goto LABEL_87;
      }
      if ( v44 < v41 )
      {
LABEL_80:
        v41 = *((_DWORD *)v18 + 13);
        gdmsNextTimer = v41;
      }
      if ( v42 >= v43 )
      {
        v42 = v38 + v33;
        guNextCoalescableTimerDue = v38 + v33;
      }
      SetDelayableTimer(v41 - v33, v42 - v33);
      goto LABEL_84;
    }
    gbRITRescan = 1;
  }
LABEL_87:
  result = v27[12];
  if ( !result )
    return 1LL;
  return result;
}
