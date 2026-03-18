/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x18006D0E0
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x18006D054 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180020730 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18006E21C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this)
{
  char v1; // si
  __int64 v3; // rax
  char *v4; // rax
  char *v5; // r8
  char *v6; // rcx
  unsigned int *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // rcx
  CD3DDeviceLevel1 *v15; // r14
  int v16; // eax
  _OWORD *v17; // rsi
  __int64 v18; // rax
  char *v19; // rax
  unsigned int *v20; // r14
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned int v24; // ebx
  const void *v25; // rax
  __int64 v26; // rax
  unsigned int i; // r8d
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-50h]
  __int128 v30; // [rsp+30h] [rbp-40h]
  LPVOID lpMem[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v32; // [rsp+50h] [rbp-20h]
  LPVOID v33[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v34; // [rsp+68h] [rbp-8h]
  CD3DDeviceLevel1 *v35; // [rsp+B0h] [rbp+40h]
  struct ID3D11Resource *v36; // [rsp+B8h] [rbp+48h]

  v1 = *((_BYTE *)this + 236);
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 2);
    v32 = 0LL;
    DWORD2(v30) = 0;
    *(_OWORD *)lpMem = 0LL;
    *(_QWORD *)&v30 = v3;
    std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(lpMem);
    v4 = (char *)lpMem[1];
    if ( lpMem[1] )
    {
      *(_OWORD *)lpMem[1] = v30;
      v4 = (char *)lpMem[1];
    }
    lpMem[1] = v4 + 16;
LABEL_5:
    CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
    v5 = (char *)lpMem[0];
    v6 = (char *)lpMem[1];
    while ( (v6 - v5) >> 4 )
    {
      v7 = (unsigned int *)*((_QWORD *)v6 - 2);
      if ( v7[5] )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v7 + 80LL))(*(_QWORD *)v7, v7[4]);
        v5 = (char *)lpMem[0];
        if ( v7[6] != v8 )
        {
          v1 = 1;
          break;
        }
        v6 = (char *)lpMem[1];
      }
      if ( v5 != v6 )
      {
        v6 -= 16;
        lpMem[1] = v6;
      }
      if ( (v6 - v5) >> 4 )
      {
        ++*((_DWORD *)v6 - 2);
        goto LABEL_5;
      }
    }
    if ( v5 )
      HeapFree(WPF::g_processHeap, 0, v5);
    if ( !v1 )
      goto LABEL_17;
  }
  v11 = *((_DWORD *)this + 16);
  v12 = 0;
  if ( v11 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + *((_QWORD *)this + 5));
      v15 = *(CD3DDeviceLevel1 **)(*(_QWORD *)(v14 + 16) + 80LL);
      v35 = v15;
      v36 = *(struct ID3D11Resource **)(v14 + 120);
      v16 = CD3DDeviceLevel1::Map(v15, v36, 0LL, 4LL, v29, (struct D3D11_MAPPED_SUBRESOURCE *)lpMem);
      v9 = v16;
      if ( v16 < 0 )
        break;
      v17 = lpMem[0];
      if ( *((_DWORD *)this + 22) )
      {
        v18 = *((_QWORD *)this + 2);
        v34 = 0LL;
        DWORD2(v30) = 0;
        *(_OWORD *)v33 = 0LL;
        *(_QWORD *)&v30 = v18;
        std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(v33);
        v19 = (char *)v33[1];
        if ( v33[1] )
        {
          *(_OWORD *)v33[1] = v30;
          v19 = (char *)v33[1];
        }
        v33[1] = v19 + 16;
        CFragmentIterator::FindFirst((CFragmentIterator *)v33);
        while ( ((char *)v33[1] - (char *)v33[0]) >> 4 )
        {
          v20 = (unsigned int *)*((_QWORD *)v33[1] - 2);
          if ( v20[5] )
          {
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v20 + 80LL))(*(_QWORD *)v20, v20[4]);
            v22 = *(_QWORD *)v20;
            v23 = v20[4];
            v24 = v20[5];
            v20[6] = v21;
            v25 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 72LL))(v22, v23);
            memcpy_0(v17, v25, v24);
          }
          v26 = v20[5];
          if ( (v20[5] & 0xF) != 0 )
            v26 = (unsigned int)v26 - (v20[5] & 0xF) + 16;
          v17 = (_OWORD *)((char *)v17 + v26);
          CFragmentIterator::MoveNext((CFragmentIterator *)v33);
        }
        if ( v33[0] )
          HeapFree(WPF::g_processHeap, 0, v33[0]);
        v15 = v35;
      }
      if ( *((_DWORD *)this + 58) )
      {
        for ( i = 0; i < *((_DWORD *)this + 23); ++i )
        {
          v28 = *((_DWORD *)this + 57);
          if ( _bittest(&v28, i) )
            *v17++ = *((_OWORD *)this + 2 * i + 7);
        }
      }
      CD3DDeviceLevel1::Unmap(v15, v36);
      ++v12;
      v13 += 8LL;
      if ( v12 >= v11 )
        goto LABEL_17;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1E0u);
  }
  else
  {
LABEL_17:
    *((_BYTE *)this + 236) = 0;
    return 0;
  }
  return v9;
}
