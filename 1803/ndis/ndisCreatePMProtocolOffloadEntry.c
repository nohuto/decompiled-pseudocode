/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00B3F34
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00B3D1C (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00B3DF0 (ndisMiniportPreAddProtocolOffload.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
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
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
      WPP_SF_(0x61u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    return 0LL;
  }
  return result;
}
