/*
 * XREFs of KseRegisterShimEx @ 0x14059D610
 * Callers:
 *     KseRegisterShim @ 0x14059D600 (KseRegisterShim.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x14006D8D8 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14006D900 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x14006D95C (KsepLogInfo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepDebugPrint @ 0x140208448 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14020848C (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x14059D7C0 (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x14059D830 (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x14059D950 (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_14036BC84 != 2 )
    return 3221225473LL;
  v17 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v17);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v17, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14036BCB0, 0LL);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v10, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
          KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LoadedModulesList = -1073741771;
          v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_14034F864[2 * v15] = -1073741771;
          KsepHistoryErrors[2 * v15] = 131310;
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
          v11 = (_QWORD *)qword_14036BC98;
          if ( *(_UNKNOWN **)qword_14036BC98 != &unk_14036BC90 )
            __fastfail(3u);
          *Paged = &unk_14036BC90;
          Paged[1] = v11;
          *v11 = Paged;
          qword_14036BC98 = (__int64)Paged;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14036BCB0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_14036BCB0);
          KeAbPostRelease((ULONG_PTR)&qword_14036BCB0);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_14036BCB8;
          v12 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v12]) = 0;
          LODWORD(KsepHistoryMessages[v12]) = 131353;
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
      v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_14034F864[2 * v14] = -1073741823;
      KsepHistoryErrors[2 * v14] = 131277;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v17 )
    KsepPoolFreePaged(v17);
  return (unsigned int)LoadedModulesList;
}
