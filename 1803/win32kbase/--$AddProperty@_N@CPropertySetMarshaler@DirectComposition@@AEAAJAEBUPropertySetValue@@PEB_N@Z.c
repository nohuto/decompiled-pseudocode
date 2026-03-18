/*
 * XREFs of ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C00786C0
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0008610 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ?Add@?$CDynamicArray@UPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@$0HHHAHDFF@@@QEAAJAEBUPropertyInfo@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@@Z @ 0x1C005DFE4 (-Add@-$CDynamicArray@UPropertyInfo@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 *     ?Grow@?$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0060A8C (-Grow@-$CDynamicArray@E$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<bool>(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r14
  unsigned int v6; // r13d
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1 + 56;
  v4 = 0;
  v5 = *(unsigned int *)(a1 + 80);
  v6 = *(_DWORD *)(a1 + 64);
  if ( (v5 & 0xE0000000) != 0 )
    return (unsigned int)-1073741684;
  LODWORD(v11) = a2[2];
  HIDWORD(v11) = v5 & 0x1FFFFFFF;
  if ( (int)CDynamicArray<PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::PropertyInfo,2003858261>::Add(
              a1 + 56,
              &v11) < 0
    || (int)CDynamicArray<unsigned char,2003858261>::Grow(v3 + 16, 1u) < 0 )
  {
    return (unsigned int)-1073741684;
  }
  else
  {
    ++*(_DWORD *)(v3 + 24);
    *(_BYTE *)(v5 + *(_QWORD *)(v3 + 16)) = *a3;
    if ( v6 == *a2 && (v9 = *(_DWORD *)(*(_QWORD *)v3 + 8LL * v6 + 4) & 0x1FFFFFFF, v9 == a2[1]) )
    {
      *(_DWORD *)(*(_QWORD *)v3 + 8LL * v6 + 4) = v9 | 0x20000000;
    }
    else
    {
      --*(_DWORD *)(v3 + 8);
      v4 = -1073741811;
      --*(_DWORD *)(v3 + 24);
    }
  }
  return v4;
}
