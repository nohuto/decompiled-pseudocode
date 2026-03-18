/*
 * XREFs of ??1CMotion@@QEAA@XZ @ 0x180189BB0
 * Callers:
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x18018A1E0 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMotion::~CMotion(CMotion *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  *((_QWORD *)this + 12) = &CMILRefCountBase::`vftable';
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
}
