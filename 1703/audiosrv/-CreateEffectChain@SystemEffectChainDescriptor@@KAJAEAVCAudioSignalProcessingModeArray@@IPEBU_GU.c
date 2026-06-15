/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180041770
 * Callers:
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180044370 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x180041A48 (--$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA-AV-$shared_ptr@VSystemEffectChainDescri.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // r13d
  __int64 *v8; // rax
  __int64 v9; // rsi
  volatile signed __int32 *v10; // rdi
  unsigned int v11; // ebx
  _OWORD *v12; // r12
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  void *v15; // rcx
  void *v16; // rcx
  unsigned int i; // r12d
  std::_Ref_count_base *v18; // rcx
  int v20; // r13d
  int v21; // eax
  int v22; // r13d
  __int64 v23; // rax
  _OWORD *v24; // rax
  int v25; // r15d
  int v26; // eax
  int v27; // r15d
  __int64 v28; // rax
  _OWORD *v29; // rax
  int v30; // r15d
  int v31; // eax
  int v32; // r15d
  __int64 v33; // rax
  _OWORD *v34; // rax
  bool v35; // sf
  __int64 v36; // rdx
  __int64 v37; // rdx
  std::_Ref_count_base *v38; // rcx
  int v39; // [rsp+20h] [rbp-78h]
  std::_Ref_count_base *v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+30h] [rbp-68h]
  volatile signed __int32 *v42; // [rsp+38h] [rbp-60h]
  _BYTE v43[8]; // [rsp+40h] [rbp-58h] BYREF
  std::_Ref_count_base *v44; // [rsp+48h] [rbp-50h]
  std::_Ref_count_base *v45; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v6 = a4;
  try
  {
    v8 = (__int64 *)std::make_shared<SystemEffectChainDescriptor,>(v43);
    v9 = *v8;
    v41 = *v8;
    v42 = (volatile signed __int32 *)v8[1];
    v10 = v42;
    v11 = 0;
    *v8 = 0LL;
    v8[1] = 0LL;
    v40 = (std::_Ref_count_base *)v42;
    if ( v44 )
      std::_Ref_count_base::_Decref(v44);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v39);
    v38 = v40;
    if ( !v40 )
      return 2147942414LL;
    goto LABEL_66;
  }
  v12 = *(_OWORD **)a1;
  v13 = *(_DWORD *)(a1 + 8);
  v14 = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      v20 = *(_DWORD *)(v9 + 8);
      v21 = *(_DWORD *)(v9 + 12);
      if ( v20 == v21 )
      {
        if ( v21 )
        {
          v35 = (v20 & 0x40000000) != 0;
          v22 = 2 * v20;
          if ( v35 || (unsigned int)v22 > 0x7FFFFFF )
          {
LABEL_55:
            v36 = 49LL;
            goto LABEL_59;
          }
        }
        else
        {
          v22 = 1;
        }
        v23 = _o__recalloc(*(_QWORD *)v9, v22, 16LL);
        if ( !v23 )
          goto LABEL_55;
        *(_DWORD *)(v9 + 12) = v22;
        *(_QWORD *)v9 = v23;
      }
      v24 = (_OWORD *)(*(_QWORD *)v9 + 16LL * *(int *)(v9 + 8));
      if ( v24 )
        *v24 = *v12;
      ++*(_DWORD *)(v9 + 8);
      ++v14;
      ++v12;
      if ( v14 >= v13 )
      {
        v6 = a4;
        break;
      }
    }
  }
  v15 = *(void **)(v9 + 40);
  if ( v15 )
  {
    free(v15);
    *(_QWORD *)(v9 + 40) = 0LL;
  }
  *(_QWORD *)(v9 + 48) = 0LL;
  v16 = *(void **)(v9 + 56);
  if ( v16 )
  {
    free(v16);
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  *(_QWORD *)(v9 + 64) = 0LL;
  for ( i = 0; i < a2; ++a3 )
  {
    v25 = *(_DWORD *)(v9 + 48);
    v26 = *(_DWORD *)(v9 + 52);
    if ( v25 == v26 )
    {
      if ( v26 )
      {
        v35 = (v25 & 0x40000000) != 0;
        v27 = 2 * v25;
        if ( v35 || (unsigned int)v27 > 0x7FFFFFF )
        {
LABEL_61:
          v37 = 70LL;
          goto LABEL_58;
        }
      }
      else
      {
        v27 = 1;
      }
      v28 = _o__recalloc(*(_QWORD *)(v9 + 40), v27, 16LL);
      if ( !v28 )
        goto LABEL_61;
      *(_DWORD *)(v9 + 52) = v27;
      *(_QWORD *)(v9 + 40) = v28;
    }
    v29 = (_OWORD *)(*(_QWORD *)(v9 + 40) + 16LL * *(int *)(v9 + 48));
    if ( v29 )
      *v29 = *a3;
    ++*(_DWORD *)(v9 + 48);
    v30 = *(_DWORD *)(v9 + 64);
    v31 = *(_DWORD *)(v9 + 68);
    if ( v30 == v31 )
    {
      if ( v31 )
      {
        v35 = (v30 & 0x40000000) != 0;
        v32 = 2 * v30;
        if ( v35 || (unsigned int)v32 > 0x7FFFFFF )
        {
LABEL_62:
          v37 = 72LL;
          goto LABEL_58;
        }
      }
      else
      {
        v32 = 1;
      }
      v33 = _o__recalloc(*(_QWORD *)(v9 + 56), v32, 16LL);
      if ( !v33 )
        goto LABEL_62;
      *(_DWORD *)(v9 + 68) = v32;
      *(_QWORD *)(v9 + 56) = v33;
    }
    v34 = (_OWORD *)(*(_QWORD *)(v9 + 56) + 16LL * *(int *)(v9 + 64));
    if ( v34 )
      *v34 = *a3;
    ++*(_DWORD *)(v9 + 64);
    ++i;
  }
  if ( v6 )
  {
    while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v9 + 56,
                            (_OWORD *)(a5 + 16LL * v11)) )
    {
      if ( ++v11 >= v6 )
        goto LABEL_11;
    }
    v37 = 77LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v40);
    v36 = 50LL;
LABEL_59:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v36,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      (int)v40);
    if ( !v10 )
      return 2147942414LL;
    v38 = (std::_Ref_count_base *)v10;
LABEL_66:
    std::_Ref_count_base::_Decref(v38);
    return 2147942414LL;
  }
LABEL_11:
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 2);
    v10 = v42;
    v9 = v41;
  }
  v45 = (std::_Ref_count_base *)a6[1];
  v18 = v45;
  a6[1] = v10;
  *a6 = v9;
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
      if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
    }
  }
  return 0LL;
}
