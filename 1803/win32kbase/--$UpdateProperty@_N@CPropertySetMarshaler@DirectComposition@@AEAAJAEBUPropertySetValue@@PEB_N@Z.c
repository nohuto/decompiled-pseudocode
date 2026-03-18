/*
 * XREFs of ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C0078AFC
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0008610 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(
        __int64 a1,
        unsigned int *a2,
        _BYTE *a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v6; // rcx
  __int64 v7; // rdx

  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 64)
    && (v6 = *(_QWORD *)(a1 + 56), a2[1] == (*(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF))
    && a2[2] == *(_DWORD *)(v6 + 8LL * (unsigned int)v3) )
  {
    *(_BYTE *)((*(_DWORD *)(v6 + 8 * v3 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 72)) = *a3;
    v7 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v7 + 8LL * (unsigned int)v3 + 4) & 0xE0000000) != 0x20000000 )
      *(_DWORD *)(v7 + 8LL * (unsigned int)v3 + 4) = *(_DWORD *)(v7 + 8LL * (unsigned int)v3 + 4) & 0x1FFFFFFF | 0x40000000;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
