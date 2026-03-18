/*
 * XREFs of MmInitializeProcessor @ 0x14047BD90
 * Callers:
 *     KiStartDynamicProcessor @ 0x140741260 (KiStartDynamicProcessor.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     KeStartAllProcessors @ 0x1408AB748 (KeStartAllProcessors.c)
 * Callees:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiCreateUltraThreadContext @ 0x14013A724 (MiCreateUltraThreadContext.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MmDeleteProcessor @ 0x14025258C (MmDeleteProcessor.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  ULONG_PTR v2; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rax

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25264) = -1LL;
  v2 = MiReservePtes((__int64)&qword_1403CC5E0, 0x40u);
  if ( !v2 )
    return 0LL;
  *(_QWORD *)(a1 + 24320) = (__int64)(v2 << 25) >> 16;
  *(_DWORD *)(a1 + 23580) = dword_1403CB6D8;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30C8uLL, 0x20206D4Du);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_6:
    MmDeleteProcessor(a1);
    return 0LL;
  }
  memset(PoolWithTag, 0, 0x30C8uLL);
  v5[6] = 512;
  *(_QWORD *)v5 = v5 + 8;
  *((_QWORD *)v5 + 1) = v5 + 1038;
  *((_QWORD *)v5 + 2) = v5 + 2062;
  v5[3120] = 0;
  v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
  v7 = qword_1403CDF50 + 1984 * v6;
  *(_DWORD *)(a1 + 23572) = *(unsigned __int8 *)(v7 + 1820);
  *(_DWORD *)(a1 + 23576) = *(_DWORD *)(v7 + 1816);
  v8 = __rdtsc();
  if ( !(unsigned int)MiCreateUltraThreadContext(
                        (__int64)(v5 + 3088),
                        (unsigned __int16)((_WORD)v6 << byte_1403CB699) | (unsigned int)(v8 & (unsigned __int16)((1 << byte_1403CB69A) - 1)),
                        8) )
  {
    ExFreePoolWithTag(v5, 0);
    goto LABEL_6;
  }
  *(_QWORD *)(a1 + 23800) = v5;
  return 1LL;
}
