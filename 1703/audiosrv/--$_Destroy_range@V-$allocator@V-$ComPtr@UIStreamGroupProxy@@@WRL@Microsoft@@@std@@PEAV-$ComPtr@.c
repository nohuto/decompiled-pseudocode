/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18009FBF4
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked1_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_Microsoft::WRL::ComPtr_IStreamGroupProxy______ptr64_std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy______::_1_::catch$4 @ 0x1800A802C (_std--_Uninitialized_move_al_unchecked1_Microsoft--WRL--ComPtr_IStreamGroupProxy______ptr64_Micr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>,Microsoft::WRL::ComPtr<IStreamGroupProxy> *>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
