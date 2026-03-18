/*
 * XREFs of ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01C3AE8
 * Callers:
 *     DxgkDDisplayEnum @ 0x1C01C4CA0 (DxgkDDisplayEnum.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall DxgkDDisplayEnumCore(struct _D3DKMT_DDISPLAY_ENUM *a1)
{
  struct DXGGLOBAL *Global; // rax
  __int128 v3; // [rsp+20h] [rbp-40h]
  __int128 v4; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v5; // [rsp+50h] [rbp-10h]
  struct _D3DKMT_DDISPLAY_ENUM *v6; // [rsp+70h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+18h] BYREF
  int v8; // [rsp+80h] [rbp+20h] BYREF

  v6 = a1;
  v8 = 0;
  v7 = 0;
  *(_QWORD *)&v3 = &v8;
  *((_QWORD *)&v3 + 1) = &v6;
  v5 = &v7;
  v4 = v3;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))lambda_1ff3a3f8ec7154ebd3969214561ed056_::_lambda_invoker_cdecl_,
    (__int64)&v4,
    1);
  *(_DWORD *)v6 = v8;
  *((_DWORD *)v6 + 4) = v7;
  if ( *((_DWORD *)v6 + 1) < *(_DWORD *)v6 || *((_DWORD *)v6 + 5) < v7 )
    return 3221225507LL;
  else
    return 0LL;
}
