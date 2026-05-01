/*
 * XREFs of ?Release@?$CRefCountedObject@UViewEventRegistration@@@@UEAAKXZ @ 0x1800FD090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<ViewEventRegistration>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx
  HSTRING v4; // rcx
  HSTRING v5; // rcx

  v2 = _InterlockedDecrement(Block + 12);
  if ( !v2 && Block )
  {
    v3 = *((_QWORD *)Block + 4);
    if ( v3 )
    {
      *((_QWORD *)Block + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = (HSTRING)*((_QWORD *)Block + 2);
    if ( v4 )
      WindowsDeleteString(v4);
    v5 = (HSTRING)*((_QWORD *)Block + 1);
    if ( v5 )
      WindowsDeleteString(v5);
    operator delete((void *)Block);
  }
  return v2;
}
