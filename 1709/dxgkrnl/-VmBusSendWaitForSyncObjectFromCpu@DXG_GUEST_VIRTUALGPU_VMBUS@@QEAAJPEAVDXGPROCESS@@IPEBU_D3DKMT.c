/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0199190
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00CF1AC (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C01C78F8 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0198BC8 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4)
{
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _KEVENT *p_Event; // r14
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rsi
  __int64 v25; // rax
  char *v26; // r12
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r10
  int v33; // r9d
  __int64 v34; // rax
  struct _MDL *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  PVOID Object; // [rsp+48h] [rbp-29h] BYREF
  PVOID v44[2]; // [rsp+50h] [rbp-21h] BYREF
  char v45[8]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v46; // [rsp+68h] [rbp-9h]
  char v47; // [rsp+70h] [rbp-1h]
  _BYTE v48[24]; // [rsp+78h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp+1Fh] BYREF
  unsigned int v50; // [rsp+F0h] [rbp+7Fh]

  if ( a4->ObjectCount >= 0x2AAA )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 4263LL;
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  v46 = *((_QWORD *)this + 2);
  v47 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  v12 = *(unsigned int *)(*((_QWORD *)this + 2) + 176LL);
  if ( (_DWORD)v12 == 1 )
  {
    hAsyncEvent = a4->hAsyncEvent;
    if ( hAsyncEvent )
    {
      v16 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      p_Event = (struct _KEVENT *)Object;
      v14 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = a4->hAsyncEvent;
        *(_QWORD *)(v21 + 32) = v14;
        WdLogEvent5_WdWarning(v21);
        goto LABEL_36;
      }
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      p_Event = &Event;
    }
    v50 = 12 * a4->ObjectCount + 56;
    v22 = operator new(v50, 0x4B677844u, 1, (POOL_TYPE)512);
    v24 = v22;
    if ( !v22 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v23);
      *(_QWORD *)(v25 + 24) = 4308LL;
      WdLogEvent5_WdLowResource(v25);
      LODWORD(v14) = -1073741801;
      goto LABEL_31;
    }
    v22[1] = 0LL;
    *v22 = 0LL;
    *((_DWORD *)v22 + 4) = 22;
    *((_DWORD *)v22 + 2) = DXGPROCESS::GetHostProcess(a2);
    *((_DWORD *)v24 + 8) = a4->Flags.0;
    *((_DWORD *)v24 + 6) = a3;
    *((_DWORD *)v24 + 7) = a4->ObjectCount;
    v24[5] = p_Event;
    *((_BYTE *)v24 + 48) = p_Event != &Event;
    v26 = (char *)v24 + 4 * a4->ObjectCount;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v48, a2);
    v28 = 0LL;
    while ( (unsigned int)v28 < a4->ObjectCount )
    {
      v29 = (unsigned int)v28;
      v30 = a4->ObjectHandleArray[(unsigned int)v28];
      if ( (_DWORD)v30 )
      {
        v31 = ((unsigned int)v30 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v31 >= *((_DWORD *)a2 + 60)
          || (v32 = *((_QWORD *)a2 + 28),
              v27 = (unsigned int)v31,
              v30 = ((unsigned int)v30 >> 25) & 0x60,
              v33 = *(_DWORD *)(v32 + 16 * v31 + 8),
              (_BYTE)v30 != (*(_BYTE *)(v32 + 16 * v31 + 8) & 0x60))
          || (v33 & 0x2000) != 0
          || (v33 & 0x1F) == 0
          || (v27 = 2LL * (unsigned int)v31, (*(_BYTE *)(v32 + 16LL * (unsigned int)v31 + 8) & 0x1F) != 0xB)
          || (v34 = *(_QWORD *)(v32 + 16LL * (unsigned int)v31)) == 0 )
        {
          v41 = WdLogNewEntry5_WdWarning(v30, v28, v27);
          v42 = a4->ObjectHandleArray[v29];
          goto LABEL_27;
        }
        *((_DWORD *)v24 + (unsigned int)v28 + 14) = *(_DWORD *)(v34 + 44);
      }
      else if ( (_DWORD)v28 )
      {
        v41 = WdLogNewEntry5_WdWarning(v30, v28, v27);
        v42 = a4->ObjectHandleArray[v29];
        *(_QWORD *)(v41 + 32) = 4345LL;
LABEL_27:
        *(_QWORD *)(v41 + 24) = v42;
        WdLogEvent5_WdWarning(v41);
        LODWORD(v14) = -1073741811;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
LABEL_31:
        if ( p_Event && p_Event != &Event )
          ObfDereferenceObject(p_Event);
        goto LABEL_34;
      }
      v28 = (unsigned int)(v28 + 1);
      *(_QWORD *)&v26[8 * v29 + 56] = a4->FenceValueArray[v29];
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v48);
    LODWORD(v14) = VmBusSendSyncMessageStatusReturn(
                     *(struct VMBCHANNEL__ **)this,
                     (struct DXGKVMB_COMMAND_BASE *)v24,
                     v50,
                     v35);
    if ( (int)v14 < 0 )
      goto LABEL_31;
    if ( !a4->hAsyncEvent )
    {
      v44[0] = (PVOID)(*((_QWORD *)this + 2) + 2280LL);
      v44[1] = p_Event;
      if ( !KeWaitForMultipleObjects(2u, v44, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        v40 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
        *(_QWORD *)(v40 + 24) = this;
        WdLogEvent5_WdEvent(v40);
        LODWORD(v14) = -1073741130;
        goto LABEL_31;
      }
      LODWORD(v14) = 0;
    }
LABEL_34:
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
    goto LABEL_36;
  }
  v13 = WdLogNewEntry5_WdWarning(v12, v10, v11);
  *(_QWORD *)(v13 + 24) = 4270LL;
  WdLogEvent5_WdWarning(v13);
  LODWORD(v14) = -1073741130;
LABEL_36:
  if ( v47 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v45);
  return (unsigned int)v14;
}
