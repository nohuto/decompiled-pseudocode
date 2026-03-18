/*
 * XREFs of KseRegisterShimEx @ 0x1406232A0
 * Callers:
 *     KseRegisterShim @ 0x140623280 (KseRegisterShim.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepPoolFreePaged @ 0x140161A40 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140161A68 (KsepPoolAllocatePaged.c)
 *     KsepLogInfo @ 0x140161AC4 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14024D0B4 (KsepDebugPrint.c)
 *     KsepLogError @ 0x14024D344 (KsepLogError.c)
 *     KsepIsShimRegistered @ 0x14062344C (KsepIsShimRegistered.c)
 *     KsepValidateShimProviderAndData @ 0x1406234B0 (KsepValidateShimProviderAndData.c)
 *     KsepGetLoadedModulesList @ 0x1406235DC (KsepGetLoadedModulesList.c)
 */

__int64 __fastcall KseRegisterShimEx(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int LoadedModulesList; // ebx
  _QWORD *Paged; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  char v15; // bl
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  void *v21; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  if ( dword_1403CDEE4 != 2 )
    return 3221225473LL;
  v21 = 0LL;
  LoadedModulesList = KsepGetLoadedModulesList(&v21);
  if ( LoadedModulesList >= 0 )
  {
    if ( (unsigned int)KsepValidateShimProviderAndData(retaddr, v21, a1) )
    {
      Paged = KsepPoolAllocatePaged(0x28uLL);
      if ( Paged )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403CDF10, 0LL);
        if ( (unsigned int)KsepIsShimRegistered(&KseEngine, *(_QWORD *)(a1 + 8), v10, 0LL) )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v11, v12, v13);
          KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LoadedModulesList = -1073741771;
          v19 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          dword_1403AD3A4[2 * v19] = -1073741771;
          KsepHistoryErrors[2 * v19] = 131310;
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
          v14 = (_QWORD *)qword_1403CDEF8;
          if ( *(_UNKNOWN **)qword_1403CDEF8 != &unk_1403CDEF0 )
            __fastfail(3u);
          *Paged = &unk_1403CDEF0;
          Paged[1] = v14;
          *v14 = Paged;
          qword_1403CDEF8 = (__int64)Paged;
          v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403CDF10, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403CDF10, v11, v12, v13);
          KeAbPostRelease((ULONG_PTR)&qword_1403CDF10);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          LoadedModulesList = 0;
          *(_QWORD *)(a1 + 24) = &unk_1403CDF18;
          v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
          HIDWORD(KsepHistoryMessages[v16]) = 0;
          LODWORD(KsepHistoryMessages[v16]) = 131353;
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
      v18 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_1403AD3A4[2 * v18] = -1073741823;
      KsepHistoryErrors[2 * v18] = 131277;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(2LL, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
      KsepLogError(2, "KSE: Shim [0x%08X] is not valid\n", **(_DWORD **)(a1 + 8));
    }
  }
  if ( v21 )
    KsepPoolFreePaged(v21);
  return (unsigned int)LoadedModulesList;
}
