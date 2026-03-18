/*
 * XREFs of ?_Reallocate@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z @ 0x180070324
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180070434 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?_Reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z @ 0x180188580 (-_Reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@IEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x18011C4EC (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 */

char *__fastcall std::vector<EffectInput>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  char *v2; // rbp
  __int64 *v5; // r15
  __int64 *v6; // rbx
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rdi
  char *result; // rax
  char *v11; // rdi
  char v12; // cl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x276276276276276LL || (v2 = (char *)operator new(104 * a2)) == 0LL )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
  }
  v5 = *(__int64 **)(a1 + 8);
  v6 = *(__int64 **)a1;
  if ( *(__int64 **)a1 != v5 )
  {
    v11 = v2 + 40;
    do
    {
      if ( v11 != (char *)40 )
      {
        CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)(v11 - 40), (const struct CDrawListBitmap *)v6);
        *((_OWORD *)v11 - 1) = *(_OWORD *)(v6 + 3);
        *(_DWORD *)v11 = *((_DWORD *)v6 + 10);
        v12 = *((_BYTE *)v6 + 44);
        v11[4] = v12;
        v11[5] = *((_BYTE *)v6 + 45);
        *(_OWORD *)(v11 + 8) = *((_OWORD *)v6 + 3);
        if ( v12 )
        {
          *(_OWORD *)(v11 + 24) = *((_OWORD *)v6 + 4);
          *(_OWORD *)(v11 + 40) = *((_OWORD *)v6 + 5);
          *((_QWORD *)v11 + 7) = v6[12];
        }
        else
        {
          *((_QWORD *)v11 + 3) = v6[8];
        }
      }
      v11 += 104;
      v6 += 13;
    }
    while ( v6 != v5 );
  }
  v7 = *(__int64 **)a1;
  v8 = *(__int64 **)(a1 + 8);
  v9 = ((__int64)v8 - *(_QWORD *)a1) / 104;
  if ( *(_QWORD *)a1 )
  {
    while ( v7 != v8 )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v7);
      v7 += 13;
    }
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  }
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[104 * a2];
  result = &v2[104 * v9];
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
