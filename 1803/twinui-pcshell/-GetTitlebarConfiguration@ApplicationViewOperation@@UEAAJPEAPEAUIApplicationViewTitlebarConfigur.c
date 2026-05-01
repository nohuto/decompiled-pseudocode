/*
 * XREFs of ?GetTitlebarConfiguration@ApplicationViewOperation@@UEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180089660
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewOperation::GetTitlebarConfiguration(
        ApplicationViewOperation *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v3; // rcx

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 22);
  if ( !v3 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *a2 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)this + 22);
  return 0LL;
}
