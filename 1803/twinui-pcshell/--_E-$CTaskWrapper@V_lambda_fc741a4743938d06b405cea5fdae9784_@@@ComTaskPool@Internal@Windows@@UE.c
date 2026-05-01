/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_fc741a4743938d06b405cea5fdae9784_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18011B300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_fc741a4743938d06b405cea5fdae9784_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx

  v4 = (char *)a1[3];
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = a1[2];
  if ( v5 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
