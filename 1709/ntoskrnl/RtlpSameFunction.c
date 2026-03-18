/*
 * XREFs of RtlpSameFunction @ 0x140149A60
 * Callers:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     RtlpVirtualUnwind @ 0x1400D86E0 (RtlpVirtualUnwind.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x14012C5E0 (RtlVirtualUnwind.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     RtlLookupFunctionEntry @ 0x1400D5980 (RtlLookupFunctionEntry.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400D83C0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpLookupPrimaryFunctionEntry @ 0x14011E490 (RtlpLookupPrimaryFunctionEntry.c)
 */

_BYTE *__fastcall RtlpSameFunction(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rsi
  __int64 v5; // rbx
  PRUNTIME_FUNCTION v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+18h] BYREF

  v4 = RtlpLookupPrimaryFunctionEntry(a1, a2, a3);
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
  if ( *(_DWORD *)v4 == *(_DWORD *)RtlpLookupPrimaryFunctionEntry(v6, v7, a3) )
    return v4;
  return (_BYTE *)v5;
}
