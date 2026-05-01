/*
 * XREFs of ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180018390
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<PER_APPLICATION_DATA>::Release(void *Block)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)Block + 12);
  if ( !v2 && Block )
  {
    v3 = *((_QWORD *)Block + 2);
    if ( v3 )
    {
      *((_QWORD *)Block + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    WindowsDeleteString(*((HSTRING *)Block + 1));
    *((_QWORD *)Block + 1) = 0LL;
    operator delete(Block);
  }
  return v2;
}
