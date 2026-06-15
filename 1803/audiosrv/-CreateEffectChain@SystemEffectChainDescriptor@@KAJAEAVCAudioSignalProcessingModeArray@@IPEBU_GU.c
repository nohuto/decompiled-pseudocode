/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180053A90
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800533D0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18005366C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  void *v16; // rcx
  void *v17; // rcx
  unsigned int i; // r12d
  std::_Ref_count_base *v19; // rcx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  _OWORD *v25; // rcx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rax
  _OWORD *v30; // rcx
  bool v31; // sf
  __int64 v32; // rdx
  __int64 v33; // rdx
  std::_Ref_count_base *v34; // rcx
  int v35; // [rsp+20h] [rbp-38h]
  std::_Ref_count_base *v36; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    ProcessHeap = GetProcessHeap();
    v9 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
    v10 = v9;
    if ( v9 )
    {
      v9[2] = 1;
      v9[3] = 1;
      *(_QWORD *)v9 = &std::_Ref_count_obj<SystemEffectChainDescriptor>::`vftable';
      memset_0(v9 + 4, 0, 0x48uLL);
      v11 = 0;
      *((_QWORD *)v10 + 2) = 0LL;
      *((_QWORD *)v10 + 3) = 0LL;
      v10[8] = 0;
      *((_BYTE *)v10 + 36) = 0;
      *((_QWORD *)v10 + 5) = 0LL;
      *((_QWORD *)v10 + 6) = 0LL;
      *((_QWORD *)v10 + 7) = 0LL;
      *((_QWORD *)v10 + 8) = 0LL;
      *((_QWORD *)v10 + 9) = 0LL;
      *((_QWORD *)v10 + 10) = 0LL;
    }
    else
    {
      v11 = 0;
      v10 = 0LL;
    }
    v36 = (std::_Ref_count_base *)v10;
    v12 = (__int64)(v10 + 4);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v35);
    v34 = v36;
    if ( !v36 )
      return 2147942414LL;
    goto LABEL_58;
  }
  v13 = *a1;
  v14 = *((_DWORD *)a1 + 2);
  v15 = 0;
  if ( v14 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v12,
                            (_OWORD *)(v13 + 16LL * v15)) )
    {
      if ( ++v15 >= v14 )
        goto LABEL_6;
    }
    v32 = 49LL;
    goto LABEL_48;
  }
LABEL_6:
  v16 = *(void **)(v12 + 40);
  if ( v16 )
  {
    free(v16);
    *(_QWORD *)(v12 + 40) = 0LL;
  }
  *(_QWORD *)(v12 + 48) = 0LL;
  v17 = *(void **)(v12 + 56);
  if ( v17 )
  {
    free(v17);
    *(_QWORD *)(v12 + 56) = 0LL;
  }
  *(_QWORD *)(v12 + 64) = 0LL;
  for ( i = 0; i < a2; ++a3 )
  {
    v21 = *(_DWORD *)(v12 + 48);
    v22 = *(_DWORD *)(v12 + 52);
    if ( v21 == v22 )
    {
      if ( v22 )
      {
        v31 = (v21 & 0x40000000) != 0;
        v23 = 2 * v21;
        LODWORD(v36) = v23;
        if ( v31 )
          goto LABEL_50;
      }
      else
      {
        v23 = 1;
        LODWORD(v36) = 1;
      }
      if ( (unsigned __int64)v23 > 0x7FFFFFF || (v24 = _o__recalloc(*(_QWORD *)(v12 + 40), v23, 16LL)) == 0 )
      {
LABEL_50:
        v33 = 70LL;
        goto LABEL_47;
      }
      *(_DWORD *)(v12 + 52) = (_DWORD)v36;
      *(_QWORD *)(v12 + 40) = v24;
      v21 = *(_DWORD *)(v12 + 48);
    }
    v25 = (_OWORD *)(*(_QWORD *)(v12 + 40) + 16LL * v21);
    if ( v25 )
    {
      *v25 = *a3;
      v21 = *(_DWORD *)(v12 + 48);
    }
    *(_DWORD *)(v12 + 48) = v21 + 1;
    v26 = *(_DWORD *)(v12 + 64);
    v27 = *(_DWORD *)(v12 + 68);
    if ( v26 == v27 )
    {
      if ( v27 )
      {
        v31 = (v26 & 0x40000000) != 0;
        v28 = 2 * v26;
        LODWORD(v36) = v28;
        if ( v31 )
          goto LABEL_51;
      }
      else
      {
        v28 = 1;
        LODWORD(v36) = 1;
      }
      if ( (unsigned __int64)v28 > 0x7FFFFFF || (v29 = _o__recalloc(*(_QWORD *)(v12 + 56), v28, 16LL)) == 0 )
      {
LABEL_51:
        v33 = 72LL;
        goto LABEL_47;
      }
      *(_DWORD *)(v12 + 68) = (_DWORD)v36;
      *(_QWORD *)(v12 + 56) = v29;
      v26 = *(_DWORD *)(v12 + 64);
    }
    v30 = (_OWORD *)(*(_QWORD *)(v12 + 56) + 16LL * v26);
    if ( v30 )
    {
      *v30 = *a3;
      v26 = *(_DWORD *)(v12 + 64);
    }
    *(_DWORD *)(v12 + 64) = v26 + 1;
    ++i;
  }
  if ( a4 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v12 + 56,
                            (_OWORD *)(a5 + 16LL * v11)) )
    {
      if ( ++v11 >= a4 )
        goto LABEL_12;
    }
    v33 = 77LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v36);
    v32 = 50LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v32,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v36);
    if ( !v10 )
      return 2147942414LL;
    v34 = (std::_Ref_count_base *)v10;
LABEL_58:
    std::_Ref_count_base::_Decref(v34);
    return 2147942414LL;
  }
LABEL_12:
  if ( v10 )
    _InterlockedIncrement(v10 + 2);
  *a6 = v12;
  v19 = (std::_Ref_count_base *)a6[1];
  a6[1] = (__int64)v10;
  if ( v19 )
    std::_Ref_count_base::_Decref(v19);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return 0LL;
}
