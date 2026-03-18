/*
 * XREFs of ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18018DAD8
 * Callers:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180175B7C (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18018DAD8 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18018DAD8 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  int v2; // eax
  int v4; // ebx
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6;
  if ( (((unsigned __int8)v2 ^ ((unsigned __int8)v2 ^ (unsigned __int8)(v2 + 2)) & 6) & 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1) )
    {
      v4 = 0;
    }
    else
    {
      v4 = -2147467259;
      if ( *(int *)(a1 + 152) > 0 )
      {
        v5 = *(int *)(a1 + 152);
        v6 = 0LL;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v6);
          v7 = *(_QWORD *)(v10 + 24);
          if ( v7 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 55LL) )
            {
              v8 = *(_QWORD *)(v10 + 24);
              if ( v8 )
              {
                v4 = CFilterEffect::ContainEffectInChainInputs(v8, a2);
                if ( v4 >= 0 )
                  break;
              }
            }
          }
          ++v6;
        }
        while ( v6 < v5 );
      }
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x27Eu);
  }
  result = (unsigned int)v4;
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return result;
}
