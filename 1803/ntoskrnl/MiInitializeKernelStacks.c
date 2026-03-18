/*
 * XREFs of MiInitializeKernelStacks @ 0x1408AB5F0
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x140049920 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017677C (MiBuildDynamicRegion.c)
 *     MiMarkBootGuardPage @ 0x14062B064 (MiMarkBootGuardPage.c)
 *     MiMarkBootKernelStack @ 0x1408AC040 (MiMarkBootKernelStack.c)
 *     MiInitializePteInfo @ 0x1408AC9D0 (MiInitializePteInfo.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 *v5; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = (unsigned __int64)KeGetPcr()->Prcb.DpcStack + 80;
  v2 = (((v1 - (unsigned int)KeKernelStackSize) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v2, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v3 = (((unsigned __int64)CurrentThread->StackLimit >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  MiMarkBootKernelStack(v3, (((unsigned __int64)CurrentThread->StackBase >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  MiMarkBootGuardPage(v3 - 8);
  MiMarkBootGuardPage(v2 - 8);
  v4 = qword_1403CD110;
  byte_1403CC2BC = (unsigned int)KeKernelStackSize >> 12;
  v5 = MiSystemVaToDynamicBitmap(15);
  if ( !(unsigned int)MiBuildDynamicRegion(v5, v4, 0x10000000000uLL)
    || !(unsigned int)MiInitializePteInfo((unsigned int)&unk_1403CC258, 15, 0, 11, v4, 0x10000000000LL, 1) )
  {
    return 0LL;
  }
  result = 1LL;
  dword_1403CC270 |= 1u;
  qword_1403CC2A8 = qword_1403CC1F0;
  return result;
}
