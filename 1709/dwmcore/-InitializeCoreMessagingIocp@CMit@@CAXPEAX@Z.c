/*
 * XREFs of ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x1801A0588
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x180119940 (-Run@CMit@@AEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMit::InitializeCoreMessagingIocp(void *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  (*(void (__fastcall **)(struct IMessageSession *, __int64 *))(*(_QWORD *)CMit::s_pMessageSession + 40LL))(
    CMit::s_pMessageSession,
    &v2);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v2 + 96LL))(v2, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
