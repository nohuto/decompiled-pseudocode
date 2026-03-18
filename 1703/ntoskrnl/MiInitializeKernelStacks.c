/*
 * XREFs of MiInitializeKernelStacks @ 0x140808E5C
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiMarkBootGuardPage @ 0x1405A7878 (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x140809890 (MiMarkBootKernelStack.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = v1 - (unsigned int)KeKernelStackSize;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v4, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v5, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  __writecr8(CurrentIrql);
  MiMarkBootGuardPage(v5 - 8);
  MiMarkBootGuardPage(v4 - 8);
  result = (unsigned int)KeKernelStackSize >> 12;
  byte_14036CD9C = (unsigned int)KeKernelStackSize >> 12;
  return result;
}
