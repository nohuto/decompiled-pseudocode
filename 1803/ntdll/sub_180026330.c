/*
 * XREFs of sub_180026330 @ 0x180026330
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028310 @ 0x180028310 (sub_180028310.c)
 *     sub_180028360 @ 0x180028360 (sub_180028360.c)
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 *     sub_18002A150 @ 0x18002A150 (sub_18002A150.c)
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_1800794DC @ 0x1800794DC (sub_1800794DC.c)
 *     sub_18007AF64 @ 0x18007AF64 (sub_18007AF64.c)
 *     sub_18007C574 @ 0x18007C574 (sub_18007C574.c)
 *     sub_18007C734 @ 0x18007C734 (sub_18007C734.c)
 *     sub_18007D6C0 @ 0x18007D6C0 (sub_18007D6C0.c)
 *     RtlRegisterThreadWithCsrss @ 0x18007DC60 (RtlRegisterThreadWithCsrss.c)
 *     sub_18007E200 @ 0x18007E200 (sub_18007E200.c)
 *     sub_18007E534 @ 0x18007E534 (sub_18007E534.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     sub_180080944 @ 0x180080944 (sub_180080944.c)
 *     sub_180080AE0 @ 0x180080AE0 (sub_180080AE0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwWorkerFactoryWorkerReady @ 0x18009AAE0 (ZwWorkerFactoryWorkerReady.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwSetInformationWorkerFactory @ 0x18009DD90 (ZwSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x18009E410 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D8968 @ 0x1800D8968 (sub_1800D8968.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 *     sub_180108970 @ 0x180108970 (sub_180108970.c)
 *     sub_180108A18 @ 0x180108A18 (sub_180108A18.c)
 *     sub_180108A98 @ 0x180108A98 (sub_180108A98.c)
 */

