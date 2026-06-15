/*
 * XREFs of ?IsConnectedToLazyStreamGroupsOnly@CSaDeviceProxy@@UEAA_NXZ @ 0x1800A66D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CSaDeviceProxy::IsConnectedToLazyStreamGroupsOnly(CSaDeviceProxy *this)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = *((_DWORD *)this + 23);
  result = 0LL;
  if ( v1 )
    return v1 == *((_DWORD *)this + 20);
  return result;
}
