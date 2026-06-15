/*
 * XREFs of ATL::_dynamic_initializer_for__g_strheap__ @ 0x140001180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int ATL::_dynamic_initializer_for__g_strheap__()
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  byte_14008A068 = 0;
  ATL::g_strheap = &ATL::CWin32Heap::`vftable';
  qword_14008A060 = (__int64)ProcessHeap;
  return atexit((void (__cdecl *)())ATL::_dynamic_atexit_destructor_for__g_strheap__);
}
