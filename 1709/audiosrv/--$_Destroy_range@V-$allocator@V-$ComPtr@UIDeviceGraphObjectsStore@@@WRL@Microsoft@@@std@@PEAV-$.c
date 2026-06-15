/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@0@@Z @ 0x1800959A4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______ptr64_std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______::_1_::catch$4 @ 0x180095C60 (_std--_Uninitialized_move_al_unchecked_Microsoft--WRL--ComPtr_IDeviceGraphObjectsStore______ptr6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ @ 0x180030044 (-InternalRelease@-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
