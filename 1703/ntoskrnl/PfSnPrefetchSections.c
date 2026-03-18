/*
 * XREFs of PfSnPrefetchSections @ 0x14046540C
 * Callers:
 *     PfSnAsyncPrefetchStep @ 0x14046538C (PfSnAsyncPrefetchStep.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeQueryPriorityThread @ 0x140054910 (KeQueryPriorityThread.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404656CC (PfSnPrefetchSectionsCleanup.c)
 *     PfSnLogGetReadListsStop @ 0x1404657B8 (PfSnLogGetReadListsStop.c)
 *     PfSnLogGetReadListsStart @ 0x14046583C (PfSnLogGetReadListsStart.c)
 *     MmPrefetchPagesEx @ 0x14053D370 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfSnPrefetchSections(_QWORD *a1, WORK_QUEUE_TYPE a2, int a3, __int64 a4, KSPIN_LOCK a5)
{
  __int64 v5; // r14
  REGHANDLE v7; // rdi
  __int64 v8; // r15
  WORK_QUEUE_TYPE v9; // r13d
  _QWORD *v10; // r12
  unsigned int v11; // esi
  char v12; // si
  unsigned int v13; // ebx
  unsigned int *v14; // rdi
  int v15; // r15d
  int v16; // esi
  WORK_QUEUE_TYPE v17; // r12d
  unsigned int *v18; // rdi
  __int64 v19; // r13
  int v20; // ebx
  __int64 v21; // r8
  __int64 v23; // rax
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v25; // [rsp+40h] [rbp-C8h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v27; // [rsp+4Ch] [rbp-BCh] BYREF
  WORK_QUEUE_TYPE QueueType; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-B0h]
  unsigned int v30; // [rsp+5Ch] [rbp-ACh]
  int v31; // [rsp+60h] [rbp-A8h] BYREF
  WORK_QUEUE_TYPE v32; // [rsp+68h] [rbp-A0h]
  int v33; // [rsp+70h] [rbp-98h] BYREF
  WORK_QUEUE_TYPE v34; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v35; // [rsp+80h] [rbp-88h] BYREF
  KSPIN_LOCK v36; // [rsp+88h] [rbp-80h]
  _QWORD *v37; // [rsp+90h] [rbp-78h]
  void *v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  KSPIN_LOCK SpinLock[6]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F0h] [rbp-18h]
  int v44; // [rsp+F4h] [rbp-14h]
  __int64 v45; // [rsp+F8h] [rbp-10h]
  __int64 v46; // [rsp+100h] [rbp-8h]
  __int64 v47; // [rsp+108h] [rbp+0h]
  __int64 v48; // [rsp+110h] [rbp+8h]
  int *v49; // [rsp+118h] [rbp+10h]
  __int64 v50; // [rsp+120h] [rbp+18h]
  WORK_QUEUE_TYPE *p_QueueType; // [rsp+128h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+28h]
  char *v53; // [rsp+138h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+148h] [rbp+40h] BYREF
  __int64 v56; // [rsp+158h] [rbp+50h]
  int v57; // [rsp+160h] [rbp+58h]
  int v58; // [rsp+164h] [rbp+5Ch]
  __int64 v59; // [rsp+168h] [rbp+60h]
  __int64 v60; // [rsp+170h] [rbp+68h]
  __int64 v61; // [rsp+178h] [rbp+70h]
  __int64 v62; // [rsp+180h] [rbp+78h]
  int *v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]
  WORK_QUEUE_TYPE *v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  __int16 *v67; // [rsp+1A8h] [rbp+A0h]
  __int64 v68; // [rsp+1B0h] [rbp+A8h]
  __int64 *v69; // [rsp+1B8h] [rbp+B0h]
  __int64 v70; // [rsp+1C0h] [rbp+B8h]
  unsigned int *v71; // [rsp+1C8h] [rbp+C0h]
  __int64 v72; // [rsp+1D0h] [rbp+C8h]

  v5 = *a1;
  v7 = RegHandle;
  v8 = -1LL;
  v29 = a3;
  v9 = a2;
  v32 = a2;
  v10 = a1;
  v37 = a1;
  v11 = 0;
  v36 = a5;
  v30 = 0;
  v24 = 0;
  QueueType = a2;
  v31 = a3;
  if ( v5 && RegHandle && EtwEventEnabled(RegHandle, &PfSnEvt_PrefetchSections_Start) )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)(v5 + 16 + 2 * v23) );
    LOWORD(v26) = v23;
    UserData.Ptr = (ULONGLONG)&v26;
    v43 = 2 * (unsigned __int16)v23;
    v42 = v5 + 16;
    v45 = v5 + 76;
    *(_QWORD *)&UserData.Size = 2LL;
    v47 = v5 + 80;
    v49 = &v31;
    p_QueueType = &QueueType;
    v53 = &v24;
    v44 = 0;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 1LL;
    EtwWrite(v7, &PfSnEvt_PrefetchSections_Start, 0LL, 7u, &UserData);
    v7 = RegHandle;
  }
  if ( a3 >= 1 << *(_DWORD *)(*v10 + 124LL) )
    goto LABEL_34;
  if ( v9 )
  {
    if ( v9 == DelayedWorkQueue )
    {
      v12 = 1;
      goto LABEL_8;
    }
LABEL_34:
    v20 = -1073741811;
    goto LABEL_25;
  }
  v12 = 0;
LABEL_8:
  v13 = *(_DWORD *)(v5 + 88);
  v38 = (void *)v10[8];
  memset(v38, 0, 8LL * v13);
  v14 = (unsigned int *)v10[11];
  memset(v14, 0, 0x600uLL);
  memset(SpinLock, 0, sizeof(SpinLock));
  ExInitializePushLock(SpinLock);
  SpinLock[2] = v36;
  SpinLock[1] = (KSPIN_LOCK)v10;
  LODWORD(SpinLock[4]) = v13;
  QueueType = KeQueryPriorityThread(KeGetCurrentThread()) + 32;
  if ( v13 > 0x20 )
    v13 = 32;
  PfSnLogGetReadListsStart(v5, v13);
  if ( v13 )
  {
    v15 = v29;
    v16 = v12 & 1;
    v17 = QueueType;
    v18 = v14 + 11;
    v19 = v13;
    do
    {
      *(v18 - 1) = v15;
      *(_QWORD *)(v18 - 3) = SpinLock;
      *v18 = v16 | *v18 & 0xFFFFFFFE;
      *(_QWORD *)(v18 - 11) = 0LL;
      *(_QWORD *)(v18 - 7) = PfSnPopulateReadList;
      *(_QWORD *)(v18 - 5) = v18 - 11;
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)SpinLock);
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v18 - 11), v17);
      v18 += 12;
      --v19;
    }
    while ( v19 );
    v10 = v37;
    v8 = -1LL;
    v9 = v32;
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock);
  PfSnLogGetReadListsStop(v5);
  v11 = SpinLock[3];
  v20 = SpinLock[5];
  if ( SLODWORD(SpinLock[5]) < 0 )
    goto LABEL_20;
  v30 = HIDWORD(SpinLock[4]);
  if ( LODWORD(SpinLock[3]) )
  {
    if ( HIDWORD(SpinLock[4]) )
    {
      v20 = MmPrefetchPagesEx(LODWORD(SpinLock[3]), v38, v10 + 13);
      if ( v20 >= 0 && !v10[13] )
        v20 = -2147483622;
    }
    else
    {
      v20 = -1073741823;
    }
LABEL_20:
    if ( v11 )
    {
      v21 = v11;
      if ( v11 > 0x20 )
        v21 = 32LL;
      PfSnPrefetchSectionsCleanup(v10, v11, v21, v36);
    }
    goto LABEL_24;
  }
  v20 = 0;
LABEL_24:
  v7 = RegHandle;
LABEL_25:
  v35 = v11;
  v33 = v29;
  v39 = v30;
  LOBYTE(v25) = 0;
  v34 = v9;
  if ( v5 && v7 && EtwEventEnabled(v7, &PfSnEvt_PrefetchSections_Stop) )
  {
    do
      ++v8;
    while ( *(_WORD *)(v5 + 16 + 2 * v8) );
    v56 = v5 + 16;
    v55.Ptr = (ULONGLONG)&v27;
    v27 = v8;
    v57 = 2 * (unsigned __int16)v8;
    *(_QWORD *)&v55.Size = 2LL;
    v59 = v5 + 76;
    v58 = 0;
    v61 = v5 + 80;
    v63 = &v33;
    v65 = &v34;
    v67 = &v25;
    v69 = &v39;
    v71 = &v35;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v66 = 4LL;
    v68 = 1LL;
    v70 = 8LL;
    v72 = 4LL;
    EtwWrite(v7, &PfSnEvt_PrefetchSections_Stop, 0LL, 9u, &v55);
  }
  return (unsigned int)v20;
}
