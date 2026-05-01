/*
 * XREFs of ?Release@?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@UEAAKXZ @ 0x180016380
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::Release(void *Block)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)Block + 12);
  if ( !v2 && Block )
  {
    operator delete(*((void **)Block + 4));
    v3 = *((_QWORD *)Block + 2);
    if ( v3 )
    {
      *((_QWORD *)Block + 2) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = *((_QWORD *)Block + 1);
    if ( v4 )
    {
      *((_QWORD *)Block + 1) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    operator delete(Block);
  }
  return v2;
}
