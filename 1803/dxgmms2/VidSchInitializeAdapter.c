/*
 * XREFs of VidSchInitializeAdapter @ 0x1C007B520
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C0004B24 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     VidSchiInitializeNode @ 0x1C007BE30 (VidSchiInitializeNode.c)
 *     VidSchiCreateNode @ 0x1C007BF28 (VidSchiCreateNode.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C007C188 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiReadGlobalConfiguration @ 0x1C007C368 (VidSchiReadGlobalConfiguration.c)
 *     VidSchTerminateAdapter @ 0x1C00BE350 (VidSchTerminateAdapter.c)
 */

char *__fastcall VidSchInitializeAdapter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  char *PoolWithTag; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ecx
  int v18; // ecx
  SIZE_T v19; // rsi
  PVOID v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  SIZE_T v23; // rbp
  PVOID v24; // rax
  SIZE_T v25; // rbp
  PVOID v26; // rax
  PVOID v27; // rax
  int v28; // eax
  __int64 v29; // rbp
  struct _KEVENT *v30; // rsi
  struct _KEVENT *v31; // rsi
  __int64 v32; // rbp
  __int64 Timer; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  NTSTATUS v36; // eax
  __int64 v37; // rdx
  void *v38; // rcx
  __int64 v39; // rsi
  unsigned int v40; // esi
  int v41; // ebp
  PVOID v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // r14
  __int64 v47; // r15
  __int64 v48; // r12
  union _SLIST_HEADER *v49; // rcx
  __int64 v50; // r14
  __int64 v51; // r15
  __int64 v52; // r12
  union _SLIST_HEADER *v53; // rcx
  unsigned int v54; // esi
  PVOID v55; // rax
  void *v56; // rax
  unsigned int i; // r8d
  __int64 v58; // rcx
  _QWORD *v59; // rdx
  unsigned int v60; // esi
  unsigned int v61; // ebp
  unsigned int v62; // r14d
  unsigned int v63; // r15d
  __int64 Node; // rax
  __int64 v65; // rdx
  NTSTATUS v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF
  void *ThreadHandle; // [rsp+C8h] [rbp+20h] BYREF

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x1900uLL, 0x68536956u);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v73 = WdLogNewEntry5_WdWarning(v9, v8);
      WdLogEvent5_WdWarning(v73);
      return 0LL;
    }
    memset(PoolWithTag, 0, 0x1900uLL);
    *(_DWORD *)v10 = 1818380118;
    *((_DWORD *)v10 + 1) = *(_DWORD *)(v6 + 200);
    *((_QWORD *)v10 + 1) = a1;
    *((_QWORD *)v10 + 2) = v6;
    *((_QWORD *)v10 + 3) = a2;
    *((_DWORD *)v10 + 8) = *(_DWORD *)(v6 + 1804);
    *((_DWORD *)v10 + 9) = 7;
    *((_QWORD *)v10 + 797) = a3;
    v11 = *(_DWORD *)(v6 + 1280);
    *((_DWORD *)v10 + 10) = v11;
    if ( !v11 )
    {
      *((_DWORD *)v10 + 10) = 1;
      v10[50] = 1;
    }
    if ( *(_BYTE *)(v6 + 2311) )
      v10[51] = 1;
    v10[45] = (*(_DWORD *)(v6 + 1832) & 2) != 0;
    v10[44] = *(_BYTE *)(v6 + 2306);
    v10[46] = (*(_DWORD *)(v6 + 1832) & 0x10) != 0;
    v10[47] = (*(_DWORD *)(v6 + 1828) & 0x10) != 0;
    v10[48] = (*(_DWORD *)(v6 + 1832) & 0x20) == 0;
    v10[49] = (*(_DWORD *)(v6 + 1832) & 0x40) != 0;
    v10[53] = (*(_DWORD *)(v6 + 4044) & 0x40) != 0;
    v12 = 14;
    if ( ((*(_DWORD *)(v6 + 1832) >> 7) & 0xF) != 0 && ((*(_DWORD *)(v6 + 1832) >> 7) & 0xFu) < 0xE )
      v12 = (*(_DWORD *)(v6 + 1832) >> 7) & 0xF;
    *((_DWORD *)v10 + 51) = v12;
    *((_DWORD *)v10 + 33) = *(_DWORD *)(v6 + 2312);
    v10[136] = *(_BYTE *)(v6 + 2410) != 0;
    *((_DWORD *)v10 + 35) = *(_DWORD *)(v6 + 2340);
    v13 = *(_DWORD *)(v6 + 248);
    *(_QWORD *)(v10 + 60) = v13;
    if ( v13 )
    {
      v14 = 0;
      v15 = 0LL;
      v16 = v13;
      do
      {
        v17 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 2360) + v15);
        v15 += 352LL;
        v14 += v17;
        *((_DWORD *)v10 + 16) = v14;
        --v16;
      }
      while ( v16 );
      v13 = *((_DWORD *)v10 + 15);
    }
    v18 = 31;
    if ( *(_DWORD *)(v6 + 1824) < 0x1Fu )
      v18 = *(_DWORD *)(v6 + 1824);
    v19 = 8LL * v13;
    *((_DWORD *)v10 + 618) = v18;
    *((_DWORD *)v10 + 548) ^= (*((_DWORD *)v10 + 548) ^ *(_DWORD *)(v6 + 1828)) & 8;
    v20 = ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x68536956u);
    *((_QWORD *)v10 + 30) = v20;
    if ( !v20 )
      goto LABEL_68;
    memset(v20, 0, v19);
    v23 = 8LL * *((unsigned int *)v10 + 15);
    v24 = ExAllocatePoolWithTag((POOL_TYPE)512, v23, 0x68536956u);
    *((_QWORD *)v10 + 31) = v24;
    if ( !v24
      || (memset(v24, 0, v23),
          v25 = 8LL * *((unsigned int *)v10 + 15),
          v26 = ExAllocatePoolWithTag((POOL_TYPE)512, v25, 0x68536956u),
          (*((_QWORD *)v10 + 32) = v26) == 0LL)
      || (memset(v26, 0, v25),
          v27 = ExAllocatePoolWithTag((POOL_TYPE)512, v19, 0x68536956u),
          (*((_QWORD *)v10 + 33) = v27) == 0LL) )
    {
LABEL_68:
      v72 = WdLogNewEntry5_WdAssertion(v22, v21);
LABEL_60:
      *(_QWORD *)(v72 + 24) = v6;
LABEL_61:
      WdLogEvent5_WdAssertion(v72);
LABEL_62:
      VidSchTerminateAdapter((struct _VIDSCH_GLOBAL *)v10);
      return 0LL;
    }
    memset(v27, 0, v19);
    *((_DWORD *)v10 + 72) = 0;
    VidSchiReadGlobalConfiguration(v10);
    v28 = 3;
    if ( (v10[2192] & 0x18) != 0x18 )
      v28 = 1;
    *((_DWORD *)v10 + 549) = v28;
    *((_DWORD *)v10 + 550) = 5;
    if ( !*((_DWORD *)v10 + 551) && (*(_DWORD *)(v6 + 1828) & 0x40) == 0 )
      *((_DWORD *)v10 + 551) = 1;
    if ( !*((_DWORD *)v10 + 552) )
      *((_DWORD *)v10 + 552) = ((int)DXGADAPTER::GetDriverVersion(*((DXGADAPTER **)v10 + 2)) >= 2400) + 1;
    ExInitializeResourceLite((PERESOURCE)(v10 + 1160));
    ExInitializeResourceLite((PERESOURCE)(v10 + 1264));
    ExInitializeResourceLite((PERESOURCE)(v10 + 296));
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 238);
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 241);
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 239);
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 240);
    v29 = 4LL;
    v30 = (struct _KEVENT *)(v10 + 1368);
    do
    {
      memset(v30, 0, 0x38uLL);
      KeInitializeEvent(v30, SynchronizationEvent, 0);
      v30 = (struct _KEVENT *)((char *)v30 + 56);
      --v29;
    }
    while ( v29 );
    v31 = (struct _KEVENT *)(v10 + 1592);
    v32 = 4LL;
    do
    {
      memset(v31, 0, 0x38uLL);
      KeInitializeEvent(v31, SynchronizationEvent, 0);
      v31 = (struct _KEVENT *)((char *)v31 + 56);
      --v32;
    }
    while ( v32 );
    Timer = ExAllocateTimer(VidSchiWorkerThreadTimerCallback, v10, 4LL);
    *((_QWORD *)v10 + 20) = Timer;
    if ( !Timer )
    {
LABEL_69:
      v74 = WdLogNewEntry5_WdWarning(v35, v34);
      WdLogEvent5_WdWarning(v74);
      goto LABEL_62;
    }
    *((_QWORD *)v10 + 35) = v10 + 272;
    *((_QWORD *)v10 + 34) = v10 + 272;
    InitializeSListHead((PSLIST_HEADER)v10 + 122);
    *((_QWORD *)v10 + 247) = v10 + 1968;
    *((_QWORD *)v10 + 246) = v10 + 1968;
    *((_QWORD *)v10 + 228) = v10 + 1816;
    *((_QWORD *)v10 + 227) = v10 + 1816;
    *((_QWORD *)v10 + 230) = v10 + 1832;
    *((_QWORD *)v10 + 229) = v10 + 1832;
    *((_QWORD *)v10 + 232) = v10 + 1848;
    *((_QWORD *)v10 + 231) = v10 + 1848;
    *((_QWORD *)v10 + 234) = v10 + 1864;
    *((_QWORD *)v10 + 233) = v10 + 1864;
    *((_QWORD *)v10 + 375) = v10 + 2992;
    *((_QWORD *)v10 + 374) = v10 + 2992;
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 376);
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 377);
    *((_QWORD *)v10 + 236) = v10 + 1880;
    *((_QWORD *)v10 + 235) = v10 + 1880;
    *((_QWORD *)v10 + 126) = v10 + 1000;
    *((_QWORD *)v10 + 125) = v10 + 1000;
    *((_QWORD *)v10 + 128) = v10 + 1016;
    *((_QWORD *)v10 + 127) = v10 + 1016;
    *((_QWORD *)v10 + 130) = v10 + 1032;
    *((_QWORD *)v10 + 129) = v10 + 1032;
    KeInitializeSpinLock((PKSPIN_LOCK)v10 + 265);
    ExInitializeResourceLite((PERESOURCE)(v10 + 2728));
    KeInitializeEvent((PRKEVENT)v10 + 118, SynchronizationEvent, 0);
    *((_QWORD *)v10 + 255) = v10;
    *((_QWORD *)v10 + 254) = VidSchiControlVSyncThread;
    *((_QWORD *)v10 + 252) = 0LL;
    *((_QWORD *)v10 + 262) = VidSchiDeferredVisibilityThread;
    *((_QWORD *)v10 + 263) = v6;
    *((_QWORD *)v10 + 260) = 0LL;
    *((_QWORD *)v10 + 417) = v10 + 3328;
    *((_QWORD *)v10 + 416) = v10 + 3328;
    v36 = ExInitializeLookasideListEx(
            (PLOOKASIDE_LIST_EX)v10 + 11,
            0LL,
            0LL,
            (POOL_TYPE)512,
            0,
            *((_DWORD *)v10 + 33) * (48 * *((_DWORD *)v10 + 15) + ((8 * *((_DWORD *)v10 + 15) + 175) & 0xFFFFFFF8))
          + 552
          + 8 * *((_DWORD *)v10 + 15),
            0x68536956u,
            0);
    v39 = v36;
    if ( v36 < 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v38, v37);
      *(_QWORD *)(v72 + 24) = v10;
      *(_QWORD *)(v72 + 32) = v39;
      goto LABEL_61;
    }
    v40 = *((_DWORD *)v10 + 10);
    v41 = 0;
    v10[1152] = 1;
    if ( v40 )
    {
      do
      {
        v42 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xFFA0uLL, 0x68536956u);
        *(_QWORD *)&v10[8 * v41 + 3032] = v42;
        if ( !v42 )
          goto LABEL_69;
        memset(v42, 0, 0xFFA0uLL);
        v43 = 0;
        **(_DWORD **)&v10[8 * v41 + 3032] = 1852985430;
        *(_DWORD *)(*(_QWORD *)&v10[8 * v41 + 3032] + 28128LL) = -1;
        for ( *(_BYTE *)(*(_QWORD *)&v10[8 * v41 + 3032] + 61284LL) = 1;
              v43 < *((_DWORD *)v10 + 33);
              *(_DWORD *)(216 * v44 + *(_QWORD *)&v10[8 * v41 + 3032] + 140) = -1 )
        {
          v44 = v43++;
        }
        v45 = ExAllocatePoolWithTag((POOL_TYPE)512, 0xCuLL, 0x68536956u);
        *(_QWORD *)&v10[8 * v41 + 6248] = v45;
        if ( !v45 )
          goto LABEL_69;
        *(_QWORD *)v45 = 0LL;
        v45[2] = 0;
        InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)&v10[8 * v41 + 3032] + 28496LL));
        v46 = 0LL;
        v47 = 0LL;
        v48 = 64LL;
        do
        {
          *(_DWORD *)(v46 + *(_QWORD *)&v10[8 * v41 + 3032] + 28512) = 1701790550;
          v49 = *(union _SLIST_HEADER **)&v10[8 * v41 + 3032];
          ExpInterlockedPushEntrySList(v49 + 1781, (PSLIST_ENTRY)&v49[v47 + 1783]);
          v47 += 32LL;
          v46 += 512LL;
          --v48;
        }
        while ( v48 );
        *(_QWORD *)(*(_QWORD *)&v10[8 * v41 + 3032] + 61296LL) = 0LL;
        *(_WORD *)(*(_QWORD *)&v10[8 * v41 + 3032] + 65424LL) = 0;
        InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)&v10[8 * v41 + 3032] + 61312LL));
        v50 = 0LL;
        v51 = 0LL;
        v52 = 64LL;
        do
        {
          *(_DWORD *)(v50 + *(_QWORD *)&v10[8 * v41 + 3032] + 61328) = 1751864408;
          v53 = *(union _SLIST_HEADER **)&v10[8 * v41 + 3032];
          ExpInterlockedPushEntrySList(v53 + 3832, (PSLIST_ENTRY)&v53[v51 + 3834]);
          v51 += 4LL;
          v50 += 64LL;
          --v52;
        }
        while ( v52 );
        v40 = *((_DWORD *)v10 + 10);
      }
      while ( ++v41 < v40 );
    }
    v54 = *((_DWORD *)v10 + 33) * v40;
    if ( !v54 )
      v54 = 1;
    if ( v54 > 1 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v54 < 0x88 )
        goto LABEL_73;
      v55 = ExAllocatePoolWithTag((POOL_TYPE)512, 136LL * v54, 0x6D4D6956u);
    }
    else
    {
      v55 = v10 + 3168;
    }
    *((_QWORD *)v10 + 395) = v55;
    v38 = (void *)*((_QWORD *)v10 + 395);
    *((_DWORD *)v10 + 826) = v54;
    v56 = v38;
    if ( v38 )
    {
      memset(v38, 0, 136LL * v54);
      v56 = (void *)*((_QWORD *)v10 + 395);
    }
    if ( v56 )
    {
      for ( i = 0; i < *((_DWORD *)v10 + 826); *v59 = v59 )
      {
        v58 = 136LL * i++;
        v59 = (_QWORD *)(v58 + *((_QWORD *)v10 + 395) + 120LL);
        v59[1] = v59;
      }
      *((_DWORD *)v10 + 830) = -1;
      v60 = 0;
      v61 = 0;
      *((_QWORD *)v10 + 414) = 0LL;
      if ( *((_DWORD *)v10 + 15) )
      {
        while ( 1 )
        {
          v62 = 0;
          v63 = *(unsigned __int16 *)(352LL * v61 + *(_QWORD *)(v6 + 2360));
          v10[v61 + 68] = v60;
          if ( v63 )
            break;
LABEL_55:
          if ( ++v61 >= *((_DWORD *)v10 + 15) )
            goto LABEL_56;
        }
        while ( 1 )
        {
          Node = VidSchiCreateNode(v10, v61, v62, v60);
          *(_QWORD *)&v10[8 * v60 + 440] = Node;
          if ( !Node )
            break;
          if ( (int)VidSchiInitializeNode(Node) < 0 )
            goto LABEL_62;
          ++v60;
          if ( ++v62 >= v63 )
            goto LABEL_55;
        }
        v72 = WdLogNewEntry5_WdAssertion(v60, v65);
        *(_QWORD *)(v72 + 32) = v60;
      }
      else
      {
LABEL_56:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 512;
        ObjectAttributes.ObjectName = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v66 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, &ObjectAttributes, 0LL, 0LL, VidSchiWorkerThread, v10);
        v69 = v66;
        if ( v66 >= 0 )
        {
          VidSchiRequestSchedulerStatus(v10, 1LL, 1LL);
          ObfReferenceObject(*((PVOID *)v10 + 18));
          ZwClose(ThreadHandle);
          return v10;
        }
        v72 = WdLogNewEntry5_WdAssertion(v68, v67);
        *(_QWORD *)(v72 + 32) = v69;
      }
      goto LABEL_60;
    }
LABEL_73:
    _InterlockedAdd(&dword_1C00476BC, 1u);
    v75 = WdLogNewEntry5_WdLowResource(v38);
    *(_QWORD *)(v75 + 24) = 787LL;
    WdLogEvent5_WdLowResource(v75);
    goto LABEL_62;
  }
  v71 = WdLogNewEntry5_WdAssertion(0LL, a2);
  WdLogEvent5_WdAssertion(v71);
  return 0LL;
}
