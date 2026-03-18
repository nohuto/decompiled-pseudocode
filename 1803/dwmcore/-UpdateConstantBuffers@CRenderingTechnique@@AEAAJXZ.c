/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800711B0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x18007521C (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180075234 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800BD2E0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800BD344 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x1800BD368 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  __int128 *v5; // rax
  __int128 *v6; // rcx
  char *v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // r9
  __int64 v10; // rdx
  signed __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  signed __int64 v15; // rdi
  __int64 v16; // rax
  char *v17; // r14
  char *v18; // rcx
  char *v19; // r8
  __int128 v20; // xmm0
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned int *v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // rdx
  char v30; // di
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // ebx
  unsigned int v35; // esi
  unsigned int v36; // edi
  __int64 v37; // rdx
  int v38; // eax
  _OWORD *v39; // r14
  void *v40; // r8
  unsigned int *v41; // rsi
  __int64 v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned int v46; // ebx
  const void *v47; // rax
  char *v48; // rcx
  unsigned __int64 v49; // rax
  unsigned int i; // ecx
  int v51; // eax
  __int128 v52; // xmm0
  unsigned int v53; // [rsp+20h] [rbp-50h]
  __int128 v54; // [rsp+30h] [rbp-40h] BYREF
  LPVOID lpMem[2]; // [rsp+40h] [rbp-30h] BYREF
  char *v56; // [rsp+50h] [rbp-20h]
  LPVOID v57[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v58; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v60; // [rsp+B0h] [rbp+40h]
  struct ID3D11Resource *v61; // [rsp+B8h] [rbp+48h]
  CD3DDeviceLevel1 *v62; // [rsp+C0h] [rbp+50h]

  if ( *((_BYTE *)this + 284) )
    goto LABEL_43;
  v2 = *((_QWORD *)this + 2);
  v56 = 0LL;
  *(_QWORD *)&v54 = v2;
  *(_OWORD *)lpMem = 0LL;
  DWORD2(v54) = 0;
  v3 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 16LL);
  v4 = v3;
  *(_OWORD *)v3 = v54;
  v5 = (__int128 *)lpMem[1];
  v6 = (__int128 *)lpMem[0];
  if ( lpMem[0] != lpMem[1] )
  {
    do
    {
      v52 = *v6++;
      v4 += 16LL;
      *(_OWORD *)(v4 - 16) = v52;
    }
    while ( v6 != v5 );
    v6 = (__int128 *)lpMem[0];
  }
  if ( v6 )
    std::_Deallocate(v6, (v56 - (char *)v6) >> 4, 0x10uLL);
  v7 = (char *)(v3 + 16);
  lpMem[0] = (LPVOID)v3;
  lpMem[1] = (LPVOID)(v3 + 16);
  v56 = (char *)(v3 + 16);
  v8 = *(_DWORD *)(v3 + 8);
  v9 = *(_QWORD *)(*(_QWORD *)v3 + 32LL);
  v10 = (*(_QWORD *)(*(_QWORD *)v3 + 40LL) - v9) >> 4;
  if ( v8 < (unsigned int)v10 )
  {
    while ( !*(_QWORD *)(v9 + 16LL * v8 + 8) )
    {
      if ( ++v8 >= (unsigned int)v10 )
        goto LABEL_23;
    }
    *(_DWORD *)(v3 + 8) = v8;
    *(_QWORD *)&v54 = *(_QWORD *)(v9 + 16LL * v8 + 8);
    DWORD2(v54) = 0;
    if ( v56 == lpMem[1] )
    {
      v11 = ((char *)lpMem[1] - (char *)lpMem[0]) >> 4;
      if ( v11 == 0xFFFFFFFFFFFFFFFLL )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v12 = v11 + 1;
      v13 = (v56 - (char *)lpMem[0]) >> 4;
      v14 = v13 >> 1;
      if ( v13 > 0xFFFFFFFFFFFFFFFLL - (v13 >> 1) )
      {
        v15 = v11 + 1;
      }
      else
      {
        v15 = v13 + v14;
        if ( v13 + v14 < v12 )
          v15 = v11 + 1;
      }
      v16 = std::_Allocate<std::_Default_allocate_traits<1>>(v15, 16LL);
      v17 = (char *)v16;
      *(_OWORD *)(v16 + 16 * v11) = v54;
      v18 = (char *)lpMem[1];
      v19 = (char *)lpMem[0];
      if ( lpMem[0] != lpMem[1] )
      {
        do
        {
          v20 = *(_OWORD *)v19;
          v19 += 16;
          v16 += 16LL;
          *(_OWORD *)(v16 - 16) = v20;
        }
        while ( v19 != v18 );
        v19 = (char *)lpMem[0];
      }
      if ( v19 )
      {
        v21 = (unsigned __int64)v19;
        v22 = (v56 - v19) >> 4;
        if ( v22 > 0xFFFFFFFFFFFFFFFLL
          || 16 * v22 >= 0x1000
          && (((unsigned __int8)v19 & 0x1F) != 0
           || (v19 = (char *)*((_QWORD *)v19 - 1), (unsigned __int64)v19 >= v21)
           || (v21 = v21 - (_QWORD)v19 - 8, v21 > 0x1F)) )
        {
          _o__invalid_parameter_noinfo_noreturn(v21);
          JUMPOUT(0x180111564LL);
        }
        if ( v19 )
          HeapFree(WPF::g_processHeap, 0, v19);
      }
      lpMem[0] = v17;
      v56 = &v17[16 * v15];
      lpMem[1] = &v17[16 * v12];
    }
    else
    {
      *(_OWORD *)lpMem[1] = v54;
      lpMem[1] = (char *)lpMem[1] + 16;
    }
LABEL_21:
    CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
    v7 = (char *)lpMem[1];
    goto LABEL_22;
  }
  while ( 1 )
  {
LABEL_23:
    if ( !((__int64)&v7[-v3] >> 4) )
    {
      v30 = 0;
      goto LABEL_33;
    }
    v23 = (unsigned int *)*((_QWORD *)v7 - 2);
    if ( v23[5] )
      break;
LABEL_27:
    v7 -= 16;
    lpMem[1] = v7;
    if ( (__int64)&v7[-v3] >> 4 )
    {
      ++*((_DWORD *)v7 - 2);
      v7 = (char *)lpMem[1];
      v25 = *((_QWORD *)lpMem[1] - 2);
      v26 = *(_QWORD *)(v25 + 32);
      v27 = *(_QWORD *)(v25 + 40);
      v28 = *((_DWORD *)lpMem[1] - 2);
      v29 = (v27 - v26) >> 4;
      if ( v28 < (unsigned int)v29 )
      {
        while ( !*(_QWORD *)(v26 + 16LL * v28 + 8) )
        {
          if ( ++v28 >= (unsigned int)v29 )
            goto LABEL_22;
        }
        *((_DWORD *)lpMem[1] - 2) = v28;
        *(_QWORD *)&v54 = *(_QWORD *)(v26 + 16LL * v28 + 8);
        DWORD2(v54) = 0;
        std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
          lpMem,
          &v54);
        goto LABEL_21;
      }
LABEL_22:
      v3 = (unsigned __int64)lpMem[0];
      continue;
    }
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v23 + 80LL))(*(_QWORD *)v23, v23[4]);
  v3 = (unsigned __int64)lpMem[0];
  if ( v23[6] == v24 )
  {
    v7 = (char *)lpMem[1];
    goto LABEL_27;
  }
  v30 = 1;
