/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C00478C8
 * Callers:
 *     FreeObjData @ 0x1C0046808 (FreeObjData.c)
 *     PerformMutexResourceBindings @ 0x1C0047A6C (PerformMutexResourceBindings.c)
 *     Mutex @ 0x1C004B680 (Mutex.c)
 *     ParseAcquire @ 0x1C0054260 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0056060 (ParseRelease.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ConvertNtStatusToAMLIStatus @ 0x1C004633C (ConvertNtStatusToAMLIStatus.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  KIRQL i; // al
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  _QWORD v16[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0LL;
  if ( gDeviceLockMutexSupported && ghMutexObject )
  {
    if ( a4 )
    {
      v5 = a4;
      for ( i = ExAcquireSpinLockShared(&ACPINamespaceLock); *(_WORD *)(v5 + 66) == 8; v5 = *(_QWORD *)(v5 + 16) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
      ExReleaseSpinLockShared(&ACPINamespaceLock, i);
      if ( *(_WORD *)(v5 + 66) != 6 )
      {
        v10 = -1072431089;
        goto LABEL_24;
      }
    }
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[0]) = a1;
    v16[1] = a2 + 80;
    if ( a1 )
    {
      v11 = a1 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
            {
              v10 = -1073741637;
LABEL_22:
              LogError(3222536195LL);
              AcpiDiagTraceAmlError(a3, -1072431101);
              PrintDebugMessage(145, v10, 0, 0, 0LL);
              goto LABEL_24;
            }
            v16[2] = v5 + 120;
            v16[3] = *(_QWORD *)(a2 + 72);
            LODWORD(v16[4]) = *(_DWORD *)(a2 + 64);
          }
          else
          {
            v16[2] = a3;
          }
        }
        else
        {
          v16[3] = a3;
          v16[2] = v5 + 120;
          v16[4] = *(_QWORD *)(a2 + 72);
          LODWORD(v16[5]) = *(_DWORD *)(a2 + 64);
          WORD2(v16[5]) = a5;
        }
      }
    }
    v14 = ((__int64 (__fastcall *)(_QWORD *))ghMutexObject)(v16);
    v10 = v14;
    if ( v14 < 0 && v14 != -1073741643 && v14 != -1073741536 )
      goto LABEL_22;
  }
  else
  {
    v10 = 0;
  }
LABEL_24:
  if ( v5 )
    DereferenceObjectEx(v5);
  return ConvertNtStatusToAMLIStatus(v10);
}
