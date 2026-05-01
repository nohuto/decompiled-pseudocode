/*
 * XREFs of ??_ELegacyViewWrapper@@UEAAPEAXI@Z @ 0x1801C9B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801C84B0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILega.c)
 */

LegacyViewWrapper *__fastcall LegacyViewWrapper::`vector deleting destructor'(
        LegacyViewWrapper *this,
        volatile int *a2)
{
  char v3; // di
  struct _TP_TIMER *v4; // rcx

  v3 = (char)a2;
  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 70);
  if ( v4 )
  {
    SetThreadpoolTimer(v4, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 70), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 70));
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>(
    (__int64)this,
    a2);
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x240);
  return this;
}
