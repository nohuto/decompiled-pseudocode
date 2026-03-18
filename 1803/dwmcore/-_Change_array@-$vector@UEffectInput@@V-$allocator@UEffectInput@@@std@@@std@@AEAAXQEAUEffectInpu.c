/*
 * XREFs of ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x180140B08
 * Callers:
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x18008BC70 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Change_array(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rbp
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)(v4 + 8));
        Microsoft::WRL::ComPtr<IImageSource>::InternalRelease((CRenderTargetImageSource **)v4);
        v4 += 104LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    std::_Deallocate((char *)v4, (a1[2] - v4) / 104, 0x68uLL);
  }
  *a1 = a2;
  a1[1] = a2 + 104 * a3;
  result = a2 + 104 * a4;
  a1[2] = result;
  return result;
}
