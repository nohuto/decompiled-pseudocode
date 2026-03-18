/*
 * XREFs of ObFastReferenceObject @ 0x1400EE6B0
 * Callers:
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MiLogPageAccess @ 0x1400D6220 (MiLogPageAccess.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     PsImpersonateClient @ 0x14047E530 (PsImpersonateClient.c)
 *     PspReferenceSystemDll @ 0x14049C278 (PspReferenceSystemDll.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     SeCreateClientSecurityEx @ 0x14050AD10 (SeCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x14050B1D0 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x14050B3A0 (SeCreateClientSecurity.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x14050F760 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x140024BAC (ObpDeferObjectDeletion.c)
 *     ObReferenceObjectExWithTag @ 0x1400445F0 (ObReferenceObjectExWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140049B60 (ObpTraceObjectDereferenceIfActive.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  unsigned int v5; // r8d
  unsigned __int64 v6; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    return v6;
  if ( !v5 )
    return 0LL;
  ObReferenceObjectExWithTag(v6, 15);
  _m_prefetchw(a1);
  v8 = *a1;
  while ( (v8 & 0xF) == 0 )
  {
    if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v9 = v8;
    v8 = _InterlockedCompareExchange64(a1, v8 + 15, v8);
    if ( v9 == v8 )
      return v6;
  }
  ObpTraceObjectDereferenceIfActive(v6 - 48);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
  if ( BugCheckParameter4 > 0 )
    return v6;
  if ( BugCheckParameter4 )
    KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
  ObpDeferObjectDeletion(v6 - 48);
  return v6;
}
