/*
 * XREFs of ??1Payload@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180055B80
 * Callers:
 *     _SystemTray::TrayInfoTipDisplayInfo::InitProperties_::_1_::dtor$1 @ 0x1801F7401 (_SystemTray--TrayInfoTipDisplayInfo--InitProperties_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload(
        __int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
