/*
 * XREFs of KseRegisterShimEx @ 0x1405C5910
 * Callers:
 *     KseRegisterShim @ 0x1405C58F0 (KseRegisterShim.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x1400F9FD8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400FA000 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x1400FA05C (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14020EE64 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020EFB4 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x1405C5ABC (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x1405C5B2C (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x1405C5C54 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  char v12; // bl
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v18; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_140387F84 != 2 )
    return 3221225473LL;
  v18 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v18);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v18, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140387FB0, 0LL);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v10, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
          KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LoadedModulesList = -1073741771;
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14036A2C4[2 * v16] = -1073741771;
          KsepHistoryErrors[2 * v16] = 131310;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(2LL, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepLogError(2, "KSE: Attempt to re-register shim [0x%08X]\n", **(_DWORD **)(a1 + 8));
          KsepPoolFreePaged(Paged);
        }
        else
        {
          *((_DWORD *)Paged + 6) = 0;
          Paged[2] = a1;
          *((_DWORD *)Paged + 7) = a3;
          Paged[4] = a4;
          v11 = (_QWORD *)qword_140387F98;
          if ( *(_UNKNOWN **)qword_140387F98 != &unk_140387F90 )
            __fastfail(3u);
          *Paged = &unk_140387F90;
          Paged[1] = v11;
          *v11 = Paged;
          qword_140387F98 = (__int64)Paged;
          v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140387FB0, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140387FB0);
          KeAbPostRelease((ULONG_PTR)&qword_140387FB0);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_140387FB8;
          v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v13]) = 0;
          LODWORD(KsepHistoryMessages[v13]) = 131353;
          if ( (KsepDebugFlag & 1) != 0 )
            KsepDebugPrint(2LL, "KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
          KsepLogInfo(2LL, (__int64)"KSE: Succeeded shim [0x%08X] registration\n", **(_DWORD **)(a1 + 8));
        }
      }
      else
      {
        LoadedModulesList = -1073741670;
      }
    }
    else
    {
      LoadedModulesList = -1073741823;
      v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_14036A2C4[2 * v15] = -1073741823;
      KsepHistoryErrors[2 * v15] = 131277;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v18 )
    KsepPoolFreePaged(v18);
  return (unsigned int)LoadedModulesList;
}
