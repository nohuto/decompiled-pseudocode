/*
 * XREFs of ??$CreateRefCountedObj@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@V1@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@@WRL@Microsoft@@$$QEAV?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@Z @ 0x1800328B8
 * Callers:
 *     ?_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ @ 0x1800315E0 (-_ScheduleListenerNotification@CImmersiveMode@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CreateRefCountedObj<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>,CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rax

  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = 0LL;
    v6 = *a2;
    *a2 = 0LL;
    v5[1] = v6;
    *v5 = &CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::`vftable';
    *((_DWORD *)v5 + 4) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5;
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 8LL))(v5, 0LL);
  return a1;
}
