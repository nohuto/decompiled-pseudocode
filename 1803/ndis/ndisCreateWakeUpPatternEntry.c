/*
 * XREFs of ndisCreateWakeUpPatternEntry @ 0x1C00E0E18
 * Callers:
 *     ndisSetAddWakeUpPattern @ 0x1C00E2C08 (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C00E3210 (ndisSetOpenAddWakeUpPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     ndisGetWakeUpPatternSize @ 0x1C0049FB4 (ndisGetWakeUpPatternSize.c)
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
    if ( (unsigned __int8)byte_1C0099612 >= 2u )
      WPP_SF_(0x1Eu, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids);
    return 0LL;
  }
  return result;
}
