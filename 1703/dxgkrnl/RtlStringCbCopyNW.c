/*
 * XREFs of RtlStringCbCopyNW @ 0x1C0001E90
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00CF480 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C01734F8 (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // r10
  __int64 v6; // r9
  NTSTATUS v7; // r8d
  signed __int64 v8; // r11
  wchar_t v9; // ax

  v4 = cbToCopy >> 1;
  if ( cbToCopy >> 1 > 0x7FFFFFFE )
  {
    v7 = -1073741811;
  }
  else
  {
    v6 = 260LL;
    v7 = 0;
    v8 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v6 + v4 - 260) )
        break;
      v9 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v8);
      if ( !v9 )
        break;
      *pszDest++ = v9;
      --v6;
    }
    while ( v6 );
    if ( !v6 )
    {
      --pszDest;
      v7 = -2147483643;
    }
  }
  *pszDest = 0;
  return v7;
}
