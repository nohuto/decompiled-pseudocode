/*
 * XREFs of ??1CGradientSource@@MEAA@XZ @ 0x180071B44
 * Callers:
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1800719F0 (--1CGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180071FC4 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microso.c)
 */

void __fastcall CGradientSource::~CGradientSource(CGradientSource *this)
{
  void **v1; // rbx
  __int64 *v2; // rdx
  __int64 *v3; // rax
  __int64 *v4; // rcx
  __int64 *i; // rcx

  v1 = (void **)((char *)this + 8);
  v2 = (__int64 *)*((_QWORD *)this + 1);
  v3 = (__int64 *)*v2;
  while ( v3 != v2 )
  {
    *(_QWORD *)(v3[5] + 40) = 0LL;
    if ( !*((_BYTE *)v3 + 25) )
    {
      v4 = (__int64 *)v3[2];
      if ( *((_BYTE *)v4 + 25) )
      {
        for ( i = (__int64 *)v3[1]; !*((_BYTE *)i + 25) && v3 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v3 = i;
        v3 = i;
      }
      else
      {
        do
        {
          v3 = v4;
          v4 = (__int64 *)*v4;
        }
        while ( !*((_BYTE *)v4 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::_Erase(
    v1,
    *((_QWORD *)*v1 + 1));
  *((_QWORD *)*v1 + 1) = *v1;
  *(_QWORD *)*v1 = *v1;
  *((_QWORD *)*v1 + 2) = *v1;
  v1[1] = 0LL;
  WPF::ProcessHeapImpl::Free(*v1);
}