void __fastcall __noreturn sub_180026330(__int64 a1)
{
  char v2; // di
  __int64 v3; // rdx
  NTSTATUS v4; // ecx
  ULONG *p_AlpcSendMessageFlags; // rbx
  ULONG DoNotUseThisField_high; // edi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 AlpcSendMessagePort_low; // rsi
  int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(PTP_CALLBACK_INSTANCE); // rax
  signed __int64 v13; // rax
  char v14; // r8
  signed __int64 v15; // rtt
  _RTL_SRWLOCK *v16; // rbx
  _LIST_ENTRY *Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rbx
  PPORT_MESSAGE v19; // rdi
  __int64 v20; // r9
  _PORT_MESSAGE *v21; // rcx
  __int64 v22; // r8
  int v23; // r8d
  __int64 (__fastcall *v24)(PTP_CALLBACK_INSTANCE); // rax
  ULONG *Heap; // rax
  _PORT_MESSAGE *v26; // rax
  NTSTATUS v27; // ecx
  NTSTATUS v28; // ecx
  __int64 v29; // rcx
  unsigned __int16 v30; // r14
  unsigned __int16 v31; // r15
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // r8d
  int v35; // r9d
  int v36; // r10d
  int v37; // r11d
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  _RTL_SRWLOCK *v40; // rbx
  PVOID AlpcSendMessagePort; // rax
  PPORT_MESSAGE v42; // rcx
  char v43; // [rsp+31h] [rbp-2B7h] BYREF
  char v44; // [rsp+32h] [rbp-2B6h]
  char v45; // [rsp+33h] [rbp-2B5h]
  char v46; // [rsp+34h] [rbp-2B4h]
  char v47; // [rsp+35h] [rbp-2B3h]
  char v48; // [rsp+36h] [rbp-2B2h]
  char v49; // [rsp+37h] [rbp-2B1h]
  bool v50; // [rsp+38h] [rbp-2B0h]
  int v51; // [rsp+3Ch] [rbp-2ACh]
  NTSTATUS v52; // [rsp+40h] [rbp-2A8h]
  int v53; // [rsp+44h] [rbp-2A4h]
  ULONG PacketsReturned; // [rsp+48h] [rbp-2A0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-298h]
  struct _PEB *v56; // [rsp+58h] [rbp-290h]
  signed __int64 v57; // [rsp+60h] [rbp-288h]
  __int64 v58; // [rsp+68h] [rbp-280h]
  ULONG *v59; // [rsp+70h] [rbp-278h]
  signed __int64 v60; // [rsp+78h] [rbp-270h]
  PVOID v61; // [rsp+80h] [rbp-268h] BYREF
  int v62; // [rsp+88h] [rbp-260h] BYREF
  int WorkerFactoryInformation; // [rsp+90h] [rbp-258h] BYREF
  __int64 v64; // [rsp+98h] [rbp-250h] BYREF
  __int64 (__fastcall ***v65)(PTP_CALLBACK_INSTANCE); // [rsp+A0h] [rbp-248h] BYREF
  ULONG v66; // [rsp+A8h] [rbp-240h]
  HANDLE v67; // [rsp+C0h] [rbp-228h]
  HANDLE v68; // [rsp+C8h] [rbp-220h]
  struct _TEB *v69; // [rsp+E0h] [rbp-208h]
  struct _TEB *v70; // [rsp+E8h] [rbp-200h]
  struct _TEB *v71; // [rsp+F0h] [rbp-1F8h]
  struct _TEB *v72; // [rsp+100h] [rbp-1E8h]
  struct _TEB *v73; // [rsp+108h] [rbp-1E0h]
  struct _TEB *v74; // [rsp+110h] [rbp-1D8h]
  HANDLE v75; // [rsp+128h] [rbp-1C0h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+130h] [rbp-1B8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+2A0h] [rbp-48h] BYREF

  v57 = a1;
  v64 = 0LL;
  v55 = a1;
  v44 = 0;
  v45 = 0;
  v48 = 0;
  v46 = 0;
  v43 = 0;
  v49 = 0;
  v47 = 0;
  v61 = 0LL;
  v51 = 0;
  RtlRegisterThreadWithCsrss();
  v56 = NtCurrentPeb();
  sub_18007C574(&v64);
  sub_1800794DC(&v61);
  if ( v61 )
    *(_QWORD *)v61 = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v52 = -1073741558;
  }
  else
  {
    v67 = *(HANDLE *)(a1 + 56);
    v52 = ZwWorkerFactoryWorkerReady(v67);
    if ( v52 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v48;
LABEL_39:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_116;
      sub_18007AF64(a1, DeferredWork);
      v46 = 1;
      v16 = (_RTL_SRWLOCK *)v56;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v56->TppWorkerpListLock);
      Blink = v56->TppWorkerpList.Blink;
      if ( Blink->Flink != &v56->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v56->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      Blink->Flink = (_LIST_ENTRY *)DeferredWork;
      v16[115].Ptr = DeferredWork;
      v45 = 1;
      RtlReleaseSRWLockExclusive(v16 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v44 = 1;
      sub_180024854(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
LABEL_43:
      while ( 1 )
      {
        v51 = 0;
        memset(&DeferredWork[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        v53 = 16;
        if ( !DeferredWork[14].AlpcSendMessage )
          break;
        if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_86;
        v19 = DeferredWork[14].AlpcSendMessage;
        memset(
          *(void **)DeferredWork[14].AlpcSendMessage,
          0,
          56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v19->DoNotUseThisField);
        v53 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_46:
        v59 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v68 = *(HANDLE *)(a1 + 56);
        v4 = ZwWaitForWorkViaWorkerFactory(
               v68,
               (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
               DoNotUseThisField_high,
               &PacketsReturned,
               &DeferredWork[11]);
        v52 = v4;
        if ( v4 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v4 = v52;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v59;
          DoNotUseThisField_high = v53;
        }
        if ( v4 )
        {
          v27 = v4 - 128;
          if ( !v27 )
            goto LABEL_116;
          v28 = v27 - 64;
          if ( v28 )
          {
            if ( v28 == 66 )
            {
              v47 = 1;
              goto LABEL_116;
            }
          }
          else
          {
            sub_1800273D0(0LL);
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            sub_180108210(a1);
          if ( (unsigned __int8)sub_1800275D0(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)p_AlpcSendMessageFlags,
                                  PacketsReturned,
                                  DoNotUseThisField_high,
                                  a1,
                                  (__int64)&v43) )
            goto LABEL_116;
          if ( !v43 )
          {
            v7 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
            {
              v58 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
              DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags
                                                                 + 56LL);
              DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
              v62 = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
              v8 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v10 = *(_DWORD *)(a1 + 428);
              v11 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              if ( (_DWORD)v8 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v10 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v8));
                }
              }
              else
              {
                if ( v10 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v8));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v8;
                v29 = *(_QWORD *)(a1 + 48);
                v30 = *(_WORD *)(16 * v8 + v29 + 8);
                v31 = *(_WORD *)(v29 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
                else
                  v11 = 2147353478LL;
                if ( *(_BYTE *)v11 )
                  sub_180108970(a1, AlpcSendMessagePort_low, v8, v31, v30);
                if ( v31 != v30 )
                {
                  ThreadInformation[1] = v30;
                  ThreadInformation[0] = 0LL;
                  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v62, 4u);
                }
              }
              *(GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                v32 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags = v32;
                v69 = NtCurrentTeb();
                v33 = (unsigned int)v32;
                if ( v69->IsImpersonating )
                {
                  v32 = (unsigned int)v32 | 4;
                  DeferredWork[6].AlpcSendMessageFlags = v32;
                  v33 = (unsigned int)v32;
                }
                if ( (unsigned __int8)sub_180028310(v11, v3, v32, v33) )
                {
                  v37 = v34 | 0x10;
                  DeferredWork[6].AlpcSendMessageFlags = v34 | 0x10;
                  v36 = v34 | 0x10;
                  v35 = v34 | 0x10;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v36 = v37 | 0x20;
                  DeferredWork[6].AlpcSendMessageFlags = v37 | 0x20;
                  v35 = v37 | 0x20;
                }
                v70 = NtCurrentTeb();
                if ( v70->PreferredLanguages )
                {
                  v35 = v36 | 0x40;
                  DeferredWork[6].AlpcSendMessageFlags = v36 | 0x40;
                }
                v71 = NtCurrentTeb();
                if ( v71->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags = v35 | 0x80;
              }
              v12 = *(__int64 (__fastcall **)(PTP_CALLBACK_INSTANCE))(v7 + 56);
              if ( v12 == sub_180027A70 )
              {
                sub_180027A70((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( (char *)v12 == (char *)sub_1800254A0 )
              {
                sub_1800254A0(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v58,
                  (__int64)DeferredWork[13].AlpcSendMessage,
                  (__int64)&DeferredWork[13].AlpcSendMessagePort);
              }
              else if ( (char *)v12 == (char *)sub_180029160 )
              {
                sub_180029160(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v58,
                  DeferredWork[13].AlpcSendMessage,
                  &DeferredWork[13].AlpcSendMessagePort);
              }
              else if ( v12 == sub_18002C670 )
              {
                sub_18002C670((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else
              {
                ((void (__fastcall *)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))v12)(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v58,
                  DeferredWork[13].AlpcSendMessage,
                  &DeferredWork[13].AlpcSendMessagePort);
              }
              goto LABEL_25;
            }
            while ( 1 )
            {
              if ( !(unsigned int)sub_180027E0C(a1, DeferredWork, &v65) )
                goto LABEL_116;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                sub_180080944(&DeferredWork[2].AlpcSendMessagePort, v3);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v65;
              v21 = (_PORT_MESSAGE *)**v65;
              DeferredWork[6].AlpcSendMessage = v21;
              DeferredWork[6].AlpcSendMessagePort = v65;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              *(GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                v22 = DeferredWork[6].AlpcSendMessageFlags | 8;
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v72 = NtCurrentTeb();
                if ( v72->IsImpersonating )
                {
                  v22 = (unsigned int)v22 | 4;
                  DeferredWork[6].AlpcSendMessageFlags = v22;
                }
                if ( (unsigned __int8)sub_180028310(v21, v65, v22, v20) )
                  DeferredWork[6].AlpcSendMessageFlags = v23 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                v73 = NtCurrentTeb();
                if ( v73->PreferredLanguages )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                v74 = NtCurrentTeb();
                if ( v74->SavedPriorityState )
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
              }
              v24 = **v65;
              if ( v24 == sub_180028360 )
              {
                sub_180028360((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v24 == sub_18002A150 )
              {
                sub_18002A150((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v24 == sub_1800773B0 )
              {
                sub_1800773B0((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else
              {
                v24((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
LABEL_25:
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v49 = 1;
              v50 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              sub_180027040(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v49 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                sub_180108210(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v13 = *(_QWORD *)(a1 + 8);
              v60 = v13;
              do
              {
                v3 = (unsigned __int16)v13;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_116;
                if ( HIDWORD(v13) && ((v13 & 0x8000u) == 0LL || v50) )
                {
                  v14 = 0;
                  HIDWORD(v60) = HIDWORD(v13) - 1;
                }
                else
                {
                  v14 = 1;
                  LODWORD(v60) = v13 ^ (unsigned __int16)(v13 ^ (v13 + 1));
                }
                v15 = v13;
                v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v60, v13);
                v60 = v13;
              }
              while ( v15 != v13 );
              v43 = v14;
              if ( v14 )
                goto LABEL_43;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v38 = *(_QWORD *)(a1 + 8);
            v57 = v38;
            do
            {
              LODWORD(v57) = v38 ^ (unsigned __int16)(v38 ^ (v38 + 1));
              v39 = v38;
              v38 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v57, v38);
              v57 = v38;
            }
            while ( v39 != v38 );
            WorkerFactoryInformation = 3;
            v75 = *(HANDLE *)(a1 + 56);
            ZwSetInformationWorkerFactory(v75, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_116:
            if ( (DeferredWork[11].Flags & 1) != 0 )
            {
              sub_180080944(&DeferredWork[2].AlpcSendMessagePort, v3);
              DeferredWork[11].Flags &= ~1u;
            }
            if ( v44 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v45 )
            {
              v40 = (_RTL_SRWLOCK *)v56;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v56->TppWorkerpListLock);
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              v42 = DeferredWork[0].AlpcSendMessage;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v42->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v40 + 113);
            }
            if ( v46 )
            {
              sub_18007D6C0(DeferredWork, v3);
              if ( v47 )
                sub_18007C734(a1);
            }
            if ( (PVOID)a1 == qword_18015D3B8 )
            {
              sub_180047198(&qword_18015D3B8, &stru_18015D3B0);
            }
            else if ( a1 == qword_18015D3A8 )
            {
              sub_180047198(&qword_18015D3A8, &unk_18015D3A0);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              sub_18007E8A0((PVOID)a1);
            }
            sub_180080AE0(v64, v3);
            sub_18007E534(v61);
            sub_18007E200(DeferredWork);
            v52 = 0;
            RtlExitUserThread(0);
          }
        }
      }
      v66 = dword_18015D050 + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015D050 + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v26 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v26->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v26->DoNotUseThisField) = 1;
        HIDWORD(v26->DoNotUseThisField) = 16;
        DeferredWork[14].AlpcSendMessage = v26;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_86:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &DeferredWork[12].AlpcSendMessageFlags;
      }
      v53 = DoNotUseThisField_high;
      goto LABEL_46;
    }
  }
  v2 = 1;
  v48 = 1;
  goto LABEL_39;
}
