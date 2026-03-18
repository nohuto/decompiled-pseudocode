/*
 * XREFs of ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C004A680
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C004A100 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteOutstandingAnalogToken(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 35);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 35) = 0LL;
  }
}
