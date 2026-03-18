/*
 * XREFs of MmInvalidateDumpAddresses @ 0x140475598
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 */

struct _KTHREAD *__fastcall MmInvalidateDumpAddresses(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *PteAddress; // r10
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  int v10; // r11d
  _QWORD *v11; // r10
  struct _KTHREAD *result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r10
  __int64 v17; // r11

  v3 = a1;
  PteAddress = (_QWORD *)MiGetPteAddress(a1);
  if ( v5 )
  {
    do
    {
      *PteAddress = ZeroPte;
      if ( MiPteInShadowRange((unsigned __int64)PteAddress) )
        MiWritePteShadow(v7, v6, v8);
      PteAddress = (_QWORD *)(v9 + 8);
    }
    while ( (unsigned int)(v10 + 1) < a2 );
  }
  for ( ; a2; --a2 )
  {
    KeFlushSingleCurrentTb(v3, 0);
    v3 += 4096LL;
  }
  v11 = (_QWORD *)qword_1403CBE10;
  do
  {
    *v11 = ZeroPte;
    result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v11);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v14, v13, v15);
    v11 = (_QWORD *)(v16 + 8);
  }
  while ( v17 != 1 );
  return result;
}
