/*
 * XREFs of ?DxgkCddSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009EEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 */

__int64 __fastcall DxgkCddSetPointerPosition(void *const a1, const struct _DXGKARG_SETPOINTERPOSITION *a2, int a3)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  if ( Global && *((_BYTE *)Global + 1128) )
    return 3221225659LL;
  else
    return DxgkSetPointerPosition(a1, a2, a3, 0);
}
