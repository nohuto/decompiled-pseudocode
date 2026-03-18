/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C0011AC8
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     Mutex @ 0x1C0011A20 (Mutex.c)
 *     ParseAcquire @ 0x1C0019550 (ParseAcquire.c)
 *     ParseRelease @ 0x1C00196E0 (ParseRelease.c)
 * Callees:
 *     ConvertNtStatusToAMLIStatus @ 0x1C0011BC4 (ConvertNtStatusToAMLIStatus.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  int v10; // ebx
  KIRQL i; // al
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  _QWORD v16[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0LL;
  if ( !gDeviceLockMutexSupported || !ghMutexObject )
  {
    v10 = 0;
    goto LABEL_6;
  }
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
      goto LABEL_6;
    }
  }
  memset(v16, 0, sizeof(v16));
  LODWORD(v16[0]) = a1;
  v16[1] = a2 + 80;
  if ( a1 )
  {
    v13 = a1 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
          {
            v10 = -1073741637;
LABEL_26:
            LogError(3222536195LL);
            AcpiDiagTraceAmlError(a3, 3222536195LL);
            PrintDebugMessage(145, v10, 0, 0, 0LL);
            goto LABEL_6;
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
  v10 = ((__int64 (__fastcall *)(_QWORD *))ghMutexObject)(v16);
  if ( v10 < 0 && v10 != -1073741643 && v10 != -1073741536 )
    goto LABEL_26;
LABEL_6:
  if ( v5 )
    DereferenceObjectEx(v5, 0LL, a3, a4);
  return ConvertNtStatusToAMLIStatus((unsigned int)v10);
}
