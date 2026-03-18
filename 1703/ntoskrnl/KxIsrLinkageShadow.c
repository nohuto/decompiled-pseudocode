/*
 * XREFs of KxIsrLinkageShadow @ 0x14026D9C0
 * Callers:
 *     KiIsrThunkShadow @ 0x14026D180 (KiIsrThunkShadow.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall KxIsrLinkageShadow()
{
  unsigned __int64 v0; // rsi
  _KIDTENTRY64 *v3; // rsi
  _KIDTENTRY64 v5; // [rsp-30h] [rbp-30h] BYREF
  _KIDTENTRY64 v6; // [rsp-20h] [rbp-20h]
  _KIDTENTRY64 v7; // [rsp-10h] [rbp-10h]

  if ( (v6.OffsetLow & 1) != 0 )
  {
    __asm { swapgs }
    _mm_lfence();
    if ( !_bittest(MK_FP(__GS__, 28696LL), 1u) )
      __writecr3((unsigned __int64)&v5);
    __writegsqword(0x10u, v0);
    v3 = KeGetPcr()->IdtBase + 1056;
    v7 = v3[-1];
    v6 = v3[-2];
    v5 = v3[-3];
    __writegsqword(0x10u, 0LL);
    return KxIsrLinkage();
  }
  else
  {
    _mm_lfence();
    return KxIsrLinkage();
  }
}