LABEL_33:
  if ( v3 )
  {
    v31 = v3;
    v32 = (__int64)&v56[-v3] >> 4;
    if ( v32 > 0xFFFFFFFFFFFFFFFLL
      || 16 * v32 >= 0x1000
      && ((v3 & 0x1F) != 0 || (v3 = *(_QWORD *)(v3 - 8), v3 >= v31) || (v31 = v31 - v3 - 8, v31 > 0x1F)) )
    {
      _o__invalid_parameter_noinfo_noreturn(v31);
      JUMPOUT(0x1801115ADLL);
    }
    if ( v3 )
      HeapFree(WPF::g_processHeap, 0, (LPVOID)v3);
  }
  if ( !v30 )
  {
LABEL_39:
    *((_BYTE *)this + 284) = 0;
    return 0;
  }
LABEL_43:
  v35 = *((_DWORD *)this + 16);
  v36 = 0;
  v60 = v35;
  if ( !v35 )
    goto LABEL_39;
  while ( 1 )
  {
    v37 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v36);
    v61 = *(struct ID3D11Resource **)(v37 + 120);
    v62 = *(CD3DDeviceLevel1 **)(*(_QWORD *)(v37 + 16) + 80LL);
    v38 = CD3DDeviceLevel1::Map(v62, v61, 0, D3D11_MAP_WRITE_DISCARD, v53, (struct D3D11_MAPPED_SUBRESOURCE *)lpMem);
    v33 = v38;
    if ( v38 < 0 )
      break;
    v39 = lpMem[0];
    if ( *((_DWORD *)this + 22) )
    {
      *(_QWORD *)&v54 = *((_QWORD *)this + 2);
      v58 = 0LL;
      *(_OWORD *)v57 = 0LL;
      DWORD2(v54) = 0;
      std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(v57, &v54);
      CFragmentIterator::FindFirst((CFragmentIterator *)v57);
      while ( 1 )
      {
        v40 = v57[0];
        if ( !(((char *)v57[1] - (char *)v57[0]) >> 4) )
          break;
        v41 = (unsigned int *)*((_QWORD *)v57[1] - 2);
        v42 = v41[5];
        if ( (_DWORD)v42 )
        {
          v43 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v41 + 80LL))(*(_QWORD *)v41, v41[4]);
          v44 = *(_QWORD *)v41;
          v45 = v41[4];
          v46 = v41[5];
          v41[6] = v43;
          v47 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 72LL))(v44, v45);
          memcpy_0(v39, v47, v46);
          v42 = v41[5];
        }
        if ( (v42 & 0xF) != 0 )
          v42 = (unsigned int)v42 - (v42 & 0xF) + 16;
        v39 = (_OWORD *)((char *)v39 + v42);
        CFragmentIterator::MoveNext((CFragmentIterator *)v57);
      }
      if ( v57[0] )
      {
        v48 = (char *)v57[0];
        v49 = (signed __int64)(v58 - (unsigned __int64)v57[0]) >> 4;
        if ( v49 > 0xFFFFFFFFFFFFFFFLL
          || 16 * v49 >= 0x1000
          && (((__int64)v57[0] & 0x1F) != 0
           || (v40 = (void *)*((_QWORD *)v57[0] - 1), v40 >= v57[0])
           || (v48 = (char *)((char *)v57[0] - (char *)v40 - 8), (unsigned __int64)v48 > 0x1F)) )
        {
          _o__invalid_parameter_noinfo_noreturn(v48);
          JUMPOUT(0x1801115D3LL);
        }
        if ( v40 )
          HeapFree(WPF::g_processHeap, 0, v40);
      }
      v35 = v60;
    }
    if ( *((_DWORD *)this + 70) )
    {
      for ( i = 0; i < *((_DWORD *)this + 23); ++i )
      {
        v51 = *((_DWORD *)this + 69);
        if ( _bittest(&v51, i) )
          *v39++ = *(_OWORD *)((char *)this + 44 * i + 128);
      }
    }
    CD3DDeviceLevel1::Unmap(v62, v61, 0);
    if ( ++v36 >= v35 )
      goto LABEL_39;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x1FCu);
  return v33;
}
