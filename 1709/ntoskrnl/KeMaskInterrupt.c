/*
 * XREFs of KeMaskInterrupt @ 0x140129578
 * Callers:
 *     KeDisconnectInterrupt @ 0x140129340 (KeDisconnectInterrupt.c)
 *     IopMaskInterrupt @ 0x1401FD97C (IopMaskInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400943B0 (KiInsertQueueDpc.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400AAD30 (KeRevertToUserGroupAffinityThread.c)
 *     KiAcquireInterruptConnectLock @ 0x1400B3240 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x1400B378C (KiIsInterruptTypeSecondary.c)
 *     KeGetProcessorNumberFromIndex @ 0x1400E6240 (KeGetProcessorNumberFromIndex.c)
 *     KeSetTargetProcessorDpcEx @ 0x14011AF00 (KeSetTargetProcessorDpcEx.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiMaskInterruptInternal @ 0x140205188 (KiMaskInterruptInternal.c)
 *     KiMaskSecondaryInterruptInternal @ 0x140207268 (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, _DWORD *a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  unsigned int v9; // ebx
  NTSTATUS ProcessorNumberFromIndex; // edi
  __int64 v11; // r8
  __int64 v13; // r14
  char v14; // dl
  unsigned __int8 CurrentIrql; // r12
  unsigned int Number; // r9d
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
    if ( a3[2] )
      return 0LL;
    v13 = (unsigned int)a3[16];
    if ( IsInterruptTypeSecondary != 0 )
    {
      ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v13, v11);
    }
    else
    {
      v14 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      Number = KeGetPcr()->Prcb.Number;
      v17 = 0;
      v20[0] = CurrentIrql;
      if ( a2 )
      {
        while ( 1 )
        {
          v18 = a1[v17];
          if ( *(_DWORD *)(v18 + 96) == Number )
            break;
          if ( ++v17 >= a2 )
            goto LABEL_14;
        }
        ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v18 + 88), (unsigned int)v13);
        v14 = 1;
      }
LABEL_14:
      __writecr8(CurrentIrql);
      if ( !v14 )
      {
        v19 = *a1;
        if ( KeGetCurrentIrql() >= 2u )
        {
          if ( a4 )
          {
            ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v19 + 96), &ProcNumber);
            if ( ProcessorNumberFromIndex >= 0 )
            {
              KeRemoveQueueDpcEx(a4, 0LL);
              a4->TargetInfoAsUlong = 275;
              a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
              a4->DeferredContext = 0LL;
              a4->DpcData = 0LL;
              a4->ProcessorHistory = 0LL;
              ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
              if ( ProcessorNumberFromIndex >= 0 )
                KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v19 + 88), v13, 0LL, 0);
            }
          }
          else
          {
            ProcessorNumberFromIndex = -1073741811;
          }
        }
        else
        {
          KiAcquireInterruptConnectLock(*(_DWORD *)(v19 + 96), v20, &PreviousAffinity);
          ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v19 + 88), (unsigned int)v13);
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
