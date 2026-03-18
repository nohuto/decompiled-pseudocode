/*
 * XREFs of _PnpCtxGetObjectDispatchCallback @ 0x140524254
 * Callers:
 *     _PnpCreateObjectDispatch @ 0x140451104 (_PnpCreateObjectDispatch.c)
 *     _PnpValidateObjectNameDispatch @ 0x14045A254 (_PnpValidateObjectNameDispatch.c)
 *     _PnpGetMappedPropertyDispatch @ 0x140524178 (_PnpGetMappedPropertyDispatch.c)
 *     _PnpOpenObjectRegKeyDispatch @ 0x140526414 (_PnpOpenObjectRegKeyDispatch.c)
 *     _PnpSetMappedPropertyDispatch @ 0x14052FE78 (_PnpSetMappedPropertyDispatch.c)
 *     _PnpGetObjectListDispatch @ 0x140530F38 (_PnpGetObjectListDispatch.c)
 *     _PnpDeleteObjectDispatch @ 0x140781D28 (_PnpDeleteObjectDispatch.c)
 *     _PnpGetMappedPropertyKeysDispatch @ 0x140781DFC (_PnpGetMappedPropertyKeysDispatch.c)
 *     _PnpGetMappedPropertyLocalesDispatch @ 0x140781ECC (_PnpGetMappedPropertyLocalesDispatch.c)
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
