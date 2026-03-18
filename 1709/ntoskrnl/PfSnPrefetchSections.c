/*
 * XREFs of PfSnPrefetchSections @ 0x140440C2C
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x140440BAC (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     KeQueryPriorityThread @ 0x140100BB0 (KeQueryPriorityThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PfSnPrefetchSectionsCleanup @ 0x140440ED4 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x140440FC0 (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x140441038 (PfSnLogGetReadListsStart.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfSnPrefetchSections(_QWORD *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, KSPIN_LOCK a5)
{
  __int64 v5; // rsi
  int v6; // r13d
  __int64 v8; // r14
  WORK_QUEUE_TYPE v9; // r12d
  _QWORD *v10; // r15
  unsigned int v11; // edi
  unsigned int v12; // ebx
  unsigned int *v13; // rdi
  int v14; // r14d
  unsigned int *v15; // rdi
  WORK_QUEUE_TYPE v16; // r15d
  __int64 v17; // r12
  int v18; // ebx
  __int64 v19; // r8
  __int64 v21; // rax
  char v22; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v25; // [rsp+4Ch] [rbp-BCh] BYREF
  WORK_QUEUE_TYPE QueueType; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+58h] [rbp-B0h]
  unsigned int v28; // [rsp+5Ch] [rbp-ACh]
  int v29; // [rsp+60h] [rbp-A8h] BYREF
  WORK_QUEUE_TYPE v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+70h] [rbp-98h] BYREF
  WORK_QUEUE_TYPE v32; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+80h] [rbp-88h] BYREF
  KSPIN_LOCK v34; // [rsp+88h] [rbp-80h]
  _QWORD *v35; // [rsp+90h] [rbp-78h]
  void *v36; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A0h] [rbp-68h] BYREF
  KSPIN_LOCK SpinLock[6]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-20h]
  int v41; // [rsp+F0h] [rbp-18h]
  int v42; // [rsp+F4h] [rbp-14h]
  __int64 v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int64 v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  char *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+148h] [rbp+40h] BYREF
  __int64 v54; // [rsp+158h] [rbp+50h]
  int v55; // [rsp+160h] [rbp+58h]
  int v56; // [rsp+164h] [rbp+5Ch]
  __int64 v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  __int64 v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  WORK_QUEUE_TYPE *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  __int16 *v65; // [rsp+1A8h] [rbp+A0h]
  __int64 v66; // [rsp+1B0h] [rbp+A8h]
  __int64 *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  unsigned int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]

  v5 = *a1;
  v6 = 0;
  v8 = -1LL;
  v27 = a3;
  v30 = a2;
  v9 = a2;
  v35 = a1;
  v10 = a1;
  v34 = a5;
  v11 = 0;
  v28 = 0;
  v22 = 0;
  QueueType = a2;
  v29 = a3;
  if ( v5 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)(v5 + 16 + 2 * v21) );
    LOWORD(v24) = v21;
    UserData.Ptr = (ULONGLONG)&v24;
    v41 = 2 * (unsigned __int16)v21;
    v40 = v5 + 16;
    v43 = v5 + 76;
    v45 = v5 + 80;
    v47 = &v29;
    p_QueueType = &QueueType;
    v51 = &v22;
    *(_QWORD *)&UserData.Size = 2LL;
    v42 = 0;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 1LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
  }
  if ( a3 >= 1 << *(_DWORD *)(*v10 + 124LL) )
    goto LABEL_33;
  if ( v9 == CriticalWorkQueue )
    goto LABEL_8;
  if ( v9 != DelayedWorkQueue )
  {
LABEL_33:
    v18 = -1073741811;
    goto LABEL_24;
  }
  v6 = 1;
LABEL_8:
  v12 = *(_DWORD *)(v5 + 88);
  v36 = (void *)v10[8];
  memset(v36, 0, 8LL * v12);
  v13 = (unsigned int *)v10[11];
  memset(v13, 0, 0x600uLL);
  memset(SpinLock, 0, sizeof(SpinLock));
  ExInitializePushLock(SpinLock);
  SpinLock[2] = v34;
  SpinLock[1] = (KSPIN_LOCK)v10;
  LODWORD(SpinLock[4]) = v12;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v12 > 0x20 )
    v12 = 32;
  PfSnLogGetReadListsStart(v5, v12);
  if ( v12 )
  {
    v14 = v27;
    v15 = v13 + 11;
    v16 = QueueType;
    v17 = v12;
    do
    {
      *(v15 - 1) = v14;
      *(_QWORD *)(v15 - 3) = SpinLock;
      *v15 = v6 | *v15 & 0xFFFFFFFE;
      *(_QWORD *)(v15 - 11) = 0LL;
      *(_QWORD *)(v15 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v15 - 5) = v15 - 11;
      ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v15 - 11), v16);
      v15 += 12;
      --v17;
    }
    while ( v17 );
    v10 = v35;
    v8 = -1LL;
    v9 = v30;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
  PfSnLogGetReadListsStop(v5);
  v11 = SpinLock[3];
  v18 = SpinLock[5];
  if ( SLODWORD(SpinLock[5]) >= 0 )
  {
    v28 = HIDWORD(SpinLock[4]);
    if ( !LODWORD(SpinLock[3]) )
    {
      v18 = 0;
      goto LABEL_24;
    }
    if ( HIDWORD(SpinLock[4]) )
    {
      v18 = MmPrefetchPagesEx(LODWORD(SpinLock[3]), v36, v10 + 13);
      if ( v18 >= 0 && !v10[13] )
        v18 = -2147483622;
    }
    else
    {
      v18 = -1073741823;
    }
  }
  if ( v11 )
  {
    v19 = v11;
    if ( v11 > 0x20 )
      v19 = 32LL;
    PfSnPrefetchSectionsCleanup(v10, v11, v19, v34);
  }
LABEL_24:
  v31 = v27;
  v37 = v28;
  v33 = v11;
  LOBYTE(v23) = 0;
  v32 = v9;
  if ( v5 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v8;
    while ( *(_WORD *)(v5 + 16 + 2 * v8) );
    v54 = v5 + 16;
    v53.Ptr = (ULONGLONG)&v25;
    v25 = v8;
    v55 = 2 * (unsigned __int16)v8;
    *(_QWORD *)&v53.Size = 2LL;
    v57 = v5 + 76;
    v59 = v5 + 80;
    v61 = &v31;
    v63 = &v32;
    v65 = &v23;
    v67 = &v37;
    v69 = &v33;
    v56 = 0;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 1LL;
    v68 = 8LL;
    v70 = 4LL;
    EtwWrite(RegHandle, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v53);
  }
  return (unsigned int)v18;
}
