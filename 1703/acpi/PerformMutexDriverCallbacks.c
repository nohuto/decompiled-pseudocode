/*
 * XREFs of PerformMutexDriverCallbacks @ 0x1C00234C8
 * Callers:
 *     ParseAcquire @ 0x1C00156F0 (ParseAcquire.c)
 *     ParseRelease @ 0x1C0015880 (ParseRelease.c)
 *     FreeObjData @ 0x1C0015D30 (FreeObjData.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 *     Mutex @ 0x1C0023420 (Mutex.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall PerformMutexDriverCallbacks(int a1, __int64 a2, __int64 a3, __int64 a4, __int16 a5)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v10)(_QWORD *); // rsi
  int v11; // ebx
  KIRQL i; // dl
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  _QWORD v17[6]; // [rsp+30h] [rbp-30h] BYREF

  v5 = 0LL;
  if ( !gDeviceLockMutexSupported || (v10 = (__int64 (__fastcall *)(_QWORD *))ghMutexObject) == 0LL )
  {
    v11 = 0;
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
      v11 = -1072431089;
      goto LABEL_6;
    }
    v10 = (__int64 (__fastcall *)(_QWORD *))ghMutexObject;
  }
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = a1;
  v17[1] = a2 + 80;
  if ( a1 )
  {
    v14 = a1 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 != 1 )
          {
            v11 = -1073741637;
LABEL_27:
            LogError(-1072431101);
            AcpiDiagTraceAmlError(a3, -1072431101);
            PrintDebugMessage(145, (const void *)v11, 0LL, 0LL, 0LL);
            goto LABEL_6;
          }
          v17[2] = v5 + 120;
          v17[3] = *(_QWORD *)(a2 + 72);
          LODWORD(v17[4]) = *(_DWORD *)(a2 + 64);
        }
        else
        {
          v17[2] = a3;
        }
      }
      else
      {
        v17[3] = a3;
        v17[2] = v5 + 120;
        v17[4] = *(_QWORD *)(a2 + 72);
        LODWORD(v17[5]) = *(_DWORD *)(a2 + 64);
        WORD2(v17[5]) = a5;
      }
    }
  }
  v11 = v10(v17);
  if ( v11 < 0 && v11 != -1073741643 && v11 != -1073741536 )
    goto LABEL_27;
LABEL_6:
  if ( v5 )
    DereferenceObjectEx((_QWORD *)v5);
  return ConvertNtStatusToAMLIStatus((unsigned int)v11);
}
