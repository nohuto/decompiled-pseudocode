/*
 * XREFs of ??_GCAtlasImageSource@@MEAAPEAXI@Z @ 0x18008EE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x18008B98C (--1CAtlasEntry@@QEAA@XZ.c)
 */

CAtlasImageSource *__fastcall CAtlasImageSource::`scalar deleting destructor'(CAtlasImageSource *this)
{
  char v2; // r8

  CAtlasEntry::~CAtlasEntry((CAtlasImageSource *)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (v2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
