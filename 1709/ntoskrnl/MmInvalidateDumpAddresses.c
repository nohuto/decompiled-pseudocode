/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140430834
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     KeFlushSingleCurrentTb @ 0x1400D034C (KeFlushSingleCurrentTb.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  __int64 PteAddress; // rax
  unsigned int v5; // r11d
  _QWORD *v6; // r10
  __int64 v7; // rdx
  _QWORD *v8; // r10
  __int64 v9; // r11
  struct _KTHREAD *result; // rax

  v3 = a1;
  PteAddress = MiGetPteAddress(a1);
  v5 = 0;
  v6 = (_QWORD *)PteAddress;
  if ( v7 )
  {
    do
    {
      *v6 = 0LL;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      ++v5;
      ++v6;
    }
    while ( v5 < a2 );
  }
  for ( ; a2; --a2 )
  {
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v8 = (_QWORD *)qword_140388B78;
  v9 = 32LL;
  do
  {
    *v8 = 0LL;
    result = (struct _KTHREAD *)0xFFFFF6FB7DBED000LL;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = (struct _KTHREAD *)0xFFFFF6FB7DBED7F8LL;
      if ( (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiWritePteShadow();
    }
    ++v8;
    --v9;
  }
  while ( v9 );
  return result;
}
