/*
 * XREFs of ??_GPhoneCallEndTimer@@UEAAPEAXI@Z @ 0x1800C7AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?StopTimer@RoutingTimer@@UEAAXXZ @ 0x1800C9150 (-StopTimer@RoutingTimer@@UEAAXXZ.c)
 */

PhoneCallEndTimer *__fastcall PhoneCallEndTimer::`scalar deleting destructor'(PhoneCallEndTimer *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 3) == 0LL;
  *(_QWORD *)this = &RoutingTimer::`vftable';
  if ( !v2 )
    RoutingTimer::StopTimer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
