/*
 * XREFs of ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x180052FFC
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800531AC (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800533D0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectDescriptor::SeparateStreamingModes(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        struct CAudioSignalProcessingModeArray *a3,
        struct CAudioSignalProcessingModeArray *a4)
{
  int v4; // eax
  int v5; // ebx
  __int64 *v10; // rcx
  int v11; // r9d
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 2);
  v5 = 0;
  if ( v4 <= 0 )
    return 0LL;
  while ( 1 )
  {
    v10 = (__int64 *)*((_QWORD *)this + 2);
    if ( !v10 )
      break;
    if ( v5 < 0 || v5 >= v4 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18007A24DLL);
    }
    v11 = *((_DWORD *)v10 + 2);
    v12 = 0;
    v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v5);
    if ( v11 > 0 )
    {
      v16 = *v10;
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 16LL * v12) - *v13;
        if ( !v17 )
          v17 = *(_QWORD *)(v16 + 16LL * v12 + 8) - v13[1];
        if ( !v17 )
          break;
        if ( ++v12 >= v11 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v12 = -1;
    }
    if ( v12 == -1 )
      break;
    v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a2, v5);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a3, v18) )
    {
      v19 = 252LL;
      goto LABEL_21;
    }
LABEL_9:
    v4 = *((_DWORD *)a2 + 2);
    if ( ++v5 >= v4 )
      return 0LL;
  }
  v14 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)a2, v5);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a4, v14) )
    goto LABEL_9;
  v19 = 257LL;
LABEL_21:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v20);
  return 2147942414LL;
}
