/*
 * XREFs of ??$AddProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1C0078644
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0008610 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1C005DDE0 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKe.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2D_MATRIX_3X2_F>(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 56;
  v5 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
              a1 + 56,
              a2[2],
              a3,
              &v8) >= 0 )
  {
    if ( v8 == *a2 && (v6 = *(_DWORD *)(*(_QWORD *)v3 + 8LL * v8 + 4) & 0x1FFFFFFF, v6 == a2[1]) )
    {
      *(_DWORD *)(*(_QWORD *)v3 + 8LL * v8 + 4) = v6 | 0x20000000;
    }
    else
    {
      --*(_DWORD *)(v3 + 8);
      v5 = -1073741811;
      *(_DWORD *)(v3 + 24) -= 24;
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v5;
}
