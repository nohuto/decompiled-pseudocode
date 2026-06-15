/*
 * XREFs of ??1SystemEffectDescriptor@@QEAA@XZ @ 0x1800B0030
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SystemEffectDescriptor::~SystemEffectDescriptor(SystemEffectDescriptor *this)
{
  int v2; // esi
  __int64 v3; // rbp
  volatile signed __int32 *v4; // rdi
  std::_Ref_count_base *v5; // rcx

  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  if ( *((_QWORD *)this + 4) )
  {
    v2 = 0;
    if ( *((int *)this + 10) > 0 )
    {
      v3 = 0LL;
      do
      {
        v4 = *(volatile signed __int32 **)(*((_QWORD *)this + 4) + v3 + 8);
        if ( v4 )
        {
          if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
            if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
          }
        }
        ++v2;
        v3 += 16LL;
      }
      while ( v2 < *((_DWORD *)this + 10) );
    }
    free(*((void **)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(this);
}
