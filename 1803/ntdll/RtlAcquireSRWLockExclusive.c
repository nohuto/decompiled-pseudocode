/*
 * XREFs of RtlAcquireSRWLockExclusive @ 0x180028090
 * Callers:
 *     sub_180002524 @ 0x180002524 (sub_180002524.c)
 *     LdrSetDllDirectory @ 0x180002990 (LdrSetDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x180003C20 (RtlSetSearchPathMode.c)
 *     RtlExtendMemoryZone @ 0x180003E90 (RtlExtendMemoryZone.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     sub_180005A98 @ 0x180005A98 (sub_180005A98.c)
 *     sub_180005BC4 @ 0x180005BC4 (sub_180005BC4.c)
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_180005DCC @ 0x180005DCC (sub_180005DCC.c)
 *     sub_180005E60 @ 0x180005E60 (sub_180005E60.c)
 *     EtwNotificationUnregister @ 0x180008040 (EtwNotificationUnregister.c)
 *     sub_180008170 @ 0x180008170 (sub_180008170.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001F0D0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_18001FA3C @ 0x18001FA3C (sub_18001FA3C.c)
 *     sub_18001FD20 @ 0x18001FD20 (sub_18001FD20.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     sub_180022E4C @ 0x180022E4C (sub_180022E4C.c)
 *     sub_18002302C @ 0x18002302C (sub_18002302C.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 *     sub_1800241D0 @ 0x1800241D0 (sub_1800241D0.c)
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 *     sub_180024408 @ 0x180024408 (sub_180024408.c)
 *     sub_180024608 @ 0x180024608 (sub_180024608.c)
 *     sub_180024CB8 @ 0x180024CB8 (sub_180024CB8.c)
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlSleepConditionVariableSRW @ 0x180025E20 (RtlSleepConditionVariableSRW.c)
 *     sub_180026138 @ 0x180026138 (sub_180026138.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_180027040 @ 0x180027040 (sub_180027040.c)
 *     sub_1800275D0 @ 0x1800275D0 (sub_1800275D0.c)
 *     sub_180027A70 @ 0x180027A70 (sub_180027A70.c)
 *     sub_180027E0C @ 0x180027E0C (sub_180027E0C.c)
 *     sub_18002888C @ 0x18002888C (sub_18002888C.c)
 *     sub_180029160 @ 0x180029160 (sub_180029160.c)
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 *     RtlDeleteCriticalSection @ 0x180029D90 (RtlDeleteCriticalSection.c)
 *     sub_180029F94 @ 0x180029F94 (sub_180029F94.c)
 *     sub_18002AE58 @ 0x18002AE58 (sub_18002AE58.c)
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_18002B698 @ 0x18002B698 (sub_18002B698.c)
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     TpWaitForTimer @ 0x18002C520 (TpWaitForTimer.c)
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 *     sub_18002C9D0 @ 0x18002C9D0 (sub_18002C9D0.c)
 *     sub_18002D3B8 @ 0x18002D3B8 (sub_18002D3B8.c)
 *     sub_18002DC58 @ 0x18002DC58 (sub_18002DC58.c)
 *     sub_1800385D0 @ 0x1800385D0 (sub_1800385D0.c)
 *     sub_180038944 @ 0x180038944 (sub_180038944.c)
 *     sub_1800389D0 @ 0x1800389D0 (sub_1800389D0.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180040514 @ 0x180040514 (sub_180040514.c)
 *     sub_180043094 @ 0x180043094 (sub_180043094.c)
 *     sub_180043500 @ 0x180043500 (sub_180043500.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180046E54 @ 0x180046E54 (sub_180046E54.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180047210 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlProcessFlsData @ 0x180048090 (RtlProcessFlsData.c)
 *     TpSetDefaultPoolStackInformation @ 0x180048900 (TpSetDefaultPoolStackInformation.c)
 *     sub_180048CCC @ 0x180048CCC (sub_180048CCC.c)
 *     RtlUnlockModuleSection @ 0x180048D60 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180048E10 (RtlLockModuleSection.c)
 *     RtlLockMemoryBlockLookaside @ 0x180049020 (RtlLockMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180049090 (RtlLockMemoryZone.c)
 *     sub_180049134 @ 0x180049134 (sub_180049134.c)
 *     sub_1800491C0 @ 0x1800491C0 (sub_1800491C0.c)
 *     RtlUnlockMemoryBlockLookaside @ 0x180049220 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlUnlockMemoryZone @ 0x180049280 (RtlUnlockMemoryZone.c)
 *     sub_18004930C @ 0x18004930C (sub_18004930C.c)
 *     sub_18004983C @ 0x18004983C (sub_18004983C.c)
 *     sub_180049998 @ 0x180049998 (sub_180049998.c)
 *     sub_180049C00 @ 0x180049C00 (sub_180049C00.c)
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 *     sub_18004A0A0 @ 0x18004A0A0 (sub_18004A0A0.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 *     sub_18004A750 @ 0x18004A750 (sub_18004A750.c)
 *     sub_18004AD34 @ 0x18004AD34 (sub_18004AD34.c)
 *     sub_18004D594 @ 0x18004D594 (sub_18004D594.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     RtlFlsAlloc @ 0x180050130 (RtlFlsAlloc.c)
 *     sub_1800503AC @ 0x1800503AC (sub_1800503AC.c)
 *     sub_18005115C @ 0x18005115C (sub_18005115C.c)
 *     RtlFlsFree @ 0x180053F70 (RtlFlsFree.c)
 *     sub_180054448 @ 0x180054448 (sub_180054448.c)
 *     sub_180054A20 @ 0x180054A20 (sub_180054A20.c)
 *     sub_180054C90 @ 0x180054C90 (sub_180054C90.c)
 *     RtlDeleteTimerQueueEx @ 0x1800550D0 (RtlDeleteTimerQueueEx.c)
 *     sub_180055240 @ 0x180055240 (sub_180055240.c)
 *     TpReleaseCleanupGroupMembers @ 0x1800552A0 (TpReleaseCleanupGroupMembers.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     sub_180056190 @ 0x180056190 (sub_180056190.c)
 *     RtlUpdateTimer @ 0x180056890 (RtlUpdateTimer.c)
 *     sub_1800570C8 @ 0x1800570C8 (sub_1800570C8.c)
 *     sub_180057618 @ 0x180057618 (sub_180057618.c)
 *     RtlDeleteTimer @ 0x180057EA0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180057FF0 (RtlCreateTimer.c)
 *     RtlDeregisterWaitEx @ 0x180058270 (RtlDeregisterWaitEx.c)
 *     TpReleaseWait @ 0x180058580 (TpReleaseWait.c)
 *     RtlRegisterWait @ 0x180058640 (RtlRegisterWait.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 *     sub_180058FA4 @ 0x180058FA4 (sub_180058FA4.c)
 *     TpTimerOutstandingCallbackCount @ 0x180058FF0 (TpTimerOutstandingCallbackCount.c)
 *     sub_180059158 @ 0x180059158 (sub_180059158.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 *     TpWaitForWait @ 0x180059580 (TpWaitForWait.c)
 *     sub_18005D6F8 @ 0x18005D6F8 (sub_18005D6F8.c)
 *     sub_18005E0E0 @ 0x18005E0E0 (sub_18005E0E0.c)
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005EF2C @ 0x18005EF2C (sub_18005EF2C.c)
 *     sub_18005F64C @ 0x18005F64C (sub_18005F64C.c)
 *     sub_18005F87C @ 0x18005F87C (sub_18005F87C.c)
 *     sub_18005FE60 @ 0x18005FE60 (sub_18005FE60.c)
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 *     sub_180060414 @ 0x180060414 (sub_180060414.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 *     sub_180061B10 @ 0x180061B10 (sub_180061B10.c)
 *     sub_180062598 @ 0x180062598 (sub_180062598.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_1800677B0 @ 0x1800677B0 (sub_1800677B0.c)
 *     sub_180069810 @ 0x180069810 (sub_180069810.c)
 *     RtlInstallFunctionTableCallback @ 0x18006A010 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x18006A2B0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006A480 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x18006A9D0 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006AD20 (RtlAddGrowableFunctionTable.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     sub_180071028 @ 0x180071028 (sub_180071028.c)
 *     sub_1800717CC @ 0x1800717CC (sub_1800717CC.c)
 *     sub_18007203C @ 0x18007203C (sub_18007203C.c)
 *     sub_1800721C8 @ 0x1800721C8 (sub_1800721C8.c)
 *     sub_1800722B4 @ 0x1800722B4 (sub_1800722B4.c)
 *     sub_18007278C @ 0x18007278C (sub_18007278C.c)
 *     sub_1800728E0 @ 0x1800728E0 (sub_1800728E0.c)
 *     sub_180074154 @ 0x180074154 (sub_180074154.c)
 *     sub_180075F7C @ 0x180075F7C (sub_180075F7C.c)
 *     sub_180077048 @ 0x180077048 (sub_180077048.c)
 *     sub_18007AF64 @ 0x18007AF64 (sub_18007AF64.c)
 *     sub_18007C734 @ 0x18007C734 (sub_18007C734.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     sub_18007D6C0 @ 0x18007D6C0 (sub_18007D6C0.c)
 *     sub_18007D794 @ 0x18007D794 (sub_18007D794.c)
 *     LdrGetDllDirectory @ 0x18007E280 (LdrGetDllDirectory.c)
 *     TpReleasePool @ 0x18007E670 (TpReleasePool.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     sub_18007E9DC @ 0x18007E9DC (sub_18007E9DC.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007EBA0 (RtlAcquireReleaseSRWLockExclusive.c)
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     sub_18007F390 @ 0x18007F390 (sub_18007F390.c)
 *     RtlSetProtectedPolicy @ 0x18007F700 (RtlSetProtectedPolicy.c)
 *     sub_180080E08 @ 0x180080E08 (sub_180080E08.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     sub_1800822F0 @ 0x1800822F0 (sub_1800822F0.c)
 *     RtlDestroyMemoryBlockLookaside @ 0x1800831A0 (RtlDestroyMemoryBlockLookaside.c)
 *     RtlDestroyMemoryZone @ 0x180083200 (RtlDestroyMemoryZone.c)
 *     TpDisablePoolCallbackChecks @ 0x180083410 (TpDisablePoolCallbackChecks.c)
 *     LdrFlushAlternateResourceModules @ 0x1800876B0 (LdrFlushAlternateResourceModules.c)
 *     sub_180089000 @ 0x180089000 (sub_180089000.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008AB30 (LdrRemoveDllDirectory.c)
 *     LdrQueryModuleServiceTags @ 0x1800CA9A0 (LdrQueryModuleServiceTags.c)
 *     sub_1800CB510 @ 0x1800CB510 (sub_1800CB510.c)
 *     sub_1800D0C68 @ 0x1800D0C68 (sub_1800D0C68.c)
 *     RtlCloneUserProcess @ 0x1800D1660 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D1BD0 (RtlPrepareForProcessCloning.c)
 *     sub_1800D1E50 @ 0x1800D1E50 (sub_1800D1E50.c)
 *     Callback @ 0x1800D8F60 (Callback.c)
 *     LdrUpdatePackageSearchPath @ 0x1800D9180 (LdrUpdatePackageSearchPath.c)
 *     sub_1800D97E4 @ 0x1800D97E4 (sub_1800D97E4.c)
 *     AlpcGetMessageFromCompletionList @ 0x1800DAC80 (AlpcGetMessageFromCompletionList.c)
 *     RtlGrowFunctionTable @ 0x1800DB090 (RtlGrowFunctionTable.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E4A00 (RtlResetMemoryBlockLookaside.c)
 *     RtlResetMemoryZone @ 0x1800E4A60 (RtlResetMemoryZone.c)
 *     RtlDeleteBarrier @ 0x1800E6590 (RtlDeleteBarrier.c)
 *     sub_1800EB360 @ 0x1800EB360 (sub_1800EB360.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F0110 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800F0240 (RtlRegisterSecureMemoryCacheCallback.c)
 *     sub_1800F02EC @ 0x1800F02EC (sub_1800F02EC.c)
 *     sub_1800F34C8 @ 0x1800F34C8 (sub_1800F34C8.c)
 *     sub_1800F3EDC @ 0x1800F3EDC (sub_1800F3EDC.c)
 *     sub_1800F3FB0 @ 0x1800F3FB0 (sub_1800F3FB0.c)
 *     sub_1800F4094 @ 0x1800F4094 (sub_1800F4094.c)
 *     sub_1800F41DC @ 0x1800F41DC (sub_1800F41DC.c)
 *     sub_1800F6F90 @ 0x1800F6F90 (sub_1800F6F90.c)
 *     sub_1800FCB7C @ 0x1800FCB7C (sub_1800FCB7C.c)
 *     sub_1800FCFB0 @ 0x1800FCFB0 (sub_1800FCFB0.c)
 *     sub_1800FD1A4 @ 0x1800FD1A4 (sub_1800FD1A4.c)
 *     sub_1800FD1F4 @ 0x1800FD1F4 (sub_1800FD1F4.c)
 *     sub_180102858 @ 0x180102858 (sub_180102858.c)
 *     sub_180104E2C @ 0x180104E2C (sub_180104E2C.c)
 *     sub_180104E98 @ 0x180104E98 (sub_180104E98.c)
 *     sub_180105258 @ 0x180105258 (sub_180105258.c)
 *     sub_1801055C8 @ 0x1801055C8 (sub_1801055C8.c)
 *     TpSetDefaultPoolMaxThreads @ 0x180108120 (TpSetDefaultPoolMaxThreads.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 *     sub_1801082C0 @ 0x1801082C0 (sub_1801082C0.c)
 *     RtlSetIoCompletionCallback @ 0x180108B30 (RtlSetIoCompletionCallback.c)
 *     sub_180108FC8 @ 0x180108FC8 (sub_180108FC8.c)
 *     sub_1801091C0 @ 0x1801091C0 (sub_1801091C0.c)
 *     sub_180109250 @ 0x180109250 (sub_180109250.c)
 *     sub_18010CEA0 @ 0x18010CEA0 (sub_18010CEA0.c)
 *     sub_18010D1CC @ 0x18010D1CC (sub_18010D1CC.c)
 *     sub_18010D8A4 @ 0x18010D8A4 (sub_18010D8A4.c)
 *     sub_18010DCE8 @ 0x18010DCE8 (sub_18010DCE8.c)
 *     sub_18010E3CC @ 0x18010E3CC (sub_18010E3CC.c)
 * Callees:
 *     sub_1800286DC @ 0x1800286DC (sub_1800286DC.c)
 *     sub_1800289C0 @ 0x1800289C0 (sub_1800289C0.c)
 *     sub_180070A54 @ 0x180070A54 (sub_180070A54.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 *v2; // r8
  __int64 v3; // r9
  volatile signed __int64 *v4; // rdi
  unsigned __int64 Ptr; // rbx
  __int64 v6; // rdx
  bool v7; // zf
  signed __int64 v8; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v11; // [rsp+28h] [rbp-40h]
  __int64 v12; // [rsp+30h] [rbp-38h]
  PRTL_SRWLOCK v13; // [rsp+38h] [rbp-30h]
  int v14; // [rsp+40h] [rbp-28h]
  signed __int32 v15[3]; // [rsp+44h] [rbp-24h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = (volatile signed __int64 *)SRWLock;
  v16 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL) )
  {
    Ptr = (unsigned __int64)SRWLock->Ptr;
    while ( 1 )
    {
      if ( (Ptr & 1) != 0 )
      {
        if ( (unsigned __int8)sub_1800286DC(SRWLock, v1, v2, v3) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        SRWLock = (PRTL_SRWLOCK)NtCurrentTeb()->ClientId.UniqueThread;
        v13 = SRWLock;
        LOBYTE(SRWLock) = 0;
        v15[0] = 3;
        v12 = 0LL;
        if ( (Ptr & 2) != 0 )
        {
          v11 = 0LL;
          v14 = -1;
          SRWLock = (PRTL_SRWLOCK)(unsigned __int8)Ptr;
          v10 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (unsigned __int64)&v10 | Ptr & 8 | 7;
          LOBYTE(SRWLock) = (Ptr & 4) == 0;
        }
        else
        {
          v6 = 11LL;
          v11 = &v10;
          v2 = &v10;
          v14 = Ptr >> 4;
          if ( v14 <= 1 )
            v6 = 3LL;
          v1 = (unsigned __int64)&v10 | v6;
          if ( !(unsigned int)(Ptr >> 4) )
            v14 = -2;
        }
        v8 = _InterlockedCompareExchange64(v4, v1, Ptr);
        v7 = Ptr == v8;
        Ptr = v8;
        if ( !v7 )
          goto LABEL_13;
        if ( (_BYTE)SRWLock )
          sub_180070A54(v4);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          SRWLock = (PRTL_SRWLOCK)(unsigned int)dword_18015ADA0;
          if ( dword_18015ADA0 )
          {
            do
            {
              if ( (v15[0] & 2) == 0 )
                break;
              _mm_pause();
              v7 = (_DWORD)SRWLock == 1;
              SRWLock = (PRTL_SRWLOCK)(unsigned int)((_DWORD)SRWLock - 1);
            }
            while ( !v7 );
          }
        }
        if ( _interlockedbittestandreset(v15, 1u) )
        {
          do
            ZwWaitForAlertByThreadId((PVOID)v4, 0LL);
          while ( (v15[0] & 4) == 0 );
        }
      }
      else
      {
        if ( Ptr == _InterlockedCompareExchange64(v4, Ptr + 1, Ptr) )
          return;
LABEL_13:
        sub_1800289C0(&v16);
        _m_prefetchw((const void *)v4);
        Ptr = *v4;
      }
    }
  }
}
