/*
 * XREFs of MiUpdatePageTableUseCount @ 0x1400A56C0
 * Callers:
 *     MiExpandSharedZeroCluster @ 0x140076550 (MiExpandSharedZeroCluster.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiFillPteWithProto @ 0x1400A810C (MiFillPteWithProto.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     MiIsAddressValid @ 0x1400A58A0 (MiIsAddressValid.c)
 *     MiGetUsedPtesHandle @ 0x14021BF88 (MiGetUsedPtesHandle.c)
 */

__int64 __fastcall MiUpdatePageTableUseCount(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rdx
  __int64 UsedPtesHandle; // rax
  __int64 v6; // rbx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  v4 = 0LL;
  while ( v3 > 0x7FFFFFFEFFFFLL )
  {
    v4 = (unsigned int)(v4 + 1);
    v3 = (__int64)(v3 << 25) >> 16;
    if ( (unsigned int)v4 >= 3 )
      return 0LL;
  }
  UsedPtesHandle = MiGetUsedPtesHandle(a1, v4, v3, 0x7FFFFFFEFFFFLL);
  v8 = 0;
  v6 = UsedPtesHandle;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8);
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  *(_QWORD *)(v6 + 16) ^= ((unsigned int)*(_QWORD *)(v6 + 16) ^ ((unsigned int)*(_QWORD *)(v6 + 16)
                                                               + ((unsigned __int16)a2 << 16))) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a2 <= 1 )
    MiIsAddressValid(*(_QWORD *)(v6 + 8) | 0x8000000000000000uLL);
  return 1LL;
}
