/*
 * XREFs of KiSchedulerDpc @ 0x14028BB50
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x14018B3D0 (KiMcaDeferredRecoveryService.c)
 *     RtlWriteTryAcquireTickLock @ 0x140256F34 (RtlWriteTryAcquireTickLock.c)
 */

void __fastcall __noreturn KiSchedulerDpc(
        struct _KDPC *Dpc,
        ULONG_PTR *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ULONG_PTR *v4; // r10
  unsigned __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax

  v4 = DeferredContext;
  v5 = DeferredContext[13] % 0xA;
  if ( v5 <= 9 )
  {
    v6 = v5 - 5;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 == 1 )
              _disable();
          }
          else
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
          }
        }
        else
        {
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
        }
      }
      else
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
    }
    else
    {
      RtlWriteTryAcquireTickLock();
    }
  }
  KiMcaDeferredRecoveryService(__ROL4__(-2071986176, 137), v4[9], v4[10], v4[11], v4[12]);
}
