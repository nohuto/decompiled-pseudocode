/*
 * XREFs of ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x180043900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(
        volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = _InterlockedDecrement(Block + 12);
  if ( !v2 && Block )
  {
    v3 = *((_QWORD *)Block + 3);
    if ( v3 )
    {
      *((_QWORD *)Block + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = *((_QWORD *)Block + 2);
    if ( v4 )
    {
      *((_QWORD *)Block + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    operator delete((void *)Block);
  }
  return v2;
}
