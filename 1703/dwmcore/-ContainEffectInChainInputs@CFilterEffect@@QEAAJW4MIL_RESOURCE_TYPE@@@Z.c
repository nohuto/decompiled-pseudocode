/*
 * XREFs of ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800035B4
 * Callers:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x180002170 (-Create@CFilterEffectLayer@@SAJPEAVIRenderTarget@@AEBU_GUID@@AEBUMilPointAndSizeL@@PEAVCFilterEf.c)
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800035B4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x1800035B4 (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::ContainEffectInChainInputs(__int64 a1, unsigned int a2)
{
  unsigned int v3; // eax
  int v4; // ebx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v3;
  if ( (v3 & 6) == 2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1) )
    {
      v4 = 0;
    }
    else
    {
      v4 = -2147467259;
      if ( *(int *)(a1 + 168) > 0 )
      {
        v6 = 0LL;
        v10 = *(int *)(a1 + 168);
        do
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8 * v6);
          v8 = *(_QWORD *)(v7 + 24);
          if ( v8 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, 8LL) )
            {
              v9 = *(_QWORD *)(v7 + 24);
              if ( v9 )
              {
                v4 = CFilterEffect::ContainEffectInChainInputs(v9, a2);
                if ( v4 >= 0 )
                  break;
              }
            }
          }
          ++v6;
        }
        while ( v6 < v10 );
      }
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x293u);
  }
  result = (unsigned int)v4;
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return result;
}
