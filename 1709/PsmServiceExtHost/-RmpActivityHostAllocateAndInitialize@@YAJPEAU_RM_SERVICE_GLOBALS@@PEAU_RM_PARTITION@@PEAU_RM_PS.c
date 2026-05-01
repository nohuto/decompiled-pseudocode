/*
 * XREFs of ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800191D4
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180018D04 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCESS_INFO@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180035B0C (-RmpActivityHostCreateHostProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PROCES.c)
 * Callees:
 *     ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x180019410 (-RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z.c)
 *     ?HampHostAllocateState@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x1800195A4 (-HampHostAllocateState@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_TP_CALLBACK_ENVIRON_V3@@@Z.c)
 *     ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z @ 0x180019608 (-RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAX@Z.c)
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019784 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019884 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001F378 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall RmpActivityHostAllocateAndInitialize(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PARTITION *a2,
        struct _RM_PSM_HOST_INFO *a3,
        char a4,
        struct _RM_ACTIVITY_HOST **a5)
{
  BOOL v8; // ebp
  char *Heap; // rax
  char *v11; // rbx
  unsigned int v12; // r14d
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbp
  unsigned int v16; // r8d
  int State; // edi

  v8 = a3 == 0LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x538uLL);
  v11 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x538uLL);
    *((_QWORD *)v11 + 5) = a1;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
      __fastfail(0xEu);
    v12 = a4 & 1;
    *((_QWORD *)v11 + 6) = a2;
    *((_DWORD *)v11 + 14) = v8;
    *((_QWORD *)v11 + 159) = v11 + 1264;
    *((_QWORD *)v11 + 158) = v11 + 1264;
    HampHostInitialize(v12, a3, (struct _RM_HAM_ACTIVITY_HOST *)(v11 + 64));
    v13 = v11 + 816;
    v14 = 2LL;
    do
    {
      v13[2] = 0LL;
      v13[1] = v13;
      *v13 = v13;
      v13 += 3;
      --v14;
    }
    while ( v14 );
    if ( a3 )
      v15 = *((_QWORD *)a3 + 68);
    else
      v15 = HamObjectIdGenerate(0LL);
    memset_0(v11, 0, 0x28uLL);
    *((_QWORD *)v11 + 3) = v15;
    *((_DWORD *)v11 + 4) = 1;
    *((_DWORD *)v11 + 8) = 0;
    *((_QWORD *)v11 + 1) = HIBYTE(v15)
                         + 37
                         * (BYTE6(v15)
                          + 37
                          * (BYTE5(v15)
                           + 37
                           * (BYTE4(v15)
                            + 37
                            * (BYTE3(v15)
                             + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883LL)))))));
    if ( a3 )
      v16 = *((_DWORD *)a3 + 133);
    else
      v16 = 0;
    State = RmpPolicyResizeScratchBuffers((struct _RM_PARTITION *)((char *)a2 + 144), ++*((_DWORD *)a2 + 48), v16);
    if ( State >= 0 )
      State = 0;
    if ( State >= 0 )
    {
      State = RmpEnforcementInfoInitializeCommon((struct _RM_ACTIVITY_HOST *)v11);
      if ( State >= 0 )
      {
        if ( !a3 )
          goto LABEL_17;
        if ( v12 )
          *((_DWORD *)v11 + 253) |= 0x180u;
        State = RmpSystemReferenceHostWithPsm((struct _RM_ACTIVITY_HOST *)v11, (void **)v11 + 116);
        if ( State >= 0 )
        {
LABEL_17:
          State = HampHostAllocateState(
                    (struct _RM_HAM_ACTIVITY_HOST *)(v11 + 64),
                    (struct _TP_CALLBACK_ENVIRON_V3 *)((char *)a1 + 1592));
          if ( State >= 0 )
          {
            State = TpAllocWork(v11 + 1240, RmpActivityHostCommitUseUpdateWorker, v11, (char *)a1 + 1592);
            if ( State >= 0 )
            {
              State = 0;
              *a5 = (struct _RM_ACTIVITY_HOST *)v11;
              v11 = 0LL;
            }
          }
        }
      }
    }
    if ( v11 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
