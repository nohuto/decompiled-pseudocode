/*
 * XREFs of ??0?$set@IU?$less@I@std@@V?$allocator@I@2@@std@@QEAA@XZ @ 0x1800C2494
 * Callers:
 *     _anonymous_namespace_::_dynamic_initializer_for___currentSequence__ @ 0x180001120 (_anonymous_namespace_--_dynamic_initializer_for___currentSequence__.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::set<unsigned int>::set<unsigned int>(_QWORD *a1)
{
  _QWORD *v2; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = HeapAlloc(WPF::g_processHeap, 0, 0x20uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v2 = v2;
  if ( v2 != (_QWORD *)-8LL )
    v2[1] = v2;
  if ( v2 != (_QWORD *)-16LL )
    v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *a1 = v2;
  return a1;
}
