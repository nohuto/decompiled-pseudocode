/*
 * XREFs of ??1CSharedSection@@UEAA@XZ @ 0x180058558
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180058490 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x18005BCD0 (-UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z.c)
 */

void __fastcall CSharedSection::~CSharedSection(CSharedSection *this)
{
  void *v1; // rdx

  v1 = (void *)*((_QWORD *)this + 9);
  *(_QWORD *)this = &CSharedSection::`vftable';
  if ( v1 )
    CComposition::UnmapSharedSectionView(*((CComposition **)this + 2), v1);
  CResource::~CResource(this);
}
