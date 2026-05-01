/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x180032520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  _QWORD *v3; // rsi
  __int64 v4; // rcx

  v2 = _InterlockedDecrement(Block + 4);
  if ( !v2 && Block )
  {
    v3 = (_QWORD *)*((_QWORD *)Block + 1);
    *((_QWORD *)Block + 1) = 0LL;
    if ( v3 )
    {
      v4 = v3[1];
      if ( v4 )
      {
        v3[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      operator delete(v3);
    }
    operator delete((void *)Block);
  }
  return v2;
}
