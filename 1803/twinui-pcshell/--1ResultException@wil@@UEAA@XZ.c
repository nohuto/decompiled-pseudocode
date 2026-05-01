/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1800FBE50
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x1800FC2E0 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$2 @ 0x1801EDABE (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$2.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18008AAB0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(LPVOID *this)
{
  wil::details::shared_buffer::reset(this + 23);
  wil::details::shared_buffer::reset(this + 21);
  *this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)(this + 1));
}
