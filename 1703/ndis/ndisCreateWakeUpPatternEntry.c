/*
 * XREFs of ndisCreateWakeUpPatternEntry @ 0x1C00D4AFC
 * Callers:
 *     ndisSetAddWakeUpPattern @ 0x1C00D6FD8 (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C00D75D4 (ndisSetOpenAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisGetWakeUpPatternSize @ 0x1C004B140 (ndisGetWakeUpPatternSize.c)
 */

_DWORD *__fastcall ndisCreateWakeUpPatternEntry(unsigned int *Src, int a2)
{
  unsigned int WakeUpPatternSize; // eax
  size_t v5; // rsi
  unsigned int v6; // ebp
  SIZE_T v7; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rbx
  _DWORD *result; // rax

  WakeUpPatternSize = ndisGetWakeUpPatternSize(Src);
  v5 = WakeUpPatternSize;
  v6 = WakeUpPatternSize + 280;
  v7 = WakeUpPatternSize + 280;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x6B70444Eu);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    memmove(v9 + 12, Src, v5);
    v9[4] = v6;
    v9[8] = *Src;
    result = v9;
    v9[11] = a2;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0092612 >= 2u )
      WPP_SF_(0x1Eu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids);
    return 0LL;
  }
  return result;
}
