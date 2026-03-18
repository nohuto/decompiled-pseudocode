/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140102188
 * Callers:
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiPteHasShadow @ 0x14017C9F0 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x14020D3B4 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r9
  int v5; // r10d

  v5 = MiPteInShadowRange(a1);
  if ( v5 && (unsigned int)MiPteHasShadow(v2, v1, v3) )
    v3 |= 0x20uLL;
  if ( (MiFlags & 0x800) != 0 )
  {
    v3 |= 0x20uLL;
  }
  else if ( (MiFlags & 0x2000000) != 0 )
  {
    _mm_lfence();
  }
  if ( (v3 & 0x20) != 0 )
  {
    *v4 = v1;
    if ( v5 )
      MiWritePteShadow(v4);
  }
  else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v4, v1, v3) & 0x20) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
