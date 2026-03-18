/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x140487C18
 * Callers:
 *     _PnpOpenObjectRegKeyDispatch @ 0x140487B34 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x1404BE25C (_PnpValidateObjectNameDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x1404DB530 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x1404E8694 (_PnpGetObjectListDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x14073D640 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x14073D874 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x14073D948 (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x14073DA18 (_PnpGetMappedPropertyLocalesDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 9 )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 136);
  return v3;
}
