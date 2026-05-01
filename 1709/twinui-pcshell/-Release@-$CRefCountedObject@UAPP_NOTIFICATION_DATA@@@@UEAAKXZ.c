/*
 * XREFs of ?Release@?$CRefCountedObject@UAPP_NOTIFICATION_DATA@@@@UEAAKXZ @ 0x18005C680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRefCountedObject<APP_NOTIFICATION_DATA>::Release(void *Block)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)Block + 10);
  if ( !v2 && Block )
  {
    operator delete(*((void **)Block + 1));
    v3 = *((_QWORD *)Block + 4);
    if ( v3 )
    {
      *((_QWORD *)Block + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = *((_QWORD *)Block + 3);
    if ( v4 )
    {
      *((_QWORD *)Block + 3) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    operator delete(Block);
  }
  return v2;
}
