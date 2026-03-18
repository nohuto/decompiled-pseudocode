/*
 * XREFs of KiInitializeBootStructures @ 0x140478DD0
 * Callers:
 *     KiSystemStartup @ 0x14046F010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     PoEnergyEstimationEnabled @ 0x140060580 (PoEnergyEstimationEnabled.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     atoi @ 0x140187EA0 (atoi.c)
 *     KiDetectTsx @ 0x1401A5A00 (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x1401AB100 (KiSaveInitialProcessorControlState.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiGetProcessorSignature @ 0x14046F3F4 (KiGetProcessorSignature.c)
 *     ExInitPoolLookasidePointers @ 0x1404791A0 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x140479380 (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x140479754 (KiSetFeatureBits.c)
 *     KiEnableKvaShadowing @ 0x14047BF08 (KiEnableKvaShadowing.c)
 *     KiInitializeIdt @ 0x14047C160 (KiInitializeIdt.c)
 *     InitializeBuildStrings @ 0x140898088 (InitializeBuildStrings.c)
 *     MmInitSystem @ 0x14089C070 (MmInitSystem.c)
 *     KiInitializeNxSupportDiscard @ 0x1408A4EDC (KiInitializeNxSupportDiscard.c)
 *     InbvDriverInitialize @ 0x1408BA654 (InbvDriverInitialize.c)
 *     ExRngInitializeSystem @ 0x1408C3E74 (ExRngInitializeSystem.c)
 *     HvlEnableVsmCalls @ 0x1408CA2C8 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Number; // rbp
  __int64 v5; // r10
  _KTHREAD *v6; // rdi
  __int64 v7; // rax
  bool v8; // zf
  _KIDTENTRY64 *IdtBase; // rdi
  __int64 v10; // rdx
  int v11; // eax
  const char *v12; // rcx
  char *v13; // rax
  char v14; // cl
  int v15; // eax
  __int64 (__fastcall *v16)(); // rdi
  __int64 (__fastcall *v17)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rsi
  int v18; // ecx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+10h] BYREF
  int v22; // [rsp+70h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    InitializeBuildStrings(*(_QWORD *)(a1 + 240));
    v5 = *(_QWORD *)(a1 + 240);
    KiFeatureSettings = *(_DWORD *)(v5 + 3132);
    KiFeatureSimulations = (*(_DWORD *)(v5 + 116) >> 12) & 0x3F;
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    CurrentPrcb->IsrStack = (void *)(*(_QWORD *)(a1 + 128) + 28672LL);
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v6 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v6;
  CurrentPrcb->IdleThread = v6;
  if ( !(_DWORD)Number || PoEnergyEstimationEnabled() )
    _interlockedbittestandset(&v6->Header.Lock, 0x15u);
  v6->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v6->ApcState.ApcListHead[0].Blink = v6->ApcState.ApcListHead;
  v6->ApcState.ApcListHead[0].Flink = v6->ApcState.ApcListHead;
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v7 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v7 + 40) = &KiDispatchInterruptContinue;
  v8 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v7;
  if ( v8 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  if ( !(_DWORD)Number )
  {
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    MmInitSystem(0xFFFFFFFFLL, a1);
    v10 = *(_QWORD *)(a1 + 240);
    v11 = *(_DWORD *)(v10 + 116);
    if ( (v11 & 8) != 0 )
    {
      KiBootDebuggerActive = 1;
      v11 = *(_DWORD *)(v10 + 116);
    }
    if ( (v11 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(0xFFFFFFFFLL, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v12 = *(const char **)(a1 + 216);
    if ( v12 )
    {
      v13 = strstr(v12, "GROUPSIZE");
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = *v13;
          if ( !*v13 || v14 == 32 || (unsigned __int8)(v14 - 48) <= 9u )
            break;
          ++v13;
        }
        v15 = atoi(v13);
        KiMaximumGroupSize = v15;
        if ( (unsigned int)(v15 - 1) > 0x3F || ((v15 - 1) & v15) != 0 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard();
  KiGetProcessorSignature(&CurrentPrcb->CpuVendor, &v20, &v21, &v22);
  CurrentPrcb->CpuType = v20;
  CurrentPrcb->CpuStep = v22 | ((_WORD)v21 << 8);
  CurrentPrcb->CpuID = 1;
  HalInitializeProcessor((unsigned int)Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v16 = KiSystemCall32;
  v17 = KiSystemCall64;
  if ( !CurrentPrcb->Number )
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
  if ( KiKvaShadow )
  {
    v16 = KiSystemCall32Shadow;
    v17 = (__int64 (__fastcall *)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))KiSystemCall64Shadow;
  }
  if ( !CurrentPrcb->Number )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v18 = KiDebugTrapIndex;
    KiDebugTraps[KiDebugTrapIndex] = (__int64)v17;
    KiDebugTraps[++v18] = (__int64)v16;
    KiDebugTrapIndex = v18 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v16);
  __writemsr(0xC0000082, (unsigned __int64)v17);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 1310721;
    memset(&unk_14044C5D4, 0, 0xA4uLL);
    KeAddProcessorAffinityEx(KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
