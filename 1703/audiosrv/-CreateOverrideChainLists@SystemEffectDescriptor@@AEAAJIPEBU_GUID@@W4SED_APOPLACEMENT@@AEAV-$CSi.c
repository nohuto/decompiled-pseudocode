/*
 * XREFs of ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180010250
 * Callers:
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180010434 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::CreateOverrideChainLists(
        __int64 a1,
        unsigned int a2,
        _OWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rdx
  int v11; // esi
  unsigned int i; // r15d
  __int64 v13; // rax
  __int64 j; // rbx
  __int64 v16; // r15
  int v17; // eax
  int v18; // ebp
  int v19; // ebp
  __int64 v20; // rax
  _OWORD *v21; // rax
  bool v22; // sf
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  _OWORD *v27; // rax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  __int64 v31; // rax
  _OWORD *v32; // rax
  int v33; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v35; // [rsp+50h] [rbp+8h]
  int v36; // [rsp+50h] [rbp+8h]

  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
  {
    if ( !a4 )
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a6, v7 + 40);
      if ( *(_DWORD *)(a6 + 8) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 48LL) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10E,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v33);
        return 2147942414LL;
      }
    }
  }
  v11 = 0;
  for ( i = 0; i < a2; ++a3 )
  {
    v23 = *(_DWORD *)(a5 + 8);
    v24 = *(_DWORD *)(a5 + 12);
    if ( v23 == v24 )
    {
      if ( v24 )
      {
        v25 = 2 * v23;
        v35 = 2 * v23;
        if ( (v23 & 0x40000000) != 0 || (unsigned int)v25 > 0x7FFFFFF )
        {
LABEL_43:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x113,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v33);
          return 2147942414LL;
        }
      }
      else
      {
        v25 = 1;
        v35 = 1;
      }
      v26 = _o__recalloc(*(_QWORD *)a5, v25, 16LL);
      if ( !v26 )
        goto LABEL_43;
      *(_DWORD *)(a5 + 12) = v35;
      *(_QWORD *)a5 = v26;
    }
    v27 = (_OWORD *)(*(_QWORD *)a5 + 16LL * *(int *)(a5 + 8));
    if ( v27 )
      *v27 = *a3;
    ++*(_DWORD *)(a5 + 8);
    v28 = *(_DWORD *)(a6 + 8);
    v29 = *(_DWORD *)(a6 + 12);
    if ( v28 == v29 )
    {
      if ( v29 )
      {
        v30 = 2 * v28;
        v36 = 2 * v28;
        if ( (v28 & 0x40000000) != 0 || (unsigned int)v30 > 0x7FFFFFF )
        {
LABEL_46:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x114,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v33);
          return 2147942414LL;
        }
      }
      else
      {
        v30 = 1;
        v36 = 1;
      }
      v31 = _o__recalloc(*(_QWORD *)a6, v30, 16LL);
      if ( !v31 )
        goto LABEL_46;
      *(_DWORD *)(a6 + 12) = v36;
      *(_QWORD *)a6 = v31;
    }
    v32 = (_OWORD *)(*(_QWORD *)a6 + 16LL * *(int *)(a6 + 8));
    if ( v32 )
      *v32 = *a3;
    ++*(_DWORD *)(a6 + 8);
    ++i;
  }
  v13 = *(_QWORD *)(a1 + 16);
  if ( !v13 || a4 != 1 || *(int *)(v13 + 48) <= 0 )
    return 0LL;
  for ( j = 0LL; ; j += 16LL )
  {
    if ( j < 0 || v11 >= *(_DWORD *)(v13 + 48) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18006626ALL);
    }
    v16 = *(_QWORD *)(v13 + 40);
    v17 = *(_DWORD *)(a6 + 12);
    v18 = *(_DWORD *)(a6 + 8);
    if ( v18 != v17 )
      goto LABEL_16;
    if ( v17 )
      break;
    v19 = 1;
LABEL_14:
    v20 = _o__recalloc(*(_QWORD *)a6, v19, 16LL);
    if ( !v20 )
      goto LABEL_47;
    *(_DWORD *)(a6 + 12) = v19;
    *(_QWORD *)a6 = v20;
LABEL_16:
    v21 = (_OWORD *)(*(_QWORD *)a6 + 16LL * *(int *)(a6 + 8));
    if ( v21 )
      *v21 = *(_OWORD *)(v16 + j);
    ++*(_DWORD *)(a6 + 8);
    ++v11;
    v13 = *(_QWORD *)(a1 + 16);
    if ( v11 >= *(_DWORD *)(v13 + 48) )
      return 0LL;
  }
  v22 = (v18 & 0x40000000) != 0;
  v19 = 2 * v18;
  if ( !v22 && (unsigned int)v19 <= 0x7FFFFFF )
    goto LABEL_14;
LABEL_47:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11C,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v33);
  return 2147942414LL;
}
