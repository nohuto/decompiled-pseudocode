/*
 * XREFs of ObCreateObjectEx @ 0x1404BB6D0
 * Callers:
 *     PspCreateActivityReference @ 0x1404514C8 (PspCreateActivityReference.c)
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     ObCreateObject @ 0x14045D000 (ObCreateObject.c)
 *     AlpcpCreatePort @ 0x140466C88 (AlpcpCreatePort.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     EtwpAddUmRegEntry @ 0x1404915C0 (EtwpAddUmRegEntry.c)
 *     NtCreateSemaphore @ 0x1404935D0 (NtCreateSemaphore.c)
 *     PspAllocateThread @ 0x140493710 (PspAllocateThread.c)
 *     MiFinishCreateSection @ 0x14049B8E0 (MiFinishCreateSection.c)
 *     NtCreateEvent @ 0x1404BB5A0 (NtCreateEvent.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     PopCreatePowerRequestObject @ 0x1404E7A28 (PopCreatePowerRequestObject.c)
 *     NtCreateWorkerFactory @ 0x1404EB4C8 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x1404EB824 (NtCreateTimer2.c)
 *     NtCreateTimer @ 0x1404EBB0C (NtCreateTimer.c)
 *     NtCreateMutant @ 0x1404ECB2C (NtCreateMutant.c)
 *     NtCreateJobObject @ 0x14050B45C (NtCreateJobObject.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     WmipCreateGuidObject @ 0x140520168 (WmipCreateGuidObject.c)
 *     NtCreatePrivateNamespace @ 0x140548D34 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405542D0 (IoCreateStreamFileObjectEx2.c)
 *     NtCreateWaitCompletionPacket @ 0x14056F2FC (NtCreateWaitCompletionPacket.c)
 *     NtCreateIoCompletion @ 0x140574D7C (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x140579B14 (ObpCreateDirectoryObject.c)
 *     ObCreateSymbolicLink @ 0x14058005C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x14058A580 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x140593970 (ExCreateCallback.c)
 *     EtwpRealtimeConnect @ 0x140595B1C (EtwpRealtimeConnect.c)
 *     NtCreateRegistryTransaction @ 0x140598228 (NtCreateRegistryTransaction.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 *     PsCreateSiloContext @ 0x1405C0150 (PsCreateSiloContext.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 *     NtCreateKeyedEvent @ 0x1405E0BB8 (NtCreateKeyedEvent.c)
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406916E0 (CmpDoAccessCheckOnKCB.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     NtCreateDebugObject @ 0x1406AB080 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x1406B73A0 (IoCreateController.c)
 *     PopEtEnergyTrackerCreate @ 0x140708870 (PopEtEnergyTrackerCreate.c)
 *     TtmiCreateTerminal @ 0x14070E208 (TtmiCreateTerminal.c)
 *     TtmiCreateEventQueue @ 0x140710D1C (TtmiCreateEventQueue.c)
 *     EtwpCreateUmReplyObject @ 0x1407441E8 (EtwpCreateUmReplyObject.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 *     ExpProfileCreate @ 0x140760250 (ExpProfileCreate.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObpFreeObjectNameBuffer @ 0x1404848F0 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1404AA4C0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404ACCF0 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x1406F1B2C (ObpRegisterObject.c)
 */

__int64 __fastcall ObCreateObjectEx(
        char a1,
        _DWORD *a2,
        __int64 a3,
        char a4,
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
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  struct _KPRCB *v31; // rax
  _GENERAL_LOOKASIDE *v32; // r8
  _BYTE *v33; // [rsp+30h] [rbp-38h]
  _QWORD v34[2]; // [rsp+40h] [rbp-28h] BYREF

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
  Information = ObpCaptureObjectCreateInformation(a1, a4, a3, v34, (__int64)v16, 0);
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
      v20 = ObpAllocateObject(v16, a4, (__int64)a2, v34, a6, &a5, v33);
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
    if ( v34[1] )
      ObpFreeObjectNameBuffer((__int64)v34);
    Next = v16[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v16[1].Next, 1);
      v16[2].Next = 0LL;
    }
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[4].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[4].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, v16);
    }
    else
    {
      ++v30->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v30->FreeEx)(v16);
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
