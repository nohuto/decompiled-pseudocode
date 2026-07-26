/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00D4A60
 * Callers:
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00D4D0C (ndisMiniportPreAddProtocolOffload.c)
 *     ndisSourcePreAddProtocolOffload @ 0x1C00D7A54 (ndisSourcePreAddProtocolOffload.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
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
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
      WPP_SF_(0x61u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
    return 0LL;
  }
  return result;
}
