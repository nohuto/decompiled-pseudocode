/*
 * XREFs of ??_GCWARPDrawListEntry@@EEAAPEAXI@Z @ 0x180154BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CWARPDrawListEntry@@EEAA@XZ @ 0x180154B14 (--1CWARPDrawListEntry@@EEAA@XZ.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z @ 0x18018EEB4 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCWARPDrawListEntry@@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::`scalar deleting destructor'(CWARPDrawListEntry *this, char a2)
{
  struct CWARPDrawListEntry *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  CWARPDrawListEntry::~CWARPDrawListEntry(this);
  if ( (a2 & 1) != 0 )
  {
    ObjectCache = CThreadContext::GetObjectCache(v4);
    if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
    {
      WPF::ProcessHeapImpl::Free(this);
    }
    else
    {
      *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
      ++*((_DWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = this;
    }
  }
  return this;
}
