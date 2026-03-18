/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140404F10
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     KeFlushSingleCurrentTb @ 0x140136CE4 (KeFlushSingleCurrentTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *PteAddress; // r10
  __int64 v5; // rdx
  __int64 v6; // r10
  int v7; // r11d
  _QWORD *v8; // r10
  struct _KTHREAD *result; // rax
  __int64 v10; // r10
  __int64 v11; // r11

  v3 = a1;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( v5 )
  {
    do
    {
      *PteAddress = 0LL;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
        MiWritePteShadow();
      PteAddress = (_QWORD *)(v6 + 8);
    }
    while ( (unsigned int)(v7 + 1) < a2 );
  }
  for ( ; a2; --a2 )
  {
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v8 = (_QWORD *)qword_14036C980;
  do
  {
    *v8 = 0LL;
    result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v8);
    if ( (_DWORD)result )
      result = MiWritePteShadow();
    v8 = (_QWORD *)(v10 + 8);
  }
  while ( v11 != 1 );
  return result;
}
