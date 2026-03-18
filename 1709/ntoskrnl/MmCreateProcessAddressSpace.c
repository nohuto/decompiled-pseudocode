/*
 * XREFs of MmCreateProcessAddressSpace @ 0x1404FB5AC
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 * Callees:
 *     MiCheckWsLimits @ 0x14000AE78 (MiCheckWsLimits.c)
 *     MiChargeResident @ 0x14002ADAC (MiChargeResident.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiPartitionActive @ 0x1400B7264 (MiPartitionActive.c)
 *     MiSyncSystemPdes @ 0x1400B7A74 (MiSyncSystemPdes.c)
 *     MiCopyTopLevelMappings @ 0x1400B7AC8 (MiCopyTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x1400B7D34 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x1400B7E34 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x1400B7E68 (PsGetDefaultWsMaximum.c)
 *     MiSetProcessPartitionId @ 0x1400B7E78 (MiSetProcessPartitionId.c)
 *     PsReturnProcessQuota @ 0x1400B8758 (PsReturnProcessQuota.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017BD30 (KeMakeKernelDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x14017BF70 (MiDeleteProcessShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     MiAllocateTopLevelPage @ 0x14043CD94 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14043CF0C (MiAllocateProcessShadow.c)
 *     MiJoinSession @ 0x1404FB870 (MiJoinSession.c)
 */

char __fastcall MmCreateProcessAddressSpace(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int16 *v9; // rsi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG_PTR v15; // rbp
  unsigned __int64 v16; // r9
  __int64 TopLevelPage; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v25[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+18h] BYREF

  v27 = a3;
  v26 = a2;
  v5 = PspMinimumWorkingSet;
  v7 = a5;
  v8 = a3;
  v25[0] = PspMinimumWorkingSet;
  if ( a1 )
    v9 = **(__int16 ***)(a5 + 2096);
  else
    v9 = (__int16 *)&MiSystemPartition;
  MiPartitionActive((__int64)v9);
  MiSetProcessPartitionId(v7, *v9);
  if ( !(unsigned int)MiChargeCommit((__int64)v9, 4uLL, 0LL, v10) )
    return 0;
  v11 = ExGenRandom(1);
  dword_1403884C8 = v11 & 0x7FFFFFFF;
  *(_WORD *)(v7 + 1280) = v11;
  *(_QWORD *)(v7 + 1944) = v7 + 1936;
  *(_QWORD *)(v7 + 1936) = v7 + 1936;
  *(_QWORD *)(v7 + 1928) = 0LL;
  if ( v8 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v7 + 1280, v25, &v27, a4, 1);
    v8 = v27;
    v5 = v25[0];
  }
  *(_QWORD *)(v7 + 1392) = v5;
  *(_QWORD *)(v7 + 1432) = v8;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v7 + 1472) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v7, v12, v5) < 0 )
  {
LABEL_26:
    MiReturnCommit((__int64)v9, 4uLL);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v9, v5) )
  {
LABEL_25:
    PsReturnProcessQuota(v7, v13, v5);
    goto LABEL_26;
  }
  v15 = MiReservePtes((__int64)&qword_140389360, 1uLL, v14);
  if ( !v15 )
  {
LABEL_16:
    if ( v9 == (__int16 *)&MiSystemPartition )
      MiReturnResidentAvailable(v5);
    else
      MiReturnPartitionResidentAvailable((__int64)v9, v5);
    goto LABEL_25;
  }
  if ( (int)MiAllocateProcessShadow(v7) < 0 )
  {
LABEL_15:
    MiReleasePtes((__int64)&qword_140389360, v15, 1u, v16);
    goto LABEL_16;
  }
  if ( !(unsigned int)MiJoinSession(&v26) )
  {
    MiDeleteProcessShadow(v7, 0);
    goto LABEL_15;
  }
  *(_QWORD *)(v7 + 1264) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v7, v15);
  v18 = v26;
  v19 = TopLevelPage;
  if ( v26 )
  {
    *(_QWORD *)(v7 + 1024) = v26;
    _InterlockedOr((volatile signed __int32 *)(v7 + 772), 0x10000u);
    v18 = v26;
  }
  MiInsertNewProcess((_QWORD *)v7, v18);
  MiCopyTopLevelMappings(v7, (__int64)(v15 << 25) >> 16);
  MiMakeValidPte(0LL, v19, -1879048186);
  v20 = (_QWORD *)(((__int64)(v15 << 25) >> 16)
                 + 8 * (((unsigned __int64)MiGetPteAddress(0xFFFFF6FB7DBED000uLL) >> 3) & 0x1FF));
  *v20 = v21;
  if ( (unsigned __int64)v20 >= v22 && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  *(_QWORD *)(v7 + 40) = KeMakeKernelDirectoryTableBase(v19 << 12);
  MiSyncSystemPdes(v7);
  MiReleasePtes((__int64)&qword_140389360, v15, 1u, v23);
  return 1;
}
