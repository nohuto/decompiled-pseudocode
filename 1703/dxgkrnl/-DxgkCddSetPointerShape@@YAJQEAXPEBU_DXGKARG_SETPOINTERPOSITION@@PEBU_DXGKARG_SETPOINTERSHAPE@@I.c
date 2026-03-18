/*
 * XREFs of ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FB930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FA358 (-DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@.c)
 */

__int64 __fastcall DxgkCddSetPointerShape(
        struct DXGADAPTER *a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // ebx
  struct DXGGLOBAL *Global; // rax

  v6 = a4;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2, (__int64)a3, a4);
  if ( Global && *((_BYTE *)Global + 1048) )
    return 3221225659LL;
  else
    return DxgkSetPointerShape(a1, a2, a3, v6, a5, a6);
}
