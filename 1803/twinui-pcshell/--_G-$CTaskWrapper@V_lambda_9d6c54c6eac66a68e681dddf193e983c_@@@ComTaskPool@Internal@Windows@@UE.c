/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_9d6c54c6eac66a68e681dddf193e983c_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800910F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x180091690 (-Release@-$CRefCountedObject@V-$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9d6c54c6eac66a68e681dddf193e983c_>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  __int64 (__fastcall *v5)(void *); // rax

  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    v5 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release )
      CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(v4);
    else
      v5(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
