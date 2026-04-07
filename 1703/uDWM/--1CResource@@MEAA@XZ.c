/*
 * XREFs of ??1CResource@@MEAA@XZ @ 0x18001EA00
 * Callers:
 *     ??_ECGaussianBlurEffect@@UEAAPEAXI@Z @ 0x18000E2A0 (--_ECGaussianBlurEffect@@UEAAPEAXI@Z.c)
 *     ??1CCachedVisualImageBrushResource@@MEAA@XZ @ 0x18003C154 (--1CCachedVisualImageBrushResource@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResource::~CResource(CResource *this)
{
  *(_QWORD *)this = &CResource::`vftable';
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 128LL))(
    *((_QWORD *)this + 2),
    *((unsigned int *)this + 6));
  *(_QWORD *)this = &CBaseObject::`vftable';
}
