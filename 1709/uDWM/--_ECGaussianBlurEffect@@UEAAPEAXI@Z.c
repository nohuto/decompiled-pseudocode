/*
 * XREFs of ??_ECGaussianBlurEffect@@UEAAPEAXI@Z @ 0x18006FE40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180024C00 (--1CResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CGaussianBlurEffect *__fastcall CGaussianBlurEffect::`vector deleting destructor'(CGaussianBlurEffect *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CGaussianBlurEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
