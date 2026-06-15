/*
 * XREFs of ??1?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A849C
 * Callers:
 *     _CDeviceGraphStore::GetStreamGroups_::_1_::dtor$0 @ 0x1800A8E72 (_CDeviceGraphStore--GetStreamGroups_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::~vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>(
        __int64 **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v2 != v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        *v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      ++v2;
    }
    std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
