/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00DF280
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00DF510 (ndisMiniportPreAddProtocolOffload.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00E1E00 (ndisSourcePreAddProtocolOffload.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

_DWORD *__fastcall ndisCreatePMProtocolOffloadEntry(void *Src, int a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x706F444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    memmove(v5 + 12, Src, 0xF0uLL);
    v5[8] = v5[14];
    result = v5;
    v5[4] = 288;
    v5[11] = a2;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0098752 >= 2u )
      WPP_SF_(0x61u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids);
    return 0LL;
  }
  return result;
}
