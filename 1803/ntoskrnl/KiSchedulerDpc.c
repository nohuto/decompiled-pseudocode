/*
 * XREFs of KiSchedulerDpc @ 0x1402C15C0
 * Callers:
 *     <none>
 * Callees:
 *     KiMcaDeferredRecoveryService @ 0x1401B5080 (KiMcaDeferredRecoveryService.c)
 *     RtlWriteTryAcquireTickLock @ 0x14028F270 (RtlWriteTryAcquireTickLock.c)
 */

void __fastcall __noreturn KiSchedulerDpc(__int64 a1, ULONG_PTR *a2)
{
  ULONG_PTR *v2; // r10
  unsigned __int64 v3; // rcx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rax

  v2 = a2;
  v3 = a2[13] % 0xA;
  if ( v3 <= 9 )
  {
    v4 = v3 - 5;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
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
          v9 = KeGetCurrentThread();
          --v9->KernelApcDisable;
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
  KiMcaDeferredRecoveryService(__ROL4__(-2071986176, 137), v2[9], v2[10], v2[11], v2[12]);
}
