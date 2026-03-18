/*
 * XREFs of ObCreateObjectEx @ 0x14050DA70
 * Callers:
 *     IoCreateStreamFileObjectEx2 @ 0x140422650 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWaitCompletionPacket @ 0x140437470 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x14043FEB4 (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x140440074 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140442400 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14044515C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x14044DE0C (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 *     NtCreateRegistryTransaction @ 0x140458340 (NtCreateRegistryTransaction.c)
 *     NtCreatePrivateNamespace @ 0x1404692F4 (NtCreatePrivateNamespace.c)
 *     SepFilterToken @ 0x14046CA74 (SepFilterToken.c)
 *     ObCreateObject @ 0x14046F580 (ObCreateObject.c)
 *     AlpcpCreatePort @ 0x140475F08 (AlpcpCreatePort.c)
 *     EtwpAddUmRegEntry @ 0x140480F40 (EtwpAddUmRegEntry.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     IoCreateDevice @ 0x1404A1F50 (IoCreateDevice.c)
 *     PopCreatePowerRequestObject @ 0x1404C614C (PopCreatePowerRequestObject.c)
 *     ExCreateCallback @ 0x1404CC7B0 (ExCreateCallback.c)
 *     IopLoadDriver @ 0x1404D8F84 (IopLoadDriver.c)
 *     MiFinishCreateSection @ 0x14050CC90 (MiFinishCreateSection.c)
 *     SepDuplicateToken @ 0x14050CF30 (SepDuplicateToken.c)
 *     NtCreateEvent @ 0x14050D940 (NtCreateEvent.c)
 *     NtCreateTimer @ 0x14053EE40 (NtCreateTimer.c)
 *     PspAllocateThread @ 0x14053F490 (PspAllocateThread.c)
 *     NtCreateSemaphore @ 0x14053FFB0 (NtCreateSemaphore.c)
 *     NtCreateJobObject @ 0x14054C614 (NtCreateJobObject.c)
 *     NtCreateMutant @ 0x14054F5F0 (NtCreateMutant.c)
 *     WmipCreateGuidObject @ 0x140555430 (WmipCreateGuidObject.c)
 *     NtCreateWorkerFactory @ 0x14055D844 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 *     PspCreateActivityReference @ 0x14056CB48 (PspCreateActivityReference.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 *     MiPartitionObjectCreate @ 0x1405A1868 (MiPartitionObjectCreate.c)
 *     PsCreateSiloContext @ 0x1405A3CA0 (PsCreateSiloContext.c)
 *     NtCreateKeyedEvent @ 0x1405CC324 (NtCreateKeyedEvent.c)
 *     IoCreateController @ 0x1405DA770 (IoCreateController.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406671C0 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140679E44 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateDebugObject @ 0x14067FEAC (NtCreateDebugObject.c)
 *     PopEtEnergyTrackerCreate @ 0x1406D1460 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x1406D7E80 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1406DA90C (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 *     ExpProfileCreate @ 0x1407203E0 (ExpProfileCreate.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObpFreeObjectNameBuffer @ 0x1404F3F60 (ObpFreeObjectNameBuffer.c)
 *     ObpAllocateObject @ 0x140506B40 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x14052DF10 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x1406C30BC (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        unsigned __int8 a1,
        _DWORD *a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9,
        _BYTE *a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  int v18; // eax
  int v19; // ecx
  int v20; // edi
  __int64 v21; // rbx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v31; // rax
  _GENERAL_LOOKASIDE *v32; // r8
  _BYTE *v33; // [rsp+30h] [rbp-38h]
  __int128 v34; // [rsp+40h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v16 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v16 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v16 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v16 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v16 )
        return 3221225626LL;
    }
  }
  LODWORD(v16->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)&v34, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      v20 = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v18 = a7;
      if ( !a7 )
        v18 = a2[26];
      v19 = a8;
      if ( !a8 )
        v19 = a2[27];
      HIDWORD(v16[1].Next) = v18;
      v33 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v19;
      v20 = ObpAllocateObject(v16, a4, (__int64)a2, &v34, a6, &a5, v33);
      if ( v20 >= 0 )
      {
        v21 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v21, 1, 1u, 1953261124);
        }
        *a9 = v21 + 48;
        return (unsigned int)v20;
      }
    }
    else
    {
      v20 = -1073741727;
    }
    if ( *((_QWORD *)&v34 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v34);
    Next = v16[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v16[1].Next, 1);
      v16[2].Next = 0LL;
    }
    v24 = KeGetCurrentPrcb();
    v25 = v24->PPLookasideList[4].P;
    ++v25->TotalFrees;
    if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
      || (++v25->FreeMisses,
          v25 = v24->PPLookasideList[4].L,
          ++v25->TotalFrees,
          LOWORD(v25->ListHead.Alignment) < v25->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v25->ListHead, v16);
    }
    else
    {
      ++v25->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v16);
    }
    return (unsigned int)v20;
  }
  v31 = KeGetCurrentPrcb();
  v32 = v31->PPLookasideList[4].P;
  ++v32->TotalFrees;
  if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
    || (++v32->FreeMisses,
        v32 = v31->PPLookasideList[4].L,
        ++v32->TotalFrees,
        LOWORD(v32->ListHead.Alignment) < v32->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v32->ListHead, v16);
  }
  else
  {
    ++v32->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v32->FreeEx)(v16);
  }
  return (unsigned int)Information;
}
