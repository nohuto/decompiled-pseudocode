/*
 * XREFs of ??$GetAsUInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18003C894
 * Callers:
 *     ??$GetAsUInt32WithDefault@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@KPEAK@Z @ 0x18003C938 (--$GetAsUInt32WithDefault@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(
        _QWORD *a1,
        __int128 *a2,
        ULONG *a3)
{
  HRESULT v4; // ebx
  __int16 v5; // ax
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+40h] [rbp-38h]
  PROPVARIANT propvarIn[4]; // [rsp+50h] [rbp-28h] BYREF

  *a3 = 0;
  LOWORD(propvarIn[0]) = 0;
  v7 = *a2;
  v8 = *((_DWORD *)a2 + 4);
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*a1 + 40LL))(*a1, &v7, propvarIn);
  v5 = (__int16)propvarIn[0];
  if ( v4 >= 0 )
  {
    if ( !LOWORD(propvarIn[0]) )
      v4 = -2147023728;
    if ( v4 >= 0 )
    {
      *a3 = 0;
      if ( v5 )
        v4 = PropVariantToUInt32(propvarIn, a3);
      else
        v4 = -2147023728;
    }
  }
  PropVariantClear(propvarIn);
  return (unsigned int)v4;
}
