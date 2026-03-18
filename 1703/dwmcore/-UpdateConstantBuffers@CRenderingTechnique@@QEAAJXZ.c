/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180017118 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800778C0 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this)
{
  char v1; // si
  unsigned int v2; // ebx
  void *v4; // rcx
  unsigned int *v5; // rbx
  unsigned int v6; // r13d
  unsigned int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // rcx
  CD3DDeviceLevel1 *v10; // r14
  int v11; // eax
  _OWORD *v12; // rsi
  unsigned int *v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  const void *v19; // rax
  unsigned int v20; // ecx
  unsigned int i; // r8d
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  int v25; // [rsp+38h] [rbp-38h]
  void *lpMem[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  void *v28[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+68h] [rbp-8h]
  CD3DDeviceLevel1 *v30; // [rsp+B0h] [rbp+40h]
  struct ID3D11Resource *v31; // [rsp+B8h] [rbp+48h]

  v1 = *((_BYTE *)this + 252);
  v2 = 0;
  if ( !v1 )
  {
    v24 = *((_QWORD *)this + 2);
    v27 = 0LL;
    *(_OWORD *)lpMem = 0LL;
    v25 = 0;
    std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v24);
    CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
    while ( 1 )
    {
      v4 = lpMem[0];
      if ( !(((char *)lpMem[1] - (char *)lpMem[0]) >> 4) )
        break;
      v5 = (unsigned int *)*((_QWORD *)lpMem[1] - 2);
      if ( v5[5]
        && v5[6] != (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v5 + 80LL))(*(_QWORD *)v5, v5[4]) )
      {
        v4 = lpMem[0];
        v1 = 1;
        break;
      }
      CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
    }
    v2 = 0;
    if ( v4 )
      WPF::ProcessHeapImpl::Free(v4);
    if ( !v1 )
      goto LABEL_21;
  }
  v6 = *((_DWORD *)this + 16);
  v7 = 0;
  if ( v6 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + *((_QWORD *)this + 5));
      v10 = *(CD3DDeviceLevel1 **)(*(_QWORD *)(v9 + 16) + 128LL);
      v30 = v10;
      v31 = *(struct ID3D11Resource **)(v9 + 128);
      v11 = CD3DDeviceLevel1::Map(v10, v31, 0, D3D11_MAP_WRITE_DISCARD, v23, (struct D3D11_MAPPED_SUBRESOURCE *)lpMem);
      v2 = v11;
      if ( v11 < 0 )
        break;
      v12 = lpMem[0];
      v2 = 0;
      if ( *((_DWORD *)this + 26) )
      {
        v24 = *((_QWORD *)this + 2);
        v29 = 0LL;
        *(_OWORD *)v28 = 0LL;
        v25 = 0;
        std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
          v28,
          &v24);
        CFragmentIterator::FindFirst((CFragmentIterator *)v28);
        while ( ((char *)v28[1] - (char *)v28[0]) >> 4 )
        {
          v14 = (unsigned int *)*((_QWORD *)v28[1] - 2);
          if ( v14[5] )
          {
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v14 + 80LL))(*(_QWORD *)v14, v14[4]);
            v16 = *(_QWORD *)v14;
            v17 = v14[4];
            v18 = v14[5];
            v14[6] = v15;
            v19 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 72LL))(v16, v17);
            memcpy_0(v12, v19, v18);
            v2 = 0;
          }
          v20 = v14[5];
          if ( (v20 & 0xF) != 0 )
            v20 += 16 - (v14[5] & 0xF);
          v12 = (_OWORD *)((char *)v12 + v20);
          CFragmentIterator::MoveNext((CFragmentIterator *)v28);
        }
        if ( v28[0] )
          WPF::ProcessHeapImpl::Free(v28[0]);
        v10 = v30;
      }
      if ( *((_DWORD *)this + 62) )
      {
        for ( i = 0; i < *((_DWORD *)this + 27); ++i )
        {
          v22 = *((_DWORD *)this + 61);
          if ( _bittest(&v22, i) )
            *v12++ = *((_OWORD *)this + 2 * i + 8);
        }
      }
      CD3DDeviceLevel1::Unmap(v10, v31, 0);
      ++v7;
      v8 += 8LL;
      if ( v7 >= v6 )
        goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1E0u);
  }
  else
  {
LABEL_21:
    *((_BYTE *)this + 252) = 0;
  }
  return v2;
}
