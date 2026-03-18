/*
 * XREFs of KiInitializeBootStructures @ 0x1404270C0
 * Callers:
 *     KiSystemStartup @ 0x140423010 (KiSystemStartup.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140025A00 (PoEnergyEstimationEnabled.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     atoi @ 0x14015E1A0 (atoi.c)
 *     KiDetectTsx @ 0x14017B13C (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x1401814C0 (KiSaveInitialProcessorControlState.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiInitializeIdt @ 0x1404233F4 (KiInitializeIdt.c)
 *     KiEnableKvaShadowing @ 0x140423770 (KiEnableKvaShadowing.c)
 *     KiGetProcessorSignature @ 0x140423A54 (KiGetProcessorSignature.c)
 *     ExInitPoolLookasidePointers @ 0x140427490 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x140427670 (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x140427A44 (KiSetFeatureBits.c)
 *     InitializeBuildStrings @ 0x1408273CC (InitializeBuildStrings.c)
 *     MmInitSystem @ 0x140828DC4 (MmInitSystem.c)
 *     InbvDriverInitialize @ 0x140832D94 (InbvDriverInitialize.c)
 *     KiInitializeNxSupportDiscard @ 0x140843C4C (KiInitializeNxSupportDiscard.c)
 *     ExRngInitializeSystem @ 0x140852A54 (ExRngInitializeSystem.c)
 *     HvlEnableVsmCalls @ 0x140858168 (HvlEnableVsmCalls.c)
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
  __int64 IdtBase; // rdi
  __int64 v10; // rdx
  const char *v11; // rcx
  char *v12; // rax
  char v13; // cl
  int v14; // eax
  __int64 (__fastcall *v15)(); // rdi
  __int64 (__fastcall *v16)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rsi
  int v17; // ecx
  __int64 v18; // rcx
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
    KiFeatureSettings = *(_DWORD *)(v5 + 3144);
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
  IdtBase = (__int64)Pcr->IdtBase;
  if ( !(_DWORD)Number )
  {
    *(_QWORD *)(IdtBase + 4208) = Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    MmInitSystem(0xFFFFFFFFLL, a1);
    v10 = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(v10 + 116) & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (*(_DWORD *)(v10 + 116) & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0);
    HalInitializeBios(0xFFFFFFFFLL, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v11 = *(const char **)(a1 + 216);
    if ( v11 )
    {
      v12 = strstr(v11, "GROUPSIZE");
      if ( v12 )
      {
        while ( 1 )
        {
          v13 = *v12;
          if ( !*v12 || v13 == 32 || (unsigned __int8)(v13 - 48) <= 9u )
            break;
          ++v12;
        }
        v14 = atoi(v12);
        KiMaximumGroupSize = v14;
        if ( (unsigned int)(v14 - 1) > 0x3F || ((v14 - 1) & v14) != 0 )
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
  v15 = KiSystemCall32;
  v16 = KiSystemCall64;
  if ( !CurrentPrcb->Number )
    KiEnableKvaShadowing((__int64)CurrentPrcb);
  if ( KiKvaShadow )
  {
    v15 = KiSystemCall32Shadow;
    v16 = (__int64 (__fastcall *)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))KiSystemCall64Shadow;
  }
  if ( !CurrentPrcb->Number )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v17 = KiDebugTrapIndex;
    KiDebugTraps[KiDebugTrapIndex] = (__int64)v16;
    v18 = (unsigned int)(v17 + 1);
    KiDebugTraps[v18] = (__int64)v15;
    KiDebugTrapIndex = v18 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v15);
  __writemsr(0xC0000082, (unsigned __int64)v16);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 1310721;
    memset(&unk_140401404, 0, 0xA4uLL);
    KeAddProcessorAffinityEx(KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
