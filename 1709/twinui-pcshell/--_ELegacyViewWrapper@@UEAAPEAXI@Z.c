/*
 * XREFs of ??_ELegacyViewWrapper@@UEAAPEAXI@Z @ 0x18012AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18012796C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILega.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

LegacyViewWrapper *__fastcall LegacyViewWrapper::`vector deleting destructor'(LegacyViewWrapper *this, char a2)
{
  struct _TP_TIMER *v4; // rcx

  v4 = (struct _TP_TIMER *)*((_QWORD *)this + 70);
  if ( v4 )
  {
    SetThreadpoolTimer(v4, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 70), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 70));
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
