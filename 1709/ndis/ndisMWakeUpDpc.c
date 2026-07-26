/*
 * XREFs of ndisMWakeUpDpc @ 0x1C0062B70
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetWakeUpTimer @ 0x1C0002968 (ndisSetWakeUpTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004FA5C (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004FB40 (ndisTraceDpcStart.c)
 *     ndisMProcessDeferred @ 0x1C005FF50 (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C00605C4 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMWakeUpDpc(
        PVOID SystemSpecific1,
        char *FunctionContext,
        PVOID SystemSpecific2,
        PVOID SystemSpecific3)
{
  char v5; // di
  __int64 Clock; // r14
  char v7; // bp
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  __int16 v11; // cx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rax

  v5 = 0;
  Clock = 0LL;
  if ( HIBYTE(dword_1C0099FD8) )
  {
    v7 = 1;
    ndisTraceDpcStart((__int64)FunctionContext, 4u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v7 = 0;
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
  v8 = *((_DWORD *)FunctionContext + 30);
  *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
  *((_DWORD *)FunctionContext + 464) = 656444;
  if ( v8 >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 && !FunctionContext[89] )
  {
    FunctionContext[89] = 1;
    *((_DWORD *)FunctionContext + 465) = 656463;
    *((_QWORD *)FunctionContext + 233) = KeGetCurrentThread();
    if ( (v8 & 0x300000) != 0 )
      goto LABEL_31;
    if ( *(_QWORD *)(*((_QWORD *)FunctionContext + 473) + 120LL) )
    {
      *((_QWORD *)FunctionContext + 65) = 0LL;
      *((_DWORD *)FunctionContext + 464) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)FunctionContext + 473) + 120LL))(*((_QWORD *)FunctionContext
                                                                                            + 3));
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
      *((_QWORD *)FunctionContext + 65) = KeGetCurrentThread();
      *((_DWORD *)FunctionContext + 464) = 656478;
    }
    v9 = *((_DWORD *)FunctionContext + 30);
    if ( (v9 & 0x1000000) != 0 )
      goto LABEL_31;
    if ( v5 )
    {
      ++*((_WORD *)FunctionContext + 893);
      goto LABEL_27;
    }
    if ( (v9 & 0x1000) == 0 )
    {
      v10 = *((_DWORD *)FunctionContext + 1113);
      if ( (v10 & 1) != 0 )
      {
        if ( (v10 & 2) != 0 )
        {
          if ( *((_QWORD *)FunctionContext + 277) )
            goto LABEL_26;
        }
        else
        {
          v11 = *((_WORD *)FunctionContext + 911);
          if ( v11 )
            *((_WORD *)FunctionContext + 911) = v11 - 1;
          else
            *((_DWORD *)FunctionContext + 1113) = v10 | 2;
        }
      }
    }
    if ( (v9 & 0x800) == 0 )
    {
      v12 = FunctionContext + 128;
      if ( (_QWORD *)*v12 != v12 )
      {
        v13 = *v12 - 64LL;
        if ( v13 )
        {
          v14 = *(_BYTE *)(v13 + 41);
          if ( (v14 & 0x10) != 0 )
          {
            if ( (v14 & 1) != 0 )
            {
LABEL_26:
              ++*((_WORD *)FunctionContext + 892);
LABEL_27:
              if ( *(_QWORD *)(*((_QWORD *)FunctionContext + 473) + 192LL) )
                ndisMQueueWorkItem((__int64)FunctionContext, 3, 0LL);
              goto LABEL_30;
            }
            *(_BYTE *)(v13 + 41) = v14 | 1;
          }
        }
      }
    }
LABEL_30:
    ndisMProcessDeferred((__int64)FunctionContext);
LABEL_31:
    FunctionContext[89] = 0;
    *((_DWORD *)FunctionContext + 465) = 0;
    *((_QWORD *)FunctionContext + 233) = 0LL;
  }
  KeSetEvent((PRKEVENT)(FunctionContext + 1912), 0, 0);
  if ( *((int *)FunctionContext + 30) >= 0 && (*((_DWORD *)FunctionContext + 31) & 0x20080000) == 0 )
    ndisSetWakeUpTimer((__int64)FunctionContext);
  if ( v7 )
  {
    v15 = WmiGetClock(0LL, 0LL);
    ndisTraceDpcEnd((__int64)FunctionContext, 4u, v15 - Clock);
  }
  *((_QWORD *)FunctionContext + 65) = 0LL;
  *((_DWORD *)FunctionContext + 464) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)FunctionContext + 12);
}
