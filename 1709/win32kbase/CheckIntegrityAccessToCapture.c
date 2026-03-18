/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C012DBA0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0093DF8 (_anonymous_namespace_--ValidateUIPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edi

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C0188018 + 8LL))(qword_1C0188018);
  if ( !v2 )
    return 0;
  v3 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 2896), 1, 1)
    || !anonymous_namespace_::ValidateUIPI(a1, v2 + 2696, (__int64 *)(v2 + 8)) )
  {
    return 0;
  }
  return v3;
}
