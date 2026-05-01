/*
 * XREFs of ?ConvertFileUriToFilePath@TileUtils@@YAJPEBGPEAPEAG@Z @ 0x1801DF990
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileUtils::ConvertFileUriToFilePath(const WCHAR *this, void **a2, unsigned __int16 **a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // r9
  IUri *v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h]
  IUri *v11; // [rsp+50h] [rbp+18h] BYREF
  BSTR bstrString; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  v4 = CreateUri(this, 0x8020u, 0LL, &v11);
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(IUri *, BSTR *))v11->lpVtbl->GetPath)(v11, &bstrString);
    if ( v4 >= 0 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( bstrString[v7] );
      v4 = _AllocStringWorker<CTCoAllocPolicy>(v6, v5, bstrString, v7, v10, a2);
      SysFreeString(bstrString);
    }
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(IUri *))v8->lpVtbl->Release)(v8);
  }
  return (unsigned int)v4;
}
