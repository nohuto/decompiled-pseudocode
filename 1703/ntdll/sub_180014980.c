/*
 * XREFs of sub_180014980 @ 0x180014980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013038 @ 0x180013038 (sub_180013038.c)
 *     RtlRegisterThreadWithCsrss @ 0x1800130C0 (RtlRegisterThreadWithCsrss.c)
 *     sub_180013164 @ 0x180013164 (sub_180013164.c)
 *     sub_1800131F0 @ 0x1800131F0 (sub_1800131F0.c)
 *     sub_180014090 @ 0x180014090 (sub_180014090.c)
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_1800156B0 @ 0x1800156B0 (sub_1800156B0.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 *     sub_180016110 @ 0x180016110 (sub_180016110.c)
 *     sub_18001655C @ 0x18001655C (sub_18001655C.c)
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     sub_180018A00 @ 0x180018A00 (sub_180018A00.c)
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180028830 @ 0x180028830 (sub_180028830.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     sub_1800714DC @ 0x1800714DC (sub_1800714DC.c)
 *     sub_180082410 @ 0x180082410 (sub_180082410.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 *     sub_180082E68 @ 0x180082E68 (sub_180082E68.c)
 *     sub_18008302C @ 0x18008302C (sub_18008302C.c)
 *     sub_1800834C8 @ 0x1800834C8 (sub_1800834C8.c)
 *     sub_1800865E8 @ 0x1800865E8 (sub_1800865E8.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwWorkerFactoryWorkerReady @ 0x1800A5320 (ZwWorkerFactoryWorkerReady.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwSetInformationWorkerFactory @ 0x1800A8530 (ZwSetInformationWorkerFactory.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A8B90 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800DF0F4 @ 0x1800DF0F4 (sub_1800DF0F4.c)
 *     sub_180105430 @ 0x180105430 (sub_180105430.c)
 *     sub_180105AEC @ 0x180105AEC (sub_180105AEC.c)
 *     sub_180105B94 @ 0x180105B94 (sub_180105B94.c)
 *     sub_180105C14 @ 0x180105C14 (sub_180105C14.c)
 */

