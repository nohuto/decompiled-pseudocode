/*
 * XREFs of ObCreateObjectEx @ 0x1404C3B90
 * Callers:
 *     NtCreateTimer @ 0x1404B2E9C (NtCreateTimer.c)
 *     NtCreateSemaphore @ 0x1404C2310 (NtCreateSemaphore.c)
 *     SepDuplicateToken @ 0x1404C28D0 (SepDuplicateToken.c)
 *     MiFinishCreateSection @ 0x1404C37A0 (MiFinishCreateSection.c)
 *     NtCreateEvent @ 0x1404C3A60 (NtCreateEvent.c)
 *     AlpcpCreatePort @ 0x1404DD4C0 (AlpcpCreatePort.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     WmipCreateGuidObject @ 0x140502308 (WmipCreateGuidObject.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     NtCreateWorkerFactory @ 0x14052E3E4 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x14052E740 (NtCreateTimer2.c)
 *     NtCreateJobObject @ 0x14052FF14 (NtCreateJobObject.c)
 *     NtCreatePrivateNamespace @ 0x1405400D0 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x140541590 (IoCreateDevice.c)
 *     SepFilterToken @ 0x140542044 (SepFilterToken.c)
 *     ObCreateObject @ 0x140544A50 (ObCreateObject.c)
 *     ExCreateCallback @ 0x140557360 (ExCreateCallback.c)
 *     NtCreateWaitCompletionPacket @ 0x14055D37C (NtCreateWaitCompletionPacket.c)
 *     NtCreateIoCompletion @ 0x140564C50 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140568EF8 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x1405716D8 (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1405770B4 (NtAllocateReserveObject.c)
 *     NtCreateRegistryTransaction @ 0x140580D98 (NtCreateRegistryTransaction.c)
 *     NtCreateMutant @ 0x140589664 (NtCreateMutant.c)
 *     EtwpAddUmRegEntry @ 0x1405909C0 (EtwpAddUmRegEntry.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140592DF0 (IoCreateStreamFileObjectEx2.c)
 *     PspAllocateThread @ 0x1405B8EE8 (PspAllocateThread.c)
 *     EtwpCreateUmReplyObject @ 0x1405C3160 (EtwpCreateUmReplyObject.c)
 *     PspCreateActivityReference @ 0x1405C3548 (PspCreateActivityReference.c)
 *     EtwpRealtimeConnect @ 0x1405E4288 (EtwpRealtimeConnect.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 *     PsCreateSiloContext @ 0x1406208F0 (PsCreateSiloContext.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 *     NtCreateKeyedEvent @ 0x140649620 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x14064E46C (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406F4EE8 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateDebugObject @ 0x14070F7F0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x14071C030 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1407719C4 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x1407745A4 (TtmiCreateEventQueue.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1407B8BD4 (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x1407C7550 (ExpProfileCreate.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1404D2B80 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x1405A1430 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405ACE00 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x14075AF1C (ObpRegisterObject.c)
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
        __int64 a10)
{
  struct _KPRCB *CurrentPrcb; // rbp
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v16; // rbx
  int Information; // esi
  __int64 v18; // r8
  int v19; // eax
  int v20; // ecx
  int Object; // edi
  __int64 v22; // rbx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v30; // rdx
  _GENERAL_LOOKASIDE *v31; // rcx
  struct _KPRCB *v32; // rax
  _GENERAL_LOOKASIDE *v33; // r8
  __int64 v34; // [rsp+30h] [rbp-38h]
  char v35[8]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v36; // [rsp+48h] [rbp-20h]

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
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, (unsigned int)v35, (__int64)v16, 0);
  if ( Information >= 0 )
  {
    if ( ((__int64)v16->Next & a2[18]) != 0 )
    {
      Object = -1073741811;
    }
    else if ( ((__int64)v16->Next & 0x10) == 0 || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a1) )
    {
      v19 = a7;
      if ( !a7 )
        v19 = a2[26];
      v20 = a8;
      if ( !a8 )
        v20 = a2[27];
      HIDWORD(v16[1].Next) = v19;
      v34 = a10;
      *((_DWORD *)&v16[1].Next + 2) = v20;
      Object = ObpAllocateObject((_DWORD)v16, a4, (_DWORD)a2, (unsigned int)v35, a6, (__int64)&a5, v34);
      if ( Object >= 0 )
      {
        v22 = a5;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(a5);
          ObpPushStackInfo(v22, 1, 1u, 1953261124);
        }
        *a9 = v22 + 48;
        return (unsigned int)Object;
      }
    }
    else
    {
      Object = -1073741727;
    }
    if ( v36 )
      ObpFreeObjectNameBuffer(v35);
    Next = v16[2].Next;
    if ( Next )
    {
      LOBYTE(v18) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v16[1].Next), v18);
      v16[2].Next = 0LL;
    }
    v30 = KeGetCurrentPrcb();
    v31 = v30->PPLookasideList[4].P;
    ++v31->TotalFrees;
    if ( LOWORD(v31->ListHead.Alignment) < v31->Depth
      || (++v31->FreeMisses,
          v31 = v30->PPLookasideList[4].L,
          ++v31->TotalFrees,
          LOWORD(v31->ListHead.Alignment) < v31->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v31->ListHead, v16);
    }
    else
    {
      ++v31->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v31->FreeEx)(v16);
    }
    return (unsigned int)Object;
  }
  v32 = KeGetCurrentPrcb();
  v33 = v32->PPLookasideList[4].P;
  ++v33->TotalFrees;
  if ( LOWORD(v33->ListHead.Alignment) < v33->Depth
    || (++v33->FreeMisses,
        v33 = v32->PPLookasideList[4].L,
        ++v33->TotalFrees,
        LOWORD(v33->ListHead.Alignment) < v33->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v33->ListHead, v16);
  }
  else
  {
    ++v33->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v33->FreeEx)(v16);
  }
  return (unsigned int)Information;
}
