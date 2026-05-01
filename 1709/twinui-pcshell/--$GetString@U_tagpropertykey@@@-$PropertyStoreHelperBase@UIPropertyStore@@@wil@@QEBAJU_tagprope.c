/*
 * XREFs of ??$GetString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1801CCC88
 * Callers:
 *     ?GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z @ 0x1801CAB84 (-GetIconData@ImmersiveIcons@@YAJPEBGUIconLoadingInputs2@1@PEAUIconData2@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::PropertyStoreHelperBase<IPropertyStore>::GetString<_tagpropertykey>(
        __int64 *a1,
        __int128 *a2,
        _QWORD *a3)
{
  int v3; // eax
  __int128 v4; // xmm0
  __int64 v6; // rcx
  int v7; // ebx
  __int16 v8; // ax
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]

  v3 = *((_DWORD *)a2 + 4);
  v4 = *a2;
  *a3 = 0LL;
  v6 = *a1;
  v11 = v3;
  LOWORD(pvar) = 0;
  v10 = v4;
  v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v6 + 40LL))(v6, &v10, &pvar);
  v8 = (__int16)pvar;
  if ( v7 >= 0 )
  {
    if ( !(_WORD)pvar )
      v7 = -2147023728;
    if ( v7 >= 0 )
    {
      *a3 = 0LL;
      if ( v8 == 31 && v13 )
      {
        *a3 = v13;
        pvar = 0LL;
        v13 = 0LL;
        v14 = 0LL;
      }
      else
      {
        v7 = -2147352571;
      }
    }
  }
  PropVariantClear(&pvar);
  return (unsigned int)v7;
}
