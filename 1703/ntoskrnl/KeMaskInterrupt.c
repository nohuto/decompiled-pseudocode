/*
 * XREFs of KeMaskInterrupt @ 0x14014BBAC
 * Callers:
 *     IopMaskInterrupt @ 0x14013D6C4 (IopMaskInterrupt.c)
 *     KeDisconnectInterrupt @ 0x14014B958 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetTargetProcessorDpcEx @ 0x140032680 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x14008B4A0 (KeGetProcessorNumberFromIndex.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     KiMaskInterruptInternal @ 0x14013D254 (KiMaskInterruptInternal.c)
 *     KiAcquireInterruptConnectLock @ 0x14014C400 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x14014CAA4 (KiIsInterruptTypeSecondary.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140200DBC (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  unsigned int v9; // ebx
  int ProcessorNumberFromIndex; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // r14
  char v15; // dl
  unsigned __int8 CurrentIrql; // r12
  unsigned __int8 v17; // cl
  __int64 v18; // r8
  __int64 v19; // rbp
  unsigned __int8 v20[4]; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-64h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-60h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-58h] BYREF

  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  v9 = 0;
  ProcessorNumberFromIndex = 0;
  LOBYTE(v11) = 0;
  v12 = IsInterruptTypeSecondary != 0;
  v21 = 1;
  if ( a2 )
  {
    while ( 1 )
    {
      _m_prefetchw((const void *)(a1[(unsigned __int8)v11] + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)&v21, v21) & 1) != 0 )
        break;
      LOBYTE(v11) = v11 + 1;
      if ( (unsigned __int8)v11 >= a2 )
        goto LABEL_4;
    }
    ProcessorNumberFromIndex = -2147483611;
  }
  else
  {
LABEL_4:
    if ( *(_DWORD *)(a3 + 8) )
      return 0LL;
    v14 = *(unsigned int *)(a3 + 64);
    if ( (_DWORD)v12 == 1 )
    {
      ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v14, v11);
    }
    else
    {
      v15 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      LODWORD(v12) = KeGetPcr()->Prcb.Number;
      v17 = 0;
      v20[0] = CurrentIrql;
      if ( a2 )
      {
        while ( 1 )
        {
          v18 = a1[v17];
          if ( *(_DWORD *)(v18 + 96) == (_DWORD)v12 )
            break;
          if ( ++v17 >= a2 )
            goto LABEL_12;
        }
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v18 + 88), v14);
        v15 = 1;
      }
LABEL_12:
      __writecr8(CurrentIrql);
      if ( !v15 )
      {
        v19 = *a1;
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( a4 )
          {
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v19 + 96), &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
            {
              KeRemoveQueueDpcEx((int *)a4, 0);
              a4->TargetInfoAsUlong = 275;
              a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
              a4->DeferredContext = 0LL;
              a4->DpcData = 0LL;
              a4->ProcessorHistory = 0LL;
              ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
              if ( ProcessorNumberFromIndex >= 0 )
                KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v19 + 88), v14, 0LL, 0);
            }
          }
          else
          {
            ProcessorNumberFromIndex = -1073741811;
          }
        }
        else
        {
          KiAcquireInterruptConnectLock(*(unsigned int *)(v19 + 96), v20, &PreviousAffinity, v12);
          ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v19 + 88), v14);
          __writecr8(v20[0]);
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        }
      }
    }
  }
  if ( ProcessorNumberFromIndex != 296 )
    return (unsigned int)ProcessorNumberFromIndex;
  return v9;
}
