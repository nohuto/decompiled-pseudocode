/*
 * XREFs of ??1ResultException@wil@@UEAA@XZ @ 0x1400323EC
 * Callers:
 *     ??_GResultException@wil@@UEAAPEAXI@Z @ 0x140032540 (--_GResultException@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x140034A28 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::ResultException::~ResultException(wil::ResultException *this)
{
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 184));
  wil::details::shared_buffer::reset((wil::ResultException *)((char *)this + 168));
  *(_QWORD *)this = &std::exception::`vftable';
  __std_exception_destroy((char *)this + 8);
}
