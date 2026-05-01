/*
 * XREFs of ?GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180024A44
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180024B70 (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800029D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        unsigned __int16 **a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned __int16 *v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  void *v10; // rax
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 9);
  pv = 0LL;
  v13 = -1LL;
  v14 = -1LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v3 + 128LL))(v3, 983227LL, &pv);
  v6 = (unsigned __int16 *)pv;
  if ( v5 >= 0 && pv && *(_WORD *)pv )
    goto LABEL_10;
  v7 = *((_QWORD *)this + 9);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v13 = -1LL;
  v14 = -1LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v7 + 128LL))(v7, 6553604LL, &pv);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v6 = (unsigned __int16 *)pv;
    if ( !pv || !*(_WORD *)pv )
    {
      v9 = -2147023728;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x222,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)0x80070490LL);
      goto LABEL_12;
    }
LABEL_10:
    v10 = 0LL;
    v14 = 0LL;
    pv = 0LL;
    v9 = 0;
    v13 = 0LL;
    *a2 = v6;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x221,
    (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v8);
LABEL_12:
  v10 = pv;
LABEL_13:
  if ( v10 )
    CoTaskMemFree(v10);
  return v9;
}
