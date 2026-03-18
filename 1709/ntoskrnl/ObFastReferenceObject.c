/*
 * XREFs of ObFastReferenceObject @ 0x140081EF0
 * Callers:
 *     MiLogPageAccess @ 0x1400112C0 (MiLogPageAccess.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x140020390 (CcReferenceSharedCacheMapFileObject.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     PspReferenceSystemDll @ 0x14045FDA4 (PspReferenceSystemDll.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     SeCreateClientSecurity @ 0x14049CBB0 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14049CD70 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x14049D4B0 (PsReferenceEffectiveToken.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x1404C5AF0 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x1404CE640 (PsImpersonateClient.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140067BA8 (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectExWithTag @ 0x14008AAD0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1401226B0 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  unsigned int v5; // r8d
  ULONG_PTR v6; // rdi
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
  ObReferenceObjectExWithTag(v6, 15LL);
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
