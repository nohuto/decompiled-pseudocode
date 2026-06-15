/*
 * XREFs of ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x180046088
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800461C8 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(__int64 a1, int a2)
{
  int v3; // r8d
  __int64 v4; // r8
  char *v5; // rcx
  const void *v6; // rdx
  unsigned __int64 v7; // r9

  if ( a2 >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( a2 < v3 )
    {
      if ( a2 == v3 - 1 )
        goto LABEL_9;
      v4 = (unsigned int)(v3 - a2);
      v5 = (char *)(*(_QWORD *)a1 + 16LL * a2);
      v6 = v5 + 16;
      v7 = 16LL * ((int)v4 - 1);
      if ( !v7 )
        goto LABEL_9;
      if ( !v5 || v5 == (char *)-16LL )
      {
        *(_DWORD *)_o__errno(v5, v6, v4, v7) = 22;
      }
      else
      {
        if ( 16LL * (int)v4 >= v7 )
        {
          memmove(v5, v6, 16LL * ((int)v4 - 1));
LABEL_9:
          --*(_DWORD *)(a1 + 8);
          return 1LL;
        }
        *(_DWORD *)_o__errno(v5, v6, v4, v7) = 34;
      }
      invalid_parameter_noinfo();
      ATL::AtlThrowImpl(-2147024809);
    }
  }
  return 0LL;
}
