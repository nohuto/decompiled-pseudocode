/*
 * XREFs of PpmUnlockProcessors @ 0x140273CF8
 * Callers:
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall PpmUnlockProcessors(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int16 *v5; // rax
  __int64 Prcb; // rdx
  __int64 v7; // rbx
  unsigned __int32 v8; // eax
  unsigned __int32 v9; // r9d
  signed __int32 v10; // ecx
  __int64 result; // rax
  __int64 v12; // r8
  ULONG v13; // [rsp+20h] [rbp-A9h] BYREF
  unsigned __int16 *v14[2]; // [rsp+28h] [rbp-A1h] BYREF
  __int16 v15; // [rsp+38h] [rbp-91h]
  _DWORD v16[44]; // [rsp+40h] [rbp-89h] BYREF

  v16[0] = 1310721;
  memset(&v16[1], 0, 0xA4uLL);
  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v5 = *(unsigned __int16 **)(a2 + 8);
  v15 = 0;
  v14[1] = v5;
  v14[0] = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, v14) )
  {
    Prcb = KeGetPrcb(v13);
    v7 = *(_QWORD *)(Prcb + 23808);
    _m_prefetchw((const void *)(Prcb + 23872));
    v8 = *(_DWORD *)(Prcb + 23872);
    do
    {
      v9 = v8;
      v10 = v8 ^ (v8 ^ (v8 - 1)) & 0xFFFFFF;
      if ( (v10 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v8) == 5 )
        {
          v10 = v10 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v8) == 7 )
        {
          v10 = v10 & 0xFFFFFF | 0x6000000;
        }
      }
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(Prcb + 23872), v10, v8);
    }
    while ( v8 != v9 );
    if ( HIBYTE(v10) == 6 )
      KeAddProcessorAffinityEx(v16, v13);
    _InterlockedAnd64(
      (volatile signed __int64 *)(v7
                                + 8 * ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v2] >> 6)
                                + 80),
      ~(1LL << (KiProcessorIndexToNumberMappingTable[v2] & 0x3F)));
    KeRemoveProcessorAffinityEx(a1, v13);
  }
  result = KeIsEmptyAffinityEx(v16);
  if ( !(_DWORD)result )
    return HalRequestIpi(0LL, v16, v12);
  return result;
}
