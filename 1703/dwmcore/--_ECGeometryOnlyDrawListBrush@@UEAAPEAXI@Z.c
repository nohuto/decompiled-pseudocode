/*
 * XREFs of ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C01A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z @ 0x1800C01DC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCGeometryOnlyDrawListBrush@@@Z.c)
 */

CGeometryOnlyDrawListBrush *__fastcall CGeometryOnlyDrawListBrush::`vector deleting destructor'(
        CGeometryOnlyDrawListBrush *this,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax

  if ( (a2 & 1) != 0 )
  {
    ObjectCache = CThreadContext::GetObjectCache(this);
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
