/*
 * XREFs of MmCreateProcessAddressSpace @ 0x14049C77C
 * Callers:
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 * Callees:
 *     MiCheckWsLimits @ 0x1400307A4 (MiCheckWsLimits.c)
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     PsReturnProcessQuota @ 0x140062C84 (PsReturnProcessQuota.c)
 *     MiSyncSystemPdes @ 0x140063998 (MiSyncSystemPdes.c)
 *     MiCopyTopLevelMappings @ 0x1400639EC (MiCopyTopLevelMappings.c)
 *     MiInsertNewProcess @ 0x140063E88 (MiInsertNewProcess.c)
 *     PsChargeProcessQuota @ 0x140063F28 (PsChargeProcessQuota.c)
 *     PsGetDefaultWsMaximum @ 0x140063F54 (PsGetDefaultWsMaximum.c)
 *     MiSetProcessPartitionId @ 0x140063F64 (MiSetProcessPartitionId.c)
 *     MiJoinPartition @ 0x140063F74 (MiJoinPartition.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiReleasePtes @ 0x1400A23A0 (MiReleasePtes.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400F7CA0 (MiReservePtes.c)
 *     MiChargeResident @ 0x14010EE5C (MiChargeResident.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14017C610 (KeMakeKernelDirectoryTableBase.c)
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     MiAllocateTopLevelPage @ 0x14041D294 (MiAllocateTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14041D3DC (MiAllocateProcessShadow.c)
 *     MiJoinSession @ 0x14049CA1C (MiJoinSession.c)
 */

char __fastcall MmCreateProcessAddressSpace(ULONG_PTR **a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // rbp
  __int16 *v8; // rax
  __int64 v9; // rdi
  volatile LONG *v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  ULONG_PTR v16; // rbp
  __int64 TopLevelPage; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+90h] [rbp+18h] BYREF

  v25 = a3;
  v24 = a2;
  v5 = PspMinimumWorkingSet;
  v23[0] = PspMinimumWorkingSet;
  v7 = a3;
  v8 = (__int16 *)MiJoinPartition(a1);
  v9 = a5;
  v10 = (volatile LONG *)v8;
  MiSetProcessPartitionId(a5, *v8);
  if ( !(unsigned int)MiChargeCommit(v11, 4uLL, 0LL) )
    goto LABEL_23;
  v12 = ExGenRandom(1);
  dword_14036C188 = v12 & 0x7FFFFFFF;
  *(_WORD *)(v9 + 1280) = v12;
  *(_QWORD *)(v9 + 1920) = v9 + 1912;
  *(_QWORD *)(v9 + 1912) = v9 + 1912;
  *(_QWORD *)(v9 + 1904) = 0LL;
  if ( v7 != PsGetDefaultWsMaximum() )
  {
    MiCheckWsLimits(v9 + 1280, v23, &v25, a4, 1);
    v7 = v25;
    v5 = v23[0];
  }
  *(_QWORD *)(v9 + 1392) = v5;
  *(_QWORD *)(v9 + 1432) = v7;
  if ( (a4 & 1) != 0 )
    *(_BYTE *)(v9 + 1472) |= 0x40u;
  if ( (int)PsChargeProcessQuota((struct _KPROCESS *)v9, v13, v5) < 0 )
  {
LABEL_22:
    MiReturnCommit((__int64)v10, 4uLL);
LABEL_23:
    MiDereferencePartition(v10);
    return 0;
  }
  if ( !(unsigned int)MiChargeResident((ULONG_PTR *)v10, v5, 0LL) )
  {
LABEL_21:
    PsReturnProcessQuota((struct _KPROCESS *)v9, v14, v5);
    goto LABEL_22;
  }
  v16 = MiReservePtes((__int64)&qword_14036D0A0, 1uLL, v15);
  if ( !v16 )
  {
LABEL_13:
    if ( v10 == (volatile LONG *)&MiSystemPartition )
      MiReturnResidentAvailable(v5);
    else
      MiReturnPartitionResidentAvailable((__int64)v10, v5);
    goto LABEL_21;
  }
  if ( (int)MiAllocateProcessShadow(v9) < 0 )
  {
LABEL_12:
    MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v16, 1u);
    goto LABEL_13;
  }
  if ( !(unsigned int)MiJoinSession(&v24) )
  {
    MiDeleteProcessShadow(v9, 0);
    goto LABEL_12;
  }
  *(_QWORD *)(v9 + 1264) = 4LL;
  TopLevelPage = MiAllocateTopLevelPage(v9, v16);
  v18 = v24;
  v19 = TopLevelPage;
  if ( v24 )
  {
    *(_QWORD *)(v9 + 1024) = v24;
    _InterlockedOr((volatile signed __int32 *)(v9 + 772), 0x10000u);
    v18 = v24;
  }
  MiInsertNewProcess((_QWORD *)v9, v18);
  MiCopyTopLevelMappings(v9, (__int64)(v16 << 25) >> 16);
  MiMakeValidPte(0LL, v19, -1879048186);
  v20 = (_QWORD *)(((__int64)(v16 << 25) >> 16)
                 + 8 * (((unsigned __int64)MiGetPteAddress(0xFFFFF6FB7DBED000uLL) >> 3) & 0x1FF));
  *v20 = v21;
  if ( MiPteInShadowRange((unsigned __int64)v20) )
    MiWritePteShadow();
  *(_QWORD *)(v9 + 40) = KeMakeKernelDirectoryTableBase(v19 << 12);
  MiSyncSystemPdes(v9);
  MiReleasePtes((__int64)&qword_14036D0A0, (_QWORD *)v16, 1u);
  return 1;
}
