/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_65a140ede4573307db560e294d6cd58c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180088770
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x180088810 (-Release@-$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_65a140ede4573307db560e294d6cd58c_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  __int64 (__fastcall *v5)(void *); // rax

  v4 = (void *)a1[3];
  if ( v4 )
  {
    a1[3] = 0LL;
    v5 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CRefCountedObject<PER_APPLICATION_DATA>::Release )
      CRefCountedObject<PER_APPLICATION_DATA>::Release(v4);
    else
      v5(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
