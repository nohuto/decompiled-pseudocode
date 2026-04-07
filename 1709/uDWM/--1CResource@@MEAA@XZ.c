/*
 * XREFs of ??1CResource@@MEAA@XZ @ 0x180024C00
 * Callers:
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x18000CF44 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 *     ??_ECGaussianBlurEffect@@UEAAPEAXI@Z @ 0x18006FE40 (--_ECGaussianBlurEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResource::~CResource(CResource *this)
{
  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CBaseObject::`vftable';
}
