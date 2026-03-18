/*
 * XREFs of ?clear@?$list@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAAXXZ @ 0x18016193C
 * Callers:
 *     ??1CDropShadow@@UEAA@XZ @ 0x18015F4C0 (--1CDropShadow@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::clear(__int64 a1)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v2 + 5);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v2 + 4);
      WPF::ProcessHeapImpl::Free(v2);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
