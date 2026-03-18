/*
 * XREFs of ??1CHwConstantColorSource@@MEAA@XZ @ 0x1800C3E54
 * Callers:
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800C3C50 (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801A24A0 (--_ECHwConstantColorSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CHwConstantColorSource::~CHwConstantColorSource(CHwConstantColorSource *this)
{
  CMILRefCountBase *v2; // rcx

  *(_QWORD *)this = &CHwConstantColorSource::`vftable';
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 3);
  if ( v2 )
    CMILRefCountBase::Release(v2);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
