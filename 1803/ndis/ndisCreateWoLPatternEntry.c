/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C00C561C
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00C53BC (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00C54A8 (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisGetWoLPatternSize @ 0x1C00C5934 (ndisGetWoLPatternSize.c)
 */

_DWORD *__fastcall ndisCreateWoLPatternEntry(void *Src, int a2)
{
  unsigned int WoLPatternSize; // r14d
  unsigned int v5; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  _DWORD *result; // rax
  unsigned __int16 v9; // cx

  WoLPatternSize = ndisGetWoLPatternSize();
  if ( WoLPatternSize + 92 < 0x120 )
  {
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
    {
      v9 = 61;
LABEL_6:
      WPP_SF_(v9, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    }
  }
  else
  {
    v5 = WoLPatternSize + 92;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, WoLPatternSize + 92, 0x7770444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      memmove(v7 + 12, Src, WoLPatternSize);
      v7[8] = v7[14];
      result = v7;
      v7[4] = v5;
      v7[11] = a2;
      return result;
    }
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
    {
      v9 = 62;
      goto LABEL_6;
    }
  }
  return 0LL;
}
