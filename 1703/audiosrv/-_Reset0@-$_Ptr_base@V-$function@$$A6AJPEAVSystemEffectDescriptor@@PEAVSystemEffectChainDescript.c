/*
 * XREFs of ?_Reset0@?$_Ptr_base@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAAXPEAV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@2@PEAV_Ref_count_base@2@@Z @ 0x18002AA10
 * Callers:
 *     ??0?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z @ 0x1800109E0 (--0-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x180010A50 (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::_Reset0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
