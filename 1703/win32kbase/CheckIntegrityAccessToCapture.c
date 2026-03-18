/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C012E620
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C008BB10 (_anonymous_namespace_--ValidateUIPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edi

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)qword_1C0186018[0] + 8LL))(qword_1C0186018[0]);
  if ( !v2 )
    return 0;
  v3 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 2744), 1, 1)
    || !anonymous_namespace_::ValidateUIPI(a1, v2 + 2544, (_QWORD *)(v2 + 8)) )
  {
    return 0;
  }
  return v3;
}
