/*
 * XREFs of ??1CLegacyMilBrush@@UEAA@XZ @ 0x18007DB78
 * Callers:
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18007CF28 (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x18007D680 (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x180146C40 (--_GCLegacyMilBrush@@UEAAPEAXI@Z.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180181918 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrush::~CLegacyMilBrush(CLegacyMilBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLegacyMilBrush::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CResource::~CResource(this);
}
