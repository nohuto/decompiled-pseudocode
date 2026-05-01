/*
 * XREFs of ??_GCOperationWaiter@@UEAAPEAXI@Z @ 0x18001C220
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

COperationWaiter *__fastcall COperationWaiter::`scalar deleting destructor'(COperationWaiter *this, char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx

  v4 = (char *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  *((_DWORD *)this + 11) = -1073741823;
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
