/*
 * XREFs of ??$make_shared@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@0@AEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@0@@Z @ 0x180045AE4
 * Callers:
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180045A40 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 * Callees:
 *     ??$?0AEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@?$_Ref_count_obj@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAA@AEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@1@@Z @ 0x180045B58 (--$-0AEAV-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>,std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)> &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  HANDLE ProcessHeap; // rax
  LPVOID v6; // rax

  v4 = 0LL;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  if ( v6 )
    v4 = std::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::_Ref_count_obj<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(
           v6,
           a2);
  a1[1] = v4;
  *a1 = v4 + 16;
  return a1;
}