void __fastcall __noreturn sub_180014980(__int64 a1)
{
  char v2; // di
  __int64 v3; // r8
  _RTL_SRWLOCK *v4; // rbx
  struct _PEB **Blink; // rcx
  PPORT_MESSAGE AlpcSendMessage; // rdi
  PPORT_MESSAGE v7; // rbx
  ULONG DoNotUseThisField_high; // esi
  ULONG *p_AlpcSendMessageFlags; // rbx
  NTSTATUS v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 AlpcSendMessagePort_low; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 (__fastcall *v17)(PTP_CALLBACK_INSTANCE, __int64, __int64); // rax
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  _PORT_MESSAGE *v20; // rcx
  __int64 v21; // r8
  int v22; // r8d
  __int64 (__fastcall *v23)(PTP_CALLBACK_INSTANCE, __int64); // rax
  ULONG *Heap; // rax
  _PORT_MESSAGE *v25; // rax
  NTSTATUS v26; // ecx
  NTSTATUS v27; // ecx
  __int64 v28; // rcx
  unsigned __int16 v29; // r14
  unsigned __int16 v30; // r15
  __int64 AlpcSendMessageFlags; // r8
  int v32; // r8d
  signed __int64 v33; // rax
  signed __int64 v34; // rtt
  _RTL_SRWLOCK *v35; // rbx
  PPORT_MESSAGE v36; // rax
  PVOID AlpcSendMessagePort; // rcx
  bool v38; // [rsp+31h] [rbp-2D7h]
  char v39; // [rsp+32h] [rbp-2D6h] BYREF
  char v40; // [rsp+33h] [rbp-2D5h]
  char v41; // [rsp+34h] [rbp-2D4h]
  char v42; // [rsp+35h] [rbp-2D3h]
  char v43; // [rsp+36h] [rbp-2D2h]
  char v44; // [rsp+37h] [rbp-2D1h]
  char v45; // [rsp+38h] [rbp-2D0h]
  char v46; // [rsp+39h] [rbp-2CFh]
  char v47; // [rsp+3Ah] [rbp-2CEh]
  char v48; // [rsp+3Bh] [rbp-2CDh]
  char v49; // [rsp+3Ch] [rbp-2CCh]
  char v50; // [rsp+3Dh] [rbp-2CBh]
  char v51; // [rsp+3Eh] [rbp-2CAh]
  int v52; // [rsp+40h] [rbp-2C8h]
  NTSTATUS v53; // [rsp+44h] [rbp-2C4h]
  int v54; // [rsp+48h] [rbp-2C0h]
  signed __int64 v55; // [rsp+50h] [rbp-2B8h]
  ULONG PacketsReturned; // [rsp+58h] [rbp-2B0h] BYREF
  __int64 v57; // [rsp+60h] [rbp-2A8h]
  struct _PEB *v58; // [rsp+68h] [rbp-2A0h]
  signed __int64 v59; // [rsp+70h] [rbp-298h]
  __int64 v60; // [rsp+78h] [rbp-290h]
  ULONG *v61; // [rsp+80h] [rbp-288h]
  PVOID BaseAddress; // [rsp+88h] [rbp-280h] BYREF
  int WorkerFactoryInformation; // [rsp+90h] [rbp-278h] BYREF
  int v64; // [rsp+98h] [rbp-270h]
  int v65; // [rsp+A0h] [rbp-268h] BYREF
  int v66; // [rsp+A8h] [rbp-260h]
  HANDLE v67; // [rsp+B0h] [rbp-258h] BYREF
  __int64 (__fastcall ***v68)(PTP_CALLBACK_INSTANCE, __int64); // [rsp+B8h] [rbp-250h] BYREF
  ULONG v69; // [rsp+C8h] [rbp-240h]
  int v70; // [rsp+D4h] [rbp-234h]
  HANDLE v71; // [rsp+E0h] [rbp-228h]
  HANDLE v72; // [rsp+E8h] [rbp-220h]
  struct _TEB *v73; // [rsp+100h] [rbp-208h]
  struct _TEB *v74; // [rsp+108h] [rbp-200h]
  struct _TEB *v75; // [rsp+110h] [rbp-1F8h]
  struct _TEB *v76; // [rsp+120h] [rbp-1E8h]
  struct _TEB *v77; // [rsp+128h] [rbp-1E0h]
  struct _TEB *v78; // [rsp+130h] [rbp-1D8h]
  HANDLE v79; // [rsp+148h] [rbp-1C0h]
  _WORKER_FACTORY_DEFERRED_WORK DeferredWork[15]; // [rsp+150h] [rbp-1B8h] BYREF
  _QWORD ThreadInformation[2]; // [rsp+2C0h] [rbp-48h] BYREF

  v55 = a1;
  v67 = 0LL;
  v57 = a1;
  v40 = 0;
  v41 = 0;
  v44 = 0;
  v42 = 0;
  v39 = 0;
  v45 = 0;
  v43 = 0;
  BaseAddress = 0LL;
  v52 = 0;
  RtlRegisterThreadWithCsrss();
  v58 = NtCurrentPeb();
  sub_180013164(&v67);
  sub_1800131F0(&BaseAddress);
  if ( BaseAddress )
    *(_QWORD *)BaseAddress = DeferredWork;
  memset(DeferredWork, 0, sizeof(DeferredWork));
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
  if ( *(_BYTE *)(a1 + 377) )
  {
    v53 = -1073741558;
  }
  else
  {
    v71 = *(HANDLE *)(a1 + 56);
    v53 = ZwWorkerFactoryWorkerReady(v71);
    if ( v53 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v2 = v44;
LABEL_8:
      RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 368));
      if ( v2 )
        goto LABEL_118;
      sub_180013038((_RTL_SRWLOCK *)a1, (__int64)DeferredWork);
      v42 = 1;
      v4 = (_RTL_SRWLOCK *)v58;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v58->TppWorkerpListLock);
      Blink = (struct _PEB **)v58->TppWorkerpList.Blink;
      if ( *Blink != (struct _PEB *)&v58->TppWorkerpList )
        __fastfail(3u);
      DeferredWork[0].AlpcSendMessage = (PPORT_MESSAGE)&v58->TppWorkerpList;
      DeferredWork[0].AlpcSendMessagePort = Blink;
      *Blink = (struct _PEB *)DeferredWork;
      v4[115].Ptr = DeferredWork;
      v41 = 1;
      RtlReleaseSRWLockExclusive(v4 + 113);
      memset(&DeferredWork[2].AlpcSendMessagePort, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v40 = 1;
      sub_180017A78(a1, &DeferredWork[14].AlpcSendMessagePort, 0LL);
LABEL_12:
      while ( 1 )
      {
        v52 = 0;
        memset(&DeferredWork[12].AlpcSendMessageFlags, 0, 0x20uLL);
        AlpcSendMessage = DeferredWork[14].AlpcSendMessage;
        v54 = 16;
        if ( !DeferredWork[14].AlpcSendMessage )
          break;
        if ( LODWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField) != 1 )
          goto LABEL_82;
        v7 = DeferredWork[14].AlpcSendMessage;
        memset(
          *(void **)DeferredWork[14].AlpcSendMessage,
          0,
          56LL * HIDWORD(DeferredWork[14].AlpcSendMessage->DoNotUseThisField));
        DoNotUseThisField_high = HIDWORD(v7->DoNotUseThisField);
        v54 = DoNotUseThisField_high;
        p_AlpcSendMessageFlags = *(ULONG **)&AlpcSendMessage->u1.s1.DataLength;
LABEL_15:
        v61 = p_AlpcSendMessageFlags;
        PacketsReturned = 0;
        v72 = *(HANDLE *)(a1 + 56);
        v10 = ZwWaitForWorkViaWorkerFactory(
                v72,
                (PFILE_IO_COMPLETION_INFORMATION)p_AlpcSendMessageFlags,
                DoNotUseThisField_high,
                &PacketsReturned,
                &DeferredWork[11]);
        v53 = v10;
        if ( v10 )
          PacketsReturned = 0;
        if ( (DeferredWork[11].Flags & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, DeferredWork[11].AlpcSendMessage);
          DeferredWork[11].Flags &= ~1u;
          v10 = v53;
          LODWORD(p_AlpcSendMessageFlags) = (_DWORD)v61;
          DoNotUseThisField_high = v54;
        }
        if ( v10 )
        {
          v26 = v10 - 128;
          if ( !v26 )
            goto LABEL_118;
          v27 = v26 - 64;
          if ( v27 )
          {
            if ( v27 == 66 )
            {
              v43 = 1;
              goto LABEL_118;
            }
          }
          else
          {
            sub_180015A40(0LL);
          }
        }
        else
        {
          if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
            sub_180105430(a1);
          if ( (unsigned __int8)sub_180015C50(
                                  (unsigned int)DeferredWork,
                                  (_DWORD)p_AlpcSendMessageFlags,
                                  PacketsReturned,
                                  DoNotUseThisField_high,
                                  a1,
                                  (__int64)&v39) )
            goto LABEL_118;
          if ( !v39 )
          {
            v12 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
            if ( *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags )
            {
              v60 = *(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags;
              DeferredWork[6].AlpcSendMessage = *(PPORT_MESSAGE *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags
                                                                 + 56LL);
              DeferredWork[6].AlpcSendMessagePort = *(PVOID *)&DeferredWork[12].AlpcSendMessageFlags;
              v65 = *(unsigned __int8 *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 68LL);
              v13 = *(unsigned int *)(*(_QWORD *)&DeferredWork[12].AlpcSendMessageFlags + 64LL);
              AlpcSendMessagePort_low = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              v15 = *(_DWORD *)(a1 + 428);
              v16 = LODWORD(DeferredWork[14].AlpcSendMessagePort);
              if ( (_DWORD)v13 == LODWORD(DeferredWork[14].AlpcSendMessagePort) )
              {
                if ( v15 == -1 && !LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                {
                  LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v13));
                }
              }
              else
              {
                if ( v15 == -1 )
                {
                  if ( LOBYTE(DeferredWork[14].AlpcSendMessageFlags) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40)
                                                                    + 4LL
                                                                    * LODWORD(DeferredWork[14].AlpcSendMessagePort)));
                  else
                    LOBYTE(DeferredWork[14].AlpcSendMessageFlags) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v13));
                }
                LODWORD(DeferredWork[14].AlpcSendMessagePort) = v13;
                v28 = *(_QWORD *)(a1 + 48);
                v29 = *(_WORD *)(v28 + 16 * v13 + 8);
                v30 = *(_WORD *)(v28 + 16 * AlpcSendMessagePort_low + 8);
                if ( RtlGetCurrentServiceSessionId() )
                  v16 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
                else
                  v16 = 2147353478LL;
                if ( *(_BYTE *)v16 )
                  sub_180105AEC(a1, AlpcSendMessagePort_low, v13, v30, v29);
                if ( v30 != v29 )
                {
                  ThreadInformation[1] = v29;
                  ThreadInformation[0] = 0LL;
                  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadGroupInformation, ThreadInformation, 0x10u);
                  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadIdealProcessor, &v65, 4u);
                }
              }
              *(GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags
                && (*(_BYTE *)(*(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags + 436LL) & 1) == 0 )
              {
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v73 = NtCurrentTeb();
                AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags;
                if ( v73->IsImpersonating )
                {
                  AlpcSendMessageFlags = DeferredWork[6].AlpcSendMessageFlags | 4;
                  DeferredWork[6].AlpcSendMessageFlags |= 4u;
                }
                if ( (unsigned __int8)sub_18001655C(v16, v11, AlpcSendMessageFlags) )
                  DeferredWork[6].AlpcSendMessageFlags = v32 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v66 = 1;
                  v46 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                }
                else
                {
                  v66 = 0;
                  v46 = 0;
                }
                v74 = NtCurrentTeb();
                if ( v74->PreferredLanguages )
                {
                  v47 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                }
                else
                {
                  v47 = 0;
                }
                v75 = NtCurrentTeb();
                if ( v75->SavedPriorityState )
                {
                  v48 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
                }
                else
                {
                  v48 = 0;
                }
              }
              v17 = *(__int64 (__fastcall **)(PTP_CALLBACK_INSTANCE, __int64, __int64))(v12 + 56);
              if ( (char *)v17 == (char *)sub_180016110 )
              {
                sub_180016110((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( (char *)v17 == (char *)sub_180016810 )
              {
                sub_180016810((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v17 == sub_180014570 )
              {
                sub_180014570(
                  (PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort,
                  v60,
                  (__int64)DeferredWork[13].AlpcSendMessage);
              }
              else if ( (char *)v17 == (char *)sub_180018A00 )
              {
                sub_180018A00(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v60,
                  DeferredWork[13].AlpcSendMessage,
                  &DeferredWork[13].AlpcSendMessagePort);
              }
              else
              {
                ((void (__fastcall *)(PVOID *, __int64, PPORT_MESSAGE, PVOID *))v17)(
                  &DeferredWork[2].AlpcSendMessagePort,
                  v60,
                  DeferredWork[13].AlpcSendMessage,
                  &DeferredWork[13].AlpcSendMessagePort);
              }
              goto LABEL_37;
            }
            while ( 1 )
            {
              if ( !(unsigned int)sub_180028830(a1, DeferredWork, &v68) )
                goto LABEL_118;
              if ( (DeferredWork[11].Flags & 1) != 0 )
              {
                sub_180082E68(&DeferredWork[2].AlpcSendMessagePort);
                DeferredWork[11].Flags &= ~1u;
              }
              DeferredWork[1].AlpcSendMessagePort = v68;
              v20 = (_PORT_MESSAGE *)**v68;
              DeferredWork[6].AlpcSendMessage = v20;
              DeferredWork[6].AlpcSendMessagePort = v68;
              *(_QWORD *)&DeferredWork[7].AlpcSendMessageFlags = DeferredWork[2].AlpcSendMessage;
              *(GUID *)&DeferredWork[12].AlpcSendMessage = NtCurrentTeb()->ActivityId;
              if ( DeferredWork[2].AlpcSendMessage
                && (*(_BYTE *)(&DeferredWork[2].AlpcSendMessage[10].CallbackId + 1) & 1) == 0 )
              {
                DeferredWork[6].AlpcSendMessageFlags |= 8u;
                v76 = NtCurrentTeb();
                v21 = DeferredWork[6].AlpcSendMessageFlags;
                if ( v76->IsImpersonating )
                {
                  v21 = DeferredWork[6].AlpcSendMessageFlags | 4;
                  DeferredWork[6].AlpcSendMessageFlags |= 4u;
                }
                if ( (unsigned __int8)sub_18001655C(v20, v68, v21) )
                  DeferredWork[6].AlpcSendMessageFlags = v22 | 0x10;
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                {
                  v64 = 1;
                  v49 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x20u;
                }
                else
                {
                  v64 = 0;
                  v49 = 0;
                }
                v77 = NtCurrentTeb();
                if ( v77->PreferredLanguages )
                {
                  v50 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x40u;
                }
                else
                {
                  v50 = 0;
                }
                v78 = NtCurrentTeb();
                if ( v78->SavedPriorityState )
                {
                  v51 = 1;
                  DeferredWork[6].AlpcSendMessageFlags |= 0x80u;
                }
                else
                {
                  v51 = 0;
                }
              }
              v23 = **v68;
              if ( (char *)v23 == (char *)sub_1800165B0 )
              {
                sub_1800165B0((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort);
              }
              else if ( v23 == sub_180014090 )
              {
                sub_180014090((PTP_CALLBACK_INSTANCE)&DeferredWork[2].AlpcSendMessagePort, (__int64)v68);
              }
              else
              {
                ((void (__fastcall *)(PVOID *))v23)(&DeferredWork[2].AlpcSendMessagePort);
              }
LABEL_37:
              if ( (BYTE4(DeferredWork[5].AlpcSendMessagePort) & 4) != 0 )
                v45 = 1;
              v38 = LODWORD(DeferredWork[5].AlpcSendMessagePort) == 4;
              sub_1800156B0(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[1].AlpcSendMessagePort = 0LL;
              if ( v45 )
                break;
              if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
                sub_180105430(a1);
              _m_prefetchw((const void *)(a1 + 8));
              v18 = *(_QWORD *)(a1 + 8);
              v59 = v18;
              do
              {
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_118;
                if ( HIDWORD(v18) && ((v59 & 0x8000u) == 0LL || v38) )
                {
                  LOBYTE(v3) = 0;
                  HIDWORD(v59) = HIDWORD(v18) - 1;
                }
                else
                {
                  LOBYTE(v3) = 1;
                  LODWORD(v59) = (unsigned __int16)(v59 ^ (v59 + 1)) ^ (unsigned int)v59;
                }
                v19 = v18;
                v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v59, v18);
                v59 = v18;
              }
              while ( v19 != v18 );
              v39 = v3;
              v70 = 1;
              if ( (_BYTE)v3 )
                goto LABEL_12;
            }
            _m_prefetchw((const void *)(a1 + 8));
            v33 = *(_QWORD *)(a1 + 8);
            v55 = v33;
            do
            {
              LODWORD(v55) = (unsigned __int16)(v55 ^ (v55 + 1)) ^ (unsigned int)v55;
              v34 = v33;
              v33 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v55, v33);
              v55 = v33;
            }
            while ( v34 != v33 );
            WorkerFactoryInformation = 3;
            v79 = *(HANDLE *)(a1 + 56);
            ZwSetInformationWorkerFactory(v79, WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
LABEL_118:
            if ( (DeferredWork[11].Flags & 1) != 0 )
            {
              sub_180082E68(&DeferredWork[2].AlpcSendMessagePort);
              DeferredWork[11].Flags &= ~1u;
            }
            if ( v40 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v41 )
            {
              v35 = (_RTL_SRWLOCK *)v58;
              RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&v58->TppWorkerpListLock);
              v36 = DeferredWork[0].AlpcSendMessage;
              AlpcSendMessagePort = DeferredWork[0].AlpcSendMessagePort;
              if ( DeferredWork[0].AlpcSendMessage->ClientId.UniqueProcess != DeferredWork
                || *(_WORKER_FACTORY_DEFERRED_WORK **)DeferredWork[0].AlpcSendMessagePort != DeferredWork )
              {
                __fastfail(3u);
              }
              *(_QWORD *)DeferredWork[0].AlpcSendMessagePort = DeferredWork[0].AlpcSendMessage;
              v36->ClientId.UniqueProcess = AlpcSendMessagePort;
              RtlReleaseSRWLockExclusive(v35 + 113);
            }
            if ( v42 )
            {
              sub_180082410(DeferredWork);
              if ( v43 )
                sub_1800714DC(a1);
            }
            if ( (PVOID)a1 == qword_18015C378 )
            {
              sub_180018928(&qword_18015C378, &stru_18015C380, v3);
            }
            else if ( a1 == qword_18015C368 )
            {
              sub_180018928(&qword_18015C368, &unk_18015C370, v3);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              sub_180082A08((PVOID)a1);
            }
            sub_1800865E8(v67);
            sub_1800834C8(BaseAddress);
            sub_18008302C(DeferredWork);
            v53 = 0;
            RtlExitUserThread(0);
          }
        }
      }
      v69 = dword_18015C000 + 3145728;
      Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_18015C000 + 3145728) | 8, 0x390uLL);
      p_AlpcSendMessageFlags = Heap;
      if ( Heap )
      {
        v25 = (_PORT_MESSAGE *)(Heap + 224);
        *(_QWORD *)&v25->u1.s1.DataLength = p_AlpcSendMessageFlags;
        LODWORD(v25->DoNotUseThisField) = 1;
        HIDWORD(v25->DoNotUseThisField) = 16;
        DeferredWork[14].AlpcSendMessage = v25;
        DoNotUseThisField_high = 16;
      }
      else
      {
LABEL_82:
        DoNotUseThisField_high = 1;
        p_AlpcSendMessageFlags = &DeferredWork[12].AlpcSendMessageFlags;
      }
      v54 = DoNotUseThisField_high;
      goto LABEL_15;
    }
  }
  v2 = 1;
  v44 = 1;
  goto LABEL_8;
}
