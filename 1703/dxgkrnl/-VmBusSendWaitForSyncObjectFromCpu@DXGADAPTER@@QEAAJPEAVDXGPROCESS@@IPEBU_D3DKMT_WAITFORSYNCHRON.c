/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0032844
 * Callers:
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C008D1C0 (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z @ 0x1C0032468 (-VmBusSendSyncMessageStatusReturn@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND@@IPEAU_MDL@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGADAPTER::VmBusSendWaitForSyncObjectFromCpu(
        struct VMBCHANNEL__ **this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  HANDLE hAsyncEvent; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KEVENT *p_Event; // rsi
  __int64 v21; // rax
  UINT v22; // ebx
  _DWORD *v23; // rax
  __int64 v24; // rcx
  _DWORD *v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r12
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  struct _MDL *v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  _DWORD *v40; // [rsp+48h] [rbp-29h]
  PVOID v41[2]; // [rsp+50h] [rbp-21h] BYREF
  char v42[8]; // [rsp+60h] [rbp-11h] BYREF
  DXGADAPTER *v43; // [rsp+68h] [rbp-9h]
  char v44; // [rsp+70h] [rbp-1h]
  struct _KEVENT Event; // [rsp+78h] [rbp+7h] BYREF
  _BYTE v46[24]; // [rsp+90h] [rbp+1Fh] BYREF
  PVOID Object; // [rsp+D8h] [rbp+67h] BYREF

  v43 = (DXGADAPTER *)this;
  v44 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
  if ( *((_DWORD *)this + 44) != 1 )
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 2668LL;
    WdLogEvent5_WdWarning(v12);
    LODWORD(v13) = -1073741130;
    goto LABEL_28;
  }
  hAsyncEvent = a4->hAsyncEvent;
  if ( hAsyncEvent )
  {
    v15 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    p_Event = (struct _KEVENT *)Object;
    v13 = v15;
    if ( v15 < 0 )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
      *(_QWORD *)(v21 + 24) = a4->hAsyncEvent;
      *(_QWORD *)(v21 + 32) = v13;
      WdLogEvent5_WdWarning(v21);
      goto LABEL_28;
    }
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    p_Event = &Event;
  }
  v22 = 12 * (a4->ObjectCount + 4);
  v23 = operator new(v22, v16, 1, (enum _POOL_TYPE)512);
  v25 = v23;
  if ( !v23 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v26 + 24) = 2706LL;
    WdLogEvent5_WdLowResource(v26);
    LODWORD(v13) = -1073741801;
    goto LABEL_24;
  }
  v23[2] = 25;
  v23[3] = DXGPROCESS::GetHostProcess(a2);
  v25[6] = a4->Flags.0;
  v25[4] = a3;
  v25[5] = a4->ObjectCount;
  *((_QWORD *)v25 + 4) = p_Event;
  *((_BYTE *)v25 + 40) = p_Event != &Event;
  v40 = &v25[a4->ObjectCount + 12];
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v46, a2, v27, v28);
  v31 = 0LL;
  if ( a4->ObjectCount )
  {
    while ( 1 )
    {
      ObjectHandleArray = a4->ObjectHandleArray;
      v33 = ObjectHandleArray[v31];
      v34 = (ObjectHandleArray[v31] >> 6) & 0xFFFFFF;
      if ( (unsigned int)v34 >= *((_DWORD *)a2 + 52) )
        break;
      v30 = *((_QWORD *)a2 + 24);
      v33 = ((unsigned int)v33 >> 26) & 0x30;
      v29 = *(unsigned int *)(v30 + 16LL * (unsigned int)v34 + 8);
      if ( (_BYTE)v33 != (*(_BYTE *)(v30 + 16LL * (unsigned int)v34 + 8) & 0x30) )
        break;
      if ( (v29 & 0x1000) != 0 )
        break;
      if ( (v29 & 0xF) == 0 )
        break;
      v33 = 2LL * (unsigned int)v34;
      if ( (*(_BYTE *)(v30 + 16LL * (unsigned int)v34 + 8) & 0xF) != 0xB )
        break;
      v35 = *(_QWORD *)(v30 + 16LL * (unsigned int)v34);
      if ( !v35 )
        break;
      v25[v31 + 12] = *(_DWORD *)(*(_QWORD *)(v35 + 32) + 76LL);
      *(_QWORD *)&v40[2 * v31] = a4->FenceValueArray[v31];
      v31 = (unsigned int)(v31 + 1);
      if ( (unsigned int)v31 >= a4->ObjectCount )
        goto LABEL_17;
    }
    v38 = WdLogNewEntry5_WdWarning(v34, v33, v29, v30);
    *(_QWORD *)(v38 + 24) = a4->ObjectHandleArray[v31];
    WdLogEvent5_WdWarning(v38);
    LODWORD(v13) = -1073741811;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
    goto LABEL_24;
  }
LABEL_17:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
  LODWORD(v13) = VmBusSendSyncMessageStatusReturn(this[484], (struct DXGKVMB_COMMAND *)v25, v22, v36);
  if ( (int)v13 < 0 )
  {
LABEL_24:
    if ( p_Event && p_Event != &Event )
      ObfDereferenceObject(p_Event);
    goto LABEL_27;
  }
  if ( !a4->hAsyncEvent )
  {
    v41[0] = this + 282;
    v41[1] = p_Event;
    if ( !KeWaitForMultipleObjects(2u, v41, WaitAny, Executive, 0, 0, 0LL, 0LL) )
    {
      v37 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v37 + 24) = this;
      WdLogEvent5_WdEvent(v37);
      LODWORD(v13) = -1073741130;
      goto LABEL_24;
    }
    LODWORD(v13) = 0;
  }
LABEL_27:
  operator delete[](v25);
LABEL_28:
  if ( v44 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
  return (unsigned int)v13;
}
