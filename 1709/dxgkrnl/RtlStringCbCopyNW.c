/*
 * XREFs of RtlStringCbCopyNW @ 0x1C00012D8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z @ 0x1C0176EEC (-CopyDListFileName@ADAPTER_RENDER@@QEBAJPEAGI@Z.c)
 *     _lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator() @ 0x1C01C2DFC (_lambda_36c2ba6a7cba07a048b6de3ef88fdf59_--operator().c)
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
