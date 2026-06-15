/*
 * XREFs of ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000B168
 * Callers:
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180008060 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180008240 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180009E10 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z.c)
 *     ?Add@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAA_KAEBVCDuckingNotification@@@Z @ 0x18000A4A0 (-Add@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEA.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000EDF8 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001B3AC (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18001E5B8 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18000B158 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1800275FE (memset.c)
 *     memcpy_0 @ 0x180027AB7 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        _QWORD *a1,
        const void **a2)
{
  const void *v2; // rsi
  volatile signed __int32 *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, __int64); // rax
  _DWORD *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  void *v10; // rcx
  size_t v11; // r8

  v2 = *a2;
  v4 = (volatile signed __int32 *)((char *)*a2 - 24);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 32LL))(*(_QWORD *)v4);
  if ( *((int *)v4 + 4) >= 0 && v5 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v4 )
  {
    _InterlockedIncrement(v4 + 4);
  }
  else
  {
    v6 = v4 + 2;
    v7 = (**v5)(v5, *((unsigned int *)v4 + 2), 2LL);
    v4 = (volatile signed __int32 *)v7;
    if ( !v7 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    v10 = (void *)(v7 + 24);
    *(_DWORD *)(v7 + 8) = *v6;
    v11 = 2LL * (*v6 + 1);
    if ( v11 )
    {
      if ( v7 != -24 )
      {
        if ( v2 )
        {
          memcpy_0(v10, v2, v11);
          goto LABEL_11;
        }
        memset(v10, 0, v11);
      }
      *(_DWORD *)_o__errno(v10, v8, v11, v9) = 22;
      invalid_parameter_noinfo();
    }
  }
LABEL_11:
  *a1 = v4 + 6;
  return a1;
}
