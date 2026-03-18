/*
 * XREFs of ?Thunk_SetScalarValue_12@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016CBA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IDataSourceProxy_Receive<BamoImpl::BamoDataSourceProxyImpl>::Thunk_SetScalarValue_12(
        BamoImpl::BamoDataSourceProxyImpl *a1,
        __int64 a2)
{
  return BamoImpl::BamoDataSourceProxyImpl::SetScalarValue(a1, **(_DWORD **)a2, **(float **)(a2 + 8));
}
