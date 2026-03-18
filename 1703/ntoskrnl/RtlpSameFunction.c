/*
 * XREFs of RtlpSameFunction @ 0x14015DB14
 * Callers:
 *     RtlDispatchException @ 0x140009410 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 *     RtlVirtualUnwind @ 0x14000B020 (RtlVirtualUnwind.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400E6E50 (RtlpVirtualUnwind.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x14000A970 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400E6B30 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x14015DB90 (RtlpLookupPrimaryFunctionEntry.c)
 */

_DWORD *__fastcall RtlpSameFunction(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // rsi
  __int64 v5; // rbx
  PRUNTIME_FUNCTION v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  v4 = (_DWORD *)((__int64 (*)(void))RtlpLookupPrimaryFunctionEntry)();
  v5 = 0LL;
  if ( a3 <= 0x7FFFFFFEFFFFLL )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v6 = (PRUNTIME_FUNCTION)RtlpLookupFunctionEntryForStackWalks(a3, (__int64)&v9);
    if ( !v6 )
      return 0LL;
    v7 = v10;
  }
  else
  {
    v6 = RtlLookupFunctionEntry(a3, &ImageBase, 0LL);
    v7 = ImageBase;
  }
  if ( !v6 )
    return 0LL;
  if ( *v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v4;
  return (_DWORD *)v5;
}
