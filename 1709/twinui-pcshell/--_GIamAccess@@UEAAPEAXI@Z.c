/*
 * XREFs of ??_GIamAccess@@UEAAPEAXI@Z @ 0x1800F2160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

IamAccess *__fastcall IamAccess::`scalar deleting destructor'(IamAccess *this, char a2)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 11) = -1073741823;
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
