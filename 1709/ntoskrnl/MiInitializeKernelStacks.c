/*
 * XREFs of MiInitializeKernelStacks @ 0x14082EA74
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1400F739C (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x140138F04 (MiBuildDynamicRegion.c)
 *     MiMarkBootGuardPage @ 0x1405B76A0 (MiMarkBootGuardPage.c)
 *     MiInitializePteInfo @ 0x14082D63C (MiInitializePteInfo.c)
 *     MiMarkBootKernelStack @ 0x14082EBE0 (MiMarkBootKernelStack.c)
 */

__int64 MiInitializeKernelStacks()
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 *v7; // rax
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
  v6 = qword_140389B50;
  byte_14038900C = (unsigned int)KeKernelStackSize >> 12;
  v7 = MiSystemVaToDynamicBitmap(15);
  if ( !(unsigned int)MiBuildDynamicRegion(v7, v6, 0x10000000000uLL)
    || !(unsigned int)MiInitializePteInfo((__int64)&unk_140388FA0, 15, 0LL, 19, v6, 0x10000000000uLL, 1u) )
  {
    return 0LL;
  }
  result = 1LL;
  dword_140388FB8 |= 1u;
  qword_140388FF8 = qword_140388F30;
  return result;
}
