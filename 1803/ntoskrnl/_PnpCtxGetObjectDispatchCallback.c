/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x140507D20
 * Callers:
 *     _PnpGetMappedPropertyDispatch @ 0x140507C44 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x1405090C4 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x14050C60C (_PnpGetObjectListDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x14051C224 (_PnpValidateObjectNameDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x1405D233C (_PnpSetMappedPropertyDispatch.c)
 *     _PnpCreateObjectDispatch @ 0x1407EABA8 (_PnpCreateObjectDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x1407EADD8 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x1407EAEAC (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x1407EAF7C (_PnpGetMappedPropertyLocalesDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpCtxGetObjectDispatchCallback(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d

  v3 = 0;
  if ( (unsigned int)(a2 - 1) > 0xA )
    return (unsigned int)-1073741811;
  else
    *a3 = *(_QWORD *)(a1 + 8LL * a2 + 296);
  return v3;
}
