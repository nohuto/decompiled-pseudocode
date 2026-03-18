/*
 * XREFs of ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x180009638
 * Callers:
 *     ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x180008C70 (--_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(
        CPrimitiveGroupDrawListGenerator *this)
{
  LPVOID *v2; // rdi
  LPVOID *v3; // rdi
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // r8

  *(_QWORD *)this = &CPrimitiveGroupDrawListGenerator::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 32) = 0;
  v2 = (LPVOID *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    if ( *v2 )
      HeapFree(WPF::g_processHeap, 0, *v2);
    HeapFree(WPF::g_processHeap, 0, v2);
  }
  v3 = (LPVOID *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    if ( *v3 )
      HeapFree(WPF::g_processHeap, 0, *v3);
    HeapFree(WPF::g_processHeap, 0, v3);
  }
  v4 = (void *)*((_QWORD *)this + 13);
  if ( v4 != *((void **)this + 14) )
  {
    WPF::ProcessHeapImpl::Free(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 9);
  if ( v5 != *((void **)this + 10) )
  {
    WPF::ProcessHeapImpl::Free(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 5);
  if ( v6 != *((void **)this + 6) )
  {
    if ( v6 )
      HeapFree(WPF::g_processHeap, 0, v6);
    *((_QWORD *)this + 5) = 0LL;
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
