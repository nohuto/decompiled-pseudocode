/*
 * XREFs of ??1CHwConstantColorSource@@MEAA@XZ @ 0x180086700
 * Callers:
 *     ??_ECHwSolidBrush@@UEAAPEAXI@Z @ 0x1800859C4 (--_ECHwSolidBrush@@UEAAPEAXI@Z.c)
 *     ??_ECHwConstantColorSource@@MEAAPEAXI@Z @ 0x1801BBC80 (--_ECHwConstantColorSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
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
