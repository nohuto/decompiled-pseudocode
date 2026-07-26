/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C00BAAA0
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00BA844 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BA92C (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisGetWoLPatternSize @ 0x1C00BADB4 (ndisGetWoLPatternSize.c)
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
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
    {
      v9 = 61;
LABEL_6:
      WPP_SF_(v9, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
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
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
    {
      v9 = 62;
      goto LABEL_6;
    }
  }
  return 0LL;
}
