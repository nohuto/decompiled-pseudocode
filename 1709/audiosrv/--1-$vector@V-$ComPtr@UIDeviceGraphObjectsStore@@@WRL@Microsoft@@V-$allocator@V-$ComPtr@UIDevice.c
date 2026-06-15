/*
 * XREFs of ??1?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800960D0
 * Callers:
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x180096B07 (_CDeviceGraphStore--GetAllStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::dtor$0 @ 0x180096F0D (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::~vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
      Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(v1++);
    std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
