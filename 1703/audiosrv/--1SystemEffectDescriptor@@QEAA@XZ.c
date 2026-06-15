/*
 * XREFs of ??1SystemEffectDescriptor@@QEAA@XZ @ 0x1800BB900
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180010A10 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall SystemEffectDescriptor::~SystemEffectDescriptor(SystemEffectDescriptor *this)
{
  int i; // edi
  std::_Ref_count_base *v3; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( *((_QWORD *)this + 4) )
  {
    for ( i = 0; i < *((_DWORD *)this + 10); ++i )
      std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(*((_QWORD *)this + 4) + 16LL * i);
    free(*((void **)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)this);
}
