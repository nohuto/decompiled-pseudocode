/*
 * XREFs of MiGetSmallZeroPtes @ 0x140129AD0
 * Callers:
 *     MiGetLargePageToZero @ 0x140129020 (MiGetLargePageToZero.c)
 * Callees:
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteTimeStamp @ 0x14017CE80 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x14017D06C (MiUpdatePageFileHighInPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

_QWORD *__fastcall MiGetSmallZeroPtes(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  unsigned __int64 PteTimeStamp; // rax
  __int64 v6; // r10
  _KPROCESS *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r10
  int v11; // [rsp+20h] [rbp-D8h] BYREF
  __int16 v12; // [rsp+24h] [rbp-D4h]
  int v13; // [rsp+28h] [rbp-D0h]
  int v14; // [rsp+2Ch] [rbp-CCh]
  __int64 v15; // [rsp+30h] [rbp-C8h]
  __int64 v16; // [rsp+38h] [rbp-C0h]

  v2 = *(_QWORD **)(a1 + 136);
  v4 = MI_READ_PTE_LOCK_FREE(v2);
  PteTimeStamp = MiGetPteTimeStamp(v4);
  v6 = PteTimeStamp;
  if ( a2 > PteTimeStamp )
  {
    v14 = 0;
    v11 = 0;
    v12 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v13 = 20;
    MiInsertTbFlushEntry(
      (__int64)&v11,
      (__int64)((PteTimeStamp << 28) + ((_QWORD)v2 << 25)) >> 16,
      (unsigned int)(256 - PteTimeStamp),
      0);
    MiFlushTbList((__int64)&v11, v7);
    v6 = 256LL;
  }
  *v2 = MiUpdatePageFileHighInPte(v4, v6 - a2);
  if ( (unsigned int)MiPteInShadowRange(v2) )
    MiWritePteShadow(v8);
  return &v2[v9];
}
